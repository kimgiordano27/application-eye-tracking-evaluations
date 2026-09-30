/*
FUNCTION_NAME: OVRPlugin$$IsPositionValid
ENTRY_POINT: 053164c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsPositionValid(undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar2;
  undefined8 *unaff_x22;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if (param_2 != 1) {
    FUN_02e5139c(&stack0x00000078);
                    /* WARNING: Subroutine does not return */
    FUN_02ff761c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  in_stack_00000078 = lVar2;
  __cxa_end_catch();
  FUN_04b633b4(in_stack_00000080,*unaff_x22);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0(lVar2);
  }
  *(undefined8 *)(unaff_x19 + 0x130) = unaff_x20;
  return;
}


