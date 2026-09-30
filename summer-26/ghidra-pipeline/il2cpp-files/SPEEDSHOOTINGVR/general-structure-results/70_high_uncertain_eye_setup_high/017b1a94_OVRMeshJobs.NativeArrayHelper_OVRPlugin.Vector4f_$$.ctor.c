/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 017b1a94
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>___ctor(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  FUN_01d69368(0);
  if (unaff_w21 < 0) {
    FUN_01d68fac(0x10,4,0);
  }
  if (*(int *)(unaff_x19 + 0x18) - unaff_w20 < unaff_w21) {
    FUN_01d68ae8(0x17,0);
  }
  if (0 < unaff_w21) {
    iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w21;
    *(int *)(unaff_x19 + 0x18) = iVar1;
    if (iVar1 - unaff_w20 != 0 && unaff_w20 <= iVar1) {
      FUN_01d6ade4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21 + unaff_w20,
                   *(undefined8 *)(unaff_x19 + 0x10),unaff_w20,iVar1 - unaff_w20,0);
    }
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  return;
}


