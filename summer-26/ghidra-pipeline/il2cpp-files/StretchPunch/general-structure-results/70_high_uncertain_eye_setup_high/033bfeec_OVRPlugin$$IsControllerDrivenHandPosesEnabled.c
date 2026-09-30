/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 033bfeec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__IsControllerDrivenHandPosesEnabled(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int in_w8;
  long in_x9;
  undefined8 uVar5;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long in_stack_00000040;
  
  if (in_w8 != 0) {
    uVar5 = *(undefined8 *)(in_x9 + 0x20);
                    /* try { // try from 033bff04 to 034bff2f has its CatchHandler @ 033c0154 */
    lVar2 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    if ((*unaff_x28 == 0) || (lVar2 == 0)) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(uint *)(lVar2 + 0x20) = *(int *)(*unaff_x28 + 0x18) - unaff_w23;
      lVar2 = thunk_FUN_033b4750(uVar5,lVar2,0);
      if (unaff_x22 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01de26bc(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar5,0);
      }
      if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
        plVar4 = unaff_x22 + (long)(int)unaff_w23 + 4;
        *plVar4 = lVar2;
        thunk_FUN_01e10808(plVar4,lVar2);
        if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
          lVar2 = *unaff_x28;
          if (lVar2 == 0) goto LAB_033bec5c;
          plVar4 = (long *)*plVar4;
          if (plVar4 != (long *)0x0) {
                    /* try { // try from 033bff98 to 034bffcb has its CatchHandler @ 033c00a0 */
            bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(plVar4);
            }
          }
          FUN_033b4f38(lVar2,unaff_w23,plVar4,0,*(int *)(lVar2 + 0x18) - unaff_w23,0);
          *unaff_x28 = (long)unaff_x22;
          thunk_FUN_01e10808();
          if (*(int *)(in_stack_00000040 + 0x18) != 0) {
            return *unaff_x26;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


