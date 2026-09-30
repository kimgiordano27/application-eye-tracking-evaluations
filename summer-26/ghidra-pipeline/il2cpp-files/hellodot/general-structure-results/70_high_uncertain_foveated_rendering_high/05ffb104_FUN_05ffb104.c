/*
FUNCTION_NAME: FUN_05ffb104
ENTRY_POINT: 05ffb104
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void FUN_05ffb104(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar6 = Google_Protobuf_WellKnownTypes_Method_TypeInfo;
  puVar5 = Firebase_Crashlytics_MetadataBuilder_TypeInfo;
  puVar4 = Firebase_Crashlytics_Metadata_TypeInfo;
  puVar3 = Niantic_Peridot_Xr_Meta_MetaXrManager_TypeInfo;
  puVar2 = Meta_XR_MetaXRFoveationFeature_TypeInfo;
  puVar1 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
  if ((DAT_06a824c4 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_WellKnownTypes_Method_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Firebase_Crashlytics_Metadata_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Xr_Meta_MetaXrManager_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Firebase_Crashlytics_MetadataBuilder_TypeInfo);
    DAT_06a824c4 = 1;
  }
  FUN_04f7383c(param_1,0);
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_03967c6c(uVar7,0x10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_0405783c(uVar7,0x2000,0x800,0x10000,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
  FUN_04057198(uVar7,0x4000,0x1000,0x20000,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  return;
}


