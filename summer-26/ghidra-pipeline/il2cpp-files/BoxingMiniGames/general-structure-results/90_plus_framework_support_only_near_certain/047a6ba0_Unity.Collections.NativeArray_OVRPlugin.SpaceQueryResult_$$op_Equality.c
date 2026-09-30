/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Equality
ENTRY_POINT: 047a6ba0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Equality(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
                    /* try { // try from 047a6bb0 to 048a6bb3 has its CatchHandler @ 047a6bd4 */
                    /* try { // try from 047a6bb4 to 048a6bb7 has its CatchHandler @ 047a6bd0 */
  if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
                    /* try { // try from 047a6bb8 to 048a6bbf has its CatchHandler @ 047a6bdc */
                    /* try { // try from 047a6bc0 to 048a6bff has its CatchHandler @ 047a68d8 */
    return;
  }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a6adc with catch @ 047a6bcc
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a6bb4 with catch @ 047a6bd0
                        */
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a6bb0 with catch @ 047a6bd4
                        */
  if (unaff_w22 < 1) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
  }
  else {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a6b20 with catch @ 047a6bd8
                        */
    lVar1 = *(long *)(lVar1 + 0x18);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a6bb8 with catch @ 047a6bdc
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a6a00 with catch @ 047a6be0
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a6a4c with catch @ 047a6be4
                        */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = FUN_03642a4c(lVar1,unaff_w22);
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_05e3b3a4(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
    }
  }
  *plVar2 = lVar1;
  thunk_FUN_036b7ad0(plVar2,lVar1);
  return;
}


