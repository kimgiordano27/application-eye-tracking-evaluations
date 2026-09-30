/*
FUNCTION_NAME: SharedDeoVR.Context.SessionWatcher.<UpdateSessionData>d__15$$MoveNext
ENTRY_POINT: 094d38cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void SharedDeoVR_Context_SessionWatcher_<UpdateSessionData>d__15__MoveNext(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  lVar2 = FUN_094d6790();
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (lVar3 = FUN_0870d32c(*(long *)(unaff_x20 + 0x10)), lVar3 != 0)) {
    lVar4 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(ulong *)(lVar4 + 0x20) = unaff_x22 & 0xffffffffffffff00 | 1;
        *(long *)(lVar4 + 0x28) = lVar2 - unaff_x21;
        return;
      }
      FUN_06b90c68();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


