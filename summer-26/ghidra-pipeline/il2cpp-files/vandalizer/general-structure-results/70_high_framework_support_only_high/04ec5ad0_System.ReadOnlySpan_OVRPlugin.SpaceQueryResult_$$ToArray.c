/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 04ec5ad0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>__ToArray
               (undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uVar2 = FUN_04ec5a70(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(param_2);
    }
    puVar3 = (undefined8 *)thunk_FUN_0322f29c();
    in_stack_00000048 = puVar3[3];
    in_stack_00000040 = puVar3[2];
    in_stack_00000058 = puVar3[5];
    in_stack_00000050 = puVar3[4];
    in_stack_00000038 = puVar3[1];
    in_stack_00000030 = *puVar3;
    uVar1 = System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor
                      (param_1,&stack0x00000030,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
  }
  return uVar1 & 1;
}


