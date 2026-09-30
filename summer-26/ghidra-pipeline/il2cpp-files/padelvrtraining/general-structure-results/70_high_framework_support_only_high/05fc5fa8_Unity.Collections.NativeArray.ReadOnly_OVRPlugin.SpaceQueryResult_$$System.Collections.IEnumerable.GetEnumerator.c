/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05fc5fa8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,undefined8 param_5,
               long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long lVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
                    /* try { // try from 05fc5fb0 to 060c5fd7 has its CatchHandler @ 05fc6168 */
  if (in_w8 + 1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
LAB_05fc6098:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      in_stack_00000060 = param_3[4];
      in_stack_00000048 = param_3[1];
      in_stack_00000040 = *param_3;
      in_stack_00000058 = param_3[3];
      in_stack_00000050 = param_3[2];
                    /* try { // try from 05fc5ff0 to 060c605f has its CatchHandler @ 05fc616c */
      uVar1 = thunk_FUN_03d2eb70(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),
                                 &stack0x00000040);
      lVar3 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_05fc6098;
      lVar4 = param_2 + (long)(int)param_4 * 0x28;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000038 = *(undefined8 *)(lVar4 + 0x40);
      in_stack_00000020 = *(undefined8 *)(lVar4 + 0x28);
      in_stack_00000018 = *(undefined8 *)(lVar4 + 0x20);
      in_stack_00000030 = *(undefined8 *)(lVar4 + 0x38);
      in_stack_00000028 = *(undefined8 *)(lVar4 + 0x30);
      in_stack_00000008 = lVar3;
      uVar2 = thunk_FUN_071d4ed8(&stack0x00000008,uVar1,0);
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (in_w8 + 1 <= (int)param_4);
  }
  return 0xffffffff;
}


