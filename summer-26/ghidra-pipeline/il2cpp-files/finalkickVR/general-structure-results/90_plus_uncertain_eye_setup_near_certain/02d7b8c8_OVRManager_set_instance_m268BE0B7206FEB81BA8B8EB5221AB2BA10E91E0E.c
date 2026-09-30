/*
FUNCTION_NAME: OVRManager_set_instance_m268BE0B7206FEB81BA8B8EB5221AB2BA10E91E0E
ENTRY_POINT: 02d7b8c8
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


void OVRManager_set_instance_m268BE0B7206FEB81BA8B8EB5221AB2BA10E91E0E(void *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_set_instance_m268BE0B7206FEB81BA8B8EB5221AB2BA10E91E0E::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_set_instance_m268BE0B7206FEB81BA8B8EB5221AB2BA10E91E0E::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *puVar2 = param_1;
  ppvVar3 = (void **)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  Il2CppCodeGenWriteBarrier(ppvVar3,param_1);
  return;
}


