/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 0901d4f8
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0901d7e8) */

long OVREyeGaze__get_EyeTrackingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long unaff_x20;
  long lVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  float in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  float in_stack_000000e8;
  undefined4 uStack00000000000000fc;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac76bf0);
  FUN_04947ee4(PTR_DAT_0ac76bf8);
                    /* try { // try from 0901d514 to 0911d517 has its CatchHandler @ 0901d54c */
                    /* try { // try from 0901d518 to 0911d51b has its CatchHandler @ 0901d548 */
                    /* try { // try from 0901d51c to 0911d51f has its CatchHandler @ 0901d53c */
  FUN_04947ee4(PTR_DAT_0ac76c00);
                    /* try { // try from 0901d520 to 0911d523 has its CatchHandler @ 0901d538 */
                    /* try { // try from 0901d524 to 0911d527 has its CatchHandler @ 0901d544 */
                    /* catch() { ... } // from try @ 0901d468 with catch @ 0901d528
                       try { // try from 0901d528 to 0911d563 has its CatchHandler @ 0901d394 */
  FUN_04947ee4(PTR_DAT_0ac76c08);
                    /* catch() { ... } // from try @ 0901d480 with catch @ 0901d52c */
                    /* catch() { ... } // from try @ 0901d44c with catch @ 0901d530 */
                    /* catch() { ... } // from try @ 0901d43c with catch @ 0901d534 */
  FUN_04947ee4(PTR_DAT_0ac76c10);
                    /* catch() { ... } // from try @ 0901d520 with catch @ 0901d538 */
                    /* catch() { ... } // from try @ 0901d51c with catch @ 0901d53c */
                    /* catch() { ... } // from try @ 0901d4b8 with catch @ 0901d540 */
  FUN_04947ee4(PTR_DAT_0ac09788);
                    /* catch() { ... } // from try @ 0901d42c with catch @ 0901d544
                       catch() { ... } // from try @ 0901d524 with catch @ 0901d544 */
  FUN_04947ee4(PTR_DAT_0ac76c18);
  *(undefined1 *)(unaff_x20 + 0xd46) = 1;
  cVar8 = DAT_0b31f3e7;
  puVar1 = PTR_DAT_0ac76c08;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000088 = 0.0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  uStack00000000000000fc = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1b4) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1ac) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1c4) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1bc) = 0;
  if (cVar8 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e7 = '\x01';
  }
  puVar2 = PTR_DAT_0ac76c00;
  uVar15 = **(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  uVar16 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar13 = *(long *)puVar2;
  lVar10 = *(long *)(lVar13 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar10 = *(long *)(lVar13 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  puVar7 = PTR_DAT_0ac76c18;
  puVar6 = PTR_DAT_0ac76c10;
  puVar5 = PTR_DAT_0ac76bf8;
  puVar4 = PTR_DAT_0ac76bf0;
  puVar3 = PTR_DAT_0ac76be8;
  puVar2 = PTR_DAT_0ac76be0;
  puVar1 = PTR_DAT_0ac09788;
  if ((long *)**(long **)(lVar10 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*(long *)**(long **)(lVar10 + 0xb8) + 0x198))(&stack0x000000d0);
  in_stack_000000c0 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
  in_stack_000000b8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
  in_stack_000000b0 = in_stack_000000d0;
  FUN_06680488(&stack0x00000050,&stack0x000000b0,*(undefined8 *)puVar5);
  in_stack_00000048 = &stack0x00000090;
  in_stack_00000040 = 0;
  in_stack_00000098 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000068;
  in_stack_000000a0 = in_stack_00000060;
  fVar14 = 3.4028235e+38;
  lVar10 = 0;
LAB_0901d6dc:
  do {
    do {
      uVar11 = FUN_060b9fb0(&stack0x00000090,*(undefined8 *)puVar3);
      lVar13 = in_stack_00000040;
      if ((uVar11 & 1) == 0) {
        FUN_060ba26c(&stack0x00000090,*(undefined8 *)puVar2);
        if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04948184(lVar13);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar11 = FUN_0a17b398(lVar10,0,0);
        if ((uVar11 & 1) == 0) {
          fVar14 = *(float *)(unaff_x19 + 0x25);
        }
        uVar12 = *(undefined8 *)puVar7;
        *(float *)(unaff_x19 + 0x35) =
             *(float *)(unaff_x19 + 0x30) + fVar14 * *(float *)((long)unaff_x19 + 0x19c);
        unaff_x19[0x34] =
             CONCAT44((float)((ulong)unaff_x19[0x2f] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x194) >> 0x20) * fVar14,
                      (float)unaff_x19[0x2f] +
                      (float)*(undefined8 *)((long)unaff_x19 + 0x194) * fVar14);
        lVar13 = thunk_FUN_04983f60(uVar12);
        FUN_08dbf2f0(lVar13,0);
        *(long *)(lVar13 + 0x10) = lVar10;
        thunk_FUN_049ee3d8((long *)(lVar13 + 0x10),lVar10);
        *(undefined8 *)(lVar13 + 0x18) = uVar15;
        *(undefined4 *)(lVar13 + 0x20) = uVar16;
        unaff_x19[0x26] = lVar13;
        thunk_FUN_049ee3d8(unaff_x19 + 0x26,lVar13);
        return lVar10;
      }
      lVar13 = FUN_060b9e58(&stack0x00000090,*(undefined8 *)puVar4);
      uStack00000000000000fc = (undefined4)unaff_x19[0x25];
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000028 = *(undefined8 *)((long)unaff_x19 + 0x1d4);
      in_stack_00000020 = *(undefined8 *)((long)unaff_x19 + 0x1cc);
      in_stack_00000030 = *(undefined8 *)((long)unaff_x19 + 0x1dc);
      uVar11 = FUN_0901cb64(lVar13,&stack0x00000020,&stack0x00000070,&stack0x000000fc,0);
    } while ((uVar11 & 1) == 0);
    if (*(float *)((long)unaff_x19 + 300) <= ABS(in_stack_00000088 - fVar14)) goto LAB_0901d778;
    iVar9 = (**(code **)(*unaff_x19 + 0x548))();
  } while (iVar9 < 1);
  goto LAB_0901d780;
LAB_0901d778:
  if (in_stack_00000088 < fVar14) {
LAB_0901d780:
    fVar14 = in_stack_00000088;
    uStack00000000000000d8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000070;
    uStack00000000000000e4 = uStack0000000000000084;
    in_stack_000000e8 = in_stack_00000088;
    uStack00000000000000dc = uStack000000000000007c;
    uStack00000000000000e0 = in_stack_00000080;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06fcad04(&stack0x00000050,&stack0x000000d0,*(undefined8 *)puVar6);
    *(undefined8 *)((long)unaff_x19 + 0x1b4) = in_stack_00000058;
    *(undefined8 *)((long)unaff_x19 + 0x1ac) = in_stack_00000050;
    *(undefined8 *)((long)unaff_x19 + 0x1c4) = in_stack_00000068;
    *(undefined8 *)((long)unaff_x19 + 0x1bc) = in_stack_00000060;
    lVar10 = lVar13;
    uVar15 = in_stack_00000070;
    uVar16 = in_stack_00000078;
  }
  goto LAB_0901d6dc;
}


