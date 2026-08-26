package dw.editora.model;

import lombok.Getter;
import lombok.Setter;
import lombok.NoArgsConstructor;
import lombok.AllArgsConstructor;
import jakarta.persistence.*;


@Entity
@Table(name="artigo")
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
public class Artigo {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private long id;

    @Column(nullable = false, length = 80)
    private String titulo;

    @Column(nullable = false)
    private String resumo;

    @Column(columnDefinition = "BOOLEAN DEFAULT TRUE")
    private boolean publicado;
}