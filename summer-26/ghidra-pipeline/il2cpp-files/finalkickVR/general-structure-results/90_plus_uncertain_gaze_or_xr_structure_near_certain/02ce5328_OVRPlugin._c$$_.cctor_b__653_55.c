/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_55
ENTRY_POINT: 02ce5328
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
OVRPlugin_<>c__<_cctor>b__653_55(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  if ((MessageWithNetSyncSessionList_GetDataFromMessage_mF7C31507355E2A6507C1744A4DB49BF3F672EAED::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRControllerTest_<>c_<Start>b__4_13__);
    MessageWithNetSyncSessionList_GetDataFromMessage_mF7C31507355E2A6507C1744A4DB49BF3F672EAED::
    s_Il2CppMethodInitialized = 1;
  }
  uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar2 = CAPI_ovr_Message_GetNativeMessage_m09B6890DFE2A4D608E3441F2AFB2D43425EEAB6C(uVar2);
  uVar2 = CAPI_ovr_Message_GetNetSyncSessionArray_mAAD0BA7895C9354232061F05D36C4724147C8649(uVar2,0)
  ;
  uVar1 = il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRControllerTest_<>c_<Start>b__4_13__);
  NetSyncSessionList__ctor_m2C2745F05CBF04CA16B5BDBDDC05C873F64EB6F1(uVar1,uVar2,0);
  return uVar1;
}


