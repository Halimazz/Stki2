# Analisa Sentimen Piala Dunia U-20 menggunakan Metode Word2Vec

## Deskripsi Proyek

Proyek ini bertujuan untuk melakukan analisis sentimen terhadap Piala Dunia U-20  menggunakan metode Word2Vec. Data yang digunakan dalam analisis sentimen ini berasal dari Twitter yang telah di-crawl.

## Dataset

Dataset ini terdiri dari kumpulan tweet yang mencakup topik Piala Dunia U-20 . Tweet-tweet ini diambil dari Twitter menggunakan teknik crawling. Dataset mencakup berbagai pendapat dan komentar dari pengguna Twitter terkait acara tersebut.

## Permasalahan dan Tujuan Eksperimen

### Permasalahan
Analisis sentimen bertujuan untuk memahami bagaimana masyarakat merespons Piala Dunia U-20 Merdeka melalui media sosial, khususnya Twitter.

### Tujuan Eksperimen
- Menganalisis sentimen umum terhadap Piala Dunia U-20 Merdeka.
- Mengidentifikasi tren positif dan negatif dalam percakapan online terkait acara tersebut.

## Model dan Alur Tahapan Eksperimen

### Model
Metode yang digunakan dalam analisis sentimen adalah Word2Vec, sebuah teknik pemodelan bahasa yang dapat menggambarkan kata-kata dalam ruang vektor yang memiliki makna semantik.

### Alur Tahapan Eksperimen
1. **Crawling Data**: Data diambil dari Twitter menggunakan teknik crawling.
2. **Preprocessing Data**: Membersihkan dan mempersiapkan data untuk analisis, termasuk tokenisasi dan pembersihan teks.
3. **Word2Vec Model Training**: Melatih model Word2Vec untuk memahami makna kata-kata dalam konteks tweet.
4. **Analisis Sentimen**: Menggunakan model Word2Vec untuk melakukan analisis sentimen pada setiap tweet.

## Performa Model / Uji Performa Model

Performa model dievaluasi berdasarkan sejumlah metrik, termasuk akurasi sentimen positif dan negatif, serta visualisasi representasi vektor kata dalam model Word2Vec.

## Proses Deployment (Optional)

Proses deployment dapat dilakukan untuk mengintegrasikan model analisis sentimen ini ke dalam aplikasi atau platform tertentu, memungkinkan penggunaan secara lebih luas.

**Note**: Pastikan untuk mengganti bagian-bagian tertentu seperti deskripsi dataset, tahapan eksperimen, dan metrik evaluasi dengan informasi yang spesifik untuk proyek Anda.
