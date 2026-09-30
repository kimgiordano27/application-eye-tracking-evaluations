/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_participant_mute_for_me_t_base__set
ENTRY_POINT: 078b5978
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_10
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_base__set
               (ulong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  undefined *puVar13;
  short sVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar25;
  long *plVar26;
  int unaff_w22;
  undefined8 uVar27;
  undefined8 uVar28;
  long unaff_x26;
  undefined1 auVar29 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
  puVar12 = PTR_DAT_08488b88;
  auVar29._8_8_ = in_stack_00000020;
  auVar29._0_8_ = in_stack_00000018;
  if ((param_1 & 1) == 0) {
    thunk_FUN_03af1434(PTR_DAT_08493908);
    uVar27 = thunk_FUN_03ac74bc();
    uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<TypeSpec>_TypeInfo);
    FUN_078bbac4(uVar27,uVar19,0x1c,0);
    uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar27,uVar19);
    }
    goto LAB_078b7484;
  }
  if (*(char *)(unaff_x20 + 0x10) != '\0') {
    thunk_FUN_03af1434(PTR_DAT_08493908);
    uVar27 = thunk_FUN_03ac74bc();
    uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UIDocument>_TypeInfo);
    FUN_078bbac4(uVar27,uVar19,0x1c,0);
    uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar27,uVar19);
    }
    goto LAB_078b7484;
  }
  if (*(char *)(unaff_x20 + 0x11) != '\0') {
    thunk_FUN_03af1434(PTR_DAT_08493908);
    uVar27 = thunk_FUN_03ac74bc();
    uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UILineInfo>_TypeInfo);
    FUN_078bbac4(uVar27,uVar19,0x1c,0);
    uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
    if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar27,uVar19);
    }
    goto LAB_078b7484;
  }
  if (unaff_w22 < 3) {
    if (unaff_w22 == 0) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *unaff_x19 = 0xffffffff;
LAB_078b5b9c:
      FUN_0666e9a8(&stack0x00000028,0);
      puVar13 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
      auVar4._8_8_ = in_stack_00000020;
      auVar4._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(unaff_x20 + 0x30);
      if (plVar25 == (long *)0x0) {
        _in_stack_00000018 = auVar4;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_078b5d0c;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,1);
LAB_078b5d0c:
      _in_stack_00000018 = (*(code *)*puVar17)(plVar25,puVar17[1]);
      uVar27 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 0xc) = uVar27;
      thunk_FUN_03afed3c();
      plVar25 = *(long **)(unaff_x20 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar13) {
            puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 5) * 0x10 + 0x138);
            goto LAB_078b60fc;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar13,5);
LAB_078b60fc:
      uVar27 = (*(code *)*puVar17)(plVar25,puVar17[1]);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar27;
      thunk_FUN_03afed3c(unaff_x19 + 0x10);
      lVar21 = FUN_078b567c();
      if (lVar21 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar23 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
        goto LAB_078b6668;
      }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get:
      FUN_0666e9a8(&stack0x00000028,0);
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      uVar16 = unaff_x19[0xe];
      plVar25 = *(long **)(unaff_x20 + 0x30);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      uVar27 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 4) * 0x10 + 0x138);
            goto LAB_078b6234;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,4);
LAB_078b6234:
      (*(code *)*puVar17)(&stack0x00001320,plVar25,uVar27,puVar17[1]);
      memcpy(&stack0x000017e0,&stack0x00001320,0x4b8);
      if (*(long *)(unaff_x19 + 0x10) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      auVar29 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
      uVar27 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
      memset(&stack0x000009a8,0,0x4c0);
      FUN_078b748c(uVar27,uVar16,2,&stack0x00000e68,auVar29._0_8_,auVar29._8_8_,&stack0x000009a8);
      lVar21 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         ();
      if (lVar21 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar23 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
        goto LAB_078b6668;
      }
    }
    else {
      if (unaff_w22 == 1) {
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
        *unaff_x19 = 0xffffffff;
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get
        ;
      }
      if (unaff_w22 != 2) goto LAB_078b5bfc;
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *unaff_x19 = 0xffffffff;
    }
    FUN_0666e9a8(&stack0x00000028,0);
    lVar21 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo)
    ;
    FUN_0679343c(lVar21,0);
    if (lVar21 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    *(undefined4 *)(lVar21 + 0x10) = 2;
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar25 = *(long **)(unaff_x20 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar22 = *plVar25;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar17 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_078b63e0;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_03ac43c4(plVar25,*(long *)
                                    System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                           ,0);
LAB_078b63e0:
    uVar27 = (*(code *)*puVar17)(plVar25,puVar17[1]);
    *(undefined8 *)(lVar21 + 0x28) = uVar27;
    thunk_FUN_03afed3c();
    *(long *)(unaff_x20 + 0x20) = lVar21;
    thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar21);
LAB_078b640c:
    puVar17 = (undefined8 *)(unaff_x19 + 0xc);
    uVar23 = FUN_065cd268(*puVar17,0);
    puVar13 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar23 & 1) == 0) {
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(unaff_x20 + 0x48);
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar18 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar18 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23
                            );
LAB_078b6484:
      lVar21 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      uVar23 = 0;
      if (lVar21 != 0) {
        plVar25 = *(long **)(unaff_x20 + 0x48);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar13) {
              puVar18 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar13,0x23);
LAB_078b64ec:
        plVar25 = (long *)(*(code *)*puVar18)(plVar25,puVar18[1]);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        uVar27 = *puVar17;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)
                                        System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                               ,0);
LAB_078b6558:
        uVar23 = (*(code *)*puVar18)(plVar25,uVar27,puVar18[1]);
      }
    }
    if (unaff_x20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar27 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                       (uVar23,*(undefined8 *)(unaff_x20 + 0x20));
    uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo)
    ;
    FUN_078c41d8(uVar19,uVar27,2,0,0);
    puVar18 = (undefined8 *)(unaff_x19 + 10);
    plVar25 = (long *)*puVar18;
    if (plVar25 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar21 = *plVar25;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
    uVar27 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar20 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar20 = (undefined8 *)
              FUN_03ac43c4(plVar25,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
    (*(code *)*puVar20)(plVar25,uVar27,uVar19,puVar20[1]);
    *puVar18 = 0;
    thunk_FUN_03afed3c(puVar18,0);
    *puVar17 = 0;
    thunk_FUN_03afed3c(puVar17,0);
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  else {
    if (4 < unaff_w22) {
      if (unaff_w22 == 5) {
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
        *unaff_x19 = 0xffffffff;
LAB_078b5f54:
        FUN_0666e9a8(&stack0x00000028,0);
        lVar21 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar21,0);
        auVar3._8_8_ = in_stack_00000020;
        auVar3._0_8_ = in_stack_00000018;
        auVar2._8_8_ = in_stack_00000020;
        auVar2._0_8_ = in_stack_00000018;
        if (lVar21 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar21 + 0x10) = 1;
        puVar13 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
        if (unaff_x20 == 0) {
          _in_stack_00000018 = auVar3;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar25 = *(long **)(unaff_x20 + 0x38);
        if (plVar25 == (long *)0x0) {
          _in_stack_00000018 = auVar2;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar22 = *plVar25;
        uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar17 = (undefined8 *)(lVar22 + (long)(*piVar24 + 2) * 0x10 + 0x138);
              goto LAB_078b6038;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,2);
LAB_078b6038:
        uVar27 = (*(code *)*puVar17)(plVar25,puVar17[1]);
        *(undefined8 *)(lVar21 + 0x28) = uVar27;
        thunk_FUN_03afed3c();
        *(long *)(unaff_x20 + 0x20) = lVar21;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar21);
        plVar25 = *(long **)(unaff_x20 + 0x38);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar13) {
              puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto LAB_078b60bc;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar17 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar13,1);
LAB_078b60bc:
        _in_stack_00000018 = (*(code *)*puVar17)(plVar25,puVar17[1]);
        uVar27 = FUN_0674aae0(&stack0x00000018,0);
        *(undefined8 *)(unaff_x19 + 0xc) = uVar27;
        thunk_FUN_03afed3c();
      }
      else {
        if (unaff_w22 != 6) goto LAB_078b5bfc;
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
        *unaff_x19 = 0xffffffff;
LAB_078b5a1c:
        FUN_0666e9a8(&stack0x00000028,0);
        if (*(long *)(unaff_x19 + 0x14) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (*(int *)(*(long *)(unaff_x19 + 0x14) + 0x10) != 0) {
          sVar14 = FUN_07336274(&stack0x00001ca0,0);
          if (sVar14 == 0) {
            if (*(long *)(unaff_x19 + 0x14) == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            uVar27 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084ec1d8,&stack0x00001320);
            uVar27 = FUN_065c412c(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo,
                                  uVar27,0);
            uVar27 = FUN_065c0764(uVar27,*(undefined8 *)
                                          System_Collections_Generic_List<TypeIdentifier>_TypeInfo,0
                                 );
            FUN_078c790c(uVar27,0);
          }
        }
        lVar21 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar21,0);
        auVar11._8_8_ = in_stack_00000020;
        auVar11._0_8_ = in_stack_00000018;
        auVar10._8_8_ = in_stack_00000020;
        auVar10._0_8_ = in_stack_00000018;
        if (lVar21 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar21 + 0x10) = 0;
        if (unaff_x20 == 0) {
          _in_stack_00000018 = auVar11;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (*(long *)(unaff_x20 + 0x40) == 0) {
          _in_stack_00000018 = auVar10;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x18);
        thunk_FUN_03afed3c();
        if (*(long *)(unaff_x19 + 0x14) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar15 = FUN_07336274(&stack0x00001ca0,0);
        *(uint *)(lVar21 + 0x20) = uVar15 & 0xffff;
        *(long *)(unaff_x20 + 0x20) = lVar21;
        thunk_FUN_03afed3c((long *)(unaff_x20 + 0x20),lVar21);
      }
      goto LAB_078b640c;
    }
    if (unaff_w22 == 3) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *unaff_x19 = 0xffffffff;
LAB_078b5c6c:
      FUN_0666e9a8(&stack0x00000028,0);
      auVar7._8_8_ = in_stack_00000020;
      auVar7._0_8_ = in_stack_00000018;
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(unaff_x20 + 0x38);
      if (plVar25 == (long *)0x0) {
        _in_stack_00000018 = auVar7;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 5) * 0x10 + 0x138);
            goto LAB_078b5d90;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,5);
LAB_078b5d90:
      lVar21 = (*(code *)*puVar17)(plVar25,puVar17[1]);
      if (lVar21 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar23 & 1) != 0) goto LAB_078b5dbc;
      *unaff_x19 = 4;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
    }
    else if (unaff_w22 == 4) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *unaff_x19 = 0xffffffff;
LAB_078b5dbc:
      FUN_0666e9a8(&stack0x00000028,0);
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(unaff_x20 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      uVar27 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 7) * 0x10 + 0x138);
            goto LAB_078b5ea4;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,7);
LAB_078b5ea4:
      (*(code *)*puVar17)(&stack0x000017e0,plVar25,uVar27,puVar17[1]);
      memcpy(&stack0x00001ce0,&stack0x000017e0,0x4b8);
      uVar16 = unaff_x19[0xe];
      uVar27 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
      memset(&stack0x00000030,0,0x4c0);
      FUN_078b75cc(uVar27,uVar16,1,&stack0x000004f0,&stack0x00000030);
      lVar21 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         ();
      if (lVar21 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar23 & 1) != 0) goto LAB_078b5f54;
      *unaff_x19 = 5;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
    }
    else {
LAB_078b5bfc:
      if (unaff_x20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(unaff_x20 + 0x48);
      *(undefined1 *)(unaff_x20 + 0x10) = 1;
      puVar13 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
      if (plVar25 == (long *)0x0) {
        _in_stack_00000018 = auVar29;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x28) * 0x10 + 0x138);
            goto LAB_078b66ac;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x28
                            );
LAB_078b66ac:
      uVar27 = (*(code *)*puVar17)(plVar25,puVar17[1]);
      puVar17 = (undefined8 *)(unaff_x19 + 10);
      *puVar17 = uVar27;
      thunk_FUN_03afed3c(puVar17);
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      plVar25 = *(long **)(unaff_x20 + 0x48);
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar25;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar13) {
            puVar18 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6734;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar13,0x23);
LAB_078b6734:
      lVar21 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      auVar9._8_8_ = in_stack_00000020;
      auVar9._0_8_ = in_stack_00000018;
      auVar6._8_8_ = in_stack_00000020;
      auVar6._0_8_ = in_stack_00000018;
      uVar16 = 1;
      if (lVar21 != 0) {
        uVar16 = 2;
      }
      unaff_x19[0xe] = uVar16;
      lVar21 = *(long *)(unaff_x20 + 0x40);
      if (lVar21 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      iVar1 = *(int *)(lVar21 + 0x10);
      if (iVar1 == 0) {
        uVar27 = *(undefined8 *)(lVar21 + 0x18);
        FUN_0529a878(&stack0x000017e0,*(undefined4 *)(lVar21 + 0x20),*(undefined8 *)PTR_DAT_08491c30
                    );
        if (*(long *)(unaff_x20 + 0x40) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar28 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x28);
        uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
                  (uVar19,uVar16,uVar27,0,uVar28);
        *(undefined8 *)(unaff_x19 + 0x14) = uVar19;
        thunk_FUN_03afed3c(unaff_x19 + 0x14,uVar19);
        lVar21 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                           ();
        if (lVar21 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar21,0);
        uVar23 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar23 & 1) != 0) goto LAB_078b5a1c;
        *unaff_x19 = 6;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else if (iVar1 == 1) {
        plVar25 = *(long **)(unaff_x20 + 0x60);
        if (plVar25 == (long *)0x0) {
          _in_stack_00000018 = auVar9;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<Transform>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_078b6900;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,
                               0);
LAB_078b6900:
        uVar27 = (*(code *)*puVar18)(plVar25,puVar18[1]);
        puVar18 = (undefined8 *)(unaff_x20 + 0x38);
        *puVar18 = uVar27;
        thunk_FUN_03afed3c(puVar18);
        plVar25 = (long *)*puVar17;
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        plVar26 = (long *)*puVar18;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar13) {
              puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x1d) * 0x10 + 0x138);
              goto LAB_078b69f0;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar17 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar13,0x1d);
LAB_078b69f0:
        uVar16 = (*(code *)*puVar17)(plVar25,puVar17[1]);
        auVar8._8_8_ = in_stack_00000020;
        auVar8._0_8_ = in_stack_00000018;
        if (*(long *)(unaff_x20 + 0x40) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (plVar26 == (long *)0x0) {
          _in_stack_00000018 = auVar8;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        uVar27 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x30);
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 3) * 0x10 + 0x138);
              goto LAB_078b6ae0;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_03ac43c4(plVar26,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,3);
LAB_078b6ae0:
        lVar21 = (*(code *)*puVar17)(plVar26,uVar16,uVar27,puVar17[1]);
        if (lVar21 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar21,0);
        uVar23 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar23 & 1) != 0) goto LAB_078b5c6c;
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        if (iVar1 != 2) goto LAB_078b640c;
        plVar25 = *(long **)(unaff_x20 + 0x58);
        if (plVar25 == (long *)0x0) {
          _in_stack_00000018 = auVar6;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
              puVar17 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_078b6978;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)
                                        System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo
                               ,0);
LAB_078b6978:
        uVar27 = (*(code *)*puVar17)(plVar25,puVar17[1]);
        *(undefined8 *)(unaff_x20 + 0x30) = uVar27;
        thunk_FUN_03afed3c();
        plVar25 = *(long **)(unaff_x20 + 0x48);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        plVar26 = *(long **)(unaff_x20 + 0x30);
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar13) {
              puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x16) * 0x10 + 0x138);
              goto FUN_078b6a68;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar17 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar13,0x16);
FUN_078b6a68:
        uVar27 = (*(code *)*puVar17)(plVar25,puVar17[1]);
        auVar5._8_8_ = in_stack_00000020;
        auVar5._0_8_ = in_stack_00000018;
        if (*(long *)(unaff_x20 + 0x40) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (plVar26 == (long *)0x0) {
          _in_stack_00000018 = auVar5;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 0x30);
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar17 = (undefined8 *)(lVar21 + (long)(*piVar24 + 2) * 0x10 + 0x138);
              goto LAB_078b6b70;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_03ac43c4(plVar26,*(long *)
                                        System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                               ,2);
LAB_078b6b70:
        lVar21 = (*(code *)*puVar17)(plVar26,uVar27,uVar19,puVar17[1]);
        if (lVar21 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar21,0);
        uVar23 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar23 & 1) != 0) goto LAB_078b5b9c;
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
    }
  }
LAB_078b6668:
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
    return;
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


