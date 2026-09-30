/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 047572cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__Dispose(void)

{
  uint uVar1;
  bool in_ZR;
  long unaff_x21;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x20);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(unaff_x21 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar3 = 0;
    lVar4 = lVar2 + 0x38;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (-1 < *(int *)(lVar4 + -0x18)) {
        FUN_04758478();
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar1 != uVar3);
  }
  return;
}


