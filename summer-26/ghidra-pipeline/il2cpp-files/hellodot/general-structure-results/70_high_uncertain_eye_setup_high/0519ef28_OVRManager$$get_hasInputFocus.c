/*
FUNCTION_NAME: OVRManager$$get_hasInputFocus
ENTRY_POINT: 0519ef28
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_hasInputFocus
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_6) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
      goto LAB_0519ef64;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0519ef64:
  fVar5 = (float)(*(code *)*puVar2)();
  if (unaff_x19 != 0) {
    uVar3 = FUN_0519de2c((unaff_s10 - param_4) * (unaff_s10 - param_4) +
                         (unaff_s8 - fVar5) * (unaff_s8 - fVar5) +
                         (unaff_s9 - param_3) * (unaff_s9 - param_3));
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_036c49a0();
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


