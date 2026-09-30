/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 05322374
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetDeveloperMode(undefined1 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  int unaff_w19;
  long lVar3;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long in_stack_00000030;
  
  do {
    uVar2 = FUN_04aff1b0(param_1,param_2);
    lVar1 = in_stack_00000030;
    if ((uVar2 & 1) == 0) {
      FUN_04aff1ac(&stack0x00000020,*unaff_x23);
      return unaff_x20;
    }
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = unaff_x20;
    if ((*(int *)(in_stack_00000030 + 0x10) == unaff_w19) &&
       ((*(uint *)(in_stack_00000030 + 0x20) == 0 ||
        ((*(uint *)(in_stack_00000030 + 0x20) & unaff_w21) != 0)))) {
      uVar2 = FUN_04f6ebb4(*(undefined8 *)(in_stack_00000030 + 0x18),0);
      if ((uVar2 & 1) == 0) {
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar2 = FUN_04f6d65c();
        if ((uVar2 & 1) != 0) {
          FUN_04aff1ac(&stack0x00000020,*unaff_x23);
          return lVar1;
        }
      }
      else {
        lVar3 = lVar1;
        if (unaff_x20 != 0) {
          lVar3 = unaff_x20;
        }
      }
    }
    param_2 = *unaff_x24;
    param_1 = &stack0x00000020;
    unaff_x20 = lVar3;
  } while( true );
}


