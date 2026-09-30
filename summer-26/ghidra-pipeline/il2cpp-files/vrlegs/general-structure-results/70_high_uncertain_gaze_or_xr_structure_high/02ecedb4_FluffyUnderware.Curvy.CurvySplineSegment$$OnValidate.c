/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvySplineSegment$$OnValidate
ENTRY_POINT: 02ecedb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02ecee48) */

void FluffyUnderware_Curvy_CurvySplineSegment__OnValidate(void)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar1 = FUN_02217a2c();
  if (iVar1 == -1) {
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219eaf8();
  }
  if (*(char *)(unaff_x20 + 0x30) != '\0') {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
      FUN_027e10a8(lVar2,0);
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


