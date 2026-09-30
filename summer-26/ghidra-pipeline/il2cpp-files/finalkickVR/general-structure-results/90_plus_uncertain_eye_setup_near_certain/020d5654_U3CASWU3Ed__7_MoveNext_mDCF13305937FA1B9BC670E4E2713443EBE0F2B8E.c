/*
FUNCTION_NAME: U3CASWU3Ed__7_MoveNext_mDCF13305937FA1B9BC670E4E2713443EBE0F2B8E
ENTRY_POINT: 020d5654
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1 U3CASWU3Ed__7_MoveNext_mDCF13305937FA1B9BC670E4E2713443EBE0F2B8E(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined1 local_11;
  
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_GetEnumerator__;
  if ((U3CASWU3Ed__7_MoveNext_mDCF13305937FA1B9BC670E4E2713443EBE0F2B8E::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    U3CASWU3Ed__7_MoveNext_mDCF13305937FA1B9BC670E4E2713443EBE0F2B8E::s_Il2CppMethodInitialized = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    pvVar4 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(0x3f800000,pvVar4,0);
    *(void **)(param_1 + 0x18) = pvVar4;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x18),pvVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
    local_11 = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99(0);
    pvVar4 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(0x40000000,pvVar4,0);
    *(void **)(param_1 + 0x18) = pvVar4;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x18),pvVar4);
    *(undefined4 *)(param_1 + 0x10) = 2;
    local_11 = 1;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99(0,0);
    local_11 = 0;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}


