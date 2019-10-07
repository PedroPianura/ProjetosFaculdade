using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cla : MonoBehaviour
{
    public int vida;
    public int mana;
    public int level;
    public int dano;

    public string HabilidadeEspecial()
    {
        return null;
    }
    public string Habilidade()
    {
        return null;
    }

    private void Start()
    {
        vida = 100;
    }

    public int GetVida()
    {
       return vida;
    }
    public int GetLevel()
    {
       return level;
    }
    public int GetMana()
    {
       return mana;
    }

    public void ReceberDano()
    {
        bool morto = true;

        int dano = 10;

        if (dano > 100 == morto)
        {
            print("Vish, morreu");
        }
        else
        {
            print("Ta vivo ainda");
        }
    } 

    public void SubirDeLevel(int level)
    {

    }
    public void SubirDeLevel(int level, string Habilidade)
    {

    }
    
}
