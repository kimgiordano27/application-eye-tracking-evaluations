/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$.cctor
ENTRY_POINT: 07521964
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>___cctor
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long *unaff_x21;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(byte *)(param_2 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) == param_2
     )) {
    uVar1 = *(uint *)(unaff_x21 + 4);
    if (0 < (int)uVar1) {
                    /* try { // try from 07521998 to 076219a7 has its CatchHandler @ 07521a60 */
      lVar2 = unaff_x21[3];
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar3 = 0;
      lVar4 = lVar2 + 0x30;
      do {
                    /* try { // try from 075219a8 to 07621a4b has its CatchHandler @ 075215e0 */
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


