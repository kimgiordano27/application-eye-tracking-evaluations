/*
FUNCTION_NAME: FUN_03a0edb8
ENTRY_POINT: 03a0edb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_03a0edb8(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_0422fd68;
  if ((DAT_0453a2c8 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_CustomStyleResolvedEvent_<>c_<_cctor>b__0_0__);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(Method_CTFGameMode_<RoundWinner>d__11_System_Collections_IEnumerator_Reset__);
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<int>__
                );
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ReleaseSharedTexture__
                );
    FUN_01c5d288(
                Method_Calibration_<SetupCalibrationObjects>d__42_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(Method_System_Data_SqlTypes_SqlInt32_get_Value__);
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<long>__
                );
    FUN_01c5d288(PTR_DAT_04230f58);
    FUN_01c5d288(
                Method_VoxelBusters_CoreLibrary_CallbackDispatcher_<>c__DisplayClass6_0_<InvokeOnMainThread>b__0__
                );
    FUN_01c5d288(Method_UnityEngine_ResourceManagement_ResourceManager_OnInstanceOperationDestroy__)
    ;
    FUN_01c5d288(
                Method_Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_<PublicToMono>b__0__
                );
    FUN_01c5d288(
                Method_AeLa_EasyFeedback_Demo_CallbackTest_<FadeCoroutine>d__6_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(Method_CameraShakeSimpleScript_<Shake>d__5_System_Collections_IEnumerator_Reset__);
    FUN_01c5d288(Method_CanvasEventSetter_<Start>d__4_System_Collections_IEnumerator_Reset__);
    FUN_01c5d288(PTR_DAT_042316c0);
    FUN_01c5d288(Method_UnityEngine_ResourceManagement_ResourceManager_ProvideScene__);
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_UpdateResourceAllocationAndSynchronization__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<BinaryStorageBuffer_ObjectTypeData>__
                );
    FUN_01c5d288(Method_CTFFlag_<LetGoOnDeath>d__32_System_Collections_IEnumerator_Reset__);
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<BinaryStorageBuffer_TypeSerializer_Data>__
                );
    FUN_01c5d288(Method_System_Net_Configuration_RequestCachingSection_set_DisableAllCaching__);
    FUN_01c5d288(Method_System_Net_Cache_RequestCacheValidator_CreateValidator__);
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValueArray<uint>__
                );
    FUN_01c5d288(
                Method_RootMotion_Demos_CharacterThirdPerson_<JumpSmooth>d__74_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_TryGetCachedValue<object>__
                );
    FUN_01c5d288(Method_System_Net_Configuration_RequestCachingSection_DeserializeElement__);
    FUN_01c5d288(Method_ChatGameMode_<Start>d__2_System_Collections_IEnumerator_Reset__);
    FUN_01c5d288(Method_System_Net_Configuration_RequestCachingSection_set_IsPrivateCache__);
    FUN_01c5d288(Method_UnityEngine_AddressableAssets_CheckCatalogsOperation_<>c_<Start>b__5_0__);
    FUN_01c5d288(Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader__ctor__);
    FUN_01c5d288(Method_UnityEngine_ClassLibraryInitializer_<>c_<InitAssemblyRedirections>b__2_0__);
    DAT_0453a2c8 = 1;
  }
  lVar3 = FUN_01c5d2fc(*(undefined8 *)puVar2,0x1e);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((((((((uVar1 != 0) &&
             (*(undefined8 *)(lVar3 + 0x20) =
                   *(undefined8 *)
                    Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<BinaryStorageBuffer_ObjectTypeData>__
             , uVar1 != 1)) &&
            (*(undefined8 *)(lVar3 + 0x28) =
                  *(undefined8 *)
                   Method_System_Net_Configuration_RequestCachingSection_DeserializeElement__,
            2 < uVar1)) &&
           (((*(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04230f58, uVar1 != 3 &&
             (*(undefined8 *)(lVar3 + 0x38) =
                   *(undefined8 *)
                    Method_AeLa_EasyFeedback_Demo_CallbackTest_<FadeCoroutine>d__6_System_Collections_IEnumerator_Reset__
             , 4 < uVar1)) &&
            ((*(undefined8 *)(lVar3 + 0x40) =
                   *(undefined8 *)
                    Method_Calibration_<SetupCalibrationObjects>d__42_System_Collections_IEnumerator_Reset__
             , uVar1 != 5 &&
             ((*(undefined8 *)(lVar3 + 0x48) =
                    *(undefined8 *)
                     Method_UnityEngine_AddressableAssets_CheckCatalogsOperation_<>c_<Start>b__5_0__
              , 6 < uVar1 &&
              (*(undefined8 *)(lVar3 + 0x50) =
                    *(undefined8 *)
                     Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_UpdateResourceAllocationAndSynchronization__
              , uVar1 != 7)))))))) &&
          (*(undefined8 *)(lVar3 + 0x58) =
                *(undefined8 *)Method_System_Data_SqlTypes_SqlInt32_get_Value__, 8 < uVar1)) &&
         (((*(undefined8 *)(lVar3 + 0x60) =
                 *(undefined8 *)
                  Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader__ctor__,
           uVar1 != 9 &&
           (*(undefined8 *)(lVar3 + 0x68) =
                 *(undefined8 *)
                  Method_VoxelBusters_CoreLibrary_CallbackDispatcher_<>c__DisplayClass6_0_<InvokeOnMainThread>b__0__
           , 10 < uVar1)) &&
          (*(undefined8 *)(lVar3 + 0x70) =
                *(undefined8 *)
                 Method_Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_<PublicToMono>b__0__
          , uVar1 != 0xb)))) &&
        (((*(undefined8 *)(lVar3 + 0x78) =
                *(undefined8 *)Method_System_Net_Cache_RequestCacheValidator_CreateValidator__,
          0xc < uVar1 &&
          (*(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)PTR_DAT_042316c0, uVar1 != 0xd)) &&
         ((*(undefined8 *)(lVar3 + 0x88) =
                *(undefined8 *)
                 Method_UnityEngine_ResourceManagement_ResourceManager_OnInstanceOperationDestroy__,
          0xe < uVar1 &&
          ((*(undefined8 *)(lVar3 + 0x90) =
                 *(undefined8 *)
                  Method_ChatGameMode_<Start>d__2_System_Collections_IEnumerator_Reset__,
           uVar1 != 0xf &&
           (*(undefined8 *)(lVar3 + 0x98) =
                 *(undefined8 *)
                  Method_RootMotion_Demos_CharacterThirdPerson_<JumpSmooth>d__74_System_Collections_IEnumerator_Reset__
           , 0x10 < uVar1)))))))) &&
       (((*(undefined8 *)(lVar3 + 0xa0) =
               *(undefined8 *)
                Method_CameraShakeSimpleScript_<Shake>d__5_System_Collections_IEnumerator_Reset__,
         uVar1 != 0x11 &&
         (((((*(undefined8 *)(lVar3 + 0xa8) =
                   *(undefined8 *)
                    Method_UnityEngine_ClassLibraryInitializer_<>c_<InitAssemblyRedirections>b__2_0__
             , 0x12 < uVar1 &&
             (*(undefined8 *)(lVar3 + 0xb0) =
                   *(undefined8 *)
                    Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<BinaryStorageBuffer_TypeSerializer_Data>__
             , uVar1 != 0x13)) &&
            (*(undefined8 *)(lVar3 + 0xb8) =
                  *(undefined8 *)
                   Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValueArray<uint>__
            , 0x14 < uVar1)) &&
           ((*(undefined8 *)(lVar3 + 0xc0) =
                  *(undefined8 *)
                   Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_TryGetCachedValue<object>__
            , uVar1 != 0x15 &&
            (*(undefined8 *)(lVar3 + 200) =
                  *(undefined8 *)
                   Method_CTFFlag_<LetGoOnDeath>d__32_System_Collections_IEnumerator_Reset__,
            0x16 < uVar1)))) &&
          ((*(undefined8 *)(lVar3 + 0xd0) =
                 *(undefined8 *)
                  Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<long>__
           , uVar1 != 0x17 &&
           ((*(undefined8 *)(lVar3 + 0xd8) =
                  *(undefined8 *)
                   Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ReleaseSharedTexture__
            , 0x18 < uVar1 &&
            (*(undefined8 *)(lVar3 + 0xe0) =
                  *(undefined8 *)
                   Method_System_Net_Configuration_RequestCachingSection_set_IsPrivateCache__,
            uVar1 != 0x19)))))))) &&
        ((*(undefined8 *)(lVar3 + 0xe8) =
               *(undefined8 *)
                Method_CTFGameMode_<RoundWinner>d__11_System_Collections_IEnumerator_Reset__,
         0x1a < uVar1 &&
         (((*(undefined8 *)(lVar3 + 0xf0) =
                 *(undefined8 *)
                  Method_UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_ReadValue<int>__
           , uVar1 != 0x1b &&
           (*(undefined8 *)(lVar3 + 0xf8) =
                 *(undefined8 *)Method_UnityEngine_ResourceManagement_ResourceManager_ProvideScene__
           , 0x1c < uVar1)) &&
          (*(undefined8 *)(lVar3 + 0x100) =
                *(undefined8 *)
                 Method_CanvasEventSetter_<Start>d__4_System_Collections_IEnumerator_Reset__,
          puVar2 = Method_UnityEngine_UIElements_CustomStyleResolvedEvent_<>c_<_cctor>b__0_0__,
          uVar1 != 0x1d)))))))) {
      *(undefined8 *)(lVar3 + 0x108) =
           *(undefined8 *)
            Method_System_Net_Configuration_RequestCachingSection_set_DisableAllCaching__;
      **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


