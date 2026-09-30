/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryDimensions
ENTRY_POINT: 0569c2a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryDimensions(void)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x20;
  
  FUN_0552aca4();
  if ((unaff_x20 & 1) != 0) {
    uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo);
    FUN_055ee9cc(uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x28),uVar1);
    return;
  }
  return;
}


