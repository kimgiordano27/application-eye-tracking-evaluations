/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 0901d5e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0901d7e8) */

long OVREyeGaze__PrepareHeadDirection(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  float fVar13;
  undefined8 unaff_d8;
  undefined4 unaff_s9;
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
  undefined4 in_stack_00000080;
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
  undefined8 in_stack_000000f8;
  
                    /* try { // try from 0901d5e4 to 0911d5f3 has its CatchHandler @ 0901d5f4 */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04980b34();
  }
                    /* catch() { ... } // from try @ 0901d564 with catch @ 0901d5f4
                       catch() { ... } // from try @ 0901d5e4 with catch @ 0901d5f4 */
  lVar9 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
                    /* try { // try from 0901d5f8 to 0911d5fb has its CatchHandler @ 0901d604 */
                    /* try { // try from 0901d5fc to 0911d607 has its CatchHandler @ 0901d394 */
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 0901d5f8 with catch @ 0901d604 */
    lVar9 = FUN_04980b34();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_04980b34();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_04980b34();
  }
  puVar7 = PTR_DAT_0ac76c18;
  puVar6 = PTR_DAT_0ac76c10;
  puVar5 = PTR_DAT_0ac76bf8;
  puVar4 = PTR_DAT_0ac76bf0;
  puVar3 = PTR_DAT_0ac76be8;
  puVar2 = PTR_DAT_0ac76be0;
  puVar1 = PTR_DAT_0ac09788;
  if ((long *)**(long **)(lVar9 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
                    /* try { // try from 0901d670 to 0911d72f has its CatchHandler @ 0901d670
                       catch() { ... } // from try @ 0901d670 with catch @ 0901d670
                       catch() { ... } // from try @ 0901d814 with catch @ 0901d670
                       catch() { ... } // from try @ 0901d868 with catch @ 0901d670
                       catch() { ... } // from try @ 0901d8bc with catch @ 0901d670
                       catch() { ... } // from try @ 0901d948 with catch @ 0901d670 */
  (**(code **)(*(long *)**(long **)(lVar9 + 0xb8) + 0x198))(&stack0x000000d0);
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
  fVar13 = 3.4028235e+38;
  lVar9 = 0;
LAB_0901d6dc:
  do {
    do {
      uVar10 = FUN_060b9fb0(&stack0x00000090,*(undefined8 *)puVar3);
      lVar11 = in_stack_00000040;
      if ((uVar10 & 1) == 0) {
        FUN_060ba26c(&stack0x00000090,*(undefined8 *)puVar2);
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04948184(lVar11);
        }
                    /* try { // try from 0901d7f4 to 0911d7fb has its CatchHandler @ 0901d888 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
                    /* try { // try from 0901d804 to 0911d813 has its CatchHandler @ 0901d880 */
        uVar10 = FUN_0a17b398(lVar9,0,0);
        if ((uVar10 & 1) == 0) {
                    /* try { // try from 0901d814 to 0911d85b has its CatchHandler @ 0901d670 */
          fVar13 = *(float *)(unaff_x19 + 0x25);
        }
        uVar12 = *(undefined8 *)puVar7;
        *(float *)(unaff_x19 + 0x35) =
             *(float *)(unaff_x19 + 0x30) + fVar13 * *(float *)((long)unaff_x19 + 0x19c);
        unaff_x19[0x34] =
             CONCAT44((float)((ulong)unaff_x19[0x2f] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x194) >> 0x20) * fVar13,
                      (float)unaff_x19[0x2f] +
                      (float)*(undefined8 *)((long)unaff_x19 + 0x194) * fVar13);
        lVar11 = thunk_FUN_04983f60(uVar12);
        FUN_08dbf2f0(lVar11,0);
                    /* try { // try from 0901d85c to 0911d85f has its CatchHandler @ 0901d884 */
                    /* try { // try from 0901d860 to 0911d863 has its CatchHandler @ 0901d87c */
        *(long *)(lVar11 + 0x10) = lVar9;
                    /* try { // try from 0901d864 to 0911d867 has its CatchHandler @ 0901d88c */
        thunk_FUN_049ee3d8((long *)(lVar11 + 0x10),lVar9);
                    /* catch() { ... } // from try @ 0901d730 with catch @ 0901d868
                       try { // try from 0901d868 to 0911d8a3 has its CatchHandler @ 0901d670 */
                    /* catch() { ... } // from try @ 0901d798 with catch @ 0901d86c */
                    /* catch() { ... } // from try @ 0901d7b0 with catch @ 0901d870 */
        *(undefined8 *)(lVar11 + 0x18) = unaff_d8;
                    /* catch() { ... } // from try @ 0901d77c with catch @ 0901d874 */
        *(undefined4 *)(lVar11 + 0x20) = unaff_s9;
                    /* catch() { ... } // from try @ 0901d764 with catch @ 0901d878 */
        unaff_x19[0x26] = lVar11;
                    /* catch() { ... } // from try @ 0901d860 with catch @ 0901d87c */
        thunk_FUN_049ee3d8(unaff_x19 + 0x26,lVar11);
                    /* catch() { ... } // from try @ 0901d804 with catch @ 0901d880 */
                    /* catch() { ... } // from try @ 0901d85c with catch @ 0901d884 */
                    /* catch() { ... } // from try @ 0901d7f4 with catch @ 0901d888 */
                    /* catch() { ... } // from try @ 0901d748 with catch @ 0901d88c
                       catch() { ... } // from try @ 0901d864 with catch @ 0901d88c */
        return lVar9;
      }
      lVar11 = FUN_060b9e58(&stack0x00000090,*(undefined8 *)puVar4);
      in_stack_000000f8._4_4_ = (undefined4)unaff_x19[0x25];
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000028 = *(undefined8 *)((long)unaff_x19 + 0x1d4);
      in_stack_00000020 = *(undefined8 *)((long)unaff_x19 + 0x1cc);
      in_stack_00000030 = *(undefined8 *)((long)unaff_x19 + 0x1dc);
      uVar10 = FUN_0901cb64(lVar11,&stack0x00000020,&stack0x00000070,(long)&stack0x000000f8 + 4,0);
                    /* try { // try from 0901d730 to 0911d733 has its CatchHandler @ 0901d868 */
    } while ((uVar10 & 1) == 0);
                    /* try { // try from 0901d748 to 0911d753 has its CatchHandler @ 0901d88c */
    if (*(float *)((long)unaff_x19 + 300) <= ABS(in_stack_00000088 - fVar13)) goto LAB_0901d778;
                    /* try { // try from 0901d764 to 0911d76b has its CatchHandler @ 0901d878 */
    iVar8 = (**(code **)(*unaff_x19 + 0x548))();
  } while (iVar8 < 1);
  goto LAB_0901d780;
LAB_0901d778:
                    /* try { // try from 0901d77c to 0911d787 has its CatchHandler @ 0901d874 */
  if (in_stack_00000088 < fVar13) {
LAB_0901d780:
    fVar13 = in_stack_00000088;
    uStack00000000000000d8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000070;
    in_stack_000000e8 = in_stack_00000088;
    uStack00000000000000e0 = in_stack_00000080;
                    /* try { // try from 0901d798 to 0911d7a3 has its CatchHandler @ 0901d86c */
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06fcad04(&stack0x00000050,&stack0x000000d0,*(undefined8 *)puVar6);
                    /* try { // try from 0901d7b0 to 0911d7cf has its CatchHandler @ 0901d870 */
    unaff_x24[1] = in_stack_00000058;
    *unaff_x24 = in_stack_00000050;
    unaff_x24[3] = in_stack_00000068;
    unaff_x24[2] = in_stack_00000060;
    lVar9 = lVar11;
    unaff_d8 = in_stack_00000070;
    unaff_s9 = in_stack_00000078;
  }
  goto LAB_0901d6dc;
}


