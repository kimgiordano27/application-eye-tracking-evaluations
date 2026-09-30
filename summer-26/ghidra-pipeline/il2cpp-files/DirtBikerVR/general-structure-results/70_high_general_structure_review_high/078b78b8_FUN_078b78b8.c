/*
FUNCTION_NAME: FUN_078b78b8
ENTRY_POINT: 078b78b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_078b78b8(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 local_2188 [16];
  undefined8 local_2178;
  undefined1 auStack_2170 [1216];
  undefined1 auStack_1cb0 [1208];
  undefined1 auStack_17f8 [1208];
  undefined1 auStack_1340 [1216];
  undefined1 auStack_e80 [1208];
  undefined8 local_9c8 [151];
  undefined1 auStack_510 [1208];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_08987942 & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_List<ulong>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<Transform>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TreeInstance>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TrialOffer>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491c30);
    DAT_08987942 = 1;
  }
  puVar7 = PTR_DAT_08488b88;
  memset(auStack_510,0,0x4b8);
  iVar1 = *param_1;
  lVar17 = *(long *)(param_1 + 8);
  local_2188._8_8_ = 0;
  local_2178 = 0;
  local_2188._0_8_ = 0;
  auVar6 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar19 = ZEXT816(0);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_2178 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
LAB_078b7ae0:
      FUN_0666e9a8(&local_2178,0);
      auVar19._8_8_ = local_2188._8_8_;
      auVar19._0_8_ = local_2188._0_8_;
      if (lVar17 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar18 = *(long **)(lVar17 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      puVar8 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
      auVar19._8_8_ = local_2188._8_8_;
      auVar19._0_8_ = local_2188._0_8_;
      if (plVar18 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 7) * 0x10 + 0x138);
            goto LAB_078b7b94;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_03ac43c4(plVar18,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,
                            7);
LAB_078b7b94:
      (*(code *)*puVar9)(local_9c8,plVar18,uVar10,puVar9[1]);
      memcpy(auStack_510,local_9c8,0x4b8);
      uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(auStack_e80,auStack_510,0x4b8);
      memset(auStack_1340,0,0x4c0);
      FUN_078b75cc(uVar10,0,1,auStack_e80,auStack_1340);
      auVar19._8_8_ = local_2188._8_8_;
      auVar19._0_8_ = local_2188._0_8_;
      plVar18 = *(long **)(lVar17 + 0x38);
      if (plVar18 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_078b7cf8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(plVar18,*(long *)puVar8,1);
LAB_078b7cf8:
      local_2188 = (*(code *)*puVar9)(plVar18,puVar9[1]);
      uVar11 = FUN_0674aae0(local_2188,0);
      *(undefined8 *)(param_1 + 10) = uVar11;
      thunk_FUN_03afed3c();
LAB_078b7f04:
      if (lVar17 == 0) {
        auVar19 = local_2188;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
LAB_078b7f08:
      lVar12 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         (lVar17,uVar10);
      if (lVar12 == 0) {
        auVar19 = local_2188;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      local_2178 = FUN_067c4bec(lVar12,0);
      uVar14 = FUN_0666e8e0(&local_2178,0);
      auVar5 = local_2188;
      if ((uVar14 & 1) != 0) goto LAB_078b7f34;
      *param_1 = 3;
      *(undefined8 *)(param_1 + 0xc) = local_2178;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4e6c(param_1 + 2,&local_2178,param_1,
                   *(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
    }
    else {
      if (iVar1 == 1) {
        local_2178 = *(undefined8 *)(param_1 + 0xc);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
LAB_078b79c8:
        FUN_0666e9a8(&local_2178,0);
        puVar8 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
        auVar19._8_8_ = local_2188._8_8_;
        auVar19._0_8_ = local_2188._0_8_;
        auVar3._8_8_ = local_2188._8_8_;
        auVar3._0_8_ = local_2188._0_8_;
        if (lVar17 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar18 = *(long **)(lVar17 + 0x30);
        if (plVar18 == (long *)0x0) {
          auVar19 = auVar3;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_078b7c74;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_03ac43c4(plVar18,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,1);
LAB_078b7c74:
        local_2188 = (*(code *)*puVar9)(plVar18,puVar9[1]);
        uVar10 = FUN_0674aae0(local_2188,0);
        *(undefined8 *)(param_1 + 10) = uVar10;
        thunk_FUN_03afed3c();
        plVar18 = *(long **)(lVar17 + 0x30);
        if (plVar18 == (long *)0x0) {
          auVar19 = local_2188;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 5) * 0x10 + 0x138);
              goto LAB_078b7d38;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4(plVar18,*(long *)puVar8,5);
LAB_078b7d38:
        uVar10 = (*(code *)*puVar9)(plVar18,puVar9[1]);
        piVar15 = param_1 + 0xe;
        *(undefined8 *)piVar15 = uVar10;
        thunk_FUN_03afed3c(piVar15);
        lVar12 = FUN_078b567c(lVar17,*(undefined8 *)piVar15);
        if (lVar12 == 0) {
          auVar19 = local_2188;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        local_2178 = FUN_067c4bec(lVar12,0);
        uVar14 = FUN_0666e8e0(&local_2178,0);
        auVar6 = local_2188;
        if ((uVar14 & 1) == 0) {
          *param_1 = 2;
          *(undefined8 *)(param_1 + 0xc) = local_2178;
          thunk_FUN_03afed3c(param_1 + 0xc,0);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e4e6c(param_1 + 2,&local_2178,param_1,
                       *(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
          goto LAB_078b80b4;
        }
        goto LAB_078b7d84;
      }
LAB_078b7a50:
      if (lVar17 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      if (*(char *)(lVar17 + 0x10) != '\0') {
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar10 = thunk_FUN_03ac74bc();
        uVar11 = thunk_FUN_03af1434(System_Collections_Generic_List<URPProfileId>_TypeInfo);
        FUN_078bbac4(uVar10,uVar11,0x1c,0);
        uVar11 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
        auVar19._8_8_ = local_2188._8_8_;
        auVar19._0_8_ = local_2188._0_8_;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar10,uVar11);
        }
        goto LAB_078b88b8;
      }
      if (*(char *)(lVar17 + 0x11) != '\0') {
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar10 = thunk_FUN_03ac74bc();
        uVar11 = thunk_FUN_03af1434(System_Collections_Generic_List<User>_TypeInfo);
        FUN_078bbac4(uVar10,uVar11,0x1c,0);
        uVar11 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
        auVar19._8_8_ = local_2188._8_8_;
        auVar19._0_8_ = local_2188._0_8_;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar10,uVar11);
        }
        goto LAB_078b88b8;
      }
      *(undefined1 *)(lVar17 + 0x10) = 1;
      piVar15 = param_1 + 10;
      piVar15[0] = 0;
      piVar15[1] = 0;
      thunk_FUN_03afed3c(piVar15,0);
      auVar19._8_8_ = local_2188._8_8_;
      auVar19._0_8_ = local_2188._0_8_;
      plVar18 = *(long **)(lVar17 + 0x60);
      if (plVar18 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Collections_Generic_List<Transform>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_078b80f0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_03ac43c4(plVar18,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,0);
LAB_078b80f0:
      uVar10 = (*(code *)*puVar9)(plVar18,puVar9[1]);
      puVar9 = (undefined8 *)(lVar17 + 0x38);
      *puVar9 = uVar10;
      thunk_FUN_03afed3c(puVar9);
      auVar19._8_8_ = local_2188._8_8_;
      auVar19._0_8_ = local_2188._0_8_;
      auVar6._8_8_ = local_2188._8_8_;
      auVar6._0_8_ = local_2188._0_8_;
      auVar5._8_8_ = local_2188._8_8_;
      auVar5._0_8_ = local_2188._0_8_;
      lVar12 = *(long *)(lVar17 + 0x20);
      if (lVar12 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      iVar1 = *(int *)(lVar12 + 0x10);
      if (iVar1 == 0) {
        uVar11 = *(undefined8 *)(lVar12 + 0x18);
        local_9c8[0] = 0;
        FUN_0529a878(local_9c8,*(undefined4 *)(lVar12 + 0x20),*(undefined8 *)PTR_DAT_08491c30);
        uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
                  (uVar10,0,uVar11,local_9c8[0],0);
        goto LAB_078b7f08;
      }
      if (iVar1 == 1) {
        plVar18 = (long *)*puVar9;
        if (plVar18 == (long *)0x0) {
          auVar19 = auVar6;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar13 = *plVar18;
        uVar10 = *(undefined8 *)(lVar12 + 0x28);
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
              goto LAB_078b8234;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_03ac43c4(plVar18,*(long *)
                                       System_Collections_Generic_List<TreeInstance>_TypeInfo,4);
LAB_078b8234:
        lVar12 = (*(code *)*puVar9)(plVar18,uVar10,puVar9[1]);
        auVar19._8_8_ = local_2188._8_8_;
        auVar19._0_8_ = local_2188._0_8_;
        if (lVar12 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        local_2178 = FUN_067c4bec(lVar12,0);
        uVar14 = FUN_0666e8e0(&local_2178,0);
        if ((uVar14 & 1) != 0) goto LAB_078b7ae0;
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xc) = local_2178;
        thunk_FUN_03afed3c(param_1 + 0xc,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4e6c(param_1 + 2,&local_2178,param_1,
                     *(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
      }
      else {
        if (iVar1 != 2) {
          local_9c8[0] = CONCAT44(local_9c8[0]._4_4_,iVar1);
          uVar10 = thunk_FUN_03af1434(System_Collections_Generic_List<UserCapability>_TypeInfo);
          uVar10 = thunk_FUN_03ac70f4(uVar10,local_9c8);
          uVar11 = thunk_FUN_03af1434(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
          uVar10 = FUN_065c412c(uVar11,uVar10,0);
          thunk_FUN_03af1434(PTR_DAT_08488490);
          uVar11 = thunk_FUN_03ac74bc();
          FUN_066b6070(uVar11,uVar10,0);
          uVar10 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
          auVar19._8_8_ = local_2188._8_8_;
          auVar19._0_8_ = local_2188._0_8_;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar11,uVar10);
          }
          goto LAB_078b88b8;
        }
        plVar18 = *(long **)(lVar17 + 0x58);
        if (plVar18 == (long *)0x0) {
          auVar19 = auVar5;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_078b82b8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_03ac43c4(plVar18,*(long *)
                                       System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo
                              ,0);
LAB_078b82b8:
        uVar10 = (*(code *)*puVar9)(plVar18,puVar9[1]);
        *(undefined8 *)(lVar17 + 0x30) = uVar10;
        thunk_FUN_03afed3c();
        auVar19._8_8_ = local_2188._8_8_;
        auVar19._0_8_ = local_2188._0_8_;
        auVar4._8_8_ = local_2188._8_8_;
        auVar4._0_8_ = local_2188._0_8_;
        if (*(long *)(lVar17 + 0x20) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar18 = *(long **)(lVar17 + 0x30);
        if (plVar18 == (long *)0x0) {
          auVar19 = auVar4;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar18;
        uVar10 = *(undefined8 *)(*(long *)(lVar17 + 0x20) + 0x28);
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_078b8340;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_03ac43c4(plVar18,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,3);
LAB_078b8340:
        lVar12 = (*(code *)*puVar9)(plVar18,uVar10,puVar9[1]);
        auVar19._8_8_ = local_2188._8_8_;
        auVar19._0_8_ = local_2188._0_8_;
        if (lVar12 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        local_2178 = FUN_067c4bec(lVar12,0);
        uVar14 = FUN_0666e8e0(&local_2178,0);
        if ((uVar14 & 1) != 0) goto LAB_078b79c8;
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0xc) = local_2178;
        thunk_FUN_03afed3c(param_1 + 0xc,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4e6c(param_1 + 2,&local_2178,param_1,
                     *(undefined8 *)System_Collections_Generic_List<ulong>_TypeInfo);
      }
    }
  }
  else {
    if (iVar1 == 2) {
      local_2178 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
LAB_078b7d84:
      local_2188 = auVar6;
      FUN_0666e9a8(&local_2178,0);
      if (lVar17 == 0) {
        auVar19 = local_2188;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar18 = *(long **)(lVar17 + 0x30);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar18 == (long *)0x0) {
        auVar19 = local_2188;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_078b7e6c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_03ac43c4(plVar18,*(long *)
                                     System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                            ,4);
LAB_078b7e6c:
      (*(code *)*puVar9)(auStack_17f8,plVar18,uVar10,puVar9[1]);
      memcpy(local_9c8,auStack_17f8,0x4b8);
      if (*(long *)(param_1 + 0xe) == 0) {
        auVar19 = local_2188;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      auVar19 = FUN_079239d0(*(long *)(param_1 + 0xe),0);
      uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(auStack_1cb0,local_9c8,0x4b8);
      memset(auStack_2170,0,0x4c0);
      FUN_078b748c(uVar10,0,2,auStack_1cb0,auVar19._0_8_,auVar19._8_8_,auStack_2170);
      goto LAB_078b7f04;
    }
    if (iVar1 != 3) goto LAB_078b7a50;
    local_2178 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_078b7f34:
    local_2188 = auVar5;
    FUN_0666e9a8(&local_2178,0);
    piVar15 = param_1 + 10;
    uVar14 = FUN_065cd268(*(undefined8 *)piVar15,0);
    if ((uVar14 & 1) == 0) {
      auVar19 = local_2188;
      if (lVar17 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar18 = *(long **)(lVar17 + 0x48);
      if (plVar18 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar17 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar16 + 0x23) * 0x10 + 0x138);
            goto LAB_078b8004;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_03ac43c4(plVar18,*(long *)
                                     System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23)
      ;
LAB_078b8004:
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
      if (plVar18 == (long *)0x0) {
        auVar19 = local_2188;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar17 = *plVar18;
      uVar10 = *(undefined8 *)piVar15;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_078b8070;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_03ac43c4(plVar18,*(long *)
                                     System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                            ,0);
LAB_078b8070:
      (*(code *)*puVar9)(plVar18,uVar10,puVar9[1]);
    }
    *param_1 = -2;
    param_1[10] = 0;
    param_1[0xb] = 0;
    thunk_FUN_03afed3c(piVar15,0);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(param_1 + 2,0);
  }
LAB_078b80b4:
  auVar19 = local_2188;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_078b88b8:
  local_2188 = auVar19;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


