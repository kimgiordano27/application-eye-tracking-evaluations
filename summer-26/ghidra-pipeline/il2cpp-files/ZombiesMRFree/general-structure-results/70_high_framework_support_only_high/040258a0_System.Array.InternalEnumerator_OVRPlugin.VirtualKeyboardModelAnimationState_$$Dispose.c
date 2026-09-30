/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 040258a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (int *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_440 [544];
  undefined1 auStack_220 [544];
  
  memset(param_1 + 2,0,0x220);
  if (0 < *param_1 + -1) {
    uVar2 = 0;
    lVar3 = 0x20;
    do {
      lVar1 = *(long *)(param_1 + 0x8a);
      memset(auStack_220,0,0x220);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      memcpy(auStack_440,auStack_220,0x220);
      if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      memcpy((void *)(lVar1 + lVar3),auStack_440,0x220);
      thunk_FUN_03048534(lVar1 + lVar3 + 0x18,0);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x220;
    } while ((long)uVar2 < (long)(*param_1 + -1));
  }
  *param_1 = 0;
  return;
}


