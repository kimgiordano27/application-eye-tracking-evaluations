/*
FUNCTION_NAME: OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90
ENTRY_POINT: 02d7fa8c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_5;functionality_gaze_interaction_hits_5
*/


byte OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if ((*(byte *)(lVar3 + 0xeb) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined1 *)(lVar3 + 0xeb) = 1;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar2 = OVRPlugin_get_hasVrFocus_m3BE22CA34415F44FD722A0D2547388F0C943900E(0);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(byte *)(lVar3 + 0xec) = bVar2 & 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(byte *)(lVar3 + 0xec) & 1;
}


