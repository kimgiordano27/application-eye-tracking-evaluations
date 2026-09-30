/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnPanelActiveStateChanged
ENTRY_POINT: 04a2dc3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnPanelActiveStateChanged(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  
  while( true ) {
    if ((bool)in_ZR) {
      *(int *)(unaff_x19 + 0x24) = unaff_w21;
      *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
      return;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) break;
    if (-1 < *(int *)(unaff_x25 + -0x10)) {
      FUN_04a30500();
      unaff_w21 = unaff_w21 + 1;
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = unaff_x25 + 0x18;
    in_ZR = unaff_x22 == unaff_x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


