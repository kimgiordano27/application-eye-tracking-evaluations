/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 02782b98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_1 == (long *)0x0) {
    FUN_033b3618();
  }
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(lVar4 + 0x20);
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar6 = 0;
    plVar7 = (long *)(lVar4 + 0x38);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < (int)plVar7[-3]) {
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar5 = *plVar7;
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0)) {
          uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar3,0);
        }
        if (*(uint *)(param_1 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        param_1[(long)(int)unaff_w19 + 4] = lVar5;
        thunk_FUN_01e10808(param_1 + (long)(int)unaff_w19 + 4,lVar5);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 4;
    } while (uVar1 != uVar6);
  }
  return;
}


