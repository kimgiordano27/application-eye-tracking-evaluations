/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 03695544
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(long param_1)

{
  bool bVar1;
  float *pfVar2;
  float *unaff_x19;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar5 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar5 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar2;
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  else {
    fVar3 = unaff_s9 / fVar5;
    fVar4 = unaff_s10 / fVar5;
    fVar5 = unaff_s11 / fVar5;
  }
  fVar6 = unaff_s15 * unaff_s15 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_;
  fVar8 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000010 = fStack0000000000000010 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar9 = (fVar8 * fVar8 + fStack0000000000000010 * fStack0000000000000010 +
          fStack0000000000000014 * fStack0000000000000014) - fVar6;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (unaff_s14 < fVar9) {
    bVar1 = false;
  }
  else {
    fVar7 = fVar5 * fVar8 - fVar4 * fStack0000000000000014;
    fVar9 = fVar3 * fStack0000000000000014 - fVar5 * fStack0000000000000010;
    fVar5 = fVar4 * fStack0000000000000010 - fVar3 * fVar8;
    bVar1 = fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9 <= fVar6;
  }
  return bVar1;
}


