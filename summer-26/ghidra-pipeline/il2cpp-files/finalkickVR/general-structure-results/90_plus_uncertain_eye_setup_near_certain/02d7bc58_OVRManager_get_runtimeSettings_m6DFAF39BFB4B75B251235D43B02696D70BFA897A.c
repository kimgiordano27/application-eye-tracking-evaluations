/*
FUNCTION_NAME: OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A
ENTRY_POINT: 02d7bc58
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_get_runtimeSettings_m6DFAF39BFB4B75B251235D43B02696D70BFA897A::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(undefined8 *)(lVar2 + 0x20);
}


