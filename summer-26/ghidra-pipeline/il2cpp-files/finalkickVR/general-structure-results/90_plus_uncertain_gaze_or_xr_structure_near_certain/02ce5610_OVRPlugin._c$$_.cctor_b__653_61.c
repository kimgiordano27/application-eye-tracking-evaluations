/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_61
ENTRY_POINT: 02ce5610
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__653_61(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
  uVar1 = CAPI_ovr_Message_GetNativeMessage_m09B6890DFE2A4D608E3441F2AFB2D43425EEAB6C();
  uVar1 = CAPI_ovr_Message_GetNetSyncSetSessionPropertyResult_m506204D8AB8BA466EA27B45483B2E4D0F48D435E
                    (uVar1,uStack0000000000000000);
  uVar2 = il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRControllerTest_<>c_<Start>b__4_18__);
  NetSyncSetSessionPropertyResult__ctor_m3592F131C5FAAF1E70FC758B420AD8B0985BD1C6
            (uVar2,uVar1,uStack0000000000000000);
  return uVar2;
}


