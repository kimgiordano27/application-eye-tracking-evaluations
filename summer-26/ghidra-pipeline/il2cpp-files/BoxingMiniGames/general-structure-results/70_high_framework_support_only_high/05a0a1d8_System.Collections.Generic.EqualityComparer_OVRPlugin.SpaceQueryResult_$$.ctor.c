/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05a0a1d8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Collections_Generic_EqualityComparer<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  uint uVar1;
  long lVar2;
  int unaff_w19;
  long *unaff_x20;
  
  if ((unaff_w19 < 0) || (*(int *)((long)unaff_x20 + 0xc) <= unaff_w19)) {
    FUN_05e39914(0);
  }
  lVar2 = *unaff_x20;
  if (lVar2 != 0) {
    uVar1 = (int)unaff_x20[1] + unaff_w19;
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


