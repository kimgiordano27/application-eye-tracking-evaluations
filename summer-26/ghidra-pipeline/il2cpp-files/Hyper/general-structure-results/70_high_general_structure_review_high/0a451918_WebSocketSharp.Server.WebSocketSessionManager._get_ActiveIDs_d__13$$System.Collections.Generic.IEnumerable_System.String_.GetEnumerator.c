/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager.<get_ActiveIDs>d__13$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
ENTRY_POINT: 0a451918
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__System_Collections_Generic_IEnumerable<System_String>_GetEnumerator
               (void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  
  FUN_0a44cd10();
  iVar1 = FUN_0a4515b4();
  *(int *)(unaff_x19 + 0x198) = iVar1;
  if ((unaff_x20 & 1) == 0) {
    if (iVar1 < 0) {
      iVar2 = 0;
      *(undefined4 *)(unaff_x19 + 0x198) = 0;
      *(int *)(unaff_x19 + 0x194) = iVar1;
    }
    else {
      lVar3 = *(long *)(unaff_x19 + 0x180);
      if (lVar3 == 0)
      goto 
      WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__19__System_IDisposable_Dispose
      ;
      if (*(int *)(lVar3 + 0x10) < iVar1) {
        *(int *)(unaff_x19 + 0x198) = *(int *)(lVar3 + 0x10);
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      *(int *)(unaff_x19 + 0x194) = iVar1;
      if (iVar1 <= iVar2) {
        return;
      }
    }
    *(int *)(unaff_x19 + 0x194) = iVar2;
  }
  else {
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    else {
      if (*(long *)(unaff_x19 + 0x180) == 0) {
WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__19__System_IDisposable_Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iVar2 = *(int *)(*(long *)(unaff_x19 + 0x180) + 0x10);
      if (iVar1 <= iVar2) {
        return;
      }
    }
    *(int *)(unaff_x19 + 0x198) = iVar2;
  }
  return;
}


