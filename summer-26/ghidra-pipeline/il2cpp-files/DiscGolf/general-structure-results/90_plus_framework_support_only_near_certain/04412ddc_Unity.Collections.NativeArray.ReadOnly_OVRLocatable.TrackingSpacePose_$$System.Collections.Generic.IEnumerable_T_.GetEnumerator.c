/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRLocatable.TrackingSpacePose>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04412ddc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRLocatable_TrackingSpacePose>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,int param_5,
               long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if ((int)param_4 < (int)(param_5 + param_4)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = (long)(int)(param_5 + param_4) - (long)(int)param_4;
    puVar5 = (undefined8 *)(param_2 + (long)(int)param_4 * 0x18 + 0x20);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      in_stack_00000038 = param_3[1];
      in_stack_00000030 = *param_3;
      in_stack_00000040 = param_3[2];
      uVar1 = thunk_FUN_02dd2d7c(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),
                                 &stack0x00000030);
      lVar3 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18(lVar3);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4)
      goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor;
      in_stack_00000020 = puVar5[1];
      in_stack_00000018 = *puVar5;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = puVar5[2];
      in_stack_00000008 = lVar3;
      uVar2 = thunk_FUN_05542350(&stack0x00000008,uVar1,0);
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
      param_4 = param_4 + 1;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}


