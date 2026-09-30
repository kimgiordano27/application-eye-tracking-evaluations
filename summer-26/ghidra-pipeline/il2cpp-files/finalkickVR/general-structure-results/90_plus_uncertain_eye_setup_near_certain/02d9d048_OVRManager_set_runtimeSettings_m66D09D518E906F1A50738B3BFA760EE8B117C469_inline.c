/*
FUNCTION_NAME: OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline
ENTRY_POINT: 02d9d048
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


/* OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline(OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1*,
   MethodInfo const*) */

void OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline
               (OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1 *param_1,
               MethodInfo *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline(OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1*,MethodInfo_const*)
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_set_runtimeSettings_m66D09D518E906F1A50738B3BFA760EE8B117C469_inline(OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1*,MethodInfo_const*)
    ::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1 **)(lVar2 + 0x20) = param_1;
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  Il2CppCodeGenWriteBarrier((void **)(lVar2 + 0x20),param_1);
  return;
}


