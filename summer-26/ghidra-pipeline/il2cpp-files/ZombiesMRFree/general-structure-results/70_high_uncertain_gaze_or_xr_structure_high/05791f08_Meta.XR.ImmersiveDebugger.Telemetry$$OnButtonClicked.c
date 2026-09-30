/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked
ENTRY_POINT: 05791f08
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Telemetry__OnButtonClicked(void)

{
  ulong uVar1;
  long in_x9;
  uint unaff_w19;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  
  while( true ) {
    uVar1 = (**(code **)(in_x9 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    in_x9 = *unaff_x23;
  }
  return 0xffffffff;
}


