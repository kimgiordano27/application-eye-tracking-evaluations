/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 04c3f31c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_07d990d8;
  puVar3 = PTR_DAT_07d990d0;
  puVar2 = PTR_DAT_07d98ef0;
  puVar1 = PTR_DAT_07d98798;
                    /* try { // try from 04c3f35c to 04d3f363 has its CatchHandler @ 04c3f468 */
  if ((DAT_082567ad & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98ef0);
    FUN_0373b518(PTR_DAT_07d990d0);
    FUN_0373b518(PTR_DAT_07d990e0);
    FUN_0373b518(PTR_DAT_07d98798);
    FUN_0373b518(PTR_DAT_07d990d8);
    DAT_082567ad = 1;
  }
  puVar5 = PTR_DAT_07d990e0;
  (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
  lVar6 = FUN_0426de60(param_1,*(undefined8 *)puVar3,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
  param_1[0x12] = lVar6;
  thunk_FUN_037aeb94();
  (**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  lVar6 = FUN_0426de60(param_1,*(undefined8 *)puVar1,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18));
  param_1[0x13] = lVar6;
  thunk_FUN_037aeb94();
  lVar6 = FUN_0426ddd8(0,param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
  param_1[0x14] = lVar6;
  thunk_FUN_037aeb94();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar7 = thunk_FUN_037788cc();
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  FUN_044a5208(uVar7,param_1,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x50));
  lVar6 = FUN_0426e974(param_1,*(undefined8 *)puVar5,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58));
  plVar8 = param_1 + 0x15;
  *plVar8 = lVar6;
  thunk_FUN_037aeb94(plVar8,lVar6);
  thunk_FUN_07331220(param_1,param_1[0x12],*plVar8,0);
  thunk_FUN_07331220(param_1,param_1[0x13],*plVar8,0);
  thunk_FUN_07331220(param_1,param_1[0x14],*plVar8,0);
  return;
}


