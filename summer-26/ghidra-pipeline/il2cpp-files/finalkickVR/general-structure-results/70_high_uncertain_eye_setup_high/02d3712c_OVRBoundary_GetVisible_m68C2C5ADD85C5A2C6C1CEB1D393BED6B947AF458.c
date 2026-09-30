/*
FUNCTION_NAME: OVRBoundary_GetVisible_m68C2C5ADD85C5A2C6C1CEB1D393BED6B947AF458
ENTRY_POINT: 02d3712c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVRBoundary_GetVisible_m68C2C5ADD85C5A2C6C1CEB1D393BED6B947AF458(void)

{
  undefined *puVar1;
  long lVar2;
  byte local_11;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRBoundary_GetVisible_m68C2C5ADD85C5A2C6C1CEB1D393BED6B947AF458::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRBoundary_GetVisible_m68C2C5ADD85C5A2C6C1CEB1D393BED6B947AF458::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(int *)(lVar2 + 0x100) == 1) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_11 = OVRPlugin_GetBoundaryVisible_m33803E6B9ABD4C41F49709544AC0B5A61AB103BB(0);
    local_11 = local_11 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}


