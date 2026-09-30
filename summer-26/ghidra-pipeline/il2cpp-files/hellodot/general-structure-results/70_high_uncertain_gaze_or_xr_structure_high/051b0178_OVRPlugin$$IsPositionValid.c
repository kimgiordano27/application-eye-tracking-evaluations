/*
FUNCTION_NAME: OVRPlugin$$IsPositionValid
ENTRY_POINT: 051b0178
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsPositionValid(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_x9;
  int *in_x10;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02ce0a7c();
      goto FUN_051b01a0;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
FUN_051b01a0:
  auVar5 = (*(code *)*puVar3)();
  uVar4 = auVar5._8_8_;
  if (unaff_x22 != 0) {
    uVar4 = *unaff_x20;
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    *(int *)(unaff_x22 + 0x20) = auVar5._0_4_;
    *(undefined4 *)(unaff_x22 + 0x24) = in_stack_00000008._4_4_;
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      FUN_051b2518(*(long *)(unaff_x22 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c(auVar5._0_8_,uVar4);
}


