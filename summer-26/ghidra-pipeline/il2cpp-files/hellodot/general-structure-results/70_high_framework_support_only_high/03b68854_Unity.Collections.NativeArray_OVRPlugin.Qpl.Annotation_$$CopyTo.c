/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 03b68854
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
               (long param_1,uint param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_04f527b0(0);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_04f527dc(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar4 = (long)(int)param_2 * 0x18 + 0x20;
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
LAB_03b68950:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(lVar3 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      if (param_4 == 0) goto LAB_03b68950;
      in_stack_00000020 = *puVar1;
      in_stack_00000028 = puVar1[1];
      in_stack_00000030 = puVar1[2];
      uVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&stack0x00000020,
                         *(undefined8 *)(param_4 + 0x28));
      if ((uVar2 & 1) != 0) {
        return param_2;
      }
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


