/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03f3fcf4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x22;
  
  FUN_04c8479c(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x88),
               *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x90));
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar1 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20) = param_2;
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03a38378(param_2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


