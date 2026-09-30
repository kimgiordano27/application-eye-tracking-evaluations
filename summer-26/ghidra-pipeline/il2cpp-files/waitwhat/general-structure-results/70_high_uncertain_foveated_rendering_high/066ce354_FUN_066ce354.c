/*
FUNCTION_NAME: FUN_066ce354
ENTRY_POINT: 066ce354
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void FUN_066ce354(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar8 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
  puVar7 = UnityEngine_XR_Hands_MetaAimHand_TypeInfo;
  puVar6 = Oculus_Platform_MessageWithUserReportID_TypeInfo;
  puVar5 = Oculus_Platform_MessageWithUserProof_TypeInfo;
  puVar4 = Oculus_Platform_MessageWithUserList_TypeInfo;
  puVar3 = Oculus_Platform_MessageWithUserCapabilityList_TypeInfo;
  puVar2 = System_IO_MemoryMappedFiles_MemoryMappedFile_TypeInfo;
  puVar1 = System_MemoryExtensions_TypeInfo;
  if ((DAT_07558168 & 1) == 0) {
    FUN_03188a78(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    FUN_03188a78(System_Reflection_Metadata_MetadataReader_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Hands_MetaAimHand_TypeInfo);
    FUN_03188a78(System_Reflection_Metadata_MetadataReaderProvider_TypeInfo);
    FUN_03188a78(Oculus_Platform_MessageWithUserProof_TypeInfo);
    FUN_03188a78(System_IO_MemoryMappedFiles_MemoryMappedFile_TypeInfo);
    FUN_03188a78(System_Reflection_Metadata_MetadataStringDecoder_TypeInfo);
    FUN_03188a78(Oculus_Platform_MessageWithUserReportID_TypeInfo);
    FUN_03188a78(Oculus_Platform_MessageWithUserCapabilityList_TypeInfo);
    FUN_03188a78(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    FUN_03188a78(Oculus_Platform_MessageWithUserList_TypeInfo);
    FUN_03188a78(System_MemoryExtensions_TypeInfo);
    FUN_03188a78(System_Reflection_Metadata_Ecma335_MetadataTokens_TypeInfo);
    DAT_07558168 = 1;
  }
  FUN_03a52cfc(param_1,param_1 + 0x48,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_03a52cfc(param_1,param_1 + 0x58,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_03a52cfc(param_1,param_1 + 0x68,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_03a52ca8(param_1,param_1 + 0x78,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar3)
  ;
  FUN_03a52ca8(param_1,param_1 + 0x88,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar3)
  ;
  FUN_03a52ce8(param_1,param_1 + 0x98,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar4)
  ;
  Oculus_Avatar2_OvrAvatarHelperExtensions__GetPtr<OvrAvatarMaterialExtension_ExtensionEntry<int>>
            (param_1,param_1 + 0xa8,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar5);
  FUN_03a52af8(param_1,param_1 + 0xb8,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar6)
  ;
  FUN_03a52ad0(param_1,param_1 + 200,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar2);
  FUN_03a529c0(param_1,param_1 + 0x148,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar7
              );
  FUN_03a529ac(param_1,param_1 + 0xd8,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)System_Reflection_Metadata_MetadataReader_TypeInfo);
  FUN_03a52a7c(param_1,param_1 + 0xe8,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)System_Reflection_Metadata_MetadataReaderProvider_TypeInfo);
  FUN_03a52ae4(param_1,param_1 + 0xf8,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)System_Reflection_Metadata_MetadataStringDecoder_TypeInfo);
  FUN_03a52cbc(param_1,param_1 + 0x108,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar8
              );
  FUN_03a52d28(param_1,param_1 + 0x118,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)System_Reflection_Metadata_Ecma335_MetadataTokens_TypeInfo);
  FUN_03a52cbc(param_1,param_1 + 0x128,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar8
              );
  Oculus_Avatar2_OvrAvatarHelperExtensions__GetIntPtr<CAPI_ovrAvatar2Vector4us>
            (param_1,param_1 + 0x138,param_2,*(undefined4 *)(param_1 + 0x10),
             *(undefined8 *)Meta_XR_MetaXRFoveationFeature_TypeInfo);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


