/*
FUNCTION_NAME: OVRManager_get_gpuLevel_mF6DD3FBD45FC1A6D4C5E38CFF2454B71F2D36E06
ENTRY_POINT: 02d81a04
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


undefined4 OVRManager_get_gpuLevel_mF6DD3FBD45FC1A6D4C5E38CFF2454B71F2D36E06(void)

{
  byte bVar1;
  undefined4 local_14;
  
  if ((OVRManager_get_gpuLevel_mF6DD3FBD45FC1A6D4C5E38CFF2454B71F2D36E06::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_gpuLevel_mF6DD3FBD45FC1A6D4C5E38CFF2454B71F2D36E06::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) == 0) {
    local_14 = 2;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_14 = OVRPlugin_get_gpuLevel_m84965A56CFF04CF1487A64D2D3943A4A3C7D0DFE(0);
  }
  return local_14;
}


