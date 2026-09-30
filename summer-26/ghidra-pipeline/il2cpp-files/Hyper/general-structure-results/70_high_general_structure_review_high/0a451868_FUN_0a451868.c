/*
FUNCTION_NAME: FUN_0a451868
ENTRY_POINT: 0a451868
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0a451868(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar1 = FUN_0a44ccb8();
  iVar2 = FUN_0a44cd10(param_1);
  if ((iVar1 != iVar2) && ((param_2 & 1) == 0)) {
    iVar1 = FUN_0a44ccb8(param_1);
    iVar2 = FUN_0a44cd10(param_1);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x198) = iVar1;
    if (iVar1 < 0) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(int *)(param_1 + 0x194) = iVar1;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x180);
      if (lVar4 == 0)
      goto 
      WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__19__System_IDisposable_Dispose
      ;
      if (*(int *)(lVar4 + 0x10) < iVar1) {
        *(int *)(param_1 + 0x198) = *(int *)(lVar4 + 0x10);
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      *(int *)(param_1 + 0x194) = iVar1;
      if (iVar1 <= iVar2) goto LAB_0a451904;
    }
    *(int *)(param_1 + 0x194) = iVar2;
  }
LAB_0a451904:
  if (*(int *)(param_1 + 0x128) - 1U < 2) {
    uVar3 = FUN_0a44cd10(param_1);
    iVar1 = FUN_0a4515b4(param_1,uVar3,param_3 & 1);
  }
  else {
    if (*(long *)(param_1 + 0x180) == 0)
    goto 
    WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__19__System_IDisposable_Dispose
    ;
    iVar1 = *(int *)(*(long *)(param_1 + 0x180) + 0x10);
  }
  *(int *)(param_1 + 0x198) = iVar1;
  if ((param_2 & 1) == 0) {
    if (iVar1 < 0) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(int *)(param_1 + 0x194) = iVar1;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x180);
      if (lVar4 == 0)
      goto 
      WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__19__System_IDisposable_Dispose
      ;
      if (*(int *)(lVar4 + 0x10) < iVar1) {
        *(int *)(param_1 + 0x198) = *(int *)(lVar4 + 0x10);
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      *(int *)(param_1 + 0x194) = iVar1;
      if (iVar1 <= iVar2) {
        return;
      }
    }
    *(int *)(param_1 + 0x194) = iVar2;
  }
  else {
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x180) == 0) {
WebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__19__System_IDisposable_Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0x180) + 0x10);
      if (iVar1 <= iVar2) {
        return;
      }
    }
    *(int *)(param_1 + 0x198) = iVar2;
  }
  return;
}


