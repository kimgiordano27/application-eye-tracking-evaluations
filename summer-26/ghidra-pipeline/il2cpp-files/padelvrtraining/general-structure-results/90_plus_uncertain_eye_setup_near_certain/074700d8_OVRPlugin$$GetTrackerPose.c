/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 074700d8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackerPose(void)

{
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_s6;
  float fVar7;
  float fVar8;
  float in_s7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_s16;
  float fVar13;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  fVar1 = *unaff_x22;
  fVar2 = unaff_x22[1];
  fVar3 = unaff_x22[2];
  fVar4 = unaff_x22[3];
  fVar5 = unaff_x22[4];
  fVar6 = unaff_x22[5];
  fVar7 = in_s6 * fVar1;
  fVar9 = in_s7 * fVar2;
  fVar13 = in_s16 * fVar3;
  fVar12 = in_s16 * fVar6 + in_s6 * fVar4 + in_s7 * fVar5;
  if (DAT_098363dc == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_098363dc = '\x01';
    fVar1 = *unaff_x22;
    fVar2 = unaff_x22[1];
    fVar3 = unaff_x22[2];
    fVar4 = unaff_x22[3];
    fVar5 = unaff_x22[4];
    fVar6 = unaff_x22[5];
  }
  fVar10 = ABS(fVar12);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = **(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) * 8.0;
  fVar8 = fVar10 * DAT_01914a48;
  if (fVar10 * DAT_01914a48 <= fVar11) {
    fVar8 = fVar11;
  }
  fVar10 = 0.0;
  if (fVar8 <= ABS(0.0 - fVar12)) {
    fVar10 = ((unaff_s14 * in_s16 + unaff_s12 * in_s6 + unaff_s13 * in_s7) -
             (fVar13 + fVar7 + fVar9)) / fVar12;
  }
  FUN_0747045c(fVar1 + fVar4 * fVar10,fVar2 + fVar5 * fVar10,fVar3 + fVar10 * fVar6);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_08a5b7d0(0,0,0,&stack0x00000040,0);
  FUN_074702ac();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


