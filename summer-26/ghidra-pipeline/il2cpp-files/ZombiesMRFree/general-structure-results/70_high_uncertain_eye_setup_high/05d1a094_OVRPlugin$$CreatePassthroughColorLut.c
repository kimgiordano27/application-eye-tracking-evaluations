/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 05d1a094
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreatePassthroughColorLut(void)

{
  long lVar1;
  long *unaff_x19;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  FUN_05d11a10();
  if (in_stack_00000028 != 0) {
    if ((*(char *)(in_stack_00000028 + 0x38) == '\0') ||
       (lVar1 = *(long *)(in_stack_00000028 + 0x48), lVar1 == 0)) {
      if (in_stack_00000020 == 0) goto LAB_05d1a148;
      if ((*(char *)(in_stack_00000020 + 0x38) == '\0') ||
         (lVar1 = *(long *)(in_stack_00000020 + 0x48), lVar1 == 0)) {
        return 0;
      }
    }
    else {
      if (in_stack_00000020 == 0) goto LAB_05d1a148;
      if ((*(char *)(in_stack_00000020 + 0x38) != '\0') &&
         (*(long *)(in_stack_00000020 + 0x48) != 0)) {
        in_stack_00000008 = *(long *)(in_stack_00000020 + 0x48);
        in_stack_00000010 = lVar1;
        FUN_05d11d94(in_stack_00000018._4_4_,&stack0x00000010,&stack0x00000008);
        return 1;
      }
    }
    if (*unaff_x19 != 0) {
      FUN_05d11cb4(*unaff_x19,lVar1,0);
      return 1;
    }
  }
LAB_05d1a148:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


