/*
FUNCTION_NAME: OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B
ENTRY_POINT: 02d8e684
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


bool OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *pOVar4;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_romperMuro_<adiosTrozo>d__4_System_Collections_IEnumerator_Reset__);
    OVRManager_IsInsightPassthroughInitialized_m7752AC4A37C80B772E4E66527F3401A6D31D1A1B::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pOVar4 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar3 + 0x1d0);
  NullCheck(pOVar4);
  iVar2 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                    (pOVar4,*(MethodInfo **)
                             Method_romperMuro_<adiosTrozo>d__4_System_Collections_IEnumerator_Reset__
                    );
  return iVar2 == 2;
}


