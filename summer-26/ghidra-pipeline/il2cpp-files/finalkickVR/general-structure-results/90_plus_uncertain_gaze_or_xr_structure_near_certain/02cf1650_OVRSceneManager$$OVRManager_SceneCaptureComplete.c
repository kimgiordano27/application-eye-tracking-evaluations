/*
FUNCTION_NAME: OVRSceneManager$$OVRManager_SceneCaptureComplete
ENTRY_POINT: 02cf1650
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
OVRSceneManager__OVRManager_SceneCaptureComplete
          (Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6 *param_1)

{
  long unaff_x29;
  Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6 *pRStack0000000000000018;
  ulong in_stack_00000020;
  
  pRStack0000000000000018 = param_1;
  Request_1__ctor_mD3DA42620CCA0121D88478998FCF40481CA3669E
            (param_1,in_stack_00000020,
             *(MethodInfo **)Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
  *(Request_1_tC5B6E137548496BDBF83B246FD4875ECE59B63E6 **)(unaff_x29 + -8) =
       pRStack0000000000000018;
  return *(undefined8 *)(unaff_x29 + -8);
}


