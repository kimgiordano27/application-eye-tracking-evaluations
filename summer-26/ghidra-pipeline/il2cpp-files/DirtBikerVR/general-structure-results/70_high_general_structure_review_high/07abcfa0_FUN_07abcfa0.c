/*
FUNCTION_NAME: FUN_07abcfa0
ENTRY_POINT: 07abcfa0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_9
*/


void FUN_07abcfa0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 local_58;
  
  if ((DAT_0899218a & 1) == 0) {
    FUN_03a8a718(Unity_Services_Lobbies_Lobby_CreateLobbyRequest_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(Unity_Services_Lobbies_Lobby_CreateOrJoinLobbyRequest_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848d0b8);
    FUN_03a8a718(System_Runtime_Serialization_AttributeData_TypeInfo);
    FUN_03a8a718(System_Runtime_Remoting_Messaging_ClientContextTerminatorSink_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486870);
    FUN_03a8a718(UnityEngine_Collider_TypeInfo);
    FUN_03a8a718(
                Unity_Services_Friends_Internal_Generated_Relationships_CreateRelationshipRequest_TypeInfo
                );
    FUN_03a8a718(Unity_Services_Lobbies_Models_CreateRequest_TypeInfo);
    DAT_0899218a = 1;
  }
  puVar2 = PTR_DAT_08488b88;
  lVar11 = *(long *)(param_1 + 8);
  local_58 = 0;
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_07abd0d0:
    FUN_0666e9a8(&local_58,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = FUN_07aacd60(lVar11,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_0568d620(lVar3,*(undefined8 *)UnityEngine_Collider_TypeInfo);
    uVar4 = FUN_044bea88(uVar5,*(undefined8 *)(param_1 + 10),*(undefined8 *)PTR_DAT_0848d0b8);
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_065cddf0(*(undefined8 *)Unity_Services_Lobbies_Models_CreateRequest_TypeInfo,
                           *(undefined8 *)(param_1 + 10),
                           *(undefined8 *)
                            Unity_Services_Friends_Internal_Generated_Relationships_CreateRelationshipRequest_TypeInfo
                           ,0);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08486870);
      FUN_06750b44(uVar6,uVar5,0);
      FUN_0795adac(uVar6,0);
      goto LAB_07abd344;
    }
    uVar5 = *(undefined8 *)(lVar11 + 0xd0);
    uVar6 = *(undefined8 *)(lVar11 + 0xd8);
    uVar12 = *(undefined8 *)(param_1 + 10);
    iVar1 = param_1[0xc];
    uVar14 = *(undefined8 *)(param_1 + 0xe);
    uVar7 = FUN_07aaeb60(lVar11,0);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Services_Lobbies_Lobby_CreateOrJoinLobbyRequest_TypeInfo);
    FUN_07abd508(uVar8,uVar6,uVar12,uVar5,iVar1,uVar14,uVar7);
    plVar13 = *(long **)(lVar11 + 0x140);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Runtime_Remoting_Messaging_ClientContextTerminatorSink_TypeInfo) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x22) * 0x10 + 0x138);
          goto LAB_07abd268;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_03ac43c4(plVar13,*(long *)
                                   System_Runtime_Remoting_Messaging_ClientContextTerminatorSink_TypeInfo
                          ,0x22);
LAB_07abd268:
    plVar13 = (long *)(*(code *)*puVar9)(plVar13,uVar8,puVar9[1]);
    FUN_07ab3c54(lVar11,plVar13,1,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar11 = *plVar13;
    iVar1 = param_1[0x10];
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)System_Runtime_Serialization_AttributeData_TypeInfo)
        {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0x11) * 0x10 + 0x138);
          goto LAB_07abd2f0;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_03ac43c4(plVar13,*(long *)System_Runtime_Serialization_AttributeData_TypeInfo,0x11)
    ;
LAB_07abd2f0:
    lVar11 = (*(code *)*puVar9)(plVar13,iVar1 != 0,iVar1 != 1,0,0,0,puVar9[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_58 = FUN_067c4bec(lVar11,0);
    uVar4 = FUN_0666e8e0(&local_58,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x12) = local_58;
      thunk_FUN_03afed3c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e8430(param_1 + 2,&local_58,param_1,
                   *(undefined8 *)Unity_Services_Lobbies_Lobby_CreateLobbyRequest_TypeInfo);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = FUN_07ab71f8(lVar11,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      local_58 = FUN_067c4bec(lVar3,0);
      uVar4 = FUN_0666e8e0(&local_58,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = local_58;
        thunk_FUN_03afed3c(param_1 + 0x12,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e8430(param_1 + 2,&local_58,param_1,
                     *(undefined8 *)Unity_Services_Lobbies_Lobby_CreateLobbyRequest_TypeInfo);
        return;
      }
      goto LAB_07abd0d0;
    }
    local_58 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  FUN_0666e9a8(&local_58,0);
LAB_07abd344:
  lVar11 = *(long *)puVar2;
  *param_1 = -2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


