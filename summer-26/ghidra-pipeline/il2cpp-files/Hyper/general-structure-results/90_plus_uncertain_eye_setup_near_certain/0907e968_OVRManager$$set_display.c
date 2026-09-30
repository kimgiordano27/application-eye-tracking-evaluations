/*
FUNCTION_NAME: OVRManager$$set_display
ENTRY_POINT: 0907e968
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

void OVRManager__set_display(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long in_x9;
  long unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x22;
  undefined8 uVar10;
  
  *(undefined4 *)(unaff_x19 + 0x2c) = param_2;
  uVar10 = *(undefined8 *)(in_x9 + 0xbc8);
  uVar9 = *(undefined8 *)(in_x9 + 0xbc0);
  lVar5 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x4c) = *(undefined8 *)(param_1 + 0xf18);
  *(undefined1 *)(unaff_x19 + 0x48) = 1;
  *(undefined8 *)(unaff_x19 + 100) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x5c) = uVar9;
  *(undefined4 *)(unaff_x19 + 0x54) = 0x3fb33333;
  *(undefined8 *)(unaff_x19 + 0x40) = 0x3e99999a3e99999a;
  uVar9 = _DAT_01df0bc0;
  iVar1 = *(int *)(lVar5 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0x74) = _UNK_01df0bc8;
  *(undefined8 *)(unaff_x19 + 0x6c) = uVar9;
  uVar9 = DAT_01da5280;
  *(undefined4 *)(unaff_x19 + 0x84) = 3;
  *(undefined8 *)(unaff_x19 + 0x7c) = uVar9;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
    lVar5 = *unaff_x22;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4cab8);
    FUN_063d5a10(lVar8,uVar9,*(undefined8 *)PTR_DAT_0ac78740,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_049ee3d8(plVar6,lVar8);
  }
  *(long *)(unaff_x19 + 0xa0) = lVar8;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0xa0),lVar8);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *unaff_x22;
  }
  puVar4 = PTR_DAT_0ac78738;
  puVar3 = PTR_DAT_0ac78730;
  puVar2 = PTR_DAT_0ac0f218;
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar7[2];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar7 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac786e8);
    FUN_061122f8(lVar8,uVar9,*(undefined8 *)PTR_DAT_0ac78748,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar6 = lVar8;
    thunk_FUN_049ee3d8(plVar6,lVar8);
  }
  *(long *)(unaff_x19 + 0xa8) = lVar8;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0xa8),lVar8);
  uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
  FUN_07237b84(uVar9,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar9;
  thunk_FUN_049ee3d8(unaff_x19 + 0x120,uVar9);
  uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_0a183320(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar9;
  thunk_FUN_049ee3d8(unaff_x19 + 0x128,uVar9);
  thunk_FUN_0a177cbc();
  return;
}


