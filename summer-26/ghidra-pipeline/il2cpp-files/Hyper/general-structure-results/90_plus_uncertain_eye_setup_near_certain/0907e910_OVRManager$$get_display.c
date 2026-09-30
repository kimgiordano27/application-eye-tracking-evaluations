/*
FUNCTION_NAME: OVRManager$$get_display
ENTRY_POINT: 0907e910
PROGRAM: Hyper-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__get_display(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x22;
  
  FUN_04947ee4(PTR_DAT_0ac78740);
  FUN_04947ee4(PTR_DAT_0ac78748);
  FUN_04947ee4(PTR_DAT_0ac78728);
  FUN_04947ee4(PTR_DAT_0ac0f218);
  *(undefined1 *)(unaff_x20 + 0x12e) = 1;
  *(undefined4 *)(unaff_x19 + 0x28) = 0x3ca3d70a;
  uVar6 = FUN_0a17c8cc(0xffffffff,0);
  *(undefined4 *)(unaff_x19 + 0x2c) = uVar6;
  uVar2 = _UNK_01df2bc8;
  uVar11 = _DAT_01df2bc0;
  lVar7 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x4c) = DAT_01da4f18;
  *(undefined1 *)(unaff_x19 + 0x48) = 1;
  *(undefined8 *)(unaff_x19 + 100) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x5c) = uVar11;
  *(undefined4 *)(unaff_x19 + 0x54) = 0x3fb33333;
  *(undefined8 *)(unaff_x19 + 0x40) = 0x3e99999a3e99999a;
  uVar11 = _DAT_01df0bc0;
  iVar1 = *(int *)(lVar7 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0x74) = _UNK_01df0bc8;
  *(undefined8 *)(unaff_x19 + 0x6c) = uVar11;
  uVar11 = DAT_01da5280;
  *(undefined4 *)(unaff_x19 + 0x84) = 3;
  *(undefined8 *)(unaff_x19 + 0x7c) = uVar11;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
    lVar7 = *unaff_x22;
  }
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar10 = puVar9[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar9 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4cab8);
    FUN_063d5a10(lVar10,uVar11,*(undefined8 *)PTR_DAT_0ac78740,0);
    plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar8 = lVar10;
    thunk_FUN_049ee3d8(plVar8,lVar10);
  }
  *(long *)(unaff_x19 + 0xa0) = lVar10;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0xa0),lVar10);
  lVar7 = *unaff_x22;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar7 = *unaff_x22;
  }
  puVar5 = PTR_DAT_0ac78738;
  puVar4 = PTR_DAT_0ac78730;
  puVar3 = PTR_DAT_0ac0f218;
  puVar9 = *(undefined8 **)(lVar7 + 0xb8);
  lVar10 = puVar9[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar9 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac786e8);
    FUN_061122f8(lVar10,uVar11,*(undefined8 *)PTR_DAT_0ac78748,0);
    plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar8 = lVar10;
    thunk_FUN_049ee3d8(plVar8,lVar10);
  }
  *(long *)(unaff_x19 + 0xa8) = lVar10;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0xa8),lVar10);
  uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar5);
  FUN_07237b84(uVar11,*(undefined8 *)puVar4);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar11;
  thunk_FUN_049ee3d8(unaff_x19 + 0x120,uVar11);
  uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
  FUN_0a183320(uVar11,0);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar11;
  thunk_FUN_049ee3d8(unaff_x19 + 0x128,uVar11);
  thunk_FUN_0a177cbc();
  return;
}


