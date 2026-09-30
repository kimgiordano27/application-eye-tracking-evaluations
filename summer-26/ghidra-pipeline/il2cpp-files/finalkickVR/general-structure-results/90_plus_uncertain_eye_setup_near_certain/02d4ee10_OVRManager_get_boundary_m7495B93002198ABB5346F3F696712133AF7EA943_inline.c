/*
FUNCTION_NAME: OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
ENTRY_POINT: 02d4ee10
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


/* OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline(MethodInfo const*) */

undefined8
OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline(MethodInfo *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline(MethodInfo_const*)::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline(MethodInfo_const*)::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(undefined8 *)(lVar2 + 0x18);
}


