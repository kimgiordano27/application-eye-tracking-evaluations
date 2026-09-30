/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 076da54c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  
  fVar4 = *(float *)(unaff_x20 + 0x28);
  param_2 = ABS(param_2);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (param_1 <= fVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_2) && !NAN(fVar4)) {
      bVar1 = param_2 < fVar4;
      bVar2 = param_2 == fVar4;
      bVar3 = false;
    }
  }
  bVar2 = bVar2 || bVar1 != bVar3;
  if (bVar2) {
    *unaff_x19 = unaff_s8;
    unaff_x19[1] = unaff_s10;
    unaff_x19[2] = unaff_s11;
    unaff_x19[3] = unaff_s12;
    unaff_x19[4] = unaff_s13;
    unaff_x19[5] = unaff_s14;
    unaff_x19[6] = unaff_s9;
  }
  return bVar2;
}


