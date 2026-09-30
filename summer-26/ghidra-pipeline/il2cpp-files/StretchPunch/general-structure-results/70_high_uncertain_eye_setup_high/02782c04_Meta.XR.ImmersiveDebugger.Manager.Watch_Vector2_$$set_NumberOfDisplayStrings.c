/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 02782c04
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(void)

{
  long *plVar1;
  undefined1 in_CY;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  long *plVar4;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    unaff_x21[(long)(int)unaff_w19 + 4] = unaff_x20;
    thunk_FUN_01e10808(unaff_x21 + (long)(int)unaff_w19 + 4,unaff_x20);
    unaff_w19 = unaff_w19 + 1;
    plVar4 = unaff_x25;
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = plVar4 + 4;
      if (unaff_x22 == unaff_x24) {
        return;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar1 = plVar4 + 1;
      plVar4 = unaff_x25;
    } while ((int)*plVar1 < 0);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    unaff_x20 = *unaff_x25;
    if ((unaff_x20 != 0) &&
       (lVar2 = thunk_FUN_01de26bc(unaff_x20,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0))
    break;
    in_CY = *(uint *)(unaff_x21 + 3) <= unaff_w19;
  }
  uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,0);
}


