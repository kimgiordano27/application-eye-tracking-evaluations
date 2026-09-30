/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 043c35e4
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1,long param_2,undefined4 param_3,uint param_4,undefined8 param_5,
               long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long lVar4;
  undefined4 in_stack_00000008;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = param_2 + (long)(int)param_4 * 4 + 0x20;
  lVar4 = (long)in_w8 - (long)(int)param_4;
  do {
    if ((*(uint *)(param_2 + 0x18) <= param_4) ||
       (in_stack_00000008 = param_3,
       uVar1 = thunk_FUN_02ef1438(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),
                                  &stack0x00000008), *(uint *)(param_2 + 0x18) <= param_4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar2 = FUN_0337efc0(lVar3,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8));
    if ((uVar2 & 1) != 0) {
      return param_4;
    }
    param_4 = param_4 + 1;
    lVar4 = lVar4 + -1;
    lVar3 = lVar3 + 4;
  } while (lVar4 != 0);
  return 0xffffffff;
}


