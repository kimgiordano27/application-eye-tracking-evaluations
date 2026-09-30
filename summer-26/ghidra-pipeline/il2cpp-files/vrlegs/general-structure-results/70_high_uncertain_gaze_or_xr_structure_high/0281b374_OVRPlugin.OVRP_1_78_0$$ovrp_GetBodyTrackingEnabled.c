/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 0281b374
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x23;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  in_stack_00000008 = FUN_02ce604c();
  uVar1 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbf0c0,&stack0x00000008);
  if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0271c480(0);
  if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0273a978(uVar1);
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


