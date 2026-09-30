/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 060c4898
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__OnApplicationFocus(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x19;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  if (in_stack_00000020 != 0) {
    if ((*(char *)(in_stack_00000020 + 0x38) == '\0') || (*(long *)(in_stack_00000020 + 0x48) == 0))
    {
      if (*unaff_x19 == 0) goto LAB_060c4928;
      FUN_060be5d8(*unaff_x19,param_2,0);
    }
    else {
      in_stack_00000008 = *(long *)(in_stack_00000020 + 0x48);
      in_stack_00000010 = param_2;
      FUN_060be6b8(in_stack_00000018._4_4_,&stack0x00000010,&stack0x00000008);
    }
    return 1;
  }
LAB_060c4928:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


