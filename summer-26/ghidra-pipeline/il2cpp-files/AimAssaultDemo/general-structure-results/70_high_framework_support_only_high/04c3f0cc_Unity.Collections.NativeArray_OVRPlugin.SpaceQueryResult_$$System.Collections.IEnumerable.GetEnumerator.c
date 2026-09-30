/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04c3f0cc
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = FUN_0426ddd8(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18));
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  thunk_FUN_037aeb94();
  uVar1 = FUN_0426ddd8(0);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  thunk_FUN_037aeb94();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0)
  {
    FUN_03775678();
  }
  thunk_FUN_037788cc();
  FUN_044a4d98();
  uVar1 = FUN_0426e874();
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0xa8),uVar1);
  thunk_FUN_07331220();
  thunk_FUN_07331220();
  thunk_FUN_07331220();
  return;
}


