/*
FUNCTION_NAME: OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline
ENTRY_POINT: 02d9d2dc
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


/* OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline(OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE*,
   MethodInfo const*) */

void OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline
               (OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE *param_1,MethodInfo *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline(OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE*,MethodInfo_const*)
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline(OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE*,MethodInfo_const*)
    ::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE **)(lVar2 + 0x18) = param_1;
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  Il2CppCodeGenWriteBarrier((void **)(lVar2 + 0x18),param_1);
  return;
}


