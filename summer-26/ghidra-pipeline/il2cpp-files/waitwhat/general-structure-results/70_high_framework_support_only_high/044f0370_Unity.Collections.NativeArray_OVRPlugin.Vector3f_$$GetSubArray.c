/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetSubArray
ENTRY_POINT: 044f0370
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetSubArray(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(0x21);
  }
                    /* try { // try from 044f0384 to 045f0393 has its CatchHandler @ 044f0478 */
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    iVar2 = *(int *)(unaff_x19 + 0x1c);
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      iVar3 = *(int *)(unaff_x19 + 0x1c);
      if (iVar2 != iVar3) goto LAB_044f0400;
                    /* try { // try from 044f03a0 to 045f03a3 has its CatchHandler @ 044f047c */
      lVar4 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 044f03a4 to 045f0463 has its CatchHandler @ 044eff94 */
      if (lVar4 == 0) {
LAB_044f0424:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (unaff_x20 == 0) goto LAB_044f0424;
      puVar1 = (undefined8 *)(lVar4 + lVar6);
      in_stack_00000028 = puVar1[1];
      in_stack_00000020 = *puVar1;
      in_stack_00000030 = puVar1[2];
      (**(code **)(unaff_x20 + 0x18))
                (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                 *(undefined8 *)(unaff_x20 + 0x28));
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x18));
    iVar3 = *(int *)(unaff_x19 + 0x1c);
LAB_044f0400:
    if (iVar2 != iVar3) {
      FUN_05950a44(0);
    }
  }
  return;
}


