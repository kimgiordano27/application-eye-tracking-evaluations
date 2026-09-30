/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 044eea6c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  uVar4 = 0;
  do {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
LAB_044eead8:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x19 == 0) goto LAB_044eead8;
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar2 + lVar3 + 0x20),
                       *(undefined8 *)(lVar2 + lVar3 + 0x28),*(undefined8 *)(unaff_x19 + 0x28));
    if ((uVar1 & 1) == 0) break;
    uVar4 = uVar4 + 1;
    lVar3 = lVar3 + 0x10;
  } while ((long)uVar4 < (long)*(int *)(unaff_x20 + 0x18));
  return uVar1 & 1;
}


