// Trash2.html과 연동
<script>
    // D-Day 날짜 설정 (예: 2022년 1월 1일)
    const setDate = new Date("2022-01-01T00:00:00+0900");

    // 오늘 날짜 가져오기
    const todayDate = new Date();

    // D-Day까지 남은 시간 계산
    const timeLeft = setDate - todayDate;
    const daysLeft = Math.floor(timeLeft / (1000 * 60 * 60 * 24));

    // 요소에 값 넣기
    document.getElementById("dDay").textContent = setDate.toLocaleDateString();
    document.getElementById("today").textContent = todayDate.toLocaleDateString();
    document.getElementById("countdown").textContent = `${daysLeft}일 남음`;
</script>
