/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 041a0aa0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan
               (undefined8 param_1,int param_2,long param_3)

{
  int in_w8;
  long lVar1;
  long *plVar2;
  long unaff_x20;
  int unaff_w22;
  
                    /* try { // try from 041a0aa0 to 042a0aab has its CatchHandler @ 041a0590 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041a0a98 with catch @ 041a0aa8
                        */
  if (param_2 < in_w8) {
    FUN_05509450(0xf,0x15,0);
  }
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 != 0) {
    if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
      return;
    }
    lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (unaff_w22 < 1) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


