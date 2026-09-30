/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers
ENTRY_POINT: 0511b258
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined1
OVRManager__OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06780a48;
  if ((DAT_06b79bc7 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780a50);
    FUN_02d6084c(PTR_DAT_06780a48);
    FUN_02d6084c(PTR_DAT_0677eae0);
    DAT_06b79bc7 = 1;
  }
  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0504920c(lVar3,0);
  puVar1 = PTR_DAT_0677eae0;
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x10) = 1;
    puVar2 = PTR_DAT_06780a50;
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    OVRManager__OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
              (uVar4,lVar3,*(undefined8 *)puVar2);
    FUN_0511b430(param_1,param_2,uVar4);
    return *(undefined1 *)(lVar3 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


