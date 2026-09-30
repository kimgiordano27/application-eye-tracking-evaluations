/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 04506438
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long lStack0000000000000038;
  
  lVar4 = tpidr_el0;
  lStack0000000000000038 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(0x21);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar2 != iVar3) goto LAB_045064e4;
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) {
LAB_0450651c:
        if (*(long *)(lVar4 + 0x28) == lStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_04506544;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
        if (*(long *)(lVar4 + 0x28) == lStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_04506544;
      }
      if (param_2 == 0) goto LAB_0450651c;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      in_stack_00000028 = puVar1[1];
      in_stack_00000020 = *puVar1;
      in_stack_00000030 = puVar1[2];
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),&stack0x00000020,*(undefined8 *)(param_2 + 0x28));
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x18));
    iVar3 = *(int *)(param_1 + 0x1c);
LAB_045064e4:
    if (iVar2 != iVar3) {
      FUN_05950a44(0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lStack0000000000000038) {
    return;
  }
LAB_04506544:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


