/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 060fb58c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  FUN_04529890();
  lVar5 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
      FUN_04529890();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_060fb714;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
      FUN_04529890();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_060fb714;
    }
    puVar2 = PTR_DAT_07a24dc8;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
    }
    else {
      FUN_04529890();
    }
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
    thunk_FUN_036b7ad0();
    uVar3 = FUN_03642a4c(*unaff_x22,5);
    FUN_05d3bc48(uVar3,*(undefined8 *)puVar2,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
    *puVar4 = uVar3;
    thunk_FUN_036b7ad0(puVar4,uVar3);
    return;
  }
LAB_060fb714:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


