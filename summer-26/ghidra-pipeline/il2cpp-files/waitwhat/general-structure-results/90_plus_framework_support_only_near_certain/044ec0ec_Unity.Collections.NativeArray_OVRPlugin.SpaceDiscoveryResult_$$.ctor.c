/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 044ec0ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(8);
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar2 = 1;
  }
  else {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
LAB_044ec19c:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (param_2 == 0) goto LAB_044ec19c;
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      in_stack_00000038 = puVar1[1];
      in_stack_00000030 = *puVar1;
      in_stack_00000048 = puVar1[3];
      in_stack_00000040 = puVar1[2];
      in_stack_00000050 = puVar1[4];
      uVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x00000030,
                         *(undefined8 *)(param_2 + 0x28));
      if ((uVar2 & 1) == 0) break;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x18));
  }
  return uVar2 & 1;
}


