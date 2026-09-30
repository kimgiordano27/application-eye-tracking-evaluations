/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 044f027c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(8);
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar5 = uVar4;
  do {
    uVar5 = uVar5 - 1;
    uVar4 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) goto LAB_044f0350;
                    /* try { // try from 044f02b8 to 045f02df has its CatchHandler @ 044f0480 */
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_044f0354;
    if (param_3 == 0) goto LAB_044f0350;
    lVar2 = lVar2 + (ulong)uVar5 * 0x18;
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
    uVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&stack0x00000020,
                       *(undefined8 *)(param_3 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 044f0304 to 045f0367 has its CatchHandler @ 044f0484 */
  if (lVar2 != 0) {
    if (uVar4 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (ulong)uVar5 * 0x18;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      param_1[1] = *(undefined8 *)(lVar2 + 0x28);
      *param_1 = uVar6;
      param_1[2] = uVar3;
      return;
    }
LAB_044f0354:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_044f0350:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


