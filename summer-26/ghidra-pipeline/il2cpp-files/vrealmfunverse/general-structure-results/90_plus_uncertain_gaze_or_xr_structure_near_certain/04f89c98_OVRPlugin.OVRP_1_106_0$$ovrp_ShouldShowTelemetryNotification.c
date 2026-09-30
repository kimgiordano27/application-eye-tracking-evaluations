/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryNotification
ENTRY_POINT: 04f89c98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryNotification(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_EventCallback<PointerLeaveEvent>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xd81) = 1;
  }
  lVar1 = FUN_04332268();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x98) != 0)) {
    return *(undefined8 *)(*(long *)(lVar1 + 0x98) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


