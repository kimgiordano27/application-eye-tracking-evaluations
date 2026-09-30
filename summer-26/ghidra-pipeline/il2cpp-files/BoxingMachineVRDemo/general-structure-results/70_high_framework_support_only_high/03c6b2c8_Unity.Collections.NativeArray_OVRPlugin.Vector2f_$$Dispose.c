/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 03c6b2c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose
               (long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack0000000000000038;
  
  lVar1 = tpidr_el0;
  lStack0000000000000038 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    FUN_05027e84(0);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  uVar4 = param_3[1];
  uVar3 = *param_3;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(uint *)(lVar2 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  lVar2 = lVar2 + (long)(int)param_2 * 0x18;
  *(undefined8 *)(lVar2 + 0x30) = param_3[2];
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


