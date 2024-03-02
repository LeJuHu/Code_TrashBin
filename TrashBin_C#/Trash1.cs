//유니티시절 만든 간단한 2D플랫폼 총알발사 스크립트
using UnityEngine;

public class GunController : MonoBehaviour
{
    public Transform gunBarrel; // 총구 위치
    public GameObject bulletPrefab; // 총알 프리팹
    public float bulletSpeed = 10f; // 총알 속도

    // 총을 발사하는 메서드
    public void FireGun()
    {
        // 총알 생성
        GameObject bullet = Instantiate(bulletPrefab, gunBarrel.position, gunBarrel.rotation);
        Rigidbody2D bulletRb = bullet.GetComponent<Rigidbody2D>();

        // 총알을 정면 방향으로 발사
        bulletRb.velocity = gunBarrel.up * bulletSpeed;
    }
}
