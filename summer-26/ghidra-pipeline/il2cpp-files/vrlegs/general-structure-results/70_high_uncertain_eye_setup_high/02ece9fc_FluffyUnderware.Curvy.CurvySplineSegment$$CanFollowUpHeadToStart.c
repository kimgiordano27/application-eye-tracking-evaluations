/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvySplineSegment$$CanFollowUpHeadToStart
ENTRY_POINT: 02ece9fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02eceba4) */

bool FluffyUnderware_Curvy_CurvySplineSegment__CanFollowUpHeadToStart(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  long lVar3;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  char cStack0000000000000050;
  int iStack0000000000000054;
  
  FUN_021b51c4(&stack0x00000030);
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (in_stack_00000008 != 1) {
    if (cStack0000000000000050 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(in_stack_00000000);
  }
  plVar1 = (long *)__cxa_begin_catch(in_stack_00000000);
  lVar3 = *plVar1;
  __cxa_end_catch();
  if (cStack0000000000000050 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  thunk_FUN_01a3b22c(uVar2,(long)&stack0x00000050 + 4,0);
  return iStack0000000000000054 == 0;
}


