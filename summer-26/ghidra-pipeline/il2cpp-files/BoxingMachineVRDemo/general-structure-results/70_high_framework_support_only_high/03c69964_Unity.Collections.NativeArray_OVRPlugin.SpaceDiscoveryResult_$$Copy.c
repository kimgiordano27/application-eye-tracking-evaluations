/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03c69964
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 param_1,undefined4 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  FUN_0357eeec(param_3,0x14,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58));
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0(lVar2);
  }
  if (param_3 != (long *)0x0) {
    if (*(long *)(*param_3 + 0x40) == *(long *)(lVar2 + 0x40)) {
      puVar1 = (undefined8 *)thunk_FUN_02d9d688(param_3);
      in_stack_00000068 = puVar1[5];
      in_stack_00000060 = puVar1[4];
      in_stack_00000078 = puVar1[7];
      in_stack_00000070 = puVar1[6];
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000058 = puVar1[3];
      in_stack_00000050 = puVar1[2];
      FUN_03c69848(param_1,param_2,&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


