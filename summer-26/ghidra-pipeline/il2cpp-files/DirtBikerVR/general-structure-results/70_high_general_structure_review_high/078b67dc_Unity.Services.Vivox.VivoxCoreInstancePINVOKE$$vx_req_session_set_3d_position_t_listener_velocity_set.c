/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_velocity_set
ENTRY_POINT: 078b67dc
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_velocity_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  int *piVar15;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar16;
  long *plVar17;
  long *unaff_x24;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  if (in_x9 != 0) {
    piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == param_3) {
        puVar10 = (undefined8 *)(param_1 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_078b6900;
      }
      in_x9 = in_x9 + -1;
      piVar15 = piVar15 + 4;
    } while (in_x9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_078b6900:
  uVar11 = (*(code *)*puVar10)();
  puVar10 = (undefined8 *)(unaff_x20 + 0x38);
  *puVar10 = uVar11;
  thunk_FUN_03afed3c(puVar10);
  plVar17 = (long *)*unaff_x21;
  if (plVar17 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    lVar13 = *plVar17;
    plVar16 = (long *)*puVar10;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x24) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x1d) * 0x10 + 0x138);
          goto LAB_078b69f0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(plVar17,*unaff_x24,0x1d);
LAB_078b69f0:
    uVar6 = (*(code *)*puVar10)(plVar17,puVar10[1]);
    auVar4._8_8_ = in_stack_00000020;
    auVar4._0_8_ = in_stack_00000018;
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else if (plVar16 == (long *)0x0) {
      _in_stack_00000018 = auVar4;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar13 = *plVar16;
      uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x30);
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_078b6ae0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_03ac43c4(plVar16,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,3);
LAB_078b6ae0:
      lVar13 = (*(code *)*puVar10)(plVar16,uVar6,uVar11,puVar10[1]);
      if (lVar13 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      else {
        in_stack_00000028 = FUN_067c4bec(lVar13,0);
        uVar14 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar14 & 1) == 0) {
          *unaff_x19 = 3;
          *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
        }
        else {
          FUN_0666e9a8(&stack0x00000028,0);
          auVar3._8_8_ = in_stack_00000020;
          auVar3._0_8_ = in_stack_00000018;
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar17 = *(long **)(unaff_x20 + 0x38);
          if (plVar17 == (long *)0x0) {
            _in_stack_00000018 = auVar3;
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar13 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                goto LAB_078b5d90;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_03ac43c4(plVar17,*(long *)
                                          System_Collections_Generic_List<TreeInstance>_TypeInfo,5);
LAB_078b5d90:
          lVar13 = (*(code *)*puVar10)(plVar17,puVar10[1]);
          if (lVar13 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          in_stack_00000028 = FUN_067c4bec(lVar13,0);
          uVar14 = FUN_0666e8e0(&stack0x00000028,0);
          if ((uVar14 & 1) == 0) {
            *unaff_x19 = 4;
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
            plVar17 = *(long **)(unaff_x20 + 0x38);
            if ((DAT_0898793f & 1) == 0) {
              FUN_03a8a718(PTR_DAT_0848af98);
              DAT_0898793f = 1;
            }
            if (plVar17 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar13 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            uVar11 = *(undefined8 *)PTR_DAT_0848af98;
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                  goto LAB_078b5ea4;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_03ac43c4(plVar17,*(long *)
                                            System_Collections_Generic_List<TreeInstance>_TypeInfo,7
                                  );
LAB_078b5ea4:
            (*(code *)*puVar10)(&stack0x000017e0,plVar17,uVar11,puVar10[1]);
            memcpy(&stack0x00001ce0,&stack0x000017e0,0x4b8);
            uVar6 = unaff_x19[0xe];
            uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         System_Collections_Generic_List<TrialOffer>_TypeInfo);
            memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
            memset(&stack0x00000030,0,0x4c0);
            FUN_078b75cc(uVar11,uVar6,1,&stack0x000004f0,&stack0x00000030);
            lVar13 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                               ();
            if (lVar13 == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            in_stack_00000028 = FUN_067c4bec(lVar13,0);
            uVar14 = FUN_0666e8e0(&stack0x00000028,0);
            if ((uVar14 & 1) == 0) {
              *unaff_x19 = 5;
              *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
              thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
            }
            else {
              FUN_0666e9a8(&stack0x00000028,0);
              lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                           System_Collections_Generic_List<TrackAsset>_TypeInfo);
              FUN_0679343c(lVar13,0);
              auVar2._8_8_ = in_stack_00000020;
              auVar2._0_8_ = in_stack_00000018;
              auVar1._8_8_ = in_stack_00000020;
              auVar1._0_8_ = in_stack_00000018;
              if (lVar13 == 0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              *(undefined4 *)(lVar13 + 0x10) = 1;
              puVar5 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
              if (unaff_x20 == 0) {
                _in_stack_00000018 = auVar2;
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              plVar17 = *(long **)(unaff_x20 + 0x38);
              if (plVar17 == (long *)0x0) {
                _in_stack_00000018 = auVar1;
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              lVar12 = *plVar17;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) ==
                      *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                    goto LAB_078b6038;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_03ac43c4(plVar17,*(long *)
                                              System_Collections_Generic_List<TreeInstance>_TypeInfo
                                     ,2);
LAB_078b6038:
              uVar11 = (*(code *)*puVar10)(plVar17,puVar10[1]);
              *(undefined8 *)(lVar13 + 0x28) = uVar11;
              thunk_FUN_03afed3c();
              *(long *)(unaff_x20 + 0x20) = lVar13;
              thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar13);
              plVar17 = *(long **)(unaff_x20 + 0x38);
              if (plVar17 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              lVar13 = *plVar17;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                    puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_078b60bc;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_03ac43c4(plVar17,*(long *)puVar5,1);
LAB_078b60bc:
              _in_stack_00000018 = (*(code *)*puVar10)(plVar17,puVar10[1]);
              uVar11 = FUN_0674aae0(&stack0x00000018,0);
              *(undefined8 *)(unaff_x19 + 0xc) = uVar11;
              thunk_FUN_03afed3c();
              puVar10 = (undefined8 *)(unaff_x19 + 0xc);
              uVar14 = FUN_065cd268(*puVar10,0);
              puVar5 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
              if ((uVar14 & 1) == 0) {
                if (unaff_x20 == 0) {
                  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_078b7484;
                }
                plVar17 = *(long **)(unaff_x20 + 0x48);
                if (plVar17 == (long *)0x0) {
                  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_078b7484;
                }
                lVar13 = *plVar17;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) ==
                        *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                      puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x23) * 0x10 + 0x138);
                      goto LAB_078b6484;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_03ac43c4(plVar17,*(long *)
                                               System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo
                                      ,0x23);
LAB_078b6484:
                lVar13 = (*(code *)*puVar7)(plVar17,puVar7[1]);
                uVar14 = 0;
                if (lVar13 != 0) {
                  plVar17 = *(long **)(unaff_x20 + 0x48);
                  if (plVar17 == (long *)0x0) {
                    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    goto LAB_078b7484;
                  }
                  lVar13 = *plVar17;
                  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x23) * 0x10 + 0x138);
                        goto LAB_078b64ec;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_03ac43c4(plVar17,*(long *)puVar5,0x23);
LAB_078b64ec:
                  plVar17 = (long *)(*(code *)*puVar7)(plVar17,puVar7[1]);
                  if (plVar17 == (long *)0x0) {
                    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    goto LAB_078b7484;
                  }
                  lVar13 = *plVar17;
                  uVar11 = *puVar10;
                  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) ==
                          *(long *)
                           System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                        puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_078b6558;
                      }
                      uVar14 = uVar14 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar7 = (undefined8 *)
                           FUN_03ac43c4(plVar17,*(long *)
                                                 System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                        ,0);
LAB_078b6558:
                  uVar14 = (*(code *)*puVar7)(plVar17,uVar11,puVar7[1]);
                }
              }
              if (unaff_x20 == 0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              uVar11 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                                 (uVar14,*(undefined8 *)(unaff_x20 + 0x20));
              uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                          System_Collections_Generic_List<TriangleER>_TypeInfo);
              FUN_078c41d8(uVar8,uVar11,2,0,0);
              puVar7 = (undefined8 *)(unaff_x19 + 10);
              plVar17 = (long *)*puVar7;
              if (plVar17 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              lVar13 = *plVar17;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              uVar11 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) ==
                      *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
                    goto LAB_078b6610;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_03ac43c4(plVar17,*(long *)
                                             System_Collections_Generic_List<TransactionItem>_TypeInfo
                                    ,0xb);
LAB_078b6610:
              (*(code *)*puVar9)(plVar17,uVar11,uVar8,puVar9[1]);
              *puVar7 = 0;
              thunk_FUN_03afed3c(puVar7,0);
              *puVar10 = 0;
              thunk_FUN_03afed3c(puVar10,0);
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
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


