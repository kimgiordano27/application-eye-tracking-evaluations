/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 07c56d84
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_runtimeSettings(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  
  thunk_FUN_044a54b4();
  lVar4 = *unaff_x22;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar4 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f205c8);
    FUN_0554c1d8(lVar6,uVar7,*(undefined8 *)PTR_DAT_09f4ff78,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar5 = lVar6;
    thunk_FUN_044bb4b4(plVar5,lVar6);
  }
  *(long *)(unaff_x19 + 0x40) = lVar6;
  thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x40),lVar6);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar4 = *unaff_x22;
  }
  puVar3 = PTR_DAT_09f4ff20;
  puVar2 = PTR_DAT_09f4ff18;
  puVar1 = PTR_DAT_09f1f370;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar4 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f4fed0);
    FUN_0757a6a8(lVar6,uVar7,*(undefined8 *)PTR_DAT_09f4ff80,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar5 = lVar6;
    thunk_FUN_044bb4b4(plVar5,lVar6);
  }
  *(long *)(unaff_x19 + 0x48) = lVar6;
  thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x48),lVar6);
  uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_0638d294(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x78),uVar7);
  uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_095328fc(uVar7,0);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar7;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x80),uVar7);
  FUN_0952dd08();
  return;
}


