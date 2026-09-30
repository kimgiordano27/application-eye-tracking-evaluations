/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 048ce8c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  
  uStack0000000000000000 = *param_2;
  uStack0000000000000008 = *(undefined4 *)(param_2 + 1);
  uVar1 = NodeCanvas_Tasks_Conditions_IsActive__get_info();
  iVar2 = NodeCanvas_Tasks_Conditions_IsActive__get_info((ulong)&stack0x00000000 | 4,0);
  iVar3 = NodeCanvas_Tasks_Conditions_IsActive__get_info(&stack0x00000008,0);
  uStack0000000000000000 = *(undefined8 *)((long)param_2 + 0xc);
  uStack0000000000000008 = *(undefined4 *)((long)param_2 + 0x14);
  iVar4 = NodeCanvas_Tasks_Conditions_IsActive__get_info();
  iVar5 = NodeCanvas_Tasks_Conditions_IsActive__get_info((ulong)&stack0x00000000 | 4,0);
  uVar6 = NodeCanvas_Tasks_Conditions_IsActive__get_info(&stack0x00000008,0);
  return uVar1 ^ iVar2 << 2 ^ iVar3 >> 2 ^ iVar4 << 2 ^ iVar5 << 4 ^ uVar6 & 0xfffffffc;
}


