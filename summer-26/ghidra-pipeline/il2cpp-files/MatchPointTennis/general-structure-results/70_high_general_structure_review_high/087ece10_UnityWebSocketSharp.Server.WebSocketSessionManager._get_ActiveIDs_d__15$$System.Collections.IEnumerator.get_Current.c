/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager.<get_ActiveIDs>d__15$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 087ece10
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_8
*/


void UnityWebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__15__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined *puVar1;
  int iVar2;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined1 uStack000000000000000c;
  
  if ((unaff_w22 >> 4 & 1) != 0) {
    if (unaff_x21 == (long *)0x0)
    goto UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1;
    iVar2 = FUN_078bb6fc();
    if (0 < iVar2) {
      FUN_078bb7b4();
    }
    FUN_078bb7b4();
    unaff_w22 = *(uint *)(unaff_x20 + 0x24);
  }
  if ((unaff_w22 >> 3 & 1) != 0) {
    if (unaff_x21 == (long *)0x0)
    goto UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1;
    iVar2 = FUN_078bb6fc();
    if (0 < iVar2) {
      FUN_078bb7b4();
    }
    FUN_078bb7b4();
    unaff_w22 = *(uint *)(unaff_x20 + 0x24);
  }
  if ((unaff_w22 >> 2 & 1) != 0) {
    if (unaff_x21 == (long *)0x0)
    goto UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1;
    iVar2 = FUN_078bb6fc();
    if (0 < iVar2) {
      FUN_078bb7b4();
    }
    FUN_078bb7b4();
    unaff_w22 = *(uint *)(unaff_x20 + 0x24);
  }
  if ((unaff_w22 >> 1 & 1) != 0) {
    if (unaff_x21 == (long *)0x0)
    goto UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1;
    iVar2 = FUN_078bb6fc();
    if (0 < iVar2) {
      FUN_078bb7b4();
    }
    FUN_078bb7b4();
    unaff_w22 = *(uint *)(unaff_x20 + 0x24);
  }
  if ((unaff_w22 & 1) != 0) {
    if (unaff_x21 == (long *)0x0)
    goto UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1;
    iVar2 = FUN_078bb6fc();
    if (0 < iVar2) {
      FUN_078bb7b4();
    }
    FUN_078bb7b4();
    unaff_w22 = *(uint *)(unaff_x20 + 0x24);
  }
  if ((unaff_w22 >> 0xf & 1) == 0) {
    if (unaff_x21 != (long *)0x0) {
LAB_087ed014:
      FUN_078bb7b4();
      puVar1 = PTR_DAT_09f3f7b0;
      uStack000000000000000c = (undefined1)unaff_w22;
      FUN_079a2884(&stack0x0000000c,*(undefined8 *)PTR_DAT_09f3f7b0,0);
      FUN_078bb7b4();
      if (0xff < (int)unaff_w22) {
        FUN_078bb7b4();
        uStack000000000000000c = (undefined1)(unaff_w22 >> 8);
        FUN_079a2884(&stack0x0000000c,*(undefined8 *)puVar1,0);
        FUN_078bb7b4();
      }
      FUN_078bb7b4();
      if ((unaff_x19 & 1) != 0) {
        FUN_07a84a68(0);
        FUN_078bb7b4();
      }
      (**(code **)(*unaff_x21 + 0x168))();
      return;
    }
  }
  else if (unaff_x21 != (long *)0x0) {
    iVar2 = FUN_078bb6fc();
    if (0 < iVar2) {
      FUN_078bb7b4();
    }
    FUN_078bb7b4();
    unaff_w22 = *(uint *)(unaff_x20 + 0x24);
    goto LAB_087ed014;
  }
UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


