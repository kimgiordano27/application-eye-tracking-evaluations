/*
FUNCTION_NAME: FUN_087ecb98
ENTRY_POINT: 087ecb98
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_20;telemetry_or_network_hits_12
*/


undefined8 FUN_087ecb98(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_24 [4];
  
  lVar3 = param_1;
  if ((DAT_0a52f3fc & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f20ed0);
    FUN_04447ba8(PTR_DAT_09f8c1e0);
    FUN_04447ba8(PTR_DAT_09f8c1e8);
    FUN_04447ba8(PTR_DAT_09f1e7d0);
    FUN_04447ba8(PTR_DAT_09f8c1f0);
    FUN_04447ba8(PTR_DAT_09f8c1f8);
    FUN_04447ba8(PTR_DAT_09f3f7b0);
    FUN_04447ba8(PTR_DAT_09f21278);
    FUN_04447ba8(PTR_DAT_09f8c200);
    FUN_04447ba8(PTR_DAT_09f8c208);
    FUN_04447ba8(PTR_DAT_09f8c210);
    FUN_04447ba8(PTR_DAT_09f21930);
    FUN_04447ba8(PTR_DAT_09f8c218);
    FUN_04447ba8(PTR_DAT_09f8bd50);
    FUN_04447ba8(PTR_DAT_09f27d20);
    FUN_04447ba8(PTR_DAT_09f8be70);
    FUN_04447ba8(PTR_DAT_09f3c870);
    lVar3 = FUN_04447ba8(PTR_DAT_09f8c220);
    DAT_0a52f3fc = 1;
  }
  local_24[0] = 0;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 - 2U < 2) {
    uVar6 = FUN_087eb550(lVar3,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    puVar7 = (undefined8 *)PTR_DAT_09f8bd50;
    if (iVar2 != 4) {
      if (iVar2 == 1) {
        puVar7 = *(undefined8 **)(*(long *)(PTR_DAT_09f1e5b8 + 0x90) + 0xb8);
      }
      else {
        if (*(long *)(param_1 + 0x10) == 0) {
UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar4 = FUN_078b33f8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                             *(undefined8 *)PTR_DAT_09f3c870,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar6 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f8be70,
                                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
            return uVar6;
          }
          goto 
          UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1;
        }
        puVar7 = (undefined8 *)PTR_DAT_09f8bd50;
        if (*(int *)(param_1 + 0x24) != 0) {
          plVar5 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
          FUN_078c1634(plVar5,0);
          uVar8 = *(uint *)(param_1 + 0x24);
          if ((uVar8 >> 7 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c218,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 6 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c208,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 5 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c220,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 4 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c210,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 3 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c1e0,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 2 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c1e8,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 1 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c1f0,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 & 1) != 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c200,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 0xf & 1) == 0) {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
          }
          else {
            if (plVar5 == (long *)0x0)
            goto 
            UnityWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__21__<>m__Finally1
            ;
            iVar2 = FUN_078bb6fc(plVar5,0);
            if (0 < iVar2) {
              FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21278,0);
            }
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f8c1f8,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f27d20,0);
          puVar1 = PTR_DAT_09f3f7b0;
          local_24[0] = (undefined1)uVar8;
          uVar6 = FUN_079a2884(local_24,*(undefined8 *)PTR_DAT_09f3f7b0,0);
          FUN_078bb7b4(plVar5,uVar6,0);
          if (0xff < (int)uVar8) {
            FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f1e7d0,0);
            local_24[0] = (undefined1)(uVar8 >> 8);
            uVar6 = FUN_079a2884(local_24,*(undefined8 *)puVar1,0);
            FUN_078bb7b4(plVar5,uVar6,0);
          }
          FUN_078bb7b4(plVar5,*(undefined8 *)PTR_DAT_09f21930,0);
          if ((param_2 & 1) != 0) {
            uVar6 = FUN_07a84a68(0);
            FUN_078bb7b4(plVar5,uVar6,0);
          }
          uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          return uVar6;
        }
      }
    }
    uVar6 = *puVar7;
  }
  return uVar6;
}


