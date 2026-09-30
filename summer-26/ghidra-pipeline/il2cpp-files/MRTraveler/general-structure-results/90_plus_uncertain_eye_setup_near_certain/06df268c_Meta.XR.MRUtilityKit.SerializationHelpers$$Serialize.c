/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Serialize
ENTRY_POINT: 06df268c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers__Serialize(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
                    /* try { // try from 06df268c to 06ef268f has its CatchHandler @ 06df29e0 */
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x9d0));
                    /* try { // try from 06df269c to 06ef26cb has its CatchHandler @ 06df2978 */
  FUN_03c8f898(PTR_DAT_08e69590);
  FUN_03c8f898(PTR_DAT_08e91fb8);
  FUN_03c8f898(PTR_DAT_08e91fc0);
  FUN_03c8f898(PTR_DAT_08e91cf0);
  *(undefined1 *)(unaff_x20 + 0xe30) = 1;
  puVar2 = PTR_DAT_08e69550;
  in_stack_00000010 = 0;
  lVar9 = *(long *)(unaff_x19 + 8);
                    /* try { // try from 06df26e0 to 06ef26e3 has its CatchHandler @ 06df2968 */
  if (*unaff_x19 == 0) {
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 10);
                    /* try { // try from 06df2774 to 06ef278f has its CatchHandler @ 06df29c4 */
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
    goto LAB_06df2824;
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06df28f4 with catch @ 06df29b8 */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06df23b4 with catch @ 06df29bc */
    FUN_03c8fb30();
  }
                    /* try { // try from 06df26f4 to 06ef26fb has its CatchHandler @ 06df2948 */
  fVar14 = *(float *)(*(long *)(lVar9 + 0x10) + 0x28);
  if (DAT_094102d1 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094102d1 = '\x01';
  }
                    /* try { // try from 06df2720 to 06ef2727 has its CatchHandler @ 06df29dc */
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar3 = PTR_DAT_08e69590;
  fVar14 = fVar14 * 1000.0;
  dVar15 = (double)fVar14;
  dVar13 = modf(dVar15,(double *)&stack0x00000018);
  if (0.0 <= fVar14) {
    if (dVar13 == 0.5) {
      dVar13 = 1.0;
      goto LAB_06df279c;
    }
    dVar15 = (double)(long)(dVar15 + 0.5);
  }
  else if (dVar13 == -0.5) {
    dVar13 = -1.0;
LAB_06df279c:
    dVar15 = (double)CONCAT44(uStack000000000000001c,uStack0000000000000018);
                    /* try { // try from 06df27a4 to 06ef27ab has its CatchHandler @ 06df2964 */
    if (((long)dVar15 & 1U) != 0) {
      dVar15 = dVar15 + dVar13;
    }
  }
  else {
    dVar15 = (double)(long)(dVar15 + -0.5);
  }
  iVar1 = -0x80000000;
  if (dVar15 != INFINITY) {
    iVar1 = (int)dVar15;
  }
                    /* try { // try from 06df27ec to 06ef27ef has its CatchHandler @ 06df2b3c */
  if (iVar1 < 0x65) {
    iVar1 = 100;
  }
                    /* try { // try from 06df27f0 to 06ef27f7 has its CatchHandler @ 06df2b50 */
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 06df27f8 to 06ef27fb has its CatchHandler @ 06df2b34 */
                    /* try { // try from 06df27fc to 06ef27ff has its CatchHandler @ 06df2b30 */
                    /* try { // try from 06df2800 to 06ef2803 has its CatchHandler @ 06df2b24 */
  lVar4 = FUN_07181058(iVar1,0);
                    /* try { // try from 06df2804 to 06ef2807 has its CatchHandler @ 06df2b20 */
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06df28f0 with catch @ 06df29c0 */
    FUN_03c8fb30();
  }
                    /* try { // try from 06df2808 to 06ef280b has its CatchHandler @ 06df2b1c */
                    /* try { // try from 06df280c to 06ef280f has its CatchHandler @ 06df2b38 */
  in_stack_00000010 = FUN_071787d8(lVar4,0);
                    /* try { // try from 06df2810 to 06ef2813 has its CatchHandler @ 06df2b14 */
                    /* try { // try from 06df2814 to 06ef2817 has its CatchHandler @ 06df2b10 */
                    /* try { // try from 06df2818 to 06ef281b has its CatchHandler @ 06df2b2c */
                    /* try { // try from 06df281c to 06ef281f has its CatchHandler @ 06df2b04 */
  uVar5 = FUN_0701d1d0(&stack0x00000010,0);
                    /* try { // try from 06df2820 to 06ef2823 has its CatchHandler @ 06df2b28 */
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 06df28e0 to 06ef28e3 has its CatchHandler @ 06df29d0 */
    *unaff_x19 = 0;
                    /* try { // try from 06df28e4 to 06ef28e7 has its CatchHandler @ 06df29c8 */
                    /* try { // try from 06df28e8 to 06ef28ef has its CatchHandler @ 06df29f4 */
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000010;
                    /* try { // try from 06df28f0 to 06ef28f3 has its CatchHandler @ 06df29c0 */
                    /* try { // try from 06df28f4 to 06ef28f7 has its CatchHandler @ 06df29b8 */
    thunk_FUN_03d233cc(unaff_x19 + 10,0);
                    /* try { // try from 06df28f8 to 06ef28fb has its CatchHandler @ 06df29b4 */
                    /* try { // try from 06df28fc to 06ef28ff has its CatchHandler @ 06df29ac */
                    /* try { // try from 06df2900 to 06ef2903 has its CatchHandler @ 06df29a4 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 06df2904 to 06ef2907 has its CatchHandler @ 06df29a0 */
      thunk_FUN_03cd7500();
    }
                    /* try { // try from 06df2908 to 06ef290b has its CatchHandler @ 06df299c */
                    /* try { // try from 06df290c to 06ef290f has its CatchHandler @ 06df2998 */
                    /* try { // try from 06df2910 to 06ef2913 has its CatchHandler @ 06df2994 */
                    /* try { // try from 06df2914 to 06ef2917 has its CatchHandler @ 06df298c */
                    /* try { // try from 06df2918 to 06ef291b has its CatchHandler @ 06df2980 */
                    /* try { // try from 06df291c to 06ef291f has its CatchHandler @ 06df297c */
                    /* try { // try from 06df2920 to 06ef2923 has its CatchHandler @ 06df2960 */
    FUN_045277b8(unaff_x19 + 2,&stack0x00000010);
    return;
                    /* try { // try from 06df2924 to 06ef2927 has its CatchHandler @ 06df295c */
  }
LAB_06df2824:
                    /* try { // try from 06df2824 to 06ef2827 has its CatchHandler @ 06df2b00 */
                    /* try { // try from 06df2828 to 06ef282b has its CatchHandler @ 06df2afc */
                    /* try { // try from 06df282c to 06ef282f has its CatchHandler @ 06df2b38 */
  FUN_0701d29c(&stack0x00000010,0);
                    /* try { // try from 06df2830 to 06ef2833 has its CatchHandler @ 06df2af8 */
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06df28f8 with catch @ 06df29b4 */
    FUN_03c8fb30();
  }
                    /* try { // try from 06df2834 to 06ef2837 has its CatchHandler @ 06df2af4 */
                    /* try { // try from 06df2838 to 06ef283b has its CatchHandler @ 06df2b28 */
  uVar5 = FUN_06deb574(lVar9);
                    /* try { // try from 06df283c to 06ef283f has its CatchHandler @ 06df2b2c */
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 06df2840 to 06ef284b has its CatchHandler @ 06df2b4c */
    plVar10 = *(long **)(lVar9 + 0x60);
    uStack0000000000000018 = *(undefined4 *)(lVar9 + 0x2c);
                    /* try { // try from 06df284c to 06ef284f has its CatchHandler @ 06df2ae4 */
                    /* try { // try from 06df2850 to 06ef2853 has its CatchHandler @ 06df2ae0 */
                    /* try { // try from 06df2854 to 06ef2857 has its CatchHandler @ 06df2adc */
                    /* try { // try from 06df2858 to 06ef285b has its CatchHandler @ 06df2acc */
                    /* try { // try from 06df285c to 06ef285f has its CatchHandler @ 06df2ac8 */
    uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000018);
                    /* try { // try from 06df2860 to 06ef2863 has its CatchHandler @ 06df2ac0 */
                    /* try { // try from 06df2864 to 06ef2867 has its CatchHandler @ 06df2ab4 */
                    /* try { // try from 06df2868 to 06ef286b has its CatchHandler @ 06df2ab0 */
                    /* try { // try from 06df286c to 06ef286f has its CatchHandler @ 06df2aac */
                    /* try { // try from 06df2870 to 06ef2873 has its CatchHandler @ 06df2aa8 */
                    /* try { // try from 06df2874 to 06ef2877 has its CatchHandler @ 06df2aa4 */
    uVar6 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e91fb8,uVar6,0);
                    /* try { // try from 06df2878 to 06ef287b has its CatchHandler @ 06df2aa0 */
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06df2774 with catch @ 06df29c4 */
      FUN_03c8fb30();
    }
                    /* try { // try from 06df287c to 06ef287f has its CatchHandler @ 06df2a9c */
                    /* try { // try from 06df2880 to 06ef2883 has its CatchHandler @ 06df10c4 */
                    /* try { // try from 06df2884 to 06ef2887 has its CatchHandler @ 06df2a94 */
    lVar4 = *plVar10;
                    /* try { // try from 06df2888 to 06ef288b has its CatchHandler @ 06df2a88 */
                    /* try { // try from 06df288c to 06ef2893 has its CatchHandler @ 06df2abc */
                    /* try { // try from 06df2894 to 06ef2897 has its CatchHandler @ 06df2a7c */
                    /* try { // try from 06df2898 to 06ef289b has its CatchHandler @ 06df2a78 */
                    /* try { // try from 06df289c to 06ef289f has its CatchHandler @ 06df2a74 */
    uVar11 = *(undefined8 *)PTR_DAT_08e91fc0;
                    /* try { // try from 06df28a0 to 06ef28a3 has its CatchHandler @ 06df2a70 */
                    /* try { // try from 06df28a4 to 06ef28a7 has its CatchHandler @ 06df2a6c */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 06df28a8 to 06ef28ab has its CatchHandler @ 06df2a68 */
    uVar12 = *(undefined8 *)PTR_DAT_08e91cf0;
                    /* try { // try from 06df28ac to 06ef28af has its CatchHandler @ 06df2a90 */
    if (uVar5 != 0) {
                    /* try { // try from 06df28b0 to 06ef28b3 has its CatchHandler @ 06df2a64 */
                    /* try { // try from 06df28b4 to 06ef28b7 has its CatchHandler @ 06df2a60 */
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 06df28b8 to 06ef28bb has its CatchHandler @ 06df2a5c */
                    /* try { // try from 06df28bc to 06ef28bf has its CatchHandler @ 06df2a54 */
                    /* try { // try from 06df28c0 to 06ef28cb has its CatchHandler @ 06df2abc */
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e82378) {
                    /* try { // try from 06df2928 to 06ef292b has its CatchHandler @ 06df2958 */
                    /* try { // try from 06df292c to 06ef292f has its CatchHandler @ 06df296c */
                    /* try { // try from 06df2930 to 06ef2933 has its CatchHandler @ 06df2954 */
                    /* try { // try from 06df2934 to 06ef2937 has its CatchHandler @ 06df2978 */
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_06df2938;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
                    /* try { // try from 06df28cc to 06ef28cf has its CatchHandler @ 06df2a50 */
      } while (uVar5 != 0);
    }
                    /* try { // try from 06df28d0 to 06ef28d3 has its CatchHandler @ 06df2a4c */
                    /* try { // try from 06df28d4 to 06ef28d7 has its CatchHandler @ 06df2a90 */
                    /* try { // try from 06df28d8 to 06ef28db has its CatchHandler @ 06df29d8 */
    puVar7 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)PTR_DAT_08e82378,7);
                    /* try { // try from 06df28dc to 06ef28df has its CatchHandler @ 06df29d4 */
LAB_06df2938:
                    /* try { // try from 06df2938 to 06ef293b has its CatchHandler @ 06df294c */
                    /* try { // try from 06df293c to 06ef293f has its CatchHandler @ 06df2968 */
                    /* try { // try from 06df2940 to 06ef2947 has its CatchHandler @ 06df2964 */
                    /* catch() { ... } // from try @ 06df26f4 with catch @ 06df2948
                       try { // try from 06df2948 to 06ef2a0b has its CatchHandler @ 06df10c4 */
                    /* catch() { ... } // from try @ 06df2938 with catch @ 06df294c */
                    /* catch() { ... } // from try @ 06df1dbc with catch @ 06df2950 */
                    /* catch() { ... } // from try @ 06df2930 with catch @ 06df2954 */
                    /* catch() { ... } // from try @ 06df2928 with catch @ 06df2958 */
                    /* catch() { ... } // from try @ 06df2924 with catch @ 06df295c */
                    /* catch() { ... } // from try @ 06df2920 with catch @ 06df2960 */
                    /* catch() { ... } // from try @ 06df27a4 with catch @ 06df2964
                       catch() { ... } // from try @ 06df2940 with catch @ 06df2964 */
                    /* catch() { ... } // from try @ 06df26e0 with catch @ 06df2968
                       catch() { ... } // from try @ 06df293c with catch @ 06df2968 */
    (*(code *)*puVar7)(plVar10,uVar6,0,0,0,0,uVar11,uVar12);
                    /* catch() { ... } // from try @ 06df1da0 with catch @ 06df296c
                       catch() { ... } // from try @ 06df292c with catch @ 06df296c */
                    /* catch() { ... } // from try @ 06df1d64 with catch @ 06df2970 */
    FUN_06dec0cc(lVar9);
  }
                    /* catch() { ... } // from try @ 06df1c34 with catch @ 06df2974 */
                    /* catch() { ... } // from try @ 06df269c with catch @ 06df2978
                       catch() { ... } // from try @ 06df2934 with catch @ 06df2978 */
  *unaff_x19 = -2;
                    /* catch() { ... } // from try @ 06df291c with catch @ 06df297c */
                    /* catch() { ... } // from try @ 06df2918 with catch @ 06df2980 */
                    /* catch() { ... } // from try @ 06df1cb4 with catch @ 06df2984 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 06df1ccc with catch @ 06df2988 */
    thunk_FUN_03cd7500();
  }
                    /* catch() { ... } // from try @ 06df2914 with catch @ 06df298c */
                    /* catch() { ... } // from try @ 06df1cf4 with catch @ 06df2990 */
                    /* catch() { ... } // from try @ 06df2910 with catch @ 06df2994 */
  FUN_0701e078(unaff_x19 + 2,0);
                    /* catch() { ... } // from try @ 06df290c with catch @ 06df2998 */
                    /* catch() { ... } // from try @ 06df2908 with catch @ 06df299c */
                    /* catch() { ... } // from try @ 06df2904 with catch @ 06df29a0 */
                    /* catch() { ... } // from try @ 06df2900 with catch @ 06df29a4 */
                    /* catch() { ... } // from try @ 06df2444 with catch @ 06df29a8 */
                    /* catch() { ... } // from try @ 06df28fc with catch @ 06df29ac */
                    /* catch() { ... } // from try @ 06df23fc with catch @ 06df29b0 */
  return;
}


