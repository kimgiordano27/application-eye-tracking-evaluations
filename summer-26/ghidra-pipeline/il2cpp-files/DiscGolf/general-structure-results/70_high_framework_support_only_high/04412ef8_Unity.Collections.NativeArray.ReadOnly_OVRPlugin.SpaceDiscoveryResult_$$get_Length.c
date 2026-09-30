/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 04412ef8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,int param_5,
               long param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
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
  
                    /* try { // try from 04412efc to 04512f03 has its CatchHandler @ 04413000 */
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
LAB_0441300c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      in_stack_00000038 = param_3[1];
      in_stack_00000030 = *param_3;
      in_stack_00000040 = param_3[2];
      uVar2 = thunk_FUN_02dd2d7c(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),
                                 &stack0x00000030);
      lVar4 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18(lVar4);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_0441300c;
      in_stack_00000010 = 0xffffffffffffffff;
      puVar5 = (undefined8 *)(param_2 + 0x20 + (long)(int)param_4 * 0x18);
      in_stack_00000020 = puVar5[1];
      in_stack_00000018 = *puVar5;
      in_stack_00000028 = puVar5[2];
      in_stack_00000008 = lVar4;
      uVar3 = thunk_FUN_05542350(&stack0x00000008,uVar2,0);
      if ((uVar3 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


