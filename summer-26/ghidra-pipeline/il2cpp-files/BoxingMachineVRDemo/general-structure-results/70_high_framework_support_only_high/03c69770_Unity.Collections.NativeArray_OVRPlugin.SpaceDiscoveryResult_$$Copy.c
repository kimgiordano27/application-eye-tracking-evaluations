/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03c69770
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


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(param_1);
  }
  uVar1 = FUN_03c68608();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    puVar2 = (undefined8 *)thunk_FUN_02d9d688();
    in_stack_00000068 = puVar2[5];
    in_stack_00000060 = puVar2[4];
    in_stack_00000078 = puVar2[7];
    in_stack_00000070 = puVar2[6];
    in_stack_00000048 = puVar2[1];
    in_stack_00000040 = *puVar2;
    in_stack_00000058 = puVar2[3];
    in_stack_00000050 = puVar2[2];
    uVar3 = FUN_03627c58(*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000040,0,
                         *(undefined4 *)(unaff_x20 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                  0xc0) + 0xd0) + 0x20) + 0xc0) +
                          0x150));
  }
  return uVar3;
}


