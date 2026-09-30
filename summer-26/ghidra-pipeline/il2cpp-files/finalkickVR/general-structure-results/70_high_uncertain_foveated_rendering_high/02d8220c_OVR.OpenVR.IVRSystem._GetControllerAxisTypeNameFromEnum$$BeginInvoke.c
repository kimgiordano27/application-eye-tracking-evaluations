/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerAxisTypeNameFromEnum$$BeginInvoke
ENTRY_POINT: 02d8220c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


undefined4 OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum__BeginInvoke(void)

{
  undefined4 uVar1;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRManager_get_fixedFoveatedRenderingLevel_m50C462362955957310B24040F150D573CD565EAB::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVR_OpenVR_CVRCompositor__ForceReconnectProcess(0);
  return uVar1;
}


