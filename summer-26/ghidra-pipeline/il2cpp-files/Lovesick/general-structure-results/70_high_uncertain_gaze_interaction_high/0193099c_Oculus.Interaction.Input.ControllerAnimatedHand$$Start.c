/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$Start
ENTRY_POINT: 0193099c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__Start
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *puVar13;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *puVar14;
  undefined8 *unaff_x25;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *unaff_x29;
  undefined4 uVar18;
  ulong uVar19;
  double dVar20;
  float unaff_s10;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double unaff_d15;
  undefined8 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  float fStack000000000000002c;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  double in_stack_000000c0;
  double in_stack_000000c8;
  undefined8 in_stack_000000d0;
  double in_stack_000000d8;
  
  uVar18 = FUN_026cf998(param_2,param_3,uStack0000000000000098,uStack000000000000009c,param_6,
                        *(undefined4 *)(param_1 + 0x140),0x3f800000,0);
  *(undefined4 *)(unaff_x19 + 0x9c) = uVar18;
  iVar4 = FUN_0267c710(0);
                    /* try { // try from 019309d0 to 01a309e7 has its CatchHandler @ 01930a50 */
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  FUN_0268834c((float)(iVar4 + -100),0,&stack0x00000080,0);
  dVar3 = DAT_028aab70;
  in_stack_000000d8 = unaff_d15 / DAT_028aab70;
  uVar5 = FUN_017562ec(&stack0x000000d8,*unaff_x25,0);
                    /* try { // try from 01930a04 to 01a30a1b has its CatchHandler @ 01930a44 */
  uVar5 = FUN_015f5b28(uVar5,*unaff_x24,0);
  FUN_026cbc44(in_stack_00000080 & 0xffffffff,in_stack_00000080._4_4_,in_stack_00000088 & 0xffffffff
               ,in_stack_00000088._4_4_,uVar5,0);
  FUN_026d0cbc(0);
  FUN_0267c710(0);
                    /* try { // try from 01930a30 to 01a30a33 has its CatchHandler @ 01930a40 */
                    /* try { // try from 01930a34 to 01a30a37 has its CatchHandler @ 01930a5c */
                    /* try { // try from 01930a38 to 01a30a3b has its CatchHandler @ 01930a3c */
  FUN_0267c738(0);
                    /* catch() { ... } // from try @ 01930a38 with catch @ 01930a3c
                       try { // try from 01930a3c to 01a30a77 has its CatchHandler @ 01930878 */
                    /* catch() { ... } // from try @ 01930a30 with catch @ 01930a40 */
                    /* catch() { ... } // from try @ 01930a04 with catch @ 01930a44 */
                    /* catch() { ... } // from try @ 01930928 with catch @ 01930a48 */
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_0268834c(0,&stack0x00000070,0);
  uVar18 = *(undefined4 *)(unaff_x19 + 0xa0);
  uVar23 = *(undefined4 *)(unaff_x19 + 0xa4);
  fStack000000000000002c = -2.1474836e+09;
  if (unaff_s10 != INFINITY) {
    fStack000000000000002c = (float)unaff_w23;
  }
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  FUN_0268834c(0,0,fStack000000000000002c,(float)(*(int *)(unaff_x19 + 0x94) + 0x1e),
               &stack0x00000060,0);
  uVar25 = (undefined4)(in_stack_00000070 >> 0x20);
  uStack0000000000000004 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  uStack000000000000000c = uStack000000000000006c;
  uVar18 = FUN_026d0d68(in_stack_00000070 & 0xffffffff,in_stack_00000070 >> 0x20,
                        in_stack_00000078 & 0xffffffff,in_stack_00000078._4_4_,uVar18,uVar23,0);
  *(undefined4 *)(unaff_x19 + 0xa0) = uVar18;
  *(undefined4 *)(unaff_x19 + 0xa4) = uVar25;
  FUN_026d3158(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x24),
               *(undefined4 *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x2c),0);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_0268834c(&stack0x00000050,0);
  FUN_026cbc44(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,in_stack_00000058 & 0xffffffff
               ,in_stack_00000058._4_4_,*(undefined8 *)StringLiteral_14412,0);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_0268834c(0,0,fStack000000000000002c,0x42200000,&stack0x00000040,0);
  uVar5 = FUN_026e77b8(*unaff_x21,0);
  FUN_026cc304(in_stack_00000040 & 0xffffffff,in_stack_00000040._4_4_,in_stack_00000048 & 0xffffffff
               ,in_stack_00000048._4_4_,*unaff_x29,uVar5,0);
  lVar16 = *(long *)(unaff_x19 + 0x78);
  *(undefined4 *)(unaff_x19 + 0x94) = 0x19;
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
    uVar17 = 0;
    uVar12 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
    puVar14 = (undefined8 *)(lVar16 + 0x38);
    plVar15 = (long *)Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
    uVar11 = 0;
    uVar9 = 0;
    do {
      if (uVar12 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(uint *)(puVar14 + -1);
      dVar21 = (double)puVar14[-3];
      dVar20 = (double)puVar14[-2];
      uVar5 = *puVar14;
      uVar2 = uVar1 >> 8 & 0xff;
      if (uVar11 == uVar1 >> 0x10) {
        if (uVar9 != uVar2) {
          iVar4 = *(int *)(unaff_x19 + 0x94) + 0x15;
          goto LAB_01930d18;
        }
      }
      else {
        uVar26 = *(undefined4 *)(unaff_x19 + 0x20);
        uVar25 = *(undefined4 *)(unaff_x19 + 0x24);
        uVar23 = *(undefined4 *)(unaff_x19 + 0x28);
        uVar18 = *(undefined4 *)(unaff_x19 + 0x2c);
        *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 0x15;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026d3158(uVar26,uVar25,uVar23,uVar18,0);
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        FUN_0268834c(0x40a00000,(float)(*(int *)(unaff_x19 + 0x94) + 5),0x43480000,0x41a00000,
                     &stack0x000000b0,0);
        in_stack_000000d0._4_4_ = (uVar1 >> 0x10) + 1;
        uVar8 = FUN_0178e9b8((long)&stack0x000000d0 + 4,0);
        uVar8 = FUN_015f5b28(*(undefined8 *)StringLiteral_6209,uVar8,0);
        FUN_026cbc44(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                     in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar8,0);
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        FUN_0268834c(0,(float)(*(int *)(unaff_x19 + 0x94) + 5),fStack000000000000002c,0x42200000,
                     &stack0x000000a0,0);
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_026e77b8(*unaff_x21,0);
        FUN_026cc304(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                     in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,
                     *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,uVar8,0);
        iVar4 = *(int *)(unaff_x19 + 0x94) + 0x1e;
LAB_01930d18:
        *(int *)(unaff_x19 + 0x94) = iVar4;
      }
      uVar11 = uVar1 & 0xff;
      if (uVar11 == 3) {
        lVar6 = *unaff_x22;
        uVar19 = *(ulong *)(unaff_x19 + 0x58);
        uVar12 = *(ulong *)(unaff_x19 + 0x50);
      }
      else if (uVar11 == 2) {
        lVar6 = *unaff_x22;
        uVar19 = *(ulong *)(unaff_x19 + 0x48);
        uVar12 = *(ulong *)(unaff_x19 + 0x40);
      }
      else if (uVar11 == 0) {
        lVar6 = *unaff_x22;
        uVar19 = *(ulong *)(unaff_x19 + 0x38);
        uVar12 = *(ulong *)(unaff_x19 + 0x30);
      }
      else {
        lVar6 = *unaff_x22;
        uVar19 = *(ulong *)(unaff_x19 + 0x68);
        uVar12 = *(ulong *)(unaff_x19 + 0x60);
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026d3158(uVar12,uVar12 >> 0x20,uVar19 & 0xffffffff,uVar19 >> 0x20,0);
      dVar22 = *(double *)(unaff_x19 + 0x80);
      iVar4 = FUN_0267c710(0);
      dVar24 = *(double *)(unaff_x19 + 0x80);
      dVar22 = (((dVar21 - dVar22) / unaff_d15) * (double)(iVar4 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar11 = 0x80000000;
      if (dVar22 != INFINITY) {
        uVar11 = (int)dVar22;
      }
      iVar4 = FUN_0267c710(0);
      dVar22 = (((dVar20 - dVar24) / unaff_d15) * (double)(iVar4 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar9 = 0x80000000;
      if (dVar22 != INFINITY) {
        uVar9 = (int)dVar22;
      }
      dVar20 = dVar20 - dVar21;
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        puVar7 = &stack0x000000c0;
        in_stack_000000c0 = dVar20 / dVar3;
        puVar10 = (undefined8 *)System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
        puVar13 = (undefined8 *)StringLiteral_7259;
      }
      else {
        in_stack_000000c8 = (dVar20 / unaff_d15) * 100.0;
        puVar7 = &stack0x000000c8;
        puVar10 = (undefined8 *)System_Net_FtpWebResponse_EmptyStream_TypeInfo;
        puVar13 = (undefined8 *)PTR_DAT_033f6be8;
      }
      uVar8 = FUN_017562ec(puVar7,*puVar10,0);
      uVar5 = FUN_0160073c(uVar5,*(undefined8 *)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                           ,uVar8,*puVar13,0);
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      FUN_0268834c((float)(int)uVar11,(float)*(int *)(unaff_x19 + 0x94),
                   (float)(int)(uVar9 + ~uVar11),0x41a00000,&stack0x000000b0,0);
      plVar15 = (long *)
                Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_026e77b8(*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass55_0_<DOShakePosition>b__0__
                           ,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x22);
      }
      FUN_026cc304(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                   in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar5,uVar8,0);
      uVar12 = (ulong)*(uint *)(lVar16 + 0x18);
      uVar17 = uVar17 + 1;
      puVar14 = puVar14 + 4;
      unaff_x21 = (undefined8 *)PTR_DAT_033f28e8;
      uVar11 = uVar1 >> 0x10;
      uVar9 = uVar2;
    } while ((long)uVar17 < (long)(int)*(uint *)(lVar16 + 0x18));
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026d1ab8(0);
  return;
}


