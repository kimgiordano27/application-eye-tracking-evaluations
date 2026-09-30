/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvySplineSegment$$DoInitialValidations
ENTRY_POINT: 02eceb5c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02eceba4) */

bool FluffyUnderware_Curvy_CurvySplineSegment__DoInitialValidations(void)

{
  bool in_ZR;
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  char cStack0000000000000050;
  int iStack0000000000000054;
  
  if (!in_ZR) {
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


