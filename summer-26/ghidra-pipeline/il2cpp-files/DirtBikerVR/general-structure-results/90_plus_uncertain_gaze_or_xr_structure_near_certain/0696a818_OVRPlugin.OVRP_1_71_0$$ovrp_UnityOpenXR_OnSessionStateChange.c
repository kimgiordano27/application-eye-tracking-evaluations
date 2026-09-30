/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 0696a818
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(long param_1)

{
  undefined1 uVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  
  while (param_1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x24);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x34);
    unaff_w20 = unaff_w20 + 1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x2c);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined1 *)(param_1 + 0x20) = uVar1;
    if (unaff_w21 == unaff_w20) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    param_1 = FUN_04de82e0(*(long *)(unaff_x19 + 0x38),unaff_w20,*unaff_x22);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


