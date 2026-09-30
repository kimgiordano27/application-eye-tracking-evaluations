/*
FUNCTION_NAME: FUN_073a91bc
ENTRY_POINT: 073a91bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void FUN_073a91bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
  if ((DAT_08269578 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07da0988);
    FUN_0373b518(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    FUN_0373b518(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    DAT_08269578 = 1;
  }
  lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_062855bc(lVar3,0);
  puVar2 = Meta_XR_MetaXRFoveationFeature_TypeInfo;
  puVar1 = PTR_DAT_07da0988;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x10),param_1);
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x18),param_3);
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    thunk_FUN_037aeb94((undefined8 *)(lVar3 + 0x20),param_2);
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_059b2670(uVar4,lVar3,*(undefined8 *)puVar2,0);
    FUN_073a92b0(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


