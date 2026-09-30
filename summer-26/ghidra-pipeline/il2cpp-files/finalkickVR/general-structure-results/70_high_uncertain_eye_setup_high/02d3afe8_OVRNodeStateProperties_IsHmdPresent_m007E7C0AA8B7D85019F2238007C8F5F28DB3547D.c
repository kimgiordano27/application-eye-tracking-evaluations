/*
FUNCTION_NAME: OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D
ENTRY_POINT: 02d3afe8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  byte local_11;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if ((*(byte *)(lVar3 + 0x180) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    if (*(int *)(lVar3 + 0x100) == 1) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      bVar2 = OVRPlugin_get_hmdPresent_mF451D2F9EE38733FF956ADD714F161EA803F8F6A(0);
      return bVar2 & 1;
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pvVar4 = (void *)OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
                             (0);
  if (pvVar4 == (void *)0x0) {
    local_11 = 0;
  }
  else {
    NullCheck(pvVar4);
    local_11 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(pvVar4,0);
    local_11 = local_11 & 1;
  }
  return local_11;
}


