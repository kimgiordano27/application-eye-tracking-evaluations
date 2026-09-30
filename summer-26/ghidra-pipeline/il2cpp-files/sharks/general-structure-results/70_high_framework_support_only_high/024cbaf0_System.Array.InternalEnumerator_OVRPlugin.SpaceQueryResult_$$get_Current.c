/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 024cbaf0
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(code *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  iVar1 = (*param_1)();
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if ((((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2
         )) || (uVar3 = FUN_024cea64(), (uVar3 & 1) == 0)) ||
       ((int)unaff_x20[4] <= *(int *)(unaff_x21 + 0x20))) {
      uVar4 = FUN_024cce80();
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}


