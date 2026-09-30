/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 04c3fa10
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit
               (long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  long unaff_x24;
  undefined8 *puVar7;
  long unaff_x25;
  undefined8 *puVar8;
  
  puVar2 = PTR_DAT_07d990d8;
  puVar1 = PTR_DAT_07d98ef0;
  puVar8 = *(undefined8 **)(unaff_x25 + 0xd0);
  puVar7 = *(undefined8 **)(unaff_x24 + 0x798);
  if ((*(byte *)(unaff_x22 + 0x7b1) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98ef0);
    FUN_0373b518(PTR_DAT_07d990d0);
    FUN_0373b518(PTR_DAT_07d990e0);
    FUN_0373b518(PTR_DAT_07d98798);
    FUN_0373b518(PTR_DAT_07d990d8);
    *(undefined1 *)(unaff_x22 + 0x7b1) = 1;
  }
  puVar3 = PTR_DAT_07d990e0;
  (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
  lVar4 = FUN_0426df98(param_1,*puVar8,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
  param_1[0x12] = lVar4;
  thunk_FUN_037aeb94();
  (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  lVar4 = FUN_0426df98(param_1,*puVar7,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
  param_1[0x13] = lVar4;
  thunk_FUN_037aeb94();
  lVar4 = FUN_0426ddd8(0,param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  param_1[0x14] = lVar4;
  thunk_FUN_037aeb94();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar5 = thunk_FUN_037788cc();
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  FUN_044a5440(uVar5,param_1,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x50));
  lVar4 = FUN_0426eb74(param_1,*(undefined8 *)puVar3,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58));
  plVar6 = param_1 + 0x15;
  *plVar6 = lVar4;
  thunk_FUN_037aeb94(plVar6,lVar4);
  thunk_FUN_07331220(param_1,param_1[0x12],*plVar6,0);
  thunk_FUN_07331220(param_1,param_1[0x13],*plVar6,0);
  thunk_FUN_07331220(param_1,param_1[0x14],*plVar6,0);
  return;
}


