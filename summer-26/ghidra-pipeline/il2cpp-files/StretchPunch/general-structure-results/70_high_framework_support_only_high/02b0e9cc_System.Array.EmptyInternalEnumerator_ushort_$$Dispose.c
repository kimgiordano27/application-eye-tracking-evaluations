/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ushort>$$Dispose
ENTRY_POINT: 02b0e9cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<ushort>__Dispose(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  if (uVar4 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    uVar4 = *(uint *)(param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar4 - param_3) < (int)(uVar2 - *(int *)(param_1 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar2) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar6 = 0;
    lVar7 = lVar5 + 0x30;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_02b0ead0:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar7 + -0x10)) {
        FUN_0306e4e8();
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_02b0ead0;
        lVar1 = param_2 + (long)(int)param_3 * 0x10;
        puVar3 = (undefined8 *)(lVar1 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *puVar3 = 0;
        param_3 = param_3 + 1;
        thunk_FUN_01e10808(puVar3,0);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar2 != uVar6);
  }
  return;
}


