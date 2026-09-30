/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_channel_add_acl_t_account_handle_get
ENTRY_POINT: 078b8120
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_add_acl_t_account_handle_get
               (void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w8;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar11;
  long unaff_x24;
  long *unaff_x25;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002148;
  
  auVar12._8_8_ = in_stack_00000020;
  auVar12._0_8_ = in_stack_00000018;
  if (in_w8 == 1) {
    plVar11 = (long *)*unaff_x21;
    if (plVar11 == (long *)0x0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    lVar8 = *plVar11;
    uVar6 = *(undefined8 *)(in_x9 + 0x28);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_078b8234;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,4)
    ;
LAB_078b8234:
    lVar8 = (*(code *)*puVar5)(plVar11,uVar6,puVar5[1]);
    if (lVar8 == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    in_stack_00000028 = FUN_067c4bec(lVar8,0);
    uVar9 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4e6c(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_0666e9a8(&stack0x00000028,0);
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar11 = *(long **)(unaff_x20 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      puVar3 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
      if (plVar11 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
            goto LAB_078b7b94;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar11,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,
                            7);
LAB_078b7b94:
      (*(code *)*puVar5)(&stack0x000017d8,plVar11,uVar6,puVar5[1]);
      memcpy(&stack0x00001c90,&stack0x000017d8,0x4b8);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      memcpy(&stack0x00001320,&stack0x00001c90,0x4b8);
      memset(&stack0x00000e60,0,0x4c0);
      FUN_078b75cc(uVar6,0,1,&stack0x00001320,&stack0x00000e60);
      plVar11 = *(long **)(unaff_x20 + 0x38);
      if (plVar11 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_078b7cf8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar3,1);
LAB_078b7cf8:
      _in_stack_00000018 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      uVar6 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 10) = uVar6;
      thunk_FUN_03afed3c();
LAB_078b7f04:
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar8 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                        ();
      if (lVar8 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      in_stack_00000028 = FUN_067c4bec(lVar8,0);
      uVar9 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar9 & 1) == 0) {
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
        puVar5 = (undefined8 *)(unaff_x19 + 10);
        uVar9 = FUN_065cd268(*puVar5,0);
        if ((uVar9 & 1) == 0) {
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b88b8;
          }
          plVar11 = *(long **)(unaff_x20 + 0x48);
          if (plVar11 == (long *)0x0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b88b8;
          }
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
                goto LAB_078b8004;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_03ac43c4(plVar11,*(long *)
                                         System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,
                                0x23);
LAB_078b8004:
          plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
          if (plVar11 == (long *)0x0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b88b8;
          }
          lVar8 = *plVar11;
          uVar6 = *puVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_078b8070;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_03ac43c4(plVar11,*(long *)
                                         System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                ,0);
LAB_078b8070:
          (*(code *)*puVar4)(plVar11,uVar6,puVar4[1]);
        }
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 10) = 0;
        thunk_FUN_03afed3c(puVar5,0);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_0666d184(unaff_x19 + 2,0);
      }
    }
  }
  else {
    if (in_w8 != 2) {
      uVar6 = thunk_FUN_03af1434(System_Collections_Generic_List<UserCapability>_TypeInfo);
      uVar6 = thunk_FUN_03ac70f4(uVar6,&stack0x000017d8);
      uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
      uVar6 = FUN_065c412c(uVar7,uVar6,0);
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar7 = thunk_FUN_03ac74bc();
      FUN_066b6070(uVar7,uVar6,0);
      uVar6 = thunk_FUN_03af1434(System_Collections_Generic_List<UnityEvent>_TypeInfo);
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar7,uVar6);
      }
      goto LAB_078b88b8;
    }
    plVar11 = *(long **)(unaff_x20 + 0x58);
    if (plVar11 == (long *)0x0) {
      _in_stack_00000018 = auVar12;
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_078b82b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo,0
                         );
LAB_078b82b8:
    uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
    thunk_FUN_03afed3c();
    auVar2._8_8_ = in_stack_00000020;
    auVar2._0_8_ = in_stack_00000018;
    if (*(long *)(unaff_x20 + 0x20) == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    plVar11 = *(long **)(unaff_x20 + 0x30);
    if (plVar11 == (long *)0x0) {
      _in_stack_00000018 = auVar2;
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    lVar8 = *plVar11;
    uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_078b8340;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                          ,3);
LAB_078b8340:
    lVar8 = (*(code *)*puVar5)(plVar11,uVar6,puVar5[1]);
    if (lVar8 == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b88b8;
    }
    in_stack_00000028 = FUN_067c4bec(lVar8,0);
    uVar9 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar9 & 1) == 0) {
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
      puVar3 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
      auVar1._8_8_ = in_stack_00000020;
      auVar1._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      plVar11 = *(long **)(unaff_x20 + 0x30);
      if (plVar11 == (long *)0x0) {
        _in_stack_00000018 = auVar1;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_078b7c74;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar11,*(long *)
                                     System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                            ,1);
LAB_078b7c74:
      _in_stack_00000018 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      uVar6 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 10) = uVar6;
      thunk_FUN_03afed3c();
      plVar11 = *(long **)(unaff_x20 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_078b7d38;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar3,5);
LAB_078b7d38:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      *(undefined8 *)(unaff_x19 + 0xe) = uVar6;
      thunk_FUN_03afed3c(unaff_x19 + 0xe);
      lVar8 = FUN_078b567c();
      if (lVar8 == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b88b8;
      }
      in_stack_00000028 = FUN_067c4bec(lVar8,0);
      uVar9 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar9 & 1) != 0) {
        FUN_0666e9a8(&stack0x00000028,0);
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        plVar11 = *(long **)(unaff_x20 + 0x30);
        if ((DAT_0898793f & 1) == 0) {
          FUN_03a8a718(PTR_DAT_0848af98);
          DAT_0898793f = 1;
        }
        if (plVar11 == (long *)0x0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar6 = *(undefined8 *)PTR_DAT_0848af98;
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_078b7e6c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_03ac43c4(plVar11,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,4);
LAB_078b7e6c:
        (*(code *)*puVar5)(&stack0x000009a8,plVar11,uVar6,puVar5[1]);
        memcpy(&stack0x000017d8,&stack0x000009a8,0x4b8);
        if (*(long *)(unaff_x19 + 0xe) == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00002148) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b88b8;
        }
        auVar12 = FUN_079239d0(*(long *)(unaff_x19 + 0xe),0);
        uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TrialOffer>_TypeInfo);
        memcpy(&stack0x000004f0,&stack0x000017d8,0x4b8);
        memset(&stack0x00000030,0,0x4c0);
        FUN_078b748c(uVar6,0,2,&stack0x000004f0,auVar12._0_8_,auVar12._8_8_,&stack0x00000030);
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


