/*
FUNCTION_NAME: OVRSceneManager$$LocateUserInRoom
ENTRY_POINT: 02cece7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 OVRSceneManager__LocateUserInRoom(void)

{
  long unaff_x29;
  Request_1_t28B31BE3D25A15906E1813CD9A3CD98AE6AF0095 *in_stack_00000018;
  ulong in_stack_00000020;
  
  Request_1__ctor_mC72E41D8DE218B3992AA2AFF3F4CD16F6FEF7D7C
            (in_stack_00000018,in_stack_00000020,
             *(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_65__);
  *(Request_1_t28B31BE3D25A15906E1813CD9A3CD98AE6AF0095 **)(unaff_x29 + -8) = in_stack_00000018;
  return *(undefined8 *)(unaff_x29 + -8);
}


