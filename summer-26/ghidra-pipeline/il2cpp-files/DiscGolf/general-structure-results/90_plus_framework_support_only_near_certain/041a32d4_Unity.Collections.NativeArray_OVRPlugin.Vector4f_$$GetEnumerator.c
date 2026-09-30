/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 041a32d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
                    /* try { // try from 041a32dc to 042a32df has its CatchHandler @ 041a32ec */
  FUN_05509450(param_1,0x15,0);
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* catch() { ... } // from try @ 041a32dc with catch @ 041a32ec */
                    /* try { // try from 041a32f0 to 042a32f7 has its CatchHandler @ 041a3300 */
  if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
                    /* try { // try from 041a32f8 to 042a3303 has its CatchHandler @ 041a2de8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041a32f0 with catch @ 041a3300
                        */
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (unaff_w22 < 1) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = FUN_02d966a4(lVar1,unaff_w22);
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_0550b264(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
    }
  }
  *plVar2 = lVar1;
  LeanTween__value(plVar2,lVar1);
  return;
}


