/*
FUNCTION_NAME: OVRManager_add_SpaceEraseComplete_m41A630D65B0835AB54F59C4B2D62EA3CD26085C5
ENTRY_POINT: 02d7eb90
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_add_SpaceEraseComplete_m41A630D65B0835AB54F59C4B2D62EA3CD26085C5(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC *pAVar5;
  Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_add_SpaceEraseComplete_m41A630D65B0835AB54F59C4B2D62EA3CD26085C5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__228_0__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_add_SpaceEraseComplete_m41A630D65B0835AB54F59C4B2D62EA3CD26085C5::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC **)(lVar3 + 0xc0);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(local_28,param_1,0);
    pAVar5 = (Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC *)
             Castclass(pIVar4,*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__228_0__
                      );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC*>
                       ((Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC **)(lVar3 + 0xc0),pAVar5
                        ,local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


