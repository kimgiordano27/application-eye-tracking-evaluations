/*
FUNCTION_NAME: OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321
ENTRY_POINT: 02d7fba8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


void OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(undefined1 *)(lVar2 + 0xeb) = 1;
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(byte *)(lVar2 + 0xec) = param_1 & 1;
  return;
}


