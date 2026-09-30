/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04c3f040
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xe0));
  FUN_0373b518(PTR_DAT_07d98798);
  FUN_0373b518(PTR_DAT_07d990d8);
  *(undefined1 *)(unaff_x22 + 0x7ab) = 1;
  (**(code **)(*unaff_x19 + 0x5d8))();
  lVar1 = FUN_0426ddd8();
  unaff_x19[0x12] = lVar1;
  thunk_FUN_037aeb94();
  (**(code **)(*unaff_x19 + 0x5e8))();
  lVar1 = FUN_0426ddd8();
  unaff_x19[0x13] = lVar1;
  thunk_FUN_037aeb94();
  lVar1 = FUN_0426ddd8(0);
  unaff_x19[0x14] = lVar1;
  thunk_FUN_037aeb94();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0)
  {
    FUN_03775678();
  }
  thunk_FUN_037788cc();
  FUN_044a4d98();
  lVar1 = FUN_0426e874();
  unaff_x19[0x15] = lVar1;
  thunk_FUN_037aeb94(unaff_x19 + 0x15,lVar1);
  thunk_FUN_07331220();
  thunk_FUN_07331220();
  thunk_FUN_07331220();
  return;
}


