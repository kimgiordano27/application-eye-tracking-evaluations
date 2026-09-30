/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 07a68b8c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long *unaff_x22;
  long *unaff_x23;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0xe50);
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_08978b08(*puVar3,0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089cc398(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08978b08(*(undefined8 *)PTR_DAT_092f0e48,0);
    return;
  }
  return;
}


