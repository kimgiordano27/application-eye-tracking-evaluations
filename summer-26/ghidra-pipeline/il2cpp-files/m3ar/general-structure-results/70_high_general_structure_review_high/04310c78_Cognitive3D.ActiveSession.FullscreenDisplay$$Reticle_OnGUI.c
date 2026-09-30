/*
FUNCTION_NAME: Cognitive3D.ActiveSession.FullscreenDisplay$$Reticle_OnGUI
ENTRY_POINT: 04310c78
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Cognitive3D_ActiveSession_FullscreenDisplay__Reticle_OnGUI
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  
code_r0x04310c78:
  *(int *)(unaff_x19 + 0x1c) = in_w10;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)uVar1 * 0x10;
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(undefined8 *)(param_1 + 0x28) = param_4;
  }
  else {
    FUN_05814554();
  }
  do {
    unaff_w23 = unaff_w23 + 1;
    if (*(int *)(unaff_x22 + 0x18) <= unaff_w23) {
      return;
    }
    FUN_05814254();
    uVar2 = FUN_0428370c();
    if (((uVar2 & 1) == 0) || (uVar2 = FUN_0428370c(), (uVar2 & 1) == 0)) {
      FUN_05814254();
      uVar2 = FUN_0428370c();
      if (((uVar2 & 1) != 0) || (uVar2 = FUN_0428370c(), (uVar2 & 1) != 0)) break;
      FUN_05814254();
      FUN_05814254();
    }
    else {
      FUN_05814254();
      FUN_05814254();
    }
    FUN_058142a8();
  } while( true );
  param_3 = *(undefined8 *)(unaff_x20 + 0x10);
  param_4 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1 = *(long *)(unaff_x19 + 0x10);
  in_w10 = *(int *)(unaff_x19 + 0x1c) + 1;
  goto code_r0x04310c78;
}


