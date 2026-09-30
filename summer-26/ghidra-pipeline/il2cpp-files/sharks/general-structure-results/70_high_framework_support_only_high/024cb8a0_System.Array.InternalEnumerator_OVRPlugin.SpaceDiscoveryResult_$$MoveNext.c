/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 024cb8a0
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x21;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
      (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1))
     || (uVar2 = FUN_024cea64(), (uVar2 & 1) == 0)) {
    uVar3 = FUN_024ce364();
    uVar2 = 0;
    if (*(int *)(unaff_x20 + 0x20) == (int)uVar3) {
      uVar2 = (ulong)(0 < (int)((ulong)uVar3 >> 0x20));
    }
  }
  else {
    if (*(int *)(unaff_x20 + 0x20) < (int)unaff_x21[4]) {
      uVar2 = FUN_024cd18c();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


