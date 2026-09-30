/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnly
ENTRY_POINT: 044f03e0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnly
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  while( true ) {
    uStack0000000000000030 = param_1;
    (*in_x9)(param_2,param_3,param_4);
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x18;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) break;
    iVar2 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar2) goto LAB_044f0400;
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_044f0424:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x20 == 0) goto LAB_044f0424;
    puVar1 = (undefined8 *)(lVar3 + unaff_x23);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    param_1 = puVar1[2];
    param_3 = &stack0x00000020;
    param_4 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  iVar2 = *(int *)(unaff_x19 + 0x1c);
LAB_044f0400:
  if (unaff_w21 != iVar2) {
    FUN_05950a44(0);
  }
  return;
}


