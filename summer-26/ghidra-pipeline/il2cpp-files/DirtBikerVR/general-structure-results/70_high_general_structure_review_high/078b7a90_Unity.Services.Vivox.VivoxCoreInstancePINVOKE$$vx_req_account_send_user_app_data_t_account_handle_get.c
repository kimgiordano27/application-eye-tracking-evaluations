/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_send_user_app_data_t_account_handle_get
ENTRY_POINT: 078b7a90
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_send_user_app_data_t_account_handle_get
               (long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *in_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar14;
  long unaff_x24;
  long *unaff_x25;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002148;
  
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *in_x10) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_078b80f0;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_03ac43c4();
LAB_078b80f0:
  uVar8 = (*(code *)*puVar6)();
  puVar6 = (undefined8 *)(unaff_x20 + 0x38);
  *puVar6 = uVar8;
  thunk_FUN_03afed3c(puVar6);
  auVar4._8_8_ = in_stack_00000020;
  auVar4._0_8_ = in_stack_00000018;
  auVar15._8_8_ = in_stack_00000020;
  auVar15._0_8_ = in_stack_00000018;
  lVar12 = *(long *)(unaff_x20 + 0x20);
  if (lVar12 == 0) {
    if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_078b88b8;
  }
  iVar1 = *(int *)(lVar12 + 0x10);
  if (iVar1 == 0) {
    uVar9 = *(undefined8 *)(lVar12 + 0x18);
    FUN_0529a878(&stack0x000017d8,*(undefined4 *)(lVar12 + 0x20),*(undefined8 *)PTR_DAT_08491c30);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
              (uVar8,0,uVar9,0,0);
LAB_078b7f08:
    lVar12 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                       ();
    if (lVar12 == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    in_stack_00000028 = FUN_067c4bec(lVar12,0);
    uVar11 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_0666e9a8(&stack0x00000028,0);
      puVar6 = (undefined8 *)(unaff_x19 + 10);
      uVar11 = FUN_065cd268(*puVar6,0);
      if ((uVar11 & 1) == 0) {
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar14 = *(long **)(unaff_x20 + 0x48);
        if (plVar14 == (long *)0x0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
              goto LAB_078b8004;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_03ac43c4(plVar14,*(long *)
                                       System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,
                              0x23);
LAB_078b8004:
        plVar14 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
        if (plVar14 == (long *)0x0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar14;
        uVar8 = *puVar6;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_078b8070;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_03ac43c4(plVar14,*(long *)
                                       System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                              ,0);
LAB_078b8070:
        (*(code *)*puVar7)(plVar14,uVar8,puVar7[1]);
      }
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 10) = 0;
      thunk_FUN_03afed3c(puVar6,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
    }
  }
  else if (iVar1 == 1) {
    plVar14 = (long *)*puVar6;
    if (plVar14 == (long *)0x0) {
      _in_stack_00000018 = auVar4;
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    lVar10 = *plVar14;
    uVar8 = *(undefined8 *)(lVar12 + 0x28);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
          goto LAB_078b8234;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar14,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,4)
    ;
LAB_078b8234:
    lVar12 = (*(code *)*puVar6)(plVar14,uVar8,puVar6[1]);
    if (lVar12 == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    in_stack_00000028 = FUN_067c4bec(lVar12,0);
    uVar11 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar11 & 1) != 0) {
      FUN_0666e9a8(&stack0x00000028,0);
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar14 = *(long **)(unaff_x20 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      puVar5 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar8 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 7) * 0x10 + 0x138);
            goto LAB_078b7b94;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar14,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,
                            7);
LAB_078b7b94:
      (*(code *)*puVar6)(&stack0x000017d8,plVar14,uVar8,puVar6[1]);
      memcpy(&stack0x00001c90,&stack0x000017d8,0x4b8);
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      memcpy(&stack0x00001320,&stack0x00001c90,0x4b8);
      memset(&stack0x00000e60,0,0x4c0);
      FUN_078b75cc(uVar8,0,1,&stack0x00001320,&stack0x00000e60);
      plVar14 = *(long **)(unaff_x20 + 0x38);
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_078b7cf8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)puVar5,1);
LAB_078b7cf8:
      _in_stack_00000018 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      uVar8 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 10) = uVar8;
      thunk_FUN_03afed3c();
LAB_078b7f04:
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      goto LAB_078b7f08;
    }
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
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
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar9,uVar8);
      }
      goto LAB_078b88b8;
    }
    plVar14 = *(long **)(unaff_x20 + 0x58);
    if (plVar14 == (long *)0x0) {
      _in_stack_00000018 = auVar15;
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    lVar12 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_078b82b8;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar14,*(long *)
                                   System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo,0
                         );
LAB_078b82b8:
    uVar8 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar8;
    thunk_FUN_03afed3c();
    auVar3._8_8_ = in_stack_00000020;
    auVar3._0_8_ = in_stack_00000018;
    if (*(long *)(unaff_x20 + 0x20) == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    plVar14 = *(long **)(unaff_x20 + 0x30);
    if (plVar14 == (long *)0x0) {
      _in_stack_00000018 = auVar3;
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    lVar12 = *plVar14;
    uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_078b8340;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar14,*(long *)
                                   System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                          ,3);
LAB_078b8340:
    lVar12 = (*(code *)*puVar6)(plVar14,uVar8,puVar6[1]);
    if (lVar12 == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    in_stack_00000028 = FUN_067c4bec(lVar12,0);
    uVar11 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_0666e9a8(&stack0x00000028,0);
      puVar5 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
      auVar2._8_8_ = in_stack_00000020;
      auVar2._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar14 = *(long **)(unaff_x20 + 0x30);
      if (plVar14 == (long *)0x0) {
        _in_stack_00000018 = auVar2;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_078b7c74;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar14,*(long *)
                                     System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                            ,1);
LAB_078b7c74:
      _in_stack_00000018 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      uVar8 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 10) = uVar8;
      thunk_FUN_03afed3c();
      plVar14 = *(long **)(unaff_x20 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar12 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 5) * 0x10 + 0x138);
            goto LAB_078b7d38;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)puVar5,5);
LAB_078b7d38:
      uVar8 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      *(undefined8 *)(unaff_x19 + 0xe) = uVar8;
      thunk_FUN_03afed3c(unaff_x19 + 0xe);
      lVar12 = FUN_078b567c();
      if (lVar12 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      in_stack_00000028 = FUN_067c4bec(lVar12,0);
      uVar11 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar11 & 1) != 0) {
        FUN_0666e9a8(&stack0x00000028,0);
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar14 = *(long **)(unaff_x20 + 0x30);
        if ((DAT_0898793f & 1) == 0) {
          FUN_03a8a718(PTR_DAT_0848af98);
          DAT_0898793f = 1;
        }
        if (plVar14 == (long *)0x0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar12 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        uVar8 = *(undefined8 *)PTR_DAT_0848af98;
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
              goto LAB_078b7e6c;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar14,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,4);
LAB_078b7e6c:
        (*(code *)*puVar6)(&stack0x000009a8,plVar14,uVar8,puVar6[1]);
        memcpy(&stack0x000017d8,&stack0x000009a8,0x4b8);
        if (*(long *)(unaff_x19 + 0xe) == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        auVar15 = FUN_079239d0(*(long *)(unaff_x19 + 0xe),0);
        uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TrialOffer>_TypeInfo);
        memcpy(&stack0x000004f0,&stack0x000017d8,0x4b8);
        memset(&stack0x00000030,0,0x4c0);
        FUN_078b748c(uVar8,0,2,&stack0x000004f0,auVar15._0_8_,auVar15._8_8_,&stack0x00000030);
        goto LAB_078b7f04;
      }
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
    return;
  }
LAB_078b88b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


