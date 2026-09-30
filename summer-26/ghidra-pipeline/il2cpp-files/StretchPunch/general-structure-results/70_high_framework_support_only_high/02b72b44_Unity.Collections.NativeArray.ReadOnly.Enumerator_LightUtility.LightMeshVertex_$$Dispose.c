/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<LightUtility.LightMeshVertex>$$Dispose
ENTRY_POINT: 02b72b44
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<LightUtility_LightMeshVertex>__Dispose
               (long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    uVar3 = *(uint *)(param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar3 - param_3) < (int)(uVar2 - *(int *)(param_1 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = 0;
    lVar6 = lVar4 + 0x30;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_02b72c48:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar6 + -0x10)) {
        FUN_030710e8();
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_02b72c48;
        lVar1 = param_2 + (long)(int)param_3 * 0x10;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        thunk_FUN_01e10808(lVar1 + 0x28,0);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar2 != uVar5);
  }
  return;
}


