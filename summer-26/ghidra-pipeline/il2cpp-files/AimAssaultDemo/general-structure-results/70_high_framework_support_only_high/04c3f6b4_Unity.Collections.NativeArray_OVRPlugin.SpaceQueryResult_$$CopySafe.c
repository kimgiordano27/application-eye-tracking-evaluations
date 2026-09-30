/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 04c3f6b4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (ulong param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98ef0);
    FUN_0373b518(PTR_DAT_07d990d0);
    FUN_0373b518(PTR_DAT_07d990e0);
    FUN_0373b518(PTR_DAT_07d98798);
    FUN_0373b518(PTR_DAT_07d990d8);
    *(undefined1 *)(unaff_x22 + 0x7af) = 1;
  }
  puVar1 = PTR_DAT_07d990e0;
  (**(code **)(*param_2 + 0x5d8))(param_2,*(undefined8 *)(*param_2 + 0x5e0));
  lVar2 = FUN_0426def4(param_2,*unaff_x25,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  param_2[0x12] = lVar2;
  thunk_FUN_037aeb94();
  (**(code **)(*param_2 + 0x5e8))(param_2,*(undefined8 *)(*param_2 + 0x5f0));
  lVar2 = FUN_0426def4(param_2,*unaff_x24,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  param_2[0x13] = lVar2;
  thunk_FUN_037aeb94();
  lVar2 = FUN_0426ddd8(0,param_2,*unaff_x21,*unaff_x23);
  param_2[0x14] = lVar2;
  thunk_FUN_037aeb94();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0)
  {
    FUN_03775678();
  }
  uVar3 = thunk_FUN_037788cc();
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  FUN_044a5324(uVar3,param_2,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x50));
  lVar2 = FUN_0426ea74(param_2,*(undefined8 *)puVar1,uVar3,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58));
  plVar4 = param_2 + 0x15;
  *plVar4 = lVar2;
  thunk_FUN_037aeb94(plVar4,lVar2);
  thunk_FUN_07331220(param_2,param_2[0x12],*plVar4,0);
  thunk_FUN_07331220(param_2,param_2[0x13],*plVar4,0);
  thunk_FUN_07331220(param_2,param_2[0x14],*plVar4,0);
  return;
}


