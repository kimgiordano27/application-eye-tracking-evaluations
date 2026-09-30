/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SetSpaceComponentStatus
ENTRY_POINT: 02cdf324
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_SetSpaceComponentStatus(Il2CppClass *param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 in_stack_000001c0;
  
  uVar1 = il2cpp_codegen_object_new(param_1);
  MessageWithNetSyncSessionsChangedNotification__ctor_m793CEDD38A05E5F0E296043AD03D1FAE0FDC3B9F
            (uVar1,in_stack_000001c0,0);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
  return *(undefined8 *)(unaff_x29 + -8);
}


