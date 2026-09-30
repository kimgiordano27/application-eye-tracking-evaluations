/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 07521958
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *unaff_x21;
  ulong uVar3;
  long lVar4;
  
  lVar2 = FUN_04481fb8(param_2);
  if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
    uVar1 = *(uint *)(unaff_x21 + 4);
    if (0 < (int)uVar1) {
      lVar2 = unaff_x21[3];
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar3 = 0;
      lVar4 = lVar2 + 0x30;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (-1 < *(int *)(lVar4 + -0x10)) {
          FUN_07523178();
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x38;
      } while (uVar1 != uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_044481e4();
}


