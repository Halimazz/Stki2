import os
import pandas as pd
import streamlit as st
from tqdm.auto import tqdm
from nltk.tokenize import word_tokenize
from gensim.models import Word2Vec
from umap import UMAP
import numpy as np
import plotly.express as px

# Load data
df = pd.read_csv("data/gojek_review.csv")

# Tokenize reviews
kalimat = [word_tokenize(review.lower()) for review in tqdm(df.review)]

# Train Word2Vec model
model = Word2Vec(kalimat, vector_size=128, window=5, min_count=3, workers=4, epochs=1000, sg=0, hs=0)

# Save Word2Vec model
os.makedirs("model/w2v", exist_ok=True)
model.save("model/w2v/gojek_review.w2v")

# Load Word2Vec model
model = Word2Vec.load("model/w2v/gojek_review.w2v")

# Example data for model training
contoh_data = [
    ['aplikasinya', 'ok', 'kok', '.', 'sangat', 'membantu', 'untuk', 'keseharan', 'saya'],
    ['aplikasinya', 'ngga', 'nyaman', 'dipake', 'bule']
]
model.train(contoh_data, total_examples=len(contoh_data), epochs=1)
model.save("model/w2v/gojek_review.w2v")

# UMAP visualization
w2v = model.wv
X = UMAP().fit_transform(w2v.vectors)
df_umap = pd.DataFrame(X, columns=["umap1", "umap2"])
df_umap["text"] = w2v.index_to_key

# Streamlit app
st.title("Word2Vec Visualization with Streamlit")

# Scatter plot
fig = px.scatter(df_umap, x="umap1", y="umap2", text="text")
fig.update_traces(textposition='top center')
fig.update_layout(height=800, title_text='Reduced Word2Vec Visualization')
st.plotly_chart(fig)

