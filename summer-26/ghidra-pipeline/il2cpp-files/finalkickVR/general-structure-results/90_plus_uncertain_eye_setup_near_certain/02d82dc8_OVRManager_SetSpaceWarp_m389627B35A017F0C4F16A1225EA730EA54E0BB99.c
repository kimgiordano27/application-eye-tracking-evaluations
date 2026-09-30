/*
FUNCTION_NAME: OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99
ENTRY_POINT: 02d82dc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99(byte param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  param_1 = param_1 & 1;
  if ((OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_SetSpaceWarp_m389627B35A017F0C4F16A1225EA730EA54E0BB99::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pvVar4 = (void *)OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49(0);
  if (param_1 == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar2 = *(undefined4 *)(lVar5 + 0x140);
    NullCheck(pvVar4);
    Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(pvVar4,uVar2);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined8 *)(lVar5 + 0x138) = 0;
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar5 + 0x138),(void *)0x0);
  }
  else {
    NullCheck(pvVar4);
    uVar2 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(pvVar4);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined4 *)(lVar5 + 0x140) = uVar2;
    NullCheck(pvVar4);
    uVar3 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(pvVar4,0);
    NullCheck(pvVar4);
    Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(pvVar4,uVar3 | 5,0);
    NullCheck(pvVar4);
    pvVar4 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar4,0);
    NullCheck(pvVar4);
    pvVar4 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(pvVar4,0);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(void **)(lVar5 + 0x138) = pvVar4;
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar5 + 0x138),pvVar4);
  }
  OculusXRPlugin_SetSpaceWarp_m591EA7747C0C944877CE8350AEA763560E46E7F1(param_1 != 0,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(byte *)(lVar5 + 0x134) = param_1;
  return;
}


