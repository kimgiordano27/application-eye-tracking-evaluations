/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04654f3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x21;
  
  if (unaff_x21 != 0xffffffffffffffff) {
    if (*(int *)(DAT_083cd998 + 0xe0) == 0) {
                    /* try { // try from 04654f54 to 0475507b has its CatchHandler @ 04654f54
                       catch() { ... } // from try @ 04654f54 with catch @ 04654f54
                       catch() { ... } // from try @ 04655150 with catch @ 04654f54
                       catch() { ... } // from try @ 04655210 with catch @ 04654f54
                       catch() { ... } // from try @ 046552b0 with catch @ 04654f54 */
      FUN_033b9870();
    }
    lVar2 = FUN_07402b98(unaff_x21 >> 0x20,0);
    if (lVar2 == 0) {
      return 0;
    }
    if ((int)unaff_x21 == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0338f618();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0338f618(lVar3);
      }
      lVar4 = FUN_0339898c(lVar2,lVar3);
      if (lVar4 != 0) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(lVar2,lVar3);
    }
    lVar2 = *(long *)(lVar2 + 0x150);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar1 = (int)unaff_x21 - 1;
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618(lVar3);
    }
    if (lVar2 != 0) {
      lVar4 = FUN_0339898c(lVar2,lVar3);
      if (lVar4 != 0) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(lVar2,lVar3);
    }
  }
  return 0;
}


