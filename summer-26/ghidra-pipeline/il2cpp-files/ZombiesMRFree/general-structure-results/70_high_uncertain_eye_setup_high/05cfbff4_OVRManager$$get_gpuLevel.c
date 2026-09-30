/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 05cfbff4
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


void OVRManager__get_gpuLevel(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb5a80);
    FUN_02fe925c(PTR_DAT_06fb52e0);
    FUN_02fe925c(PTR_DAT_06fb81f0);
    FUN_02fe925c(PTR_DAT_06fb81f8);
    FUN_02fe925c(PTR_DAT_06fb8250);
    FUN_02fe925c(PTR_DAT_06fb8258);
    FUN_02fe925c(PTR_DAT_06fb8248);
    FUN_02fe925c(PTR_DAT_06f73208);
    *(undefined1 *)(unaff_x20 + 0x761) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0x38) = DAT_0136c558;
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *unaff_x22;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb52e0);
    FUN_057f1be4(lVar6,uVar7,*(undefined8 *)PTR_DAT_06fb8250,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar5 = lVar6;
    thunk_FUN_03048534(plVar5,lVar6);
  }
  *(long *)(unaff_x19 + 0x40) = lVar6;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x40),lVar6);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *unaff_x22;
  }
  puVar3 = PTR_DAT_06fb81f8;
  puVar2 = PTR_DAT_06fb81f0;
  puVar1 = PTR_DAT_06f73208;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb5a80);
    FUN_0511c55c(lVar6,uVar7,*(undefined8 *)PTR_DAT_06fb8258,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar5 = lVar6;
    thunk_FUN_03048534(plVar5,lVar6);
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


