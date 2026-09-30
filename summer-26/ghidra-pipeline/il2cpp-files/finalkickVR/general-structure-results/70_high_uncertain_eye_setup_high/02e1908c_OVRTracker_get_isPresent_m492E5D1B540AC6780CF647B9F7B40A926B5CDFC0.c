/*
FUNCTION_NAME: OVRTracker_get_isPresent_m492E5D1B540AC6780CF647B9F7B40A926B5CDFC0
ENTRY_POINT: 02e1908c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRTracker_get_isPresent_m492E5D1B540AC6780CF647B9F7B40A926B5CDFC0(void)

{
  byte bVar1;
  byte local_11;
  
  if ((OVRTracker_get_isPresent_m492E5D1B540AC6780CF647B9F7B40A926B5CDFC0::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRTracker_get_isPresent_m492E5D1B540AC6780CF647B9F7B40A926B5CDFC0::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_11 = OVRPlugin_get_positionSupported_m0AD37A0C6351F659E5079BF3F99214A25425A10F(0);
    local_11 = local_11 & 1;
  }
  return local_11;
}


