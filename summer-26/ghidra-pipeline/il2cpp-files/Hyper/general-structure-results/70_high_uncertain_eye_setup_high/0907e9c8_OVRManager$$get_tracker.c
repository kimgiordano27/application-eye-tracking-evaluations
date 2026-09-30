/*
FUNCTION_NAME: OVRManager$$get_tracker
ENTRY_POINT: 0907e9c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tracker(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  int in_w9;
  long unaff_x19;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  
  if (in_w9 == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x22;
  }
  puVar5 = *(undefined8 **)(param_1 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar8 = *puVar5;
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4cab8);
    FUN_063d5a10(lVar6,uVar8,*(undefined8 *)PTR_DAT_0ac78740,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_049ee3d8(plVar4,lVar6);
  }
  *(long *)(unaff_x19 + 0xa0) = lVar6;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0xa0),lVar6);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *unaff_x22;
  }
  puVar3 = PTR_DAT_0ac78738;
  puVar2 = PTR_DAT_0ac78730;
  puVar1 = PTR_DAT_0ac0f218;
  puVar5 = *(undefined8 **)(lVar6 + 0xb8);
  lVar7 = puVar5[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar8 = *puVar5;
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac786e8);
    FUN_061122f8(lVar7,uVar8,*(undefined8 *)PTR_DAT_0ac78748,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar7;
    thunk_FUN_049ee3d8(plVar4,lVar7);
  }
  *(long *)(unaff_x19 + 0xa8) = lVar7;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0xa8),lVar7);
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
  FUN_07237b84(uVar8,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar8;
  thunk_FUN_049ee3d8(unaff_x19 + 0x120,uVar8);
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_0a183320(uVar8,0);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar8;
  thunk_FUN_049ee3d8(unaff_x19 + 0x128,uVar8);
  thunk_FUN_0a177cbc();
  return;
}


