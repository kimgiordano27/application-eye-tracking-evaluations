/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 02783224
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values(void)

{
  int *piVar1;
  undefined1 in_CY;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined4 *unaff_x26;
  undefined4 *puVar4;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = unaff_x21;
    thunk_FUN_01e10808(unaff_x22 + (long)(int)unaff_w19 + 4,unaff_x21);
    unaff_w19 = unaff_w19 + 1;
    puVar4 = unaff_x26;
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar4 + 8;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      piVar1 = puVar4 + 2;
      puVar4 = unaff_x26;
    } while (*piVar1 < 0);
    in_stack_00000008._4_4_ = *unaff_x26;
    unaff_x21 = thunk_FUN_01de23e8(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                   (long)&stack0x00000008 + 4);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((unaff_x21 != 0) &&
       (lVar2 = thunk_FUN_01de26bc(unaff_x21,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
    break;
    in_CY = *(uint *)(unaff_x22 + 3) <= unaff_w19;
  }
  uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,0);
}


