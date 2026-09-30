/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$Update
ENTRY_POINT: 01930a4c
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


void Oculus_Interaction_Input_ControllerAnimatedHand__Update(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *puVar12;
  int unaff_w23;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *unaff_x29;
  ulong uVar17;
  double dVar18;
  float unaff_s10;
  double dVar19;
  undefined4 uVar20;
  double dVar21;
  undefined4 uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double unaff_d15;
  undefined8 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  double in_stack_00000020;
  float fStack000000000000002c;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  ulong uStack0000000000000070;
  ulong uStack0000000000000078;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  double in_stack_000000c0;
  double in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
                    /* catch() { ... } // from try @ 01930918 with catch @ 01930a4c */
                    /* catch() { ... } // from try @ 019309d0 with catch @ 01930a50 */
                    /* catch() { ... } // from try @ 01930970 with catch @ 01930a54 */
                    /* catch() { ... } // from try @ 01930960 with catch @ 01930a58 */
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
                    /* catch() { ... } // from try @ 01930954 with catch @ 01930a5c
                       catch() { ... } // from try @ 01930a34 with catch @ 01930a5c */
  FUN_0268834c(0,param_1,0);
                    /* catch() { ... } // from try @ 01930938 with catch @ 01930a60
                       catch() { ... } // from try @ 01930980 with catch @ 01930a60 */
  uVar20 = *(undefined4 *)(unaff_x19 + 0xa0);
  uVar22 = *(undefined4 *)(unaff_x19 + 0xa4);
                    /* try { // try from 01930a78 to 01a30a8f has its CatchHandler @ 01930af0 */
  fStack000000000000002c = -2.1474836e+09;
  if (unaff_s10 != INFINITY) {
    fStack000000000000002c = (float)unaff_w23;
  }
                    /* try { // try from 01930a90 to 01a30adf has its CatchHandler @ 01930878 */
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  FUN_0268834c(0,0,fStack000000000000002c,(float)(*(int *)(unaff_x19 + 0x94) + 0x1e),
               &stack0x00000060,0);
  uVar24 = (undefined4)(uStack0000000000000070 >> 0x20);
  uStack0000000000000004 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  uStack000000000000000c = uStack000000000000006c;
  uVar20 = FUN_026d0d68(uStack0000000000000070 & 0xffffffff,uStack0000000000000070 >> 0x20,
                        uStack0000000000000078 & 0xffffffff,uStack0000000000000078._4_4_,uVar20,
                        uVar22,0);
                    /* try { // try from 01930ae0 to 01a30aef has its CatchHandler @ 01930af0 */
  *(undefined4 *)(unaff_x19 + 0xa0) = uVar20;
  *(undefined4 *)(unaff_x19 + 0xa4) = uVar24;
                    /* catch() { ... } // from try @ 01930a78 with catch @ 01930af0
                       catch() { ... } // from try @ 01930ae0 with catch @ 01930af0 */
  FUN_026d3158(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x24),
               *(undefined4 *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x2c),0);
                    /* try { // try from 01930af4 to 01a30af7 has its CatchHandler @ 01930b00 */
                    /* try { // try from 01930af8 to 01a30b03 has its CatchHandler @ 01930878 */
                    /* catch() { ... } // from try @ 01930af4 with catch @ 01930b00 */
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_0268834c(&stack0x00000050,0);
  FUN_026cbc44(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,in_stack_00000058 & 0xffffffff
               ,in_stack_00000058._4_4_,*(undefined8 *)StringLiteral_14412,0);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_0268834c(0,0,fStack000000000000002c,0x42200000,&stack0x00000040,0);
  uVar4 = FUN_026e77b8(*unaff_x21,0);
                    /* try { // try from 01930b70 to 01a30c1b has its CatchHandler @ 01930b70
                       catch() { ... } // from try @ 01930b70 with catch @ 01930b70
                       catch() { ... } // from try @ 01930cb0 with catch @ 01930b70
                       catch() { ... } // from try @ 01930d60 with catch @ 01930b70
                       catch() { ... } // from try @ 01930db8 with catch @ 01930b70
                       catch() { ... } // from try @ 01930e20 with catch @ 01930b70 */
  FUN_026cc304(in_stack_00000040 & 0xffffffff,in_stack_00000040._4_4_,in_stack_00000048 & 0xffffffff
               ,in_stack_00000048._4_4_,*unaff_x29,uVar4,0);
  lVar15 = *(long *)(unaff_x19 + 0x78);
  *(undefined4 *)(unaff_x19 + 0x94) = 0x19;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
    uVar16 = 0;
    uVar11 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    puVar13 = (undefined8 *)(lVar15 + 0x38);
    plVar14 = (long *)Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
    uVar10 = 0;
    uVar8 = 0;
    do {
      if (uVar11 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(uint *)(puVar13 + -1);
      dVar19 = (double)puVar13[-3];
      dVar18 = (double)puVar13[-2];
      uVar4 = *puVar13;
      uVar2 = uVar1 >> 8 & 0xff;
      if (uVar10 == uVar1 >> 0x10) {
        if (uVar8 != uVar2) {
          iVar3 = *(int *)(unaff_x19 + 0x94) + 0x15;
          goto LAB_01930d18;
        }
      }
      else {
        uVar25 = *(undefined4 *)(unaff_x19 + 0x20);
        uVar24 = *(undefined4 *)(unaff_x19 + 0x24);
        uVar22 = *(undefined4 *)(unaff_x19 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x19 + 0x2c);
        *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 0x15;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026d3158(uVar25,uVar24,uVar22,uVar20,0);
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        FUN_0268834c(0x40a00000,(float)(*(int *)(unaff_x19 + 0x94) + 5),0x43480000,0x41a00000,
                     &stack0x000000b0,0);
        in_stack_000000d0._4_4_ = (uVar1 >> 0x10) + 1;
        uVar7 = FUN_0178e9b8((long)&stack0x000000d0 + 4,0);
        uVar7 = FUN_015f5b28(*(undefined8 *)StringLiteral_6209,uVar7,0);
        FUN_026cbc44(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                     in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar7,0);
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        FUN_0268834c(0,(float)(*(int *)(unaff_x19 + 0x94) + 5),fStack000000000000002c,0x42200000,
                     &stack0x000000a0,0);
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_026e77b8(*unaff_x21,0);
        FUN_026cc304(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                     in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,
                     *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,uVar7,0);
        iVar3 = *(int *)(unaff_x19 + 0x94) + 0x1e;
LAB_01930d18:
        *(int *)(unaff_x19 + 0x94) = iVar3;
      }
      uVar10 = uVar1 & 0xff;
      if (uVar10 == 3) {
        lVar5 = *unaff_x22;
        uVar17 = *(ulong *)(unaff_x19 + 0x58);
        uVar11 = *(ulong *)(unaff_x19 + 0x50);
      }
      else if (uVar10 == 2) {
        lVar5 = *unaff_x22;
        uVar17 = *(ulong *)(unaff_x19 + 0x48);
        uVar11 = *(ulong *)(unaff_x19 + 0x40);
      }
      else if (uVar10 == 0) {
        lVar5 = *unaff_x22;
        uVar17 = *(ulong *)(unaff_x19 + 0x38);
        uVar11 = *(ulong *)(unaff_x19 + 0x30);
      }
      else {
        lVar5 = *unaff_x22;
        uVar17 = *(ulong *)(unaff_x19 + 0x68);
        uVar11 = *(ulong *)(unaff_x19 + 0x60);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026d3158(uVar11,uVar11 >> 0x20,uVar17 & 0xffffffff,uVar17 >> 0x20,0);
      dVar21 = *(double *)(unaff_x19 + 0x80);
      iVar3 = FUN_0267c710(0);
      dVar23 = *(double *)(unaff_x19 + 0x80);
      dVar21 = (((dVar19 - dVar21) / unaff_d15) * (double)(iVar3 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar10 = 0x80000000;
      if (dVar21 != INFINITY) {
        uVar10 = (int)dVar21;
      }
      iVar3 = FUN_0267c710(0);
      dVar21 = (((dVar18 - dVar23) / unaff_d15) * (double)(iVar3 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar8 = 0x80000000;
      if (dVar21 != INFINITY) {
        uVar8 = (int)dVar21;
      }
      dVar18 = dVar18 - dVar19;
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        puVar6 = &stack0x000000c0;
        in_stack_000000c0 = dVar18 / in_stack_00000020;
        puVar9 = (undefined8 *)System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
        puVar12 = (undefined8 *)StringLiteral_7259;
      }
      else {
        in_stack_000000c8 = (dVar18 / unaff_d15) * 100.0;
        puVar6 = &stack0x000000c8;
        puVar9 = (undefined8 *)System_Net_FtpWebResponse_EmptyStream_TypeInfo;
        puVar12 = (undefined8 *)PTR_DAT_033f6be8;
      }
      uVar7 = FUN_017562ec(puVar6,*puVar9,0);
      uVar4 = FUN_0160073c(uVar4,*(undefined8 *)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                           ,uVar7,*puVar12,0);
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      FUN_0268834c((float)(int)uVar10,(float)*(int *)(unaff_x19 + 0x94),
                   (float)(int)(uVar8 + ~uVar10),0x41a00000,&stack0x000000b0,0);
      plVar14 = (long *)
                Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_026e77b8(*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass55_0_<DOShakePosition>b__0__
                           ,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x22);
      }
      FUN_026cc304(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                   in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar4,uVar7,0);
      uVar11 = (ulong)*(uint *)(lVar15 + 0x18);
      uVar16 = uVar16 + 1;
      puVar13 = puVar13 + 4;
      unaff_x21 = (undefined8 *)PTR_DAT_033f28e8;
      uVar10 = uVar1 >> 0x10;
      uVar8 = uVar2;
    } while ((long)uVar16 < (long)(int)*(uint *)(lVar15 + 0x18));
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026d1ab8(0);
  return;
}


