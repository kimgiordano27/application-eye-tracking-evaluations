/*
FUNCTION_NAME: OVRManager_remove_DisplayRefreshRateChanged_m86971E2283734F2364AACA47B15CC8695DC2CF7E
ENTRY_POINT: 02d7ddd0
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


void OVRManager_remove_DisplayRefreshRateChanged_m86971E2283734F2364AACA47B15CC8695DC2CF7E
               (undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *pAVar5;
  Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_remove_DisplayRefreshRateChanged_m86971E2283734F2364AACA47B15CC8695DC2CF7E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_<>c_<BeginReadInternal>b__40_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_remove_DisplayRefreshRateChanged_m86971E2283734F2364AACA47B15CC8695DC2CF7E::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 **)(lVar3 + 0x90);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(local_28,param_1,0);
    pAVar5 = (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *)
             Castclass(pIVar4,*(Il2CppClass **)
                               Method_System_IO_Stream_<>c_<BeginReadInternal>b__40_0__);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132*>
                       ((Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 **)(lVar3 + 0x90),pAVar5
                        ,local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


