/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_up_orientation_set
ENTRY_POINT: 078b69dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_up_orientation_set
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long *unaff_x21;
  long unaff_x26;
  long *unaff_x27;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  (*(code *)*param_1)();
  auVar14._8_8_ = in_stack_00000020;
  auVar14._0_8_ = in_stack_00000018;
  if (*(long *)(unaff_x20 + 0x40) == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else if (unaff_x21 == (long *)0x0) {
    _in_stack_00000018 = auVar14;
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    lVar10 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_078b6b70;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_078b6b70:
    lVar10 = (*(code *)*puVar8)();
    if (lVar10 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      in_stack_00000028 = FUN_067c4bec(lVar10,0);
      uVar11 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar11 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_0666e9a8(&stack0x00000028,0);
        puVar3 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
        auVar2._8_8_ = in_stack_00000020;
        auVar2._0_8_ = in_stack_00000018;
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar13 = *(long **)(unaff_x20 + 0x30);
        if (plVar13 == (long *)0x0) {
          _in_stack_00000018 = auVar2;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_078b5d0c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,1);
LAB_078b5d0c:
        _in_stack_00000018 = (*(code *)*puVar8)(plVar13,puVar8[1]);
        uVar4 = FUN_0674aae0(&stack0x00000018,0);
        *(undefined8 *)(unaff_x19 + 0xc) = uVar4;
        thunk_FUN_03afed3c();
        plVar13 = *(long **)(unaff_x20 + 0x30);
        if (plVar13 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_078b60fc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar3,5);
LAB_078b60fc:
        uVar4 = (*(code *)*puVar8)(plVar13,puVar8[1]);
        *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
        thunk_FUN_03afed3c(unaff_x19 + 0x10);
        lVar10 = FUN_078b567c();
        if (lVar10 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar10,0);
        uVar11 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar11 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
        }
        else {
          FUN_0666e9a8(&stack0x00000028,0);
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          uVar1 = unaff_x19[0xe];
          plVar13 = *(long **)(unaff_x20 + 0x30);
          if ((DAT_0898793f & 1) == 0) {
            FUN_03a8a718(PTR_DAT_0848af98);
            DAT_0898793f = 1;
          }
          if (plVar13 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          uVar4 = *(undefined8 *)PTR_DAT_0848af98;
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                goto LAB_078b6234;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_03ac43c4(plVar13,*(long *)
                                         System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                                ,4);
LAB_078b6234:
          (*(code *)*puVar8)(&stack0x00001320,plVar13,uVar4,puVar8[1]);
          memcpy(&stack0x000017e0,&stack0x00001320,0x4b8);
          if (*(long *)(unaff_x19 + 0x10) == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          auVar14 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
          uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      System_Collections_Generic_List<TrialOffer>_TypeInfo);
          memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
          memset(&stack0x000009a8,0,0x4c0);
          FUN_078b748c(uVar4,uVar1,2,&stack0x00000e68,auVar14._0_8_,auVar14._8_8_,&stack0x000009a8);
          lVar10 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                             ();
          if (lVar10 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          in_stack_00000028 = FUN_067c4bec(lVar10,0);
          uVar11 = FUN_0666e8e0(&stack0x00000028,0);
          if ((uVar11 & 1) == 0) {
            *unaff_x19 = 2;
            *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
            thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
          }
          else {
            FUN_0666e9a8(&stack0x00000028,0);
            lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         System_Collections_Generic_List<TrackAsset>_TypeInfo);
            FUN_0679343c(lVar10,0);
            if (lVar10 == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            *(undefined4 *)(lVar10 + 0x10) = 2;
            if (unaff_x20 == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            plVar13 = *(long **)(unaff_x20 + 0x30);
            if (plVar13 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_078b63e0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_03ac43c4(plVar13,*(long *)
                                           System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                                  ,0);
LAB_078b63e0:
            uVar4 = (*(code *)*puVar8)(plVar13,puVar8[1]);
            *(undefined8 *)(lVar10 + 0x28) = uVar4;
            thunk_FUN_03afed3c();
            *(long *)(unaff_x20 + 0x20) = lVar10;
            thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar10);
            puVar8 = (undefined8 *)(unaff_x19 + 0xc);
            uVar11 = FUN_065cd268(*puVar8,0);
            puVar3 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
            if ((uVar11 & 1) == 0) {
              if (unaff_x20 == 0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              plVar13 = *(long **)(unaff_x20 + 0x48);
              if (plVar13 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              lVar10 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                    goto LAB_078b6484;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)
                       FUN_03ac43c4(plVar13,*(long *)
                                             System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo
                                    ,0x23);
LAB_078b6484:
              lVar10 = (*(code *)*puVar5)(plVar13,puVar5[1]);
              uVar11 = 0;
              if (lVar10 != 0) {
                plVar13 = *(long **)(unaff_x20 + 0x48);
                if (plVar13 == (long *)0x0) {
                  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_078b7484;
                }
                lVar10 = *plVar13;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                      puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
                      goto LAB_078b64ec;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar5 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar3,0x23);
LAB_078b64ec:
                plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
                if (plVar13 == (long *)0x0) {
                  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_078b7484;
                }
                lVar10 = *plVar13;
                uVar4 = *puVar8;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) ==
                        *(long *)
                         System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_078b6558;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar5 = (undefined8 *)
                         FUN_03ac43c4(plVar13,*(long *)
                                               System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                      ,0);
LAB_078b6558:
                uVar11 = (*(code *)*puVar5)(plVar13,uVar4,puVar5[1]);
              }
            }
            if (unaff_x20 == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            uVar4 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                              (uVar11,*(undefined8 *)(unaff_x20 + 0x20));
            uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        System_Collections_Generic_List<TriangleER>_TypeInfo);
            FUN_078c41d8(uVar6,uVar4,2,0,0);
            puVar5 = (undefined8 *)(unaff_x19 + 10);
            plVar13 = (long *)*puVar5;
            if (plVar13 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar10 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            uVar4 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                  goto LAB_078b6610;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_03ac43c4(plVar13,*(long *)
                                           System_Collections_Generic_List<TransactionItem>_TypeInfo
                                  ,0xb);
LAB_078b6610:
            (*(code *)*puVar7)(plVar13,uVar4,uVar6,puVar7[1]);
            *puVar5 = 0;
            thunk_FUN_03afed3c(puVar5,0);
            *puVar8 = 0;
            thunk_FUN_03afed3c(puVar8,0);
            *unaff_x19 = 0xfffffffe;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_0666d184(unaff_x19 + 2,0);
          }
        }
      }
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
        return;
      }
    }
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


