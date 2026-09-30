/*
FUNCTION_NAME: OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D
ENTRY_POINT: 02d83d04
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if ((*(byte *)(lVar3 + 0x144) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined1 *)(lVar3 + 0x144) = 1;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar2 = OVRPlugin_get_userPresent_mDC6C3FFE8897342A888E529C7BEAF368413C8151(0);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(byte *)(lVar3 + 0x145) = bVar2 & 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(byte *)(lVar3 + 0x145) & 1;
}


