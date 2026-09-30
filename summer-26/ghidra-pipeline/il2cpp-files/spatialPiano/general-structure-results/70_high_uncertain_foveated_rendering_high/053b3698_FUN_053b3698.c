/*
FUNCTION_NAME: FUN_053b3698
ENTRY_POINT: 053b3698
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void FUN_053b3698(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_067caa70;
  local_88 = param_4;
  uStack_80 = param_5;
  if ((DAT_06bbd745 & 1) == 0) {
    FUN_02f08768(MetaXRAudioSettings_TypeInfo);
    FUN_02f08768(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    FUN_02f08768(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    FUN_02f08768(MetaXRAudioNativeInterface_TypeInfo);
    FUN_02f08768(PTR_DAT_067caa70);
    DAT_06bbd745 = 1;
  }
  puVar5 = Meta_XR_MetaXRFoveationFeature_TypeInfo;
  puVar4 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
  puVar3 = MetaXRAudioSettings_TypeInfo;
  puVar2 = MetaXRAudioNativeInterface_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  local_78 = *param_1;
  uStack_58 = uStack_80;
  local_60 = local_88;
  uStack_70 = param_2;
  local_68 = param_3;
  auVar6 = FUN_0342eebc(&local_78,param_6,param_7,*(undefined8 *)puVar3);
  auVar7 = FUN_0303d044(&local_88,4,*(undefined8 *)puVar2);
  auVar8 = FUN_03435dc4(param_2,param_3,param_3 & 0xffffffff,0x20,auVar6._0_8_,auVar6._8_8_,
                        *(undefined8 *)puVar5);
  auVar6 = FUN_03435d2c(auVar7._0_8_,auVar7._8_8_,auVar7._8_8_ & 0xffffffff,0x20,auVar6._0_8_,
                        auVar6._8_8_,*(undefined8 *)puVar4);
  FUN_060994a0(auVar8._0_8_,auVar8._8_8_,auVar6._0_8_,auVar6._8_8_,0);
  return;
}


