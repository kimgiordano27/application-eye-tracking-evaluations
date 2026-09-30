/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<ValueTuple<Int32Enum,-object>,-EnumData>>$$Dispose
ENTRY_POINT: 02aeae9c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<KeyValuePair<ValueTuple<Int32Enum,_object>,_EnumData>>__Dispose
               (void)

{
  long lVar1;
  uint uVar2;
  bool in_CY;
  int in_w9;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (!in_CY) {
    OVRManager_PassthroughCapabilities___ctor(0);
    in_w9 = *(int *)(unaff_x21 + 0x18);
  }
  uVar2 = *(uint *)(unaff_x22 + 0x20);
  if ((int)(in_w9 - unaff_w20) < (int)(uVar2 - *(int *)(unaff_x22 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar2 = *(uint *)(unaff_x22 + 0x20);
  }
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar4 = 0;
    lVar5 = lVar3 + 0x30;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02aeaf74:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar5 + -0x10)) {
        FUN_0306d598();
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_02aeaf74;
        lVar1 = unaff_x21 + (long)(int)unaff_w20 * 0x10;
        unaff_w20 = unaff_w20 + 1;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        thunk_FUN_01e10808(lVar1 + 0x28,0);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar2 != uVar4);
  }
  return;
}


