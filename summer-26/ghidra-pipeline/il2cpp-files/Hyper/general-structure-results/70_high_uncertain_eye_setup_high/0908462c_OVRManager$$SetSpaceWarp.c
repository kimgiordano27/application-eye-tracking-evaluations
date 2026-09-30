/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 0908462c
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp(long param_1,undefined1 param_2 [16],undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 in_w9;
  long unaff_x19;
  long lVar7;
  long *unaff_x22;
  undefined8 uVar8;
  
  *(undefined8 *)(unaff_x19 + 0x5c) = param_3;
  *(long *)(unaff_x19 + 0x54) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x4c) = param_2._0_8_;
  uVar8 = *(undefined8 *)(param_1 + 0xf20);
  *(undefined4 *)(unaff_x19 + 0x44) = 0x3fb33333;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar8;
  *(ulong *)(unaff_x19 + 0x38) = CONCAT44(in_w9,in_w9);
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  *(undefined4 *)(unaff_x19 + 0x70) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x74) = 1;
  uVar8 = FUN_0a130178(0xbf800000,0,0);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x78),uVar8);
  lVar4 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x84) = 0x41200000;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *unaff_x22;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar6 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4cab8);
    FUN_063d5a10(lVar7,uVar8,*(undefined8 *)PTR_DAT_0ac78768,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_049ee3d8(plVar5,lVar7);
  }
  *(long *)(unaff_x19 + 0x88) = lVar7;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x88),lVar7);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *unaff_x22;
  }
  puVar3 = PTR_DAT_0ac78738;
  puVar2 = PTR_DAT_0ac78730;
  puVar1 = PTR_DAT_0ac0f218;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar6 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac786e8);
    FUN_061122f8(lVar7,uVar8,*(undefined8 *)PTR_DAT_0ac78770,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    thunk_FUN_049ee3d8(plVar5,lVar7);
  }
  *(long *)(unaff_x19 + 0x90) = lVar7;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x90),lVar7);
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
  FUN_07237b84(uVar8,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar8;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xd8),uVar8);
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_0a183320(uVar8,0);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar8;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xe0),uVar8);
  thunk_FUN_0a177cbc();
  return;
}


