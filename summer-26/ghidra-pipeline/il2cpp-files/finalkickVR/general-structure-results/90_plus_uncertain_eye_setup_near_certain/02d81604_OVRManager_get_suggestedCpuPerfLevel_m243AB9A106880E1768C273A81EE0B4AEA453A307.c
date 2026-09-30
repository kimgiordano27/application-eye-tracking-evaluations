/*
FUNCTION_NAME: OVRManager_get_suggestedCpuPerfLevel_m243AB9A106880E1768C273A81EE0B4AEA453A307
ENTRY_POINT: 02d81604
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined4 OVRManager_get_suggestedCpuPerfLevel_m243AB9A106880E1768C273A81EE0B4AEA453A307(void)

{
  byte bVar1;
  undefined4 local_14;
  
  if ((OVRManager_get_suggestedCpuPerfLevel_m243AB9A106880E1768C273A81EE0B4AEA453A307::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_suggestedCpuPerfLevel_m243AB9A106880E1768C273A81EE0B4AEA453A307::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) == 0) {
    local_14 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_14 = OVRPlugin_get_suggestedCpuPerfLevel_m9499E63FC5C08EF4D1F38C494088FD3ADFAAFF9D(0);
  }
  return local_14;
}


