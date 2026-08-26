package dw.editora.repository;

import dw.editora.model.*;
import org.springframework.data.jpa.repository.JpaRepository;
import java.util.List;

public interface ArtigoRepository extends JpaRepository<Artigo, Long>{

    List<Artigo> findByTituloContainingIgnoreCase(String titulo);
    List<Artigo> findByPublicado(boolean publicado);
}