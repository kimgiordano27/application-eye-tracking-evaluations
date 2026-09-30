/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvySplineSegment.Approximations$$Clear
ENTRY_POINT: 02eced9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ecee48) */

void FluffyUnderware_Curvy_CurvySplineSegment_Approximations__Clear(long param_1)

{
  int iVar1;
  long lVar2;
  int in_w8;
  long unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x22;
  }
  if (**(char **)(param_1 + 0xb8) != '\0') {
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


