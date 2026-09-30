/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_send_user_app_data_t_base__get
ENTRY_POINT: 078b797c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_send_user_app_data_t_base__get
               (long param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  int *unaff_x19;
  long lVar15;
  long *plVar16;
  long unaff_x24;
  long unaff_x25;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002148;
  
  plVar17 = *(long **)(unaff_x25 + 0xb88);
  memset((void *)(param_1 + 0xc90),param_2,0x4b8);
  iVar1 = *unaff_x19;
  lVar15 = *(long *)(unaff_x19 + 8);
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
      if (lVar15 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar16 = *(long **)(lVar15 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      puVar6 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      if (plVar16 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar8 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 7) * 0x10 + 0x138);
            goto LAB_078b7b94;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar16,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,
                            7);
LAB_078b7b94:
      (*(code *)*puVar7)(&stack0x000017d8,plVar16,uVar8,puVar7[1]);
      memcpy(&stack0x00001c90,&stack0x000017d8,0x4b8);
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      memcpy(&stack0x00001320,&stack0x00001c90,0x4b8);
      memset(&stack0x00000e60,0,0x4c0);
      FUN_078b75cc(uVar8,0,1,&stack0x00001320,&stack0x00000e60);
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      plVar16 = *(long **)(lVar15 + 0x38);
      if (plVar16 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_078b7cf8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar16,*(long *)puVar6,1);
LAB_078b7cf8:
      _in_stack_00000018 = (*(code *)*puVar7)(plVar16,puVar7[1]);
      uVar9 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 10) = uVar9;
      thunk_FUN_03afed3c();
LAB_078b7f04:
      if (lVar15 == 0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
LAB_078b7f08:
      lVar10 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         (lVar15,uVar8);
      if (lVar10 == 0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      in_stack_00000028 = FUN_067c4bec(lVar10,0);
      uVar12 = FUN_0666e8e0(&stack0x00000028,0);
      auVar4 = _in_stack_00000018;
      if ((uVar12 & 1) != 0) goto LAB_078b7f34;
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*plVar17 + 0xe4) == 0) {
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
        puVar6 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        auVar2._8_8_ = in_stack_00000020;
        auVar2._0_8_ = in_stack_00000018;
        if (lVar15 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar16 = *(long **)(lVar15 + 0x30);
        if (plVar16 == (long *)0x0) {
          auVar18 = auVar2;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar10 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_078b7c74;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_03ac43c4(plVar16,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,1);
LAB_078b7c74:
        _in_stack_00000018 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        uVar8 = FUN_0674aae0(&stack0x00000018,0);
        *(undefined8 *)(unaff_x19 + 10) = uVar8;
        thunk_FUN_03afed3c();
        plVar16 = *(long **)(lVar15 + 0x30);
        if (plVar16 == (long *)0x0) {
          auVar18 = _in_stack_00000018;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar10 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 5) * 0x10 + 0x138);
              goto LAB_078b7d38;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_03ac43c4(plVar16,*(long *)puVar6,5);
LAB_078b7d38:
        uVar8 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        piVar13 = unaff_x19 + 0xe;
        *(undefined8 *)piVar13 = uVar8;
        thunk_FUN_03afed3c(piVar13);
        lVar10 = FUN_078b567c(lVar15,*(undefined8 *)piVar13);
        if (lVar10 == 0) {
          auVar18 = _in_stack_00000018;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        in_stack_00000028 = FUN_067c4bec(lVar10,0);
        uVar12 = FUN_0666e8e0(&stack0x00000028,0);
        auVar5 = _in_stack_00000018;
        if ((uVar12 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
          thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
          if (*(int *)(*plVar17 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
          goto LAB_078b80b4;
        }
        goto LAB_078b7d84;
      }
LAB_078b7a50:
      if (lVar15 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      if (*(char *)(lVar15 + 0x10) != '\0') {
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar8 = thunk_FUN_03ac74bc();
        uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<URPProfileId>_TypeInfo);
        FUN_078bbac4(uVar8,uVar9,0x1c,0);
        uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar8,uVar9);
        }
        goto LAB_078b88b8;
      }
      if (*(char *)(lVar15 + 0x11) != '\0') {
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar8 = thunk_FUN_03ac74bc();
        uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<User>_TypeInfo);
        FUN_078bbac4(uVar8,uVar9,0x1c,0);
        uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar8,uVar9);
        }
        goto LAB_078b88b8;
      }
      *(undefined1 *)(lVar15 + 0x10) = 1;
      piVar13 = unaff_x19 + 10;
      piVar13[0] = 0;
      piVar13[1] = 0;
      thunk_FUN_03afed3c(piVar13,0);
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      plVar16 = *(long **)(lVar15 + 0x60);
      if (plVar16 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_List<Transform>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_078b80f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar16,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,0);
LAB_078b80f0:
      uVar8 = (*(code *)*puVar7)(plVar16,puVar7[1]);
      puVar7 = (undefined8 *)(lVar15 + 0x38);
      *puVar7 = uVar8;
      thunk_FUN_03afed3c(puVar7);
      auVar18._8_8_ = in_stack_00000020;
      auVar18._0_8_ = in_stack_00000018;
      auVar5._8_8_ = in_stack_00000020;
      auVar5._0_8_ = in_stack_00000018;
      auVar4._8_8_ = in_stack_00000020;
      auVar4._0_8_ = in_stack_00000018;
      lVar10 = *(long *)(lVar15 + 0x20);
      if (lVar10 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      iVar1 = *(int *)(lVar10 + 0x10);
      if (iVar1 == 0) {
        uVar9 = *(undefined8 *)(lVar10 + 0x18);
        FUN_0529a878(&stack0x000017d8,*(undefined4 *)(lVar10 + 0x20),*(undefined8 *)PTR_DAT_08491c30
                    );
        uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TrialOffer>_TypeInfo);
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
                  (uVar8,0,uVar9,0,0);
        goto LAB_078b7f08;
      }
      if (iVar1 == 1) {
        plVar16 = (long *)*puVar7;
        if (plVar16 == (long *)0x0) {
          auVar18 = auVar5;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar11 = *plVar16;
        uVar8 = *(undefined8 *)(lVar10 + 0x28);
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
              goto LAB_078b8234;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_03ac43c4(plVar16,*(long *)
                                       System_Collections_Generic_List<TreeInstance>_TypeInfo,4);
LAB_078b8234:
        lVar10 = (*(code *)*puVar7)(plVar16,uVar8,puVar7[1]);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (lVar10 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        in_stack_00000028 = FUN_067c4bec(lVar10,0);
        uVar12 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar12 & 1) != 0) goto LAB_078b7ae0;
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*plVar17 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        if (iVar1 != 2) {
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<UserCapability>_TypeInfo);
          uVar8 = thunk_FUN_03ac70f4(uVar8,&stack0x000017d8);
          uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
          uVar8 = FUN_065c412c(uVar9,uVar8,0);
          thunk_FUN_03af1434(PTR_DAT_08488490);
          uVar9 = thunk_FUN_03ac74bc();
          FUN_066b6070(uVar9,uVar8,0);
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
          auVar18._8_8_ = in_stack_00000020;
          auVar18._0_8_ = in_stack_00000018;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar9,uVar8);
          }
          goto LAB_078b88b8;
        }
        plVar16 = *(long **)(lVar15 + 0x58);
        if (plVar16 == (long *)0x0) {
          auVar18 = auVar4;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar10 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_078b82b8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_03ac43c4(plVar16,*(long *)
                                       System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo
                              ,0);
LAB_078b82b8:
        uVar8 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        *(undefined8 *)(lVar15 + 0x30) = uVar8;
        thunk_FUN_03afed3c();
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        auVar3._8_8_ = in_stack_00000020;
        auVar3._0_8_ = in_stack_00000018;
        if (*(long *)(lVar15 + 0x20) == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar16 = *(long **)(lVar15 + 0x30);
        if (plVar16 == (long *)0x0) {
          auVar18 = auVar3;
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar10 = *plVar16;
        uVar8 = *(undefined8 *)(*(long *)(lVar15 + 0x20) + 0x28);
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_078b8340;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_03ac43c4(plVar16,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,3);
LAB_078b8340:
        lVar10 = (*(code *)*puVar7)(plVar16,uVar8,puVar7[1]);
        auVar18._8_8_ = in_stack_00000020;
        auVar18._0_8_ = in_stack_00000018;
        if (lVar10 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        in_stack_00000028 = FUN_067c4bec(lVar10,0);
        uVar12 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar12 & 1) != 0) goto LAB_078b79c8;
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*plVar17 + 0xe4) == 0) {
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
      if (lVar15 == 0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar16 = *(long **)(lVar15 + 0x30);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar16 == (long *)0x0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar10 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar8 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_078b7e6c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar16,*(long *)
                                     System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                            ,4);
LAB_078b7e6c:
      (*(code *)*puVar7)(&stack0x000009a8,plVar16,uVar8,puVar7[1]);
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
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      memcpy(&stack0x000004f0,&stack0x000017d8,0x4b8);
      memset(&stack0x00000030,0,0x4c0);
      FUN_078b748c(uVar8,0,2,&stack0x000004f0,auVar18._0_8_,auVar18._8_8_,&stack0x00000030);
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
    piVar13 = unaff_x19 + 10;
    uVar12 = FUN_065cd268(*(undefined8 *)piVar13,0);
    if ((uVar12 & 1) == 0) {
      auVar18 = _in_stack_00000018;
      if (lVar15 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar15 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0x23) * 0x10 + 0x138);
            goto LAB_078b8004;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar16,*(long *)
                                     System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23)
      ;
LAB_078b8004:
      plVar16 = (long *)(*(code *)*puVar7)(plVar16,puVar7[1]);
      if (plVar16 == (long *)0x0) {
        auVar18 = _in_stack_00000018;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar15 = *plVar16;
      uVar8 = *(undefined8 *)piVar13;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_078b8070;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar16,*(long *)
                                     System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                            ,0);
LAB_078b8070:
      (*(code *)*puVar7)(plVar16,uVar8,puVar7[1]);
    }
    *unaff_x19 = -2;
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    thunk_FUN_03afed3c(piVar13,0);
    if (*(int *)(*plVar17 + 0xe4) == 0) {
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


