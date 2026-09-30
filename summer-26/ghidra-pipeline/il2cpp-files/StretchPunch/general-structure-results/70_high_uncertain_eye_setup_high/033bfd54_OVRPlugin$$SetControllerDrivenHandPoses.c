/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPoses
ENTRY_POINT: 033bfd54
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetControllerDrivenHandPoses(void)

{
  byte bVar1;
  uint in_w8;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *plVar3;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long in_stack_00000040;
  
  if (unaff_w23 < in_w8) {
    plVar3 = (long *)(unaff_x22 + (long)(int)unaff_w23 * 8 + 0x20);
    *plVar3 = unaff_x21;
    thunk_FUN_01e10808(plVar3);
    if (unaff_w23 < *(uint *)(unaff_x22 + 0x18)) {
      lVar2 = *unaff_x28;
      if (lVar2 == 0) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
                    /* try { // try from 033bfd88 to 034bfdbf has its CatchHandler @ 033c0098 */
      if (unaff_w23 < *(uint *)(lVar2 + 0x18)) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) goto LAB_033bec5c;
        bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                    /* try { // try from 033bfdc0 to 034bfea7 has its CatchHandler @ 033bfbb0 */
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c();
        }
        FUN_033b49e8(plVar3,*(undefined8 *)(lVar2 + (long)(int)unaff_w23 * 8 + 0x20),0,0);
        *unaff_x28 = unaff_x22;
        thunk_FUN_01e10808();
        if (*(int *)(in_stack_00000040 + 0x18) != 0) {
          return *unaff_x26;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


