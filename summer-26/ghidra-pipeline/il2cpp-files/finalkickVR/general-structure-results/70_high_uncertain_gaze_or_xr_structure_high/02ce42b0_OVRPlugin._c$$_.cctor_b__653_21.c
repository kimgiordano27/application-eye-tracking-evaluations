/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_21
ENTRY_POINT: 02ce42b0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__653_21(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long in_x9;
  long unaff_x29;
  undefined8 uStack0000000000000020;
  
  *(undefined1 *)(in_x9 + 0xf62) = in_w8;
  uStack0000000000000020 = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_ovr_Message_GetNativeMessage_m09B6890DFE2A4D608E3441F2AFB2D43425EEAB6C
                    (uStack0000000000000020);
  uVar1 = CAPI_ovr_Message_GetLaunchFriendRequestFlowResult_mEEB80E6D72B5B9F1133909D581DF7822F8DD84A7
                    (uVar1,0);
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
                    );
  LaunchFriendRequestFlowResult__ctor_m417F4F45CE5AB9A24FCAC9BCD20BA47E2DAFEA93(uVar2,uVar1,0);
  return uVar2;
}


