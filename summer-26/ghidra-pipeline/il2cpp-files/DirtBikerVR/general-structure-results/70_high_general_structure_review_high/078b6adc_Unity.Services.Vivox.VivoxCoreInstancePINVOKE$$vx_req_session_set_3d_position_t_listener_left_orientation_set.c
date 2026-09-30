/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_left_orientation_set
ENTRY_POINT: 078b6adc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_left_orientation_set
               (long param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  lVar10 = (**(code **)(param_1 + 0x138))();
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
    auVar4._8_8_ = in_stack_00000020;
    auVar4._0_8_ = in_stack_00000018;
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar14 = *(long **)(unaff_x20 + 0x38);
    if (plVar14 == (long *)0x0) {
      _in_stack_00000018 = auVar4;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 5) * 0x10 + 0x138);
          goto LAB_078b5d90;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar14,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,5)
    ;
LAB_078b5d90:
    lVar10 = (*(code *)*puVar6)(plVar14,puVar6[1]);
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
      plVar14 = *(long **)(unaff_x20 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar15 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 7) * 0x10 + 0x138);
            goto LAB_078b5ea4;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar14,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo,
                            7);
LAB_078b5ea4:
      (*(code *)*puVar6)(&stack0x000017e0,plVar14,uVar15,puVar6[1]);
      memcpy(&stack0x00001ce0,&stack0x000017e0,0x4b8);
      uVar1 = unaff_x19[0xe];
      uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
      memset(&stack0x00000030,0,0x4c0);
      FUN_078b75cc(uVar15,uVar1,1,&stack0x000004f0,&stack0x00000030);
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
        lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar10,0);
        auVar3._8_8_ = in_stack_00000020;
        auVar3._0_8_ = in_stack_00000018;
        auVar2._8_8_ = in_stack_00000020;
        auVar2._0_8_ = in_stack_00000018;
        if (lVar10 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar10 + 0x10) = 1;
        puVar5 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
        if (unaff_x20 == 0) {
          _in_stack_00000018 = auVar3;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar14 = *(long **)(unaff_x20 + 0x38);
        if (plVar14 == (long *)0x0) {
          _in_stack_00000018 = auVar2;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar12 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_078b6038;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar14,*(long *)
                                       System_Collections_Generic_List<TreeInstance>_TypeInfo,2);
LAB_078b6038:
        uVar15 = (*(code *)*puVar6)(plVar14,puVar6[1]);
        *(undefined8 *)(lVar10 + 0x28) = uVar15;
        thunk_FUN_03afed3c();
        *(long *)(unaff_x20 + 0x20) = lVar10;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar10);
        plVar14 = *(long **)(unaff_x20 + 0x38);
        if (plVar14 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar10 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_078b60bc;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)puVar5,1);
LAB_078b60bc:
        _in_stack_00000018 = (*(code *)*puVar6)(plVar14,puVar6[1]);
        uVar15 = FUN_0674aae0(&stack0x00000018,0);
        *(undefined8 *)(unaff_x19 + 0xc) = uVar15;
        thunk_FUN_03afed3c();
        puVar6 = (undefined8 *)(unaff_x19 + 0xc);
        uVar11 = FUN_065cd268(*puVar6,0);
        puVar5 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
        if ((uVar11 & 1) == 0) {
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          plVar14 = *(long **)(unaff_x20 + 0x48);
          if (plVar14 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar10 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
                goto LAB_078b6484;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_03ac43c4(plVar14,*(long *)
                                         System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,
                                0x23);
LAB_078b6484:
          lVar10 = (*(code *)*puVar7)(plVar14,puVar7[1]);
          uVar11 = 0;
          if (lVar10 != 0) {
            plVar14 = *(long **)(unaff_x20 + 0x48);
            if (plVar14 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar10 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
                  goto LAB_078b64ec;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)puVar5,0x23);
LAB_078b64ec:
            plVar14 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
            if (plVar14 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar10 = *plVar14;
            uVar15 = *puVar6;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_078b6558;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_03ac43c4(plVar14,*(long *)
                                           System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                  ,0);
LAB_078b6558:
            uVar11 = (*(code *)*puVar7)(plVar14,uVar15,puVar7[1]);
          }
        }
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar15 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                           (uVar11,*(undefined8 *)(unaff_x20 + 0x20));
        uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TriangleER>_TypeInfo);
        FUN_078c41d8(uVar8,uVar15,2,0,0);
        puVar7 = (undefined8 *)(unaff_x19 + 10);
        plVar14 = (long *)*puVar7;
        if (plVar14 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar10 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        uVar15 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
              goto LAB_078b6610;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_03ac43c4(plVar14,*(long *)
                                       System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb
                             );
LAB_078b6610:
        (*(code *)*puVar9)(plVar14,uVar15,uVar8,puVar9[1]);
        *puVar7 = 0;
        thunk_FUN_03afed3c(puVar7,0);
        *puVar6 = 0;
        thunk_FUN_03afed3c(puVar6,0);
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
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


