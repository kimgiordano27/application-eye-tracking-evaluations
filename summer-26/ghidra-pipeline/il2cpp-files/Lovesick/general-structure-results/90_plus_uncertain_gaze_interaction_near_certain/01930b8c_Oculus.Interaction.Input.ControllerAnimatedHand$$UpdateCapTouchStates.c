/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$UpdateCapTouchStates
ENTRY_POINT: 01930b8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__UpdateCapTouchStates(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 in_w8;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long unaff_x26;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  double dVar20;
  undefined4 uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double unaff_d15;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  double in_stack_000000c0;
  double in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  *(undefined4 *)(unaff_x19 + 0x94) = in_w8;
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (0 < (int)*(ulong *)(unaff_x26 + 0x18)) {
    uVar15 = 0;
    uVar10 = *(ulong *)(unaff_x26 + 0x18) & 0xffffffff;
    puVar13 = (undefined8 *)(unaff_x26 + 0x38);
    plVar14 = (long *)Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
    uVar9 = 0;
    uVar7 = 0;
    do {
      if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(uint *)(puVar13 + -1);
      dVar18 = (double)puVar13[-3];
      dVar17 = (double)puVar13[-2];
      uVar11 = *puVar13;
      uVar2 = uVar1 >> 8 & 0xff;
      if (uVar9 == uVar1 >> 0x10) {
        if (uVar7 != uVar2) {
          iVar3 = *(int *)(unaff_x19 + 0x94) + 0x15;
          goto LAB_01930d18;
        }
      }
      else {
        uVar24 = *(undefined4 *)(unaff_x19 + 0x20);
        uVar23 = *(undefined4 *)(unaff_x19 + 0x24);
        uVar21 = *(undefined4 *)(unaff_x19 + 0x28);
        uVar19 = *(undefined4 *)(unaff_x19 + 0x2c);
        *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 0x15;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 01930c1c to 01a30c27 has its CatchHandler @ 01930d74 */
          thunk_FUN_00d32864();
        }
                    /* try { // try from 01930c2c to 01a30c37 has its CatchHandler @ 01930d70 */
        FUN_026d3158(uVar24,uVar23,uVar21,uVar19,0);
                    /* try { // try from 01930c3c to 01a30c47 has its CatchHandler @ 01930d88 */
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        FUN_0268834c(0x40a00000,(float)(*(int *)(unaff_x19 + 0x94) + 5),0x43480000,0x41a00000,
                     &stack0x000000b0,0);
        in_stack_000000d0._4_4_ = (uVar1 >> 0x10) + 1;
                    /* try { // try from 01930c68 to 01a30c6b has its CatchHandler @ 01930d68 */
                    /* try { // try from 01930c6c to 01a30c7f has its CatchHandler @ 01930d84 */
        uVar6 = FUN_0178e9b8((long)&stack0x000000d0 + 4,0);
                    /* try { // try from 01930c84 to 01a30c8f has its CatchHandler @ 01930d80 */
        uVar6 = FUN_015f5b28(*(undefined8 *)StringLiteral_6209,uVar6,0);
                    /* try { // try from 01930c94 to 01a30c9f has its CatchHandler @ 01930d7c */
        FUN_026cbc44(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                     in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar6,0);
                    /* try { // try from 01930ca4 to 01a30caf has its CatchHandler @ 01930d88 */
                    /* try { // try from 01930cb0 to 01a30cf3 has its CatchHandler @ 01930b70 */
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        FUN_0268834c(0,(float)(*(int *)(unaff_x19 + 0x94) + 5),in_stack_00000028._4_4_,0x42200000,
                     &stack0x000000a0,0);
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_026e77b8(*unaff_x21,0);
                    /* try { // try from 01930cf4 to 01a30d0b has its CatchHandler @ 01930d78 */
        FUN_026cc304(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                     in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,
                     *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,uVar6,0);
        iVar3 = *(int *)(unaff_x19 + 0x94) + 0x1e;
LAB_01930d18:
        *(int *)(unaff_x19 + 0x94) = iVar3;
      }
      uVar9 = uVar1 & 0xff;
      if (uVar9 == 3) {
        lVar4 = *unaff_x22;
        uVar16 = *(ulong *)(unaff_x19 + 0x58);
        uVar10 = *(ulong *)(unaff_x19 + 0x50);
                    /* try { // try from 01930d54 to 01a30d57 has its CatchHandler @ 01930d64 */
      }
      else {
                    /* try { // try from 01930d28 to 01a30d3f has its CatchHandler @ 01930d6c */
        if (uVar9 == 2) {
          lVar4 = *unaff_x22;
          uVar16 = *(ulong *)(unaff_x19 + 0x48);
          uVar10 = *(ulong *)(unaff_x19 + 0x40);
        }
        else if (uVar9 == 0) {
          lVar4 = *unaff_x22;
          uVar16 = *(ulong *)(unaff_x19 + 0x38);
          uVar10 = *(ulong *)(unaff_x19 + 0x30);
        }
        else {
                    /* try { // try from 01930d58 to 01a30d5b has its CatchHandler @ 01930d84 */
          lVar4 = *unaff_x22;
                    /* try { // try from 01930d5c to 01a30d5f has its CatchHandler @ 01930d60 */
          uVar16 = *(ulong *)(unaff_x19 + 0x68);
          uVar10 = *(ulong *)(unaff_x19 + 0x60);
        }
      }
                    /* catch() { ... } // from try @ 01930d5c with catch @ 01930d60
                       try { // try from 01930d60 to 01a30d9f has its CatchHandler @ 01930b70 */
                    /* catch() { ... } // from try @ 01930d54 with catch @ 01930d64 */
      if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01930c68 with catch @ 01930d68 */
                    /* catch() { ... } // from try @ 01930d28 with catch @ 01930d6c */
        thunk_FUN_00d32864();
                    /* catch() { ... } // from try @ 01930c2c with catch @ 01930d70 */
      }
                    /* catch() { ... } // from try @ 01930c1c with catch @ 01930d74 */
                    /* catch() { ... } // from try @ 01930cf4 with catch @ 01930d78 */
                    /* catch() { ... } // from try @ 01930c94 with catch @ 01930d7c */
                    /* catch() { ... } // from try @ 01930c84 with catch @ 01930d80 */
      FUN_026d3158(uVar10,uVar10 >> 0x20,uVar16 & 0xffffffff,uVar16 >> 0x20,0);
      dVar20 = *(double *)(unaff_x19 + 0x80);
      iVar3 = FUN_0267c710(0);
      dVar22 = *(double *)(unaff_x19 + 0x80);
      dVar20 = (((dVar18 - dVar20) / unaff_d15) * (double)(iVar3 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar9 = 0x80000000;
      if (dVar20 != INFINITY) {
        uVar9 = (int)dVar20;
      }
      iVar3 = FUN_0267c710(0);
      dVar20 = (((dVar17 - dVar22) / unaff_d15) * (double)(iVar3 + -10)) /
               (double)*(float *)(unaff_x19 + 0x9c);
      uVar7 = 0x80000000;
      if (dVar20 != INFINITY) {
        uVar7 = (int)dVar20;
      }
      dVar17 = dVar17 - dVar18;
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        puVar5 = &stack0x000000c0;
        in_stack_000000c0 = dVar17 / in_stack_00000020;
        puVar8 = (undefined8 *)System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
        puVar12 = (undefined8 *)StringLiteral_7259;
      }
      else {
        in_stack_000000c8 = (dVar17 / unaff_d15) * 100.0;
        puVar5 = &stack0x000000c8;
        puVar8 = (undefined8 *)System_Net_FtpWebResponse_EmptyStream_TypeInfo;
        puVar12 = (undefined8 *)PTR_DAT_033f6be8;
      }
      uVar6 = FUN_017562ec(puVar5,*puVar8,0);
      uVar11 = FUN_0160073c(uVar11,*(undefined8 *)
                                    Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                            ,uVar6,*puVar12,0);
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      FUN_0268834c((float)(int)uVar9,(float)*(int *)(unaff_x19 + 0x94),(float)(int)(uVar7 + ~uVar9),
                   0x41a00000,&stack0x000000b0,0);
      plVar14 = (long *)
                Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_026e77b8(*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass55_0_<DOShakePosition>b__0__
                           ,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x22);
      }
      FUN_026cc304(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                   in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar11,uVar6,0);
      uVar10 = (ulong)*(uint *)(unaff_x26 + 0x18);
      uVar15 = uVar15 + 1;
      puVar13 = puVar13 + 4;
      unaff_x21 = (undefined8 *)PTR_DAT_033f28e8;
      uVar9 = uVar1 >> 0x10;
      uVar7 = uVar2;
    } while ((long)uVar15 < (long)(int)*(uint *)(unaff_x26 + 0x18));
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026d1ab8(0);
  return;
}


