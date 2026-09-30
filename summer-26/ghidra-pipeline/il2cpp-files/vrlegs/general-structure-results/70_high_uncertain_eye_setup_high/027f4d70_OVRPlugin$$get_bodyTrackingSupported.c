/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 027f4d70
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1 OVRPlugin__get_bodyTrackingSupported(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x23;
  long *in_stack_00000038;
  undefined8 in_stack_00000048;
  
  if (in_stack_00000038 != (long *)0x0) {
    lVar2 = *in_stack_00000038;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto code_r0x027f4dc4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec(in_stack_00000038,*unaff_x23,0);
code_r0x027f4dc4:
    (*(code *)*puVar1)(in_stack_00000038,puVar1[1]);
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (unaff_w20 == 1) {
    __cxa_begin_catch();
    __cxa_end_catch();
    FUN_019a6f90();
    return in_stack_00000048._4_1_;
  }
  FUN_019a6f90();
                    /* WARNING: Subroutine does not return */
  FUN_01b3fef0();
}


