/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 05cfc080
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_gpuLevel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(param_1 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb52e0);
    FUN_057f1be4(lVar5,uVar7,*(undefined8 *)PTR_DAT_06fb8250,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_03048534(plVar4,lVar5);
  }
  *(long *)(unaff_x19 + 0x40) = lVar5;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x40),lVar5);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar5 = *unaff_x22;
  }
  puVar3 = PTR_DAT_06fb81f8;
  puVar2 = PTR_DAT_06fb81f0;
  puVar1 = PTR_DAT_06f73208;
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar5 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb5a80);
    FUN_0511c55c(lVar6,uVar7,*(undefined8 *)PTR_DAT_06fb8258,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    thunk_FUN_03048534(plVar4,lVar6);
  }
  *(long *)(unaff_x19 + 0x48) = lVar6;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x48),lVar6);
  uVar7 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
  FUN_049992dc(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x78),uVar7);
  uVar7 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
  FUN_068fe878(uVar7,0);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar7;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x80),uVar7);
  thunk_FUN_068f530c();
  return;
}


