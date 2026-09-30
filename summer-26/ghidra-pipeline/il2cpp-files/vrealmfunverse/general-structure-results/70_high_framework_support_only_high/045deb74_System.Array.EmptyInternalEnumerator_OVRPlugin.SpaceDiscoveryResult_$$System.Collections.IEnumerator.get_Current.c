/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045deb74
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (long param_1,long param_2)

{
  undefined4 uVar1;
  long unaff_x21;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(unaff_x21 + 0x378);
  if ((*(byte *)(unaff_x22 + 0x3be) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322378);
    *(undefined1 *)(unaff_x22 + 0x3be) = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_04d21ca8(uVar1,0);
  FUN_045debe4(param_1,uVar1,0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x1c8))
  ;
  return;
}


