/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 07c5b288
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRManager__get_isPowerSavingActive
          (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_044822ac();
      goto LAB_07c5b2b0;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_5);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_07c5b2b0:
  auVar4 = (*(code *)*puVar3)();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    auVar4 = FUN_094bab0c(auVar4._0_8_,*(long *)(unaff_x19 + 0x40),0);
  }
  uVar6 = auVar4._8_8_;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_094bab0c(param_3,*(long *)(unaff_x19 + 0x38),0);
  }
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = auVar4._0_8_;
  return auVar5;
}


