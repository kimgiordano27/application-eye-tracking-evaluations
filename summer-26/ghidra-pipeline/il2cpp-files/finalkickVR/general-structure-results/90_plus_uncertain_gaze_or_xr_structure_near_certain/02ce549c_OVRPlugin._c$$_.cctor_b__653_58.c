/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_58
ENTRY_POINT: 02ce549c
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


undefined8 OVRPlugin_<>c__<_cctor>b__653_58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
  uVar1 = CAPI_ovr_Message_GetNetSyncSessionsChangedNotification_m9A09F3FFA47F76A97419C950A0D447133A7FDF41
                    (param_1,in_stack_00000000);
  uVar2 = il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRControllerTest_<>c_<Start>b__4_15__);
  NetSyncSessionsChangedNotification__ctor_m2C7FA56EAE7F71E2D329DDF2031B993DDCF6C304
            (uVar2,uVar1,in_stack_00000000);
  return uVar2;
}


