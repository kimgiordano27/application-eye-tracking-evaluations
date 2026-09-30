/*
FUNCTION_NAME: FUN_097b0fb4
ENTRY_POINT: 097b0fb4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x097b1ba8) */
/* WARNING: Removing unreachable block (ram,0x097b1a00) */
/* WARNING: Removing unreachable block (ram,0x097b1a04) */
/* WARNING: Removing unreachable block (ram,0x097b1864) */
/* WARNING: Removing unreachable block (ram,0x097b1378) */

void FUN_097b0fb4(undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  
  if ((DAT_0a547a47 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f256a0);
    FUN_04447ba8(PTR_DAT_09f256a8);
    FUN_04447ba8(Unity_Multiplayer_Tools_NetStats_EventMetric<RpcEvent>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f256b0);
    FUN_04447ba8(Unity_Multiplayer_Tools_NetStats_EventMetric<SceneEventMetric>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f256b8);
    FUN_04447ba8(Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f256c0);
    FUN_04447ba8(Unity_Multiplayer_Tools_NetStats_EventMetric<UnnamedMessageEvent>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f256c8);
    FUN_04447ba8(PTR_DAT_09f256d0);
    FUN_04447ba8(PTR_DAT_09f256d8);
    FUN_04447ba8(
                Unity_Netcode_NetworkListEvent_EventType<NetworkGameManager_NetworkPlayerInfo>_TypeInfo
                );
    FUN_04447ba8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f29058);
    FUN_04447ba8(PTR_DAT_09f286a8);
    FUN_04447ba8(PTR_DAT_09f29068);
    FUN_04447ba8(PTR_DAT_09f29070);
    FUN_04447ba8(Unity_Multiplayer_Tools_NetStats_EventMetric<OwnershipChangeEvent>_TypeInfo);
    FUN_04447ba8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f25a60);
    FUN_04447ba8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f286b0);
    DAT_0a547a47 = 1;
  }
  puVar3 = Unity_Multiplayer_Tools_NetStats_EventMetric<OwnershipChangeEvent>_TypeInfo;
  puVar2 = PTR_DAT_09f286b0;
  uVar12 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  do {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *(long *)puVar2;
    }
    if ((long)**(int **)(lVar5 + 0xb8) <= (long)uVar12) {
      return;
    }
    lVar5 = *(long *)(param_3 + 0x20);
    if (lVar5 == 0) goto LAB_097b1b98;
    if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_097b1b94;
    plVar17 = *(long **)(param_3 + 0x18);
    if (plVar17 == (long *)0x0) goto LAB_097b1b98;
    uVar10 = (ulong)*(uint *)(plVar17 + 3);
    if (uVar10 <= uVar12) goto LAB_097b1b94;
    plVar14 = *(long **)(lVar5 + uVar12 * 8 + 0x20);
    plVar15 = plVar17 + uVar12 + 4;
    lVar13 = *plVar15;
    lVar5 = *(long *)(param_3 + 0x10);
    if (lVar5 == 0) goto LAB_097b1b98;
    if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_097b1b94;
    lVar5 = *(long *)(lVar5 + uVar12 * 8 + 0x20);
    if (lVar5 == lVar13) {
      if (plVar14 != (long *)0x0) {
        lVar13 = *plVar14;
        lVar5 = *(long *)(param_3 + 0x28);
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_097b15e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(plVar14,*(long *)puVar3,1);
LAB_097b15e4:
        uVar18 = (*(code *)*puVar7)(plVar14,puVar7[1]);
        if (lVar5 == 0) goto LAB_097b1b98;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_097b1b94;
        lVar5 = lVar5 + uVar12 * 8;
        *(undefined4 *)(lVar5 + 0x20) = uVar18;
        *(int *)(lVar5 + 0x24) = (int)param_2;
      }
    }
    else {
      uVar9 = param_2;
      if (lVar5 != 0) {
        lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar17 + 0x40));
        if (lVar6 == 0) {
          uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar9,0);
        }
        uVar10 = (ulong)*(uint *)(plVar17 + 3);
        uVar9 = param_2;
      }
      if (uVar10 <= uVar12) {
LAB_097b1b94:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *plVar15 = lVar5;
      thunk_FUN_044bb4b4(plVar15,lVar5);
      if (plVar14 == (long *)0x0) {
        FUN_097ae9ac(&local_78,param_4);
        if (*(int *)(*(long *)PTR_DAT_09f25a60 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar19 = FUN_097b1c5c(uVar12 & 0xffffffff,param_5);
        FUN_097b1cdc(lVar13,lVar5,0,uVar12 & 0xffffffff);
        param_2 = uVar9;
        FUN_04ef29b8(uVar19,lVar13,lVar5,0,uVar12 & 0xffffffff,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_TypeInfo
                    );
        lVar6 = *(long *)(param_3 + 0x28);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar6 = lVar6 + uVar12 * 8;
        *(int *)(lVar6 + 0x20) = (int)uVar19;
        *(int *)(lVar6 + 0x24) = (int)uVar9;
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar6 = *(long *)puVar2;
        }
        if (uVar12 == *(uint *)(*(long *)(lVar6 + 0xb8) + 8)) {
          FUN_097b2054(uVar19,uVar9,lVar13,lVar5,0);
          FUN_04e26b10(uVar19,lVar13,lVar5,0,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                      );
          param_2 = uVar9;
        }
        if (local_78 == 0) goto LAB_097b1b98;
        FUN_097aea58();
      }
      else {
        lVar6 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_097b138c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(plVar14,*(long *)puVar3,1);
LAB_097b138c:
        uVar19 = (*(code *)*puVar7)(plVar14,puVar7[1]);
        lVar6 = *(long *)(param_3 + 0x28);
        if (lVar6 == 0) goto LAB_097b1b98;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_097b1b94;
        lVar6 = lVar6 + uVar12 * 8;
        *(int *)(lVar6 + 0x20) = (int)uVar19;
        *(int *)(lVar6 + 0x24) = (int)uVar9;
        lVar6 = *plVar14;
        bVar1 = *(byte *)(*(long *)PTR_DAT_09f29058 + 0x130);
        param_2 = uVar9;
        if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_09f29058))
        {
          lVar6 = (**(code **)(lVar6 + 0x188))(plVar14,*(undefined8 *)(lVar6 + 400));
          if (*(int *)(*(long *)PTR_DAT_09f256c8 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f256c8);
          }
          lVar8 = FUN_054b81d0(*(undefined8 *)PTR_DAT_09f256b0);
          if (lVar6 != lVar8) {
            lVar6 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
            if (*(int *)(*(long *)PTR_DAT_09f256d0 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f256d0);
            }
            lVar8 = FUN_054b81d0(*(undefined8 *)PTR_DAT_09f256a0);
            if (lVar6 != lVar8) {
              lVar6 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
              if (*(int *)(*(long *)PTR_DAT_09f256c0 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f256c0);
              }
              lVar8 = FUN_054b81d0(*(undefined8 *)PTR_DAT_09f256b8);
              if (lVar6 != lVar8) {
                lVar6 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                if (*(int *)(*(long *)PTR_DAT_09f256d8 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f256d8);
                }
                lVar8 = FUN_054b81d0(*(undefined8 *)PTR_DAT_09f256a8);
                if (lVar6 != lVar8) {
                  lVar6 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                  if (*(int *)(*(long *)
                                Unity_Netcode_NetworkListEvent_EventType<NetworkGameManager_NetworkPlayerInfo>_TypeInfo
                              + 0xe4) == 0) {
                    thunk_FUN_044a54b4(*(long *)
                                        Unity_Netcode_NetworkListEvent_EventType<NetworkGameManager_NetworkPlayerInfo>_TypeInfo
                                      );
                  }
                  lVar8 = FUN_054b81d0(*(undefined8 *)
                                        Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>_TypeInfo
                                      );
                  if (lVar6 == lVar8) {
                    FUN_097ae9ac(&local_88,param_4);
                    uVar16 = *(undefined8 *)PTR_DAT_09f286a8;
                    lVar6 = thunk_FUN_04485110(plVar14,uVar16);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_044481e4(plVar14,uVar16,0);
                    }
                    FUN_097b2054(uVar19,uVar9,lVar13,lVar5);
                    uVar16 = *(undefined8 *)PTR_DAT_09f286a8;
                    lVar6 = thunk_FUN_04485110(plVar14,uVar16);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_044481e4(plVar14,uVar16,0);
                    }
                    FUN_04e26b10(uVar19,lVar13,lVar5,lVar6,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                                );
                    if (local_88 == 0) goto LAB_097b1b98;
                    FUN_097aea58();
                    param_2 = uVar9;
                  }
                  else {
                    lVar6 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400))
                    ;
                    if (*(int *)(*(long *)
                                  Unity_Multiplayer_Tools_NetStats_EventMetric<UnnamedMessageEvent>_TypeInfo
                                + 0xe4) == 0) {
                      thunk_FUN_044a54b4(*(long *)
                                          Unity_Multiplayer_Tools_NetStats_EventMetric<UnnamedMessageEvent>_TypeInfo
                                        );
                    }
                    lVar8 = FUN_054b81d0(*(undefined8 *)
                                          Unity_Multiplayer_Tools_NetStats_EventMetric<SceneEventMetric>_TypeInfo
                                        );
                    if (lVar6 != lVar8) {
                      lVar6 = (**(code **)(*plVar14 + 0x188))
                                        (plVar14,*(undefined8 *)(*plVar14 + 400));
                      if (*(int *)(*(long *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                                  + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)
                                            UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                                          );
                      }
                      lVar8 = FUN_054b81d0(*(undefined8 *)
                                            Unity_Multiplayer_Tools_NetStats_EventMetric<RpcEvent>_TypeInfo
                                          );
                      if (lVar6 != lVar8) goto LAB_097b174c;
                    }
                    FUN_097ae9ac(&local_90,param_4);
                    FUN_097b1cdc(uVar19,uVar9,lVar13,lVar5,0,uVar12 & 0xffffffff);
                    param_2 = uVar9;
                    FUN_04ef29b8(uVar19,lVar13,lVar5,0,uVar12 & 0xffffffff,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_TypeInfo
                                );
                    lVar6 = *(long *)puVar2;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                      lVar6 = *(long *)puVar2;
                    }
                    if (uVar12 == *(uint *)(*(long *)(lVar6 + 0xb8) + 8)) {
                      uVar16 = *(undefined8 *)PTR_DAT_09f286a8;
                      lVar6 = thunk_FUN_04485110(plVar14,uVar16);
                      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_044481e4(plVar14,uVar16,0);
                      }
                      FUN_097b2054(uVar19,uVar9,lVar13,lVar5);
                      uVar16 = *(undefined8 *)PTR_DAT_09f286a8;
                      lVar6 = thunk_FUN_04485110(plVar14,uVar16);
                      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_044481e4(plVar14,uVar16,0);
                      }
                      FUN_04e26b10(uVar19,lVar13,lVar5,lVar6,
                                   *(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                                  );
                      param_2 = uVar9;
                    }
                    if (local_90 == 0) goto LAB_097b1b98;
                    FUN_097aea58();
                  }
                  goto LAB_097b174c;
                }
              }
            }
          }
          FUN_097ae9ac(&local_80,param_4);
          uVar16 = *(undefined8 *)PTR_DAT_09f29070;
          lVar6 = thunk_FUN_04485110(plVar14,uVar16);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(plVar14,uVar16,0);
          }
          FUN_097b1cdc(uVar19,uVar9,lVar13,lVar5,lVar6,uVar12 & 0xffffffff);
          uVar16 = *(undefined8 *)PTR_DAT_09f29070;
          lVar6 = thunk_FUN_04485110(plVar14,uVar16);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(plVar14,uVar16,0);
          }
          param_2 = uVar9;
          FUN_04ef29b8(uVar19,lVar13,lVar5,lVar6,uVar12 & 0xffffffff,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_TypeInfo
                      );
          lVar6 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_097b1618;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_044822ac(plVar14,*(long *)puVar3,0);
LAB_097b1618:
          iVar4 = (*(code *)*puVar7)(plVar14,puVar7[1]);
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar6 = *(long *)puVar2;
          }
          if (iVar4 == *(int *)(*(long *)(lVar6 + 0xb8) + 8)) {
            uVar16 = *(undefined8 *)PTR_DAT_09f29068;
            lVar6 = thunk_FUN_04485110(plVar14,uVar16);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4(plVar14,uVar16);
            }
            lVar6 = *(long *)PTR_DAT_09f29068;
            plVar17 = (long *)thunk_FUN_04485110(plVar14,lVar6);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4(plVar14,lVar6);
            }
            lVar8 = *plVar17;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_097b16d8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_044822ac(plVar17,lVar6,2);
LAB_097b16d8:
            lVar6 = (*(code *)*puVar7)(plVar17,puVar7[1]);
            if (lVar6 != 0) {
              FUN_097b2054(uVar19,uVar9,lVar13,lVar5,lVar6);
              FUN_04e26b10(uVar19,lVar13,lVar5,lVar6,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                          );
              param_2 = uVar9;
            }
          }
          if (local_80 == 0) goto LAB_097b1b98;
          FUN_097aea58();
        }
      }
LAB_097b174c:
      lVar5 = *(long *)(param_3 + 0x20);
      if (lVar5 == 0) {
LAB_097b1b98:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_097b1b94;
      puVar7 = (undefined8 *)(lVar5 + uVar12 * 8 + 0x20);
      *puVar7 = 0;
      thunk_FUN_044bb4b4(puVar7,0);
    }
    uVar12 = uVar12 + 1;
  } while( true );
}


