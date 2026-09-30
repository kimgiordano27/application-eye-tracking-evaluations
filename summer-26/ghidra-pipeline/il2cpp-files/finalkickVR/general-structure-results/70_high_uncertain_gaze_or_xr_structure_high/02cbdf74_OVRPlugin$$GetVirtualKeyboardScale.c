/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 02cbdf74
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


undefined8 OVRPlugin__GetVirtualKeyboardScale(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
  uVar1 = (*CAPI_ovr_Colocation_RequestMap_Native_m4FFE59DA719EB96293C723C46286BE8A655266E0::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return uVar1;
}


