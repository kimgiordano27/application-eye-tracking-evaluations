/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 05604468
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  do {
    uVar1 = FUN_05935dc4(unaff_x21 + 4,0);
    if ((((uVar1 & 1) != 0) && (uVar1 = FUN_05935dc4(unaff_x21 + 8,0), (uVar1 & 1) != 0)) &&
       (uVar1 = FUN_05935dc4(unaff_x21 + 0xc,0), (uVar1 & 1) != 0)) {
      return unaff_w19;
    }
    do {
      unaff_w19 = unaff_w19 + 1;
      unaff_x22 = unaff_x22 + -1;
      unaff_x21 = unaff_x21 + 0x10;
      if (unaff_x22 == 0) {
        return 0xffffffff;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar1 = FUN_05935dc4(unaff_x21,0);
    } while ((uVar1 & 1) == 0);
  } while( true );
}


