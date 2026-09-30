/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 05f18bc4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 102
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 *param_5,long param_6)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (param_6 == 0) {
    param_6 = FUN_070dd958(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8));
  }
  uVar5 = param_5[5];
  uVar4 = param_5[4];
  uVar3 = param_5[7];
  uVar2 = param_5[6];
  uVar9 = param_5[1];
  uVar8 = *param_5;
  uVar7 = param_5[3];
  uVar6 = param_5[2];
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  in_stack_00000040 = uVar8;
  in_stack_00000048 = uVar9;
  in_stack_00000050 = uVar6;
  in_stack_00000058 = uVar7;
  in_stack_00000060 = uVar4;
  in_stack_00000068 = uVar5;
  in_stack_00000070 = uVar2;
  in_stack_00000078 = uVar3;
  Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
            (param_2,param_3,param_4,&stack0x00000040,param_6,
             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
  return;
}


