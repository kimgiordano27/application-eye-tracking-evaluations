/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_14
ENTRY_POINT: 02ce3f4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__653_14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x158));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<>c__DisplayClass71_0_<UpdateSortColumnDescriptionsOnClick>b__0__
            );
  MessageWithInstalledApplicationList_GetDataFromMessage_m15FC4F4FABCD70E61D719F1FBF3559B052B74D05::
  s_Il2CppMethodInitialized = 1;
  uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar2 = CAPI_ovr_Message_GetNativeMessage_m09B6890DFE2A4D608E3441F2AFB2D43425EEAB6C(uVar2);
  uVar2 = CAPI_ovr_Message_GetInstalledApplicationArray_m39CDB8A707D8330B8D04DF43AEAB65EFDB7DFB74
                    (uVar2,0);
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<>c__DisplayClass71_0_<UpdateSortColumnDescriptionsOnClick>b__0__
                    );
  InstalledApplicationList__ctor_mCBEFC14A6B38CD2544958E8CB0F5991C00E5A47D(uVar1,uVar2,0);
  return uVar1;
}


