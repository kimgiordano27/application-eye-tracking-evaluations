/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05cceffc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  long *plVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  
  uStack0000000000000080 = unaff_x24[4];
  uStack0000000000000068 = unaff_x24[1];
  uStack0000000000000060 = *unaff_x24;
  uStack0000000000000078 = unaff_x24[3];
  uStack0000000000000070 = unaff_x24[2];
  plVar1 = (long *)thunk_FUN_03d2ef40(**(undefined8 **)(in_x9 + 0xbd8));
  FUN_076c6eb8();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  if (plVar1 != (long *)0x0) {
    if (*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar1 + 0x130)) {
      if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2) {
        return plVar1;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


