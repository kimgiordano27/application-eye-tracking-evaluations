/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_left_orientation_get
ENTRY_POINT: 078b6b60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_left_orientation_get
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  int *in_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar12;
  long unaff_x26;
  long *unaff_x27;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  lVar8 = (**(code **)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138))();
  if (lVar8 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    goto LAB_078b7484;
  }
  in_stack_00000028 = FUN_067c4bec(lVar8,0);
  uVar9 = FUN_0666e8e0(&stack0x00000028,0);
  if ((uVar9 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
                    /* try { // try from 078b6bbc to 079b6bcf has its CatchHandler @ 078b6ec0 */
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    FUN_0666e9a8(&stack0x00000028,0);
    puVar2 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
    auVar13._8_8_ = in_stack_00000020;
    auVar13._0_8_ = in_stack_00000018;
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar12 = *(long **)(unaff_x20 + 0x30);
    if (plVar12 == (long *)0x0) {
      _in_stack_00000018 = auVar13;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_078b5d0c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)
                                   System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                          ,1);
LAB_078b5d0c:
    _in_stack_00000018 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    uVar4 = FUN_0674aae0(&stack0x00000018,0);
    *(undefined8 *)(unaff_x19 + 0xc) = uVar4;
    thunk_FUN_03afed3c();
    plVar12 = *(long **)(unaff_x20 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_078b60fc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)puVar2,5);
LAB_078b60fc:
    uVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0x10);
    lVar8 = FUN_078b567c();
    if (lVar8 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    in_stack_00000028 = FUN_067c4bec(lVar8,0);
    uVar9 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar9 & 1) == 0) {
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
      plVar12 = *(long **)(unaff_x20 + 0x30);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar12 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar4 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_078b6234;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_03ac43c4(plVar12,*(long *)
                                     System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                            ,4);
LAB_078b6234:
      (*(code *)*puVar3)(&stack0x00001320,plVar12,uVar4,puVar3[1]);
      memcpy(&stack0x000017e0,&stack0x00001320,0x4b8);
      if (*(long *)(unaff_x19 + 0x10) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      auVar13 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo
                                );
      memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
      memset(&stack0x000009a8,0,0x4c0);
      FUN_078b748c(uVar4,uVar1,2,&stack0x00000e68,auVar13._0_8_,auVar13._8_8_,&stack0x000009a8);
      lVar8 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                        ();
      if (lVar8 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar8,0);
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
        lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar8,0);
        if (lVar8 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar8 + 0x10) = 2;
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar12 = *(long **)(unaff_x20 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar10 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar3 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_078b63e0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_03ac43c4(plVar12,*(long *)
                                       System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                              ,0);
LAB_078b63e0:
        uVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        *(undefined8 *)(lVar8 + 0x28) = uVar4;
        thunk_FUN_03afed3c();
        *(long *)(unaff_x20 + 0x20) = lVar8;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar8);
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
          plVar12 = *(long **)(unaff_x20 + 0x48);
          if (plVar12 == (long *)0x0) {
            if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_078b7484;
          }
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x23) * 0x10 + 0x138);
                goto LAB_078b6484;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_03ac43c4(plVar12,*(long *)
                                         System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,
                                0x23);
LAB_078b6484:
          lVar8 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          uVar9 = 0;
          if (lVar8 != 0) {
            plVar12 = *(long **)(unaff_x20 + 0x48);
            if (plVar12 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar8 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x23) * 0x10 + 0x138);
                  goto LAB_078b64ec;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)puVar2,0x23);
LAB_078b64ec:
            plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
            if (plVar12 == (long *)0x0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            lVar8 = *plVar12;
            uVar4 = *puVar3;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_078b6558;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_03ac43c4(plVar12,*(long *)
                                           System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                                  ,0);
LAB_078b6558:
            uVar9 = (*(code *)*puVar5)(plVar12,uVar4,puVar5[1]);
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
                          (uVar9,*(undefined8 *)(unaff_x20 + 0x20));
        uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_List<TriangleER>_TypeInfo);
        FUN_078c41d8(uVar6,uVar4,2,0,0);
        puVar5 = (undefined8 *)(unaff_x19 + 10);
        plVar12 = (long *)*puVar5;
        if (plVar12 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar4 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
              goto LAB_078b6610;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_03ac43c4(plVar12,*(long *)
                                       System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb
                             );
LAB_078b6610:
        (*(code *)*puVar7)(plVar12,uVar4,uVar6,puVar7[1]);
        *puVar5 = 0;
        thunk_FUN_03afed3c(puVar5,0);
        *puVar3 = 0;
        thunk_FUN_03afed3c(puVar3,0);
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


