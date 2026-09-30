/*
FUNCTION_NAME: OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E
ENTRY_POINT: 02db4df0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E(void)

{
  undefined *puVar1;
  byte bVar2;
  byte local_11;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = OVRPlugin_get_fixedFoveatedRenderingSupported_mAA2ED8AD8AEF2EDAE1234213993594EEBDBD491D(0)
  ;
  if ((bVar2 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_11 = OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
                         (0);
    local_11 = local_11 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}


