/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 06946748
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_tiledMultiResSupported(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x24;
  
  FUN_04de85b0(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  lVar2 = *unaff_x24;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *unaff_x24;
  }
  puVar1 = PTR_DAT_084b6528;
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar6 = puVar4[4];
  if (lVar6 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar4 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar7 = *puVar4;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6540);
    FUN_049639e4(lVar6,uVar7,*(undefined8 *)PTR_DAT_084b6548,0);
    plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20);
    *plVar3 = lVar6;
    thunk_FUN_03afed3c(plVar3,lVar6);
  }
  FUN_044d3220(uVar5,lVar6,*(undefined8 *)puVar1);
  FUN_04de87c0();
  lVar2 = *unaff_x24;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *unaff_x24;
  }
  puVar1 = PTR_DAT_084b6530;
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar6 = puVar4[5];
  if (lVar6 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar4 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar7 = *puVar4;
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6538);
    FUN_049639e4(lVar6,uVar7,*(undefined8 *)PTR_DAT_084b6550,0);
    plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x28);
    *plVar3 = lVar6;
    thunk_FUN_03afed3c(plVar3,lVar6);
  }
  FUN_044d3220(uVar5,lVar6,*(undefined8 *)puVar1);
  FUN_04de87c0();
  return;
}


