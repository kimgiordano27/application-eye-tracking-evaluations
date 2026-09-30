/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$UpdateAnimStates
ENTRY_POINT: 01930d84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__UpdateAnimStates
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  undefined8 *puVar12;
  undefined8 *unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  double unaff_d8;
  double unaff_d10;
  undefined4 uVar13;
  double dVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
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
  
  do {
                    /* catch() { ... } // from try @ 01930c6c with catch @ 01930d84
                       catch() { ... } // from try @ 01930d58 with catch @ 01930d84 */
                    /* catch() { ... } // from try @ 01930c3c with catch @ 01930d88
                       catch() { ... } // from try @ 01930ca4 with catch @ 01930d88 */
    FUN_026d3158(param_1,param_2,param_3,param_4,param_5);
    dVar14 = *(double *)(unaff_x19 + 0x80);
    iVar6 = FUN_0267c710(0);
                    /* try { // try from 01930da0 to 01a30db7 has its CatchHandler @ 01930e18 */
    dVar16 = *(double *)(unaff_x19 + 0x80);
                    /* try { // try from 01930db8 to 01a30e07 has its CatchHandler @ 01930b70 */
    dVar14 = (((unaff_d10 - dVar14) / unaff_d15) * (double)(iVar6 + -10)) /
             (double)*(float *)(unaff_x19 + 0x9c);
    uVar2 = 0x80000000;
    if (dVar14 != INFINITY) {
      uVar2 = (int)dVar14;
    }
    iVar6 = FUN_0267c710(0);
    dVar14 = (((unaff_d8 - dVar16) / unaff_d15) * (double)(iVar6 + -10)) /
             (double)*(float *)(unaff_x19 + 0x9c);
    uVar3 = 0x80000000;
                    /* try { // try from 01930e08 to 01a30e17 has its CatchHandler @ 01930e18 */
    if (dVar14 != INFINITY) {
      uVar3 = (int)dVar14;
    }
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      puVar8 = &stack0x000000c0;
      in_stack_000000c0 = (unaff_d8 - unaff_d10) / in_stack_00000020;
      puVar11 = (undefined8 *)System_Collections_Generic_List<MRUKRoom_Surface>_TypeInfo;
      puVar12 = (undefined8 *)StringLiteral_7259;
    }
    else {
                    /* catch() { ... } // from try @ 01930da0 with catch @ 01930e18
                       catch() { ... } // from try @ 01930e08 with catch @ 01930e18 */
                    /* try { // try from 01930e1c to 01a30e1f has its CatchHandler @ 01930e28 */
                    /* try { // try from 01930e20 to 01a30e2b has its CatchHandler @ 01930b70 */
      in_stack_000000c8 = ((unaff_d8 - unaff_d10) / unaff_d15) * 100.0;
                    /* catch() { ... } // from try @ 01930e1c with catch @ 01930e28 */
      puVar8 = &stack0x000000c8;
      puVar11 = (undefined8 *)System_Net_FtpWebResponse_EmptyStream_TypeInfo;
      puVar12 = (undefined8 *)PTR_DAT_033f6be8;
    }
    uVar9 = FUN_017562ec(puVar8,*puVar11,0);
    uVar9 = FUN_0160073c(unaff_x20,
                         *(undefined8 *)
                          Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__,uVar9,
                         *puVar12,0);
                    /* try { // try from 01930e98 to 01a30f9f has its CatchHandler @ 01930e98
                       catch() { ... } // from try @ 01930e98 with catch @ 01930e98
                       catch() { ... } // from try @ 019310f8 with catch @ 01930e98
                       catch() { ... } // from try @ 01931234 with catch @ 01930e98
                       catch() { ... } // from try @ 019312c0 with catch @ 01930e98
                       catch() { ... } // from try @ 01931328 with catch @ 01930e98 */
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
    FUN_0268834c((float)(int)uVar2,(float)*(int *)(unaff_x19 + 0x94),(float)(int)(uVar3 + ~uVar2),
                 &stack0x000000b0,0);
    puVar5 = Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_026e77b8(*(undefined8 *)
                           Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass55_0_<DOShakePosition>b__0__
                          ,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x22);
    }
    FUN_026cc304(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                 in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar9,uVar10,0);
    puVar4 = PTR_DAT_033f28e8;
    unaff_x27 = unaff_x27 + 1;
    if ((long)(int)*(uint *)(unaff_x26 + 0x18) <= (long)unaff_x27) {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026d1ab8(0);
      return;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar2 = *(uint *)(unaff_x24 + 3);
    unaff_d10 = (double)unaff_x24[1];
    unaff_d8 = (double)unaff_x24[2];
    unaff_x20 = unaff_x24[4];
    uVar3 = uVar2 >> 8 & 0xff;
    if (unaff_w28 == uVar2 >> 0x10) {
      if (unaff_w29 != uVar3) {
        iVar6 = *(int *)(unaff_x19 + 0x94) + 0x15;
        goto LAB_01930d18;
      }
    }
    else {
      uVar18 = *(undefined4 *)(unaff_x19 + 0x20);
      uVar17 = *(undefined4 *)(unaff_x19 + 0x24);
      uVar15 = *(undefined4 *)(unaff_x19 + 0x28);
      uVar13 = *(undefined4 *)(unaff_x19 + 0x2c);
      *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 0x15;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026d3158(uVar18,uVar17,uVar15,uVar13,0);
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      FUN_0268834c(0x40a00000,(float)(*(int *)(unaff_x19 + 0x94) + 5),0x43480000,&stack0x000000b0,0)
      ;
      in_stack_000000d0._4_4_ = (uVar2 >> 0x10) + 1;
      uVar9 = FUN_0178e9b8((long)&stack0x000000d0 + 4,0);
      uVar9 = FUN_015f5b28(*(undefined8 *)StringLiteral_6209,uVar9,0);
      FUN_026cbc44(in_stack_000000b0 & 0xffffffff,in_stack_000000b0._4_4_,
                   in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,uVar9,0);
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      FUN_0268834c(0,(float)(*(int *)(unaff_x19 + 0x94) + 5),in_stack_00000028._4_4_,0x42200000,
                   &stack0x000000a0,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_026e77b8(*(undefined8 *)puVar4,0);
      FUN_026cc304(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                   in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,
                   *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,uVar9,0);
      iVar6 = *(int *)(unaff_x19 + 0x94) + 0x1e;
LAB_01930d18:
      *(int *)(unaff_x19 + 0x94) = iVar6;
    }
    uVar1 = uVar2 & 0xff;
    if (uVar1 == 3) {
      lVar7 = *unaff_x22;
      param_4 = *(ulong *)(unaff_x19 + 0x58);
      param_1 = *(ulong *)(unaff_x19 + 0x50);
    }
    else if (uVar1 == 2) {
      lVar7 = *unaff_x22;
      param_4 = *(ulong *)(unaff_x19 + 0x48);
      param_1 = *(ulong *)(unaff_x19 + 0x40);
    }
    else if (uVar1 == 0) {
      lVar7 = *unaff_x22;
      param_4 = *(ulong *)(unaff_x19 + 0x38);
      param_1 = *(ulong *)(unaff_x19 + 0x30);
    }
    else {
      lVar7 = *unaff_x22;
      param_4 = *(ulong *)(unaff_x19 + 0x68);
      param_1 = *(ulong *)(unaff_x19 + 0x60);
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    param_2 = param_1 >> 0x20;
    param_3 = param_4 & 0xffffffff;
    param_4 = param_4 >> 0x20;
    param_5 = 0;
    unaff_x24 = unaff_x24 + 4;
    unaff_w28 = uVar2 >> 0x10;
    unaff_w29 = uVar3;
  } while( true );
}


