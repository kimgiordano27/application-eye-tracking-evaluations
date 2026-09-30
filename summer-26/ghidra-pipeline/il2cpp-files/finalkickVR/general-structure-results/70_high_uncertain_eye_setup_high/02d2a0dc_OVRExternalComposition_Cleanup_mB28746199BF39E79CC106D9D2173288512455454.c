/*
FUNCTION_NAME: OVRExternalComposition_Cleanup_mB28746199BF39E79CC106D9D2173288512455454
ENTRY_POINT: 02d2a0dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRExternalComposition_Cleanup_mB28746199BF39E79CC106D9D2173288512455454(Il2CppObject *param_1)

{
  void *pvVar1;
  Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *pAVar2;
  undefined4 uVar3;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *pRVar4;
  Il2CppArray *pIVar5;
  int local_24;
  
  if ((OVRExternalComposition_Cleanup_mB28746199BF39E79CC106D9D2173288512455454::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_<>c_<BeginReadInternal>b__40_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_<>c_<EnsureAsyncActiveSemaphoreInitialized>b__4_0__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_StyleSelector_<>c_<ToString>b__10_0__);
    OVRExternalComposition_Cleanup_mB28746199BF39E79CC106D9D2173288512455454::
    s_Il2CppMethodInitialized = 1;
  }
  OVRCompositionUtil_SafeDestroy_m7A340325537FB13185AE399E80B4953CA5AE8693(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = 0;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x60),(void *)0x0);
  OVRCompositionUtil_SafeDestroy_m7A340325537FB13185AE399E80B4953CA5AE8693(param_1 + 0x48,0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x50),(void *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
            (*(undefined8 *)Method_UnityEngine_UIElements_StyleSelector_<>c_<ToString>b__10_0__,0);
  if (*(int *)(param_1 + 0x94) == -1) {
    uVar3 = 0;
  }
  else {
    Media_SyncMrcFrame_m7FB69917156264534E8BA246F62022A7E0DB86CE(*(undefined4 *)(param_1 + 0x94),0);
    uVar3 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  }
  OVRExternalComposition_CleanupAudioFilter_m27C628AA8C61038A7F6839FA614EB9A63A7E1979
            (uVar3,param_1,0);
  for (local_24 = 0; local_24 < 2; local_24 = il2cpp_codegen_add<int,int>(local_24,1)) {
    pRVar4 = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)(param_1 + 0x88);
    NullCheck(pRVar4);
    pvVar1 = (void *)RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt
                               (pRVar4,(long)local_24);
    NullCheck(pvVar1);
    RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(pvVar1);
    pIVar5 = *(Il2CppArray **)(param_1 + 0x88);
    NullCheck(pIVar5);
    ArrayElementTypeCheck(pIVar5,(void *)0x0);
    RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::SetAt
              ((RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *)pIVar5,
               (long)local_24,(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27 *)0x0);
    if (((byte)param_1[0x71] & 1) == 0) {
      pRVar4 = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)(param_1 + 0x98);
      NullCheck(pRVar4);
      pvVar1 = (void *)RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt
                                 (pRVar4,(long)local_24);
      NullCheck(pvVar1);
      RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(pvVar1);
      pIVar5 = *(Il2CppArray **)(param_1 + 0x98);
      NullCheck(pIVar5);
      ArrayElementTypeCheck(pIVar5,(void *)0x0);
      RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::SetAt
                ((RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *)pIVar5,
                 (long)local_24,(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27 *)0x0);
    }
  }
  pAVar2 = (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_System_IO_Stream_<>c_<BeginReadInternal>b__40_0__);
  Action_2__ctor_m8DB7FCC3AD997F665B9CD9BEC16DD4A0BA4BE89D
            (pAVar2,param_1,
             *(long *)Method_System_IO_Stream_<>c_<EnsureAsyncActiveSemaphoreInitialized>b__4_0__,
             (MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_remove_DisplayRefreshRateChanged_m86971E2283734F2364AACA47B15CC8695DC2CF7E(pAVar2,0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


