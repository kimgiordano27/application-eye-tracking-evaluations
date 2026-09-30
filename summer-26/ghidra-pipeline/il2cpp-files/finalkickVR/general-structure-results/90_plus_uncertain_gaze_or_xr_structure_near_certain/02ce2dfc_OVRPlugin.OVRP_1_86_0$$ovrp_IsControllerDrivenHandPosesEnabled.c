/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 02ce2dfc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_OVRP_1_86_0__ovrp_IsControllerDrivenHandPosesEnabled(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_Oculus_VoiceSDK_Utilities_MicPermissionsManager_<>c__DisplayClass1_0_<RequestMicPermission>b__0__
                    );
  AssetDetails__ctor_mDA694C38AE88B1EDDACA042F7F82295139C6E258
            (uVar1,uStack0000000000000010,in_stack_00000000);
  return uVar1;
}


