<?php 

include('./db.php');
if(isset( $_POST["nama"])){
    $nama = $_POST["nama"];
    $sql = "SELECT * FROM `user` WHERE nama = '$nama'";
    $data = mysqli_query($koneksi, $sql);
}



?>
<!DOCTYPE html>
<html lang="en">

    <head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Adith</title>
    </head>

    <body>
        <center>
            <h1>Aplikasi data nama dan makanan kesukaan</h1>
            <form action="index.php" method="post">
                <label for="nama">Nama</label>
                <input type="text" name="nama">
                <br>
                <?php 
                if(isset( $_POST["nama"])){
                    if(mysqli_num_rows($data) <= 0){
                        echo "data gaada :(";
                    }
                    while( $row = mysqli_fetch_assoc($data)){
                        echo $row["nama"] ."=>". $row["makanan_kesukaan"];
                        echo "<br>";
                    }
                }
            ?>
            </form>
            <p>Masukkan Adith, Spot, Agung, Jojo, dll</p>
        </center>
    </body>

</html>