/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_send_user_app_data_t_base__set
ENTRY_POINT: 078b78f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_send_user_app_data_t_base__set
               (void)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  int *unaff_x19;
  long unaff_x20;
  long lVar16;
  long *plVar17;
  long unaff_x24;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002148;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08488b88);
  FUN_03a8a718(System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<Transform>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<TreeInstance>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<TrialOffer>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08491c30);
  *(undefined1 *)(unaff_x20 + 0x942) = 1;
  puVar6 = PTR_DAT_08488b88;
  memset(&stack0x00001c90,0,0x4b8);
  iVar1 = *unaff_x19;
  lVar16 = *(long *)(unaff_x19 + 8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar18 = ZEXT816(0);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      *unaff_x19 = -1;
LAB_078b7ae0:
      FUN_0666e9a8(&stack0x00000028,0);
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      if (lVar16 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar17 = *(long **)(lVar16 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      puVar7 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      if (plVar17 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar11 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 7) * 0x10 + 0x138);
            goto LAB_078b7b94;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_03ac43c4(plVar17,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,
                            7);
LAB_078b7b94:
      (*(code *)*puVar8)(&stack0x000017d8,plVar17,uVar9,puVar8[1]);
      memcpy(&stack0x00001c90,&stack0x000017d8,0x4b8);
      uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      memcpy(&stack0x00001320,&stack0x00001c90,0x4b8);
      memset(&stack0x00000e60,0,0x4c0);
      FUN_078b75cc(uVar9,0,1,&stack0x00001320,&stack0x00000e60);
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      plVar17 = *(long **)(lVar16 + 0x38);
      if (plVar17 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar11 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_078b7cf8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar17,*(long *)puVar7,1);
LAB_078b7cf8:
      _in_stack_00000018 = (*(code *)*puVar8)(plVar17,puVar8[1]);
      uVar10 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 10) = uVar10;
      thunk_FUN_03afed3c();
LAB_078b7f04:
      if (lVar16 == 0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
LAB_078b7f08:
      lVar11 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         (lVar16,uVar9);
      if (lVar11 == 0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      in_stack_00000028 = FUN_067c4bec(lVar11,0);
      uVar13 = FUN_0666e8e0(&stack0x00000028,0);
      auVar4 = _in_stack_00000018;
      if ((uVar13 & 1) != 0) goto LAB_078b7f34;
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      if (iVar1 == 1) {
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
        unaff_x19[0xc] = 0;
        unaff_x19[0xd] = 0;
        *unaff_x19 = -1;
LAB_078b79c8:
        FUN_0666e9a8(&stack0x00000028,0);
        puVar7 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        auVar2._8_8_ = in_stack_00000020;
        auVar2._0_8_ = in_stack_00000018;
        if (lVar16 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar17 = *(long **)(lVar16 + 0x30);
        if (plVar17 == (long *)0x0) {
          auVar18 = auVar2;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar11 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_078b7c74;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar17,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,1);
LAB_078b7c74:
        _in_stack_00000018 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        uVar9 = FUN_0674aae0(&stack0x00000018,0);
        *(undefined8 *)(unaff_x19 + 10) = uVar9;
        thunk_FUN_03afed3c();
        plVar17 = *(long **)(lVar16 + 0x30);
        if (plVar17 == (long *)0x0) {
          auVar18 = _in_stack_00000018;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar11 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 5) * 0x10 + 0x138);
              goto LAB_078b7d38;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4(plVar17,*(long *)puVar7,5);
LAB_078b7d38:
        uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        piVar14 = unaff_x19 + 0xe;
        *(undefined8 *)piVar14 = uVar9;
        thunk_FUN_03afed3c(piVar14);
        lVar11 = FUN_078b567c(lVar16,*(undefined8 *)piVar14);
        if (lVar11 == 0) {
          auVar18 = _in_stack_00000018;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        in_stack_00000028 = FUN_067c4bec(lVar11,0);
        uVar13 = FUN_0666e8e0(&stack0x00000028,0);
        auVar5 = _in_stack_00000018;
        if ((uVar13 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
          thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
          goto LAB_078b80b4;
        }
        goto LAB_078b7d84;
      }
LAB_078b7a50:
      if (lVar16 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      if (*(char *)(lVar16 + 0x10) != '\0') {
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar9 = thunk_FUN_03ac74bc();
        uVar10 = thunk_FUN_03af1434(System_Collections_Generic_List<URPProfileId>_TypeInfo);
        FUN_078bbac4(uVar9,uVar10,0x1c,0);
        uVar10 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar9,uVar10);
        }
        goto LAB_078b88b8;
      }
      if (*(char *)(lVar16 + 0x11) != '\0') {
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar9 = thunk_FUN_03ac74bc();
        uVar10 = thunk_FUN_03af1434(System_Collections_Generic_List<User>_TypeInfo);
        FUN_078bbac4(uVar9,uVar10,0x1c,0);
        uVar10 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar9,uVar10);
        }
        goto LAB_078b88b8;
      }
      *(undefined1 *)(lVar16 + 0x10) = 1;
      piVar14 = unaff_x19 + 10;
      piVar14[0] = 0;
      piVar14[1] = 0;
      thunk_FUN_03afed3c(piVar14,0);
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      plVar17 = *(long **)(lVar16 + 0x60);
      if (plVar17 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar11 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_List<Transform>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_078b80f0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_03ac43c4(plVar17,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,0);
LAB_078b80f0:
      uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
      puVar8 = (undefined8 *)(lVar16 + 0x38);
      *puVar8 = uVar9;
      thunk_FUN_03afed3c(puVar8);
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      auVar5._8_8_ = in_stack_00000020;
      auVar5._0_8_ = in_stack_00000018;
      auVar4._8_8_ = in_stack_00000020;
      auVar4._0_8_ = in_stack_00000018;
      lVar11 = *(long *)(lVar16 + 0x20);
      if (lVar11 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      iVar1 = *(int *)(lVar11 + 0x10);
      if (iVar1 == 0) {
        uVar10 = *(undefined8 *)(lVar11 + 0x18);
        FUN_0529a878(&stack0x000017d8,*(undefined4 *)(lVar11 + 0x20),*(undefined8 *)PTR_DAT_08491c30
                    );
        uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TrialOffer>_TypeInfo);
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
                  (uVar9,0,uVar10,0,0);
        goto LAB_078b7f08;
      }
      if (iVar1 == 1) {
        plVar17 = (long *)*puVar8;
        if (plVar17 == (long *)0x0) {
          auVar18 = auVar5;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar17;
        uVar9 = *(undefined8 *)(lVar11 + 0x28);
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_078b8234;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar17,*(long *)
                                       System_Collections_Generic_List<TreeInstance>_TypeInfo,4);
LAB_078b8234:
        lVar11 = (*(code *)*puVar8)(plVar17,uVar9,puVar8[1]);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (lVar11 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        in_stack_00000028 = FUN_067c4bec(lVar11,0);
        uVar13 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar13 & 1) != 0) goto LAB_078b7ae0;
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        if (iVar1 != 2) {
          uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<UserCapability>_TypeInfo);
          uVar9 = thunk_FUN_03ac70f4(uVar9,&stack0x000017d8);
          uVar10 = thunk_FUN_03af1434(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
          uVar9 = FUN_065c412c(uVar10,uVar9,0);
          thunk_FUN_03af1434(PTR_DAT_08488490);
          uVar10 = thunk_FUN_03ac74bc();
          FUN_066b6070(uVar10,uVar9,0);
          uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
          auVar18._8_8_ = in_stack_00000020;
          auVar18._0_8_ = in_stack_00000018;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar10,uVar9);
          }
          goto LAB_078b88b8;
        }
        plVar17 = *(long **)(lVar16 + 0x58);
        if (plVar17 == (long *)0x0) {
          auVar18 = auVar4;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar11 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_078b82b8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar17,*(long *)
                                       System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo
                              ,0);
LAB_078b82b8:
        uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        *(undefined8 *)(lVar16 + 0x30) = uVar9;
        thunk_FUN_03afed3c();
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        auVar3._8_8_ = in_stack_00000020;
        auVar3._0_8_ = in_stack_00000018;
        if (*(long *)(lVar16 + 0x20) == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar17 = *(long **)(lVar16 + 0x30);
        if (plVar17 == (long *)0x0) {
          auVar18 = auVar3;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar11 = *plVar17;
        uVar9 = *(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x28);
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_078b8340;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar17,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,3);
LAB_078b8340:
        lVar11 = (*(code *)*puVar8)(plVar17,uVar9,puVar8[1]);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (lVar11 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        in_stack_00000028 = FUN_067c4bec(lVar11,0);
        uVar13 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar13 & 1) != 0) goto LAB_078b79c8;
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
      }
    }
  }
  else {
    if (iVar1 == 2) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      *unaff_x19 = -1;
LAB_078b7d84:
      _in_stack_00000018 = auVar5;
      FUN_0666e9a8(&stack0x00000028,0);
      if (lVar16 == 0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar17 = *(long **)(lVar16 + 0x30);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar17 == (long *)0x0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar11 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_078b7e6c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_03ac43c4(plVar17,*(long *)
                                     System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                            ,4);
LAB_078b7e6c:
      (*(code *)*puVar8)(&stack0x000009a8,plVar17,uVar9,puVar8[1]);
      memcpy(&stack0x000017d8,&stack0x000009a8,0x4b8);
      if (*(long *)(unaff_x19 + 0xe) == 0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      auVar18 = FUN_079239d0(*(long *)(unaff_x19 + 0xe),0);
      uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      memcpy(&stack0x000004f0,&stack0x000017d8,0x4b8);
      memset(&stack0x00000030,0,0x4c0);
      FUN_078b748c(uVar9,0,2,&stack0x000004f0,auVar18._0_8_,auVar18._8_8_,&stack0x00000030);
      goto LAB_078b7f04;
    }
    if (iVar1 != 3) goto LAB_078b7a50;
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
LAB_078b7f34:
    _in_stack_00000018 = auVar4;
    FUN_0666e9a8(&stack0x00000028,0);
    piVar14 = unaff_x19 + 10;
    uVar13 = FUN_065cd268(*(undefined8 *)piVar14,0);
    if ((uVar13 & 1) == 0) {
      auVar18 = _in_stack_00000018;
      if (lVar16 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar17 = *(long **)(lVar16 + 0x48);
      if (plVar17 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar16 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar15 + 0x23) * 0x10 + 0x138);
            goto LAB_078b8004;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_03ac43c4(plVar17,*(long *)
                                     System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23)
      ;
LAB_078b8004:
      plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
      if (plVar17 == (long *)0x0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar16 = *plVar17;
      uVar9 = *(undefined8 *)piVar14;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_078b8070;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_03ac43c4(plVar17,*(long *)
                                     System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                            ,0);
LAB_078b8070:
      (*(code *)*puVar8)(plVar17,uVar9,puVar8[1]);
    }
    *unaff_x19 = -2;
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    thunk_FUN_03afed3c(piVar14,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
LAB_078b80b4:
  auVar18 = _in_stack_00000018;
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
    return;
  }
LAB_078b88b8:
  _in_stack_00000018 = auVar18;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


