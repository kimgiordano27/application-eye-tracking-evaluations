/*
FUNCTION_NAME: Focusable_set_excludeFromFocusRing_m965E9967283F246BBFC2839769018AB77B0F90F7
ENTRY_POINT: 045bc2a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Focusable_set_excludeFromFocusRing_m965E9967283F246BBFC2839769018AB77B0F90F7
               (Il2CppObject *param_1,byte param_2)

{
  undefined *puVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  Exception_t *pEVar6;
  MethodInfo *pMVar7;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  if ((Focusable_set_excludeFromFocusRing_m965E9967283F246BBFC2839769018AB77B0F90F7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    Focusable_set_excludeFromFocusRing_m965E9967283F246BBFC2839769018AB77B0F90F7::
    s_Il2CppMethodInitialized = 1;
  }
  pvVar3 = (void *)CastclassClass(param_1,*(Il2CppClass **)puVar1);
  NullCheck(pvVar3);
  uVar4 = CastclassClass(param_1,*(Il2CppClass **)puVar1);
  bVar2 = VisualElement_get_isCompositeRoot_mFA26CBD30A0EB10D5A63758BAC866E05645DDBBA(uVar4,0);
  if ((bVar2 & 1) != 0) {
    param_1[0x29] = (Il2CppObject)(param_2 & 1);
    return;
  }
  pIVar5 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                     );
  pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)PTR__stringLiteral3648F9FE5F907A9AE1C04209772C137A134D2939_048de4e8);
  InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar6,uVar4,0);
  pMVar7 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      PTR_Focusable_set_excludeFromFocusRing_m965E9967283F246BBFC2839769018AB77B0F90F7_RuntimeMethod_var_048de4f0
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar6,pMVar7);
}


