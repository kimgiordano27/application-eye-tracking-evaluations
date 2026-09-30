/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 05cfa570
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__add_PassthroughLayerResumed(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long *unaff_x22;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x228));
  FUN_02fe925c(PTR_DAT_06fb8230);
  FUN_02fe925c(PTR_DAT_06fb8220);
  FUN_02fe925c(PTR_DAT_06f73208);
  *(undefined1 *)(unaff_x20 + 0x756) = 1;
  uVar2 = _UNK_0136dc38;
  uVar1 = _DAT_0136dc30;
  *(undefined8 *)(unaff_x19 + 0x38) = 0x3e99999a3e99999a;
  uVar6 = DAT_0136c630;
  *(undefined4 *)(unaff_x19 + 0x44) = 0x3fb33333;
  *(undefined8 *)(unaff_x19 + 0x5c) = uVar6;
  uVar6 = DAT_0136c370;
  *(undefined8 *)(unaff_x19 + 0x54) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x4c) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar6;
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  *(undefined4 *)(unaff_x19 + 0x70) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x74) = 1;
  uVar6 = FUN_068b6b38(0xbf800000,0,0x3f800000,0,0);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar6;
  thunk_FUN_03048534();
  lVar7 = *unaff_x22;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar7 = *unaff_x22;
  }
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb52e0);
    FUN_057f1be4(lVar9,uVar6,*(undefined8 *)PTR_DAT_06fb8228,0);
    plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar8 = lVar9;
    thunk_FUN_03048534(plVar8,lVar9);
  }
  *(long *)(unaff_x19 + 0x88) = lVar9;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x88),lVar9);
  lVar7 = *unaff_x22;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar7 = *unaff_x22;
  }
  puVar5 = PTR_DAT_06fb81f8;
  puVar4 = PTR_DAT_06fb81f0;
  puVar3 = PTR_DAT_06f73208;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb5a80);
    FUN_0511c55c(lVar9,uVar6,*(undefined8 *)PTR_DAT_06fb8230,0);
    plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar8 = lVar9;
    thunk_FUN_03048534(plVar8,lVar9);
  }
  *(long *)(unaff_x19 + 0x90) = lVar9;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x90),lVar9);
  uVar6 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
  FUN_049992dc(uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar6;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xd8),uVar6);
  uVar6 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
  FUN_068fe878(uVar6,0);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar6;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xe0),uVar6);
  thunk_FUN_068f530c();
  return;
}


