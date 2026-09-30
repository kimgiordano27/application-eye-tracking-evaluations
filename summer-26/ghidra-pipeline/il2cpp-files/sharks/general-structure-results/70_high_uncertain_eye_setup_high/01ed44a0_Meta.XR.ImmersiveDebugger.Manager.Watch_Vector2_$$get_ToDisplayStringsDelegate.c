/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 01ed44a0
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_ToDisplayStringsDelegate(long param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (in_NG == in_OV) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar5 = 0;
    lVar6 = lVar4 + 0x38;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (-1 < *(int *)(lVar6 + -0x18)) {
        lVar1 = thunk_FUN_018617ec(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_01861ac0(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
          uVar3 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar3,0);
        }
        if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        unaff_x22[(long)(int)unaff_w19 + 4] = lVar1;
        thunk_FUN_0188fd20(unaff_x22 + (long)(int)unaff_w19 + 4,lVar1);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x40;
    } while (unaff_x23 != uVar5);
  }
  return;
}


