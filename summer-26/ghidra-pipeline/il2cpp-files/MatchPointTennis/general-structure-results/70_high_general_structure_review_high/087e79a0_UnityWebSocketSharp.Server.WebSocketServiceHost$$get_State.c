/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketServiceHost$$get_State
ENTRY_POINT: 087e79a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_12
*/


undefined8 UnityWebSocketSharp_Server_WebSocketServiceHost__get_State(void)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  uint in_w8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int *unaff_x22;
  int unaff_w23;
  
  do {
    if ((in_w8 >> 3 & 1) == 0) {
      return 0;
    }
UnityWebSocketSharp_Server_WebSocketSessionManager__get_State:
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 4;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) {
      return 1;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    iVar1 = *unaff_x22;
    if (0x800 < iVar1) {
      if (iVar1 < 0x10001) {
        if (iVar1 < 0x4001) {
          if ((iVar1 != 0x1000) && (iVar1 != 0x4000)) {
            return 0;
          }
        }
        else if (iVar1 != 0x8000) {
          if (iVar1 != 0x10000) {
            return 0;
          }
LAB_087e7894:
          lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
          if (lVar3 != 0) {
            bVar2 = *(byte *)(lVar3 + 0x40) >> 4;
            goto joined_r0x087e78ac;
          }
          goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean;
        }
LAB_087e7908:
        lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        if (lVar3 == 0) goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean;
        bVar2 = *(byte *)(lVar3 + 0x40) >> 6;
      }
      else if (iVar1 < 0x40001) {
        if (iVar1 != 0x20000) {
          if (iVar1 != 0x40000) {
            return 0;
          }
          goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_State;
        }
        lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        if (lVar3 == 0) goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean;
        bVar2 = *(byte *)(lVar3 + 0x40) >> 1;
      }
      else {
        if (iVar1 != 0x80000) {
          if (iVar1 != unaff_w23) {
            return 0;
          }
          goto LAB_087e78d8;
        }
LAB_087e7928:
        lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        if (lVar3 == 0) goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean;
        bVar2 = *(byte *)(lVar3 + 0x40) >> 5;
      }
joined_r0x087e78ac:
      if ((bVar2 & 1) == 0) {
        return 0;
      }
      goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_State;
    }
    if (iVar1 < 0x21) {
      if (iVar1 == 1) {
        lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        if (lVar3 != 0) {
          bVar2 = *(byte *)(lVar3 + 0x40);
          goto joined_r0x087e78ac;
        }
        goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean;
      }
      if (iVar1 != 2) {
        if (iVar1 != 0x20) {
          return 0;
        }
        goto LAB_087e7894;
      }
      lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
      if (lVar3 == 0) goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean;
      bVar2 = *(byte *)(lVar3 + 0x40) >> 2;
      goto joined_r0x087e78ac;
    }
    if (iVar1 < 0x201) {
      if (iVar1 == 0x100) goto LAB_087e7928;
      if (iVar1 != 0x200) {
        return 0;
      }
LAB_087e78d8:
      lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
      if (lVar3 == 0) goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean;
      if (-1 < *(char *)(lVar3 + 0x40)) {
        return 0;
      }
      goto UnityWebSocketSharp_Server_WebSocketSessionManager__get_State;
    }
    if (iVar1 != 0x400) {
      if (iVar1 != 0x800) {
        return 0;
      }
      goto LAB_087e7908;
    }
    lVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
    if (lVar3 == 0) {
UnityWebSocketSharp_Server_WebSocketSessionManager__get_KeepClean:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_w8 = (uint)*(byte *)(lVar3 + 0x40);
  } while( true );
}


