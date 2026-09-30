/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Item
ENTRY_POINT: 03997da0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Item(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xbbd) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631caa0);
    *(undefined1 *)(unaff_x20 + 0xbbd) = 1;
  }
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631caa0);
                    /* try { // try from 03997dd4 to 03a97ddb has its CatchHandler @ 03997e64 */
    FUN_04dbdb8c(uVar2,0);
    FUN_02b75c08(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


