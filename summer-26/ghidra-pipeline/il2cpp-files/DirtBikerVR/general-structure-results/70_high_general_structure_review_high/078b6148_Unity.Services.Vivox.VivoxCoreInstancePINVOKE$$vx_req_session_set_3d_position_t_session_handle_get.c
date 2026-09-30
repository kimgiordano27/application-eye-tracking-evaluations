/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_session_handle_get
ENTRY_POINT: 078b6148
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x26;
  long *unaff_x27;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  FUN_0666e9a8(&stack0x00000028,0);
  if (unaff_x20 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    uVar1 = unaff_x19[0xe];
    plVar11 = *(long **)(unaff_x20 + 0x30);
    if ((DAT_0898793f & 1) == 0) {
      FUN_03a8a718(PTR_DAT_0848af98);
      DAT_0898793f = 1;
    }
    if (plVar11 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_078b6234;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_03ac43c4(plVar11,*(long *)
                                     System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                            ,4);
LAB_078b6234:
      (*(code *)*puVar3)(&stack0x00001320,plVar11,uVar12,puVar3[1]);
      memcpy(&stack0x000017e0,&stack0x00001320,0x4b8);
      if (*(long *)(unaff_x19 + 0x10) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      else {
        auVar13 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
        uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
        memset(&stack0x000009a8,0,0x4c0);
        FUN_078b748c(uVar12,uVar1,2,&stack0x00000e68,auVar13._0_8_,auVar13._8_8_,&stack0x000009a8);
        lVar7 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                          ();
        if (lVar7 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
        }
        else {
          in_stack_00000028 = FUN_067c4bec(lVar7,0);
          uVar9 = FUN_0666e8e0(&stack0x00000028,0);
          if ((uVar9 & 1) == 0) {
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
            lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        System_Collections_Generic_List<TrackAsset>_TypeInfo);
            FUN_0679343c(lVar7,0);
            if (lVar7 == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            *(undefined4 *)(lVar7 + 0x10) = 2;
            if (unaff_x20 == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            plVar11 = *(long **)(unaff_x20 + 0x30);
            if (plVar11 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_078b63e0;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_03ac43c4(plVar11,*(long *)
                                           System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                                  ,0);
LAB_078b63e0:
            uVar12 = (*(code *)*puVar3)(plVar11,puVar3[1]);
            *(undefined8 *)(lVar7 + 0x28) = uVar12;
            thunk_FUN_03afed3c();
            *(long *)(unaff_x20 + 0x20) = lVar7;
            thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar7);
            puVar3 = (undefined8 *)(unaff_x19 + 0xc);
            uVar9 = FUN_065cd268(*puVar3,0);
            puVar2 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
            if ((uVar9 & 1) == 0) {
              if (unaff_x20 == 0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              plVar11 = *(long **)(unaff_x20 + 0x48);
              if (plVar11 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_078b7484;
              }
              lVar7 = *plVar11;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
                    goto LAB_078b6484;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_03ac43c4(plVar11,*(long *)
                                             System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo
                                    ,0x23);
LAB_078b6484:
              lVar7 = (*(code *)*puVar4)(plVar11,puVar4[1]);
              uVar9 = 0;
              if (lVar7 != 0) {
                plVar11 = *(long **)(unaff_x20 + 0x48);
                if (plVar11 == (long *)0x0) {
                  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_078b7484;
                }
                lVar7 = *plVar11;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x23) * 0x10 + 0x138);
                      goto LAB_078b64ec;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar4 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar2,0x23);
LAB_078b64ec:
                plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
                if (plVar11 == (long *)0x0) {
                  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c0();
                  }
                  goto LAB_078b7484;
                }
                lVar7 = *plVar11;
                uVar12 = *puVar3;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) ==
                        *(long *)
                         System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_078b6558;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar4 = (undefined8 *)
                         FUN_03ac43c4(plVar11,*(long *)
                                               System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                      ,0);
LAB_078b6558:
                uVar9 = (*(code *)*puVar4)(plVar11,uVar12,puVar4[1]);
              }
            }
            if (unaff_x20 == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            uVar12 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                               (uVar9,*(undefined8 *)(unaff_x20 + 0x20));
            uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        System_Collections_Generic_List<TriangleER>_TypeInfo);
            FUN_078c41d8(uVar5,uVar12,2,0,0);
            puVar4 = (undefined8 *)(unaff_x19 + 10);
            plVar11 = (long *)*puVar4;
            if (plVar11 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar7 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            uVar12 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                  goto LAB_078b6610;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_03ac43c4(plVar11,*(long *)
                                           System_Collections_Generic_List<TransactionItem>_TypeInfo
                                  ,0xb);
LAB_078b6610:
            (*(code *)*puVar6)(plVar11,uVar12,uVar5,puVar6[1]);
            *puVar4 = 0;
            thunk_FUN_03afed3c(puVar4,0);
            *puVar3 = 0;
            thunk_FUN_03afed3c(puVar3,0);
            *unaff_x19 = 0xfffffffe;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_0666d184(unaff_x19 + 2,0);
          }
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
            return;
          }
        }
      }
    }
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


