/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 07a36b3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackingTransformRawPose(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  ulong *unaff_x19;
  float *unaff_x22;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  
  puVar1 = PTR_DAT_092b7110;
  pfVar5 = *(float **)(param_1 + 0xb8);
  fVar15 = *pfVar5;
  fVar17 = pfVar5[1];
  fVar12 = pfVar5[2];
  fVar6 = *unaff_x22;
  fVar7 = unaff_x22[1];
  fVar8 = unaff_x22[2];
  fVar9 = unaff_x22[3];
  fVar19 = fVar15 * fVar6;
  fVar20 = fVar17 * fVar7;
  fVar10 = unaff_x22[4];
  fVar11 = unaff_x22[5];
  fVar21 = fVar12 * fVar8;
  fVar16 = fVar12 * fVar11 + fVar15 * fVar9 + fVar17 * fVar10;
  if (DAT_09885627 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    fVar6 = *unaff_x22;
    fVar7 = unaff_x22[1];
    fVar8 = unaff_x22[2];
    fVar9 = unaff_x22[3];
    DAT_09885627 = '\x01';
    fVar10 = unaff_x22[4];
    fVar11 = unaff_x22[5];
  }
                    /* try { // try from 07a36bdc to 07b36ccb has its CatchHandler @ 07a36bdc
                       catch() { ... } // from try @ 07a36bdc with catch @ 07a36bdc
                       catch() { ... } // from try @ 07a36d58 with catch @ 07a36bdc
                       catch() { ... } // from try @ 07a36d8c with catch @ 07a36bdc
                       catch() { ... } // from try @ 07a36de0 with catch @ 07a36bdc
                       catch() { ... } // from try @ 07a36e30 with catch @ 07a36bdc */
  fVar14 = ABS(fVar16);
  if (ABS(fVar16) <= 0.0) {
    fVar14 = 0.0;
  }
  uStack000000000000009c = 0;
  uStack0000000000000018 = 0;
  in_stack_00000010 = 0;
  fVar18 = **(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) * 8.0;
  fVar13 = fVar14 * DAT_01aecc74;
  if (fVar14 * DAT_01aecc74 <= fVar18) {
    fVar13 = fVar18;
  }
  fVar14 = 0.0;
  if (fVar13 <= ABS(0.0 - fVar16)) {
    fVar14 = ((unaff_s12 * fVar12 + unaff_s13 * fVar15 + unaff_s14 * fVar17) -
             (fVar21 + fVar19 + fVar20)) / fVar16;
  }
  FUN_07a36ec8(fVar6 + fVar9 * fVar14,fVar7 + fVar10 * fVar14,fVar8 + fVar14 * fVar11);
  uVar4 = uStack0000000000000018;
  uVar2 = in_stack_00000010;
  uVar3 = in_stack_00000010._4_4_;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_089d99f0(uVar2 & 0xffffffff,uVar3,uVar4,in_stack_00000098,in_stack_00000008._4_4_,
               &stack0x00000030,0);
  FUN_07a36d18(&stack0x00000010);
  unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *unaff_x19 = in_stack_00000010;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  return 1;
}


