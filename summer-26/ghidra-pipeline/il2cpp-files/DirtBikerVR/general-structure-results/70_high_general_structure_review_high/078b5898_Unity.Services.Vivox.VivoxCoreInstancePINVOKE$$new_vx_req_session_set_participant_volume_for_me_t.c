/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_session_set_participant_volume_for_me_t
ENTRY_POINT: 078b5898
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_set_participant_volume_for_me_t
               (void)

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
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  short sVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  uint *unaff_x19;
  long unaff_x20;
  long lVar24;
  long *plVar25;
  uint *puVar26;
  long *plVar27;
  undefined8 uVar28;
  uint *puVar29;
  undefined8 uVar30;
  long unaff_x26;
  undefined1 auVar31 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00002198;
  
                    /* try { // try from 078b5898 to 079b589f has its CatchHandler @ 078b58a8 */
                    /* try { // try from 078b58a0 to 079b58ab has its CatchHandler @ 078b5468 */
  FUN_03a8a718(System_Collections_Generic_List<TMP_FontAsset>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 078b5850 with catch @ 078b58a8
                       catch(type#2 @ 00000000) { ... } // from try @ 078b5898 with catch @ 078b58a8
                        */
                    /* try { // try from 078b58ac to 079b5d37 has its CatchHandler @ 078b58ac
                       catch() { ... } // from try @ 078b58ac with catch @ 078b58ac
                       catch() { ... } // from try @ 078b5ddc with catch @ 078b58ac
                       catch() { ... } // from try @ 078b5ecc with catch @ 078b58ac
                       catch() { ... } // from try @ 078b5efc with catch @ 078b58ac
                       catch() { ... } // from try @ 078b5f30 with catch @ 078b58ac */
  FUN_03a8a718(System_Collections_Generic_List<Type>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<TypeIdentifier>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x940) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  memset(&stack0x00001ce0,0,0x4b8);
  auVar31._8_8_ = in_stack_00000020;
  auVar31._0_8_ = in_stack_00000018;
  uVar16 = *unaff_x19;
  lVar24 = *(long *)(unaff_x19 + 8);
  if (6 < uVar16) {
    if (lVar24 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar25 = *(long **)(lVar24 + 0x48);
    if (plVar25 == (long *)0x0) {
      _in_stack_00000018 = auVar31;
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar20 = *plVar25;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) ==
            *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
          puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x18) * 0x10 + 0x138);
          goto LAB_078b596c;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar18 = (undefined8 *)
              FUN_03ac43c4(plVar25,*(long *)
                                    System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x18);
LAB_078b596c:
    uVar22 = (*(code *)*puVar18)(plVar25,puVar18[1]);
    if ((uVar22 & 1) == 0) {
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar28 = thunk_FUN_03ac74bc();
      uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<TypeSpec>_TypeInfo);
      FUN_078bbac4(uVar28,uVar19,0x1c,0);
      uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar28,uVar19);
      }
      goto LAB_078b7484;
    }
    if (*(char *)(lVar24 + 0x10) != '\0') {
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar28 = thunk_FUN_03ac74bc();
      uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UIDocument>_TypeInfo);
      FUN_078bbac4(uVar28,uVar19,0x1c,0);
      uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar28,uVar19);
      }
      goto LAB_078b7484;
    }
    if (*(char *)(lVar24 + 0x11) != '\0') {
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar28 = thunk_FUN_03ac74bc();
      uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UILineInfo>_TypeInfo);
      FUN_078bbac4(uVar28,uVar19,0x1c,0);
      uVar19 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar28,uVar19);
      }
      goto LAB_078b7484;
    }
  }
  puVar13 = PTR_DAT_08488b88;
  auVar12._8_8_ = in_stack_00000020;
  auVar12._0_8_ = in_stack_00000018;
  if ((int)uVar16 < 3) {
    if (uVar16 == 0) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = 0xffffffff;
LAB_078b5b9c:
      FUN_0666e9a8(&stack0x00000028,0);
      puVar14 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
      auVar4._8_8_ = in_stack_00000020;
      auVar4._0_8_ = in_stack_00000018;
      if (lVar24 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(lVar24 + 0x30);
      if (plVar25 == (long *)0x0) {
        _in_stack_00000018 = auVar4;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto LAB_078b5d0c;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,1);
LAB_078b5d0c:
      _in_stack_00000018 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      uVar28 = FUN_0674aae0(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 0xc) = uVar28;
      thunk_FUN_03afed3c();
      plVar25 = *(long **)(lVar24 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)puVar14) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 5) * 0x10 + 0x138);
            goto LAB_078b60fc;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar14,5);
LAB_078b60fc:
      uVar28 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      puVar26 = unaff_x19 + 0x10;
      *(undefined8 *)puVar26 = uVar28;
      thunk_FUN_03afed3c(puVar26);
      lVar20 = FUN_078b567c(lVar24,*(undefined8 *)puVar26);
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar20,0);
      uVar22 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar22 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
        goto LAB_078b6668;
      }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get:
      FUN_0666e9a8(&stack0x00000028,0);
      if (lVar24 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      uVar16 = unaff_x19[0xe];
      plVar25 = *(long **)(lVar24 + 0x30);
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
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      uVar28 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 4) * 0x10 + 0x138);
            goto LAB_078b6234;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,4);
LAB_078b6234:
      (*(code *)*puVar18)(&stack0x00001320,plVar25,uVar28,puVar18[1]);
      memcpy(&stack0x000017e0,&stack0x00001320,0x4b8);
      if (*(long *)(unaff_x19 + 0x10) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      auVar31 = FUN_079239d0(*(long *)(unaff_x19 + 0x10),0);
      uVar28 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(&stack0x00000e68,&stack0x000017e0,0x4b8);
      memset(&stack0x000009a8,0,0x4c0);
      FUN_078b748c(uVar28,uVar16,2,&stack0x00000e68,auVar31._0_8_,auVar31._8_8_,&stack0x000009a8);
      lVar20 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         (lVar24,uVar28);
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar20,0);
      uVar22 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar22 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
        goto LAB_078b6668;
      }
    }
    else {
      if (uVar16 == 1) {
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        *unaff_x19 = 0xffffffff;
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get
        ;
      }
      if (uVar16 != 2) goto LAB_078b5bfc;
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = 0xffffffff;
    }
    FUN_0666e9a8(&stack0x00000028,0);
    lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo)
    ;
    FUN_0679343c(lVar20,0);
    if (lVar20 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    *(undefined4 *)(lVar20 + 0x10) = 2;
    if (lVar24 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar25 = *(long **)(lVar24 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar21 = *plVar25;
    uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar18 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_078b63e0;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar18 = (undefined8 *)
              FUN_03ac43c4(plVar25,*(long *)
                                    System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                           ,0);
LAB_078b63e0:
    uVar28 = (*(code *)*puVar18)(plVar25,puVar18[1]);
    *(undefined8 *)(lVar20 + 0x28) = uVar28;
    thunk_FUN_03afed3c();
    *(long *)(lVar24 + 0x20) = lVar20;
    thunk_FUN_03afed3c((long *)(lVar24 + 0x20),lVar20);
LAB_078b640c:
    puVar26 = unaff_x19 + 0xc;
    uVar22 = FUN_065cd268(*(undefined8 *)puVar26,0);
    puVar14 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar22 & 1) == 0) {
      if (lVar24 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(lVar24 + 0x48);
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23
                            );
LAB_078b6484:
      lVar20 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      uVar22 = 0;
      if (lVar20 != 0) {
        plVar25 = *(long **)(lVar24 + 0x48);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar25;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar14) {
              puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar14,0x23);
LAB_078b64ec:
        plVar25 = (long *)(*(code *)*puVar18)(plVar25,puVar18[1]);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar25;
        uVar28 = *(undefined8 *)puVar26;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)
                                        System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                               ,0);
LAB_078b6558:
        uVar22 = (*(code *)*puVar18)(plVar25,uVar28,puVar18[1]);
      }
    }
    if (lVar24 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar28 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                       (uVar22,*(undefined8 *)(lVar24 + 0x20));
    uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo)
    ;
    FUN_078c41d8(uVar19,uVar28,2,0,0);
    puVar29 = unaff_x19 + 10;
    plVar25 = *(long **)puVar29;
    if (plVar25 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar24 = *plVar25;
    uVar22 = (ulong)*(ushort *)(lVar24 + 0x12e);
    uVar28 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar18 = (undefined8 *)(lVar24 + (long)(*piVar23 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar18 = (undefined8 *)
              FUN_03ac43c4(plVar25,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
    (*(code *)*puVar18)(plVar25,uVar28,uVar19,puVar18[1]);
    puVar29[0] = 0;
    puVar29[1] = 0;
    thunk_FUN_03afed3c(puVar29,0);
    puVar26[0] = 0;
    puVar26[1] = 0;
    thunk_FUN_03afed3c(puVar26,0);
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  else {
    if (4 < (int)uVar16) {
      if (uVar16 == 5) {
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        *unaff_x19 = 0xffffffff;
LAB_078b5f54:
        FUN_0666e9a8(&stack0x00000028,0);
        lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar20,0);
        auVar3._8_8_ = in_stack_00000020;
        auVar3._0_8_ = in_stack_00000018;
        auVar2._8_8_ = in_stack_00000020;
        auVar2._0_8_ = in_stack_00000018;
        if (lVar20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar20 + 0x10) = 1;
        puVar14 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
        if (lVar24 == 0) {
          _in_stack_00000018 = auVar3;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar25 = *(long **)(lVar24 + 0x38);
        if (plVar25 == (long *)0x0) {
          _in_stack_00000018 = auVar2;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar25;
        uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar21 + (long)(*piVar23 + 2) * 0x10 + 0x138);
              goto LAB_078b6038;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,2);
LAB_078b6038:
        uVar28 = (*(code *)*puVar18)(plVar25,puVar18[1]);
        *(undefined8 *)(lVar20 + 0x28) = uVar28;
        thunk_FUN_03afed3c();
        *(long *)(lVar24 + 0x20) = lVar20;
        thunk_FUN_03afed3c((long *)(lVar24 + 0x20),lVar20);
        plVar25 = *(long **)(lVar24 + 0x38);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar25;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar14) {
              puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
              goto LAB_078b60bc;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar14,1);
LAB_078b60bc:
        _in_stack_00000018 = (*(code *)*puVar18)(plVar25,puVar18[1]);
        uVar28 = FUN_0674aae0(&stack0x00000018,0);
        *(undefined8 *)(unaff_x19 + 0xc) = uVar28;
        thunk_FUN_03afed3c();
      }
      else {
        if (uVar16 != 6) goto LAB_078b5bfc;
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
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
          sVar15 = FUN_07336274(&stack0x00001ca0,0);
          if (sVar15 == 0) {
            if (*(long *)(unaff_x19 + 0x14) == 0) {
              if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            uVar28 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084ec1d8,&stack0x00001320);
            uVar28 = FUN_065c412c(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo,
                                  uVar28,0);
            uVar28 = FUN_065c0764(uVar28,*(undefined8 *)
                                          System_Collections_Generic_List<TypeIdentifier>_TypeInfo,0
                                 );
            FUN_078c790c(uVar28,0);
          }
        }
        lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar20,0);
        auVar11._8_8_ = in_stack_00000020;
        auVar11._0_8_ = in_stack_00000018;
        auVar10._8_8_ = in_stack_00000020;
        auVar10._0_8_ = in_stack_00000018;
        if (lVar20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar20 + 0x10) = 0;
        if (lVar24 == 0) {
          _in_stack_00000018 = auVar11;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (*(long *)(lVar24 + 0x40) == 0) {
          _in_stack_00000018 = auVar10;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(*(long *)(lVar24 + 0x40) + 0x18);
        thunk_FUN_03afed3c();
        if (*(long *)(unaff_x19 + 0x14) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar16 = FUN_07336274(&stack0x00001ca0,0);
        *(uint *)(lVar20 + 0x20) = uVar16 & 0xffff;
        *(long *)(lVar24 + 0x20) = lVar20;
        thunk_FUN_03afed3c((long *)(lVar24 + 0x20),lVar20);
      }
      goto LAB_078b640c;
    }
    if (uVar16 == 3) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = 0xffffffff;
LAB_078b5c6c:
      FUN_0666e9a8(&stack0x00000028,0);
      auVar7._8_8_ = in_stack_00000020;
      auVar7._0_8_ = in_stack_00000018;
      if (lVar24 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(lVar24 + 0x38);
      if (plVar25 == (long *)0x0) {
        _in_stack_00000018 = auVar7;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 5) * 0x10 + 0x138);
            goto LAB_078b5d90;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,5);
LAB_078b5d90:
      lVar20 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar20,0);
      uVar22 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar22 & 1) != 0) goto LAB_078b5dbc;
      *unaff_x19 = 4;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
    }
    else if (uVar16 == 4) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = 0xffffffff;
LAB_078b5dbc:
      FUN_0666e9a8(&stack0x00000028,0);
      if (lVar24 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(lVar24 + 0x38);
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
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      uVar28 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 7) * 0x10 + 0x138);
            goto LAB_078b5ea4;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,7);
LAB_078b5ea4:
      (*(code *)*puVar18)(&stack0x000017e0,plVar25,uVar28,puVar18[1]);
      memcpy(&stack0x00001ce0,&stack0x000017e0,0x4b8);
      uVar16 = unaff_x19[0xe];
      uVar28 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(&stack0x000004f0,&stack0x00001ce0,0x4b8);
      memset(&stack0x00000030,0,0x4c0);
      FUN_078b75cc(uVar28,uVar16,1,&stack0x000004f0,&stack0x00000030);
      lVar20 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         (lVar24,uVar28);
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      in_stack_00000028 = FUN_067c4bec(lVar20,0);
      uVar22 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar22 & 1) != 0) goto LAB_078b5f54;
      *unaff_x19 = 5;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
    }
    else {
LAB_078b5bfc:
      if (lVar24 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar25 = *(long **)(lVar24 + 0x48);
      *(undefined1 *)(lVar24 + 0x10) = 1;
      puVar14 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
      if (plVar25 == (long *)0x0) {
        _in_stack_00000018 = auVar12;
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x28) * 0x10 + 0x138);
            goto LAB_078b66ac;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)
                FUN_03ac43c4(plVar25,*(long *)
                                      System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x28
                            );
LAB_078b66ac:
      uVar28 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      puVar29 = unaff_x19 + 10;
      *(undefined8 *)puVar29 = uVar28;
      thunk_FUN_03afed3c(puVar29);
      puVar26 = unaff_x19 + 0xc;
      puVar26[0] = 0;
      puVar26[1] = 0;
      thunk_FUN_03afed3c(puVar26,0);
      plVar25 = *(long **)(lVar24 + 0x48);
      if (plVar25 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar20 = *plVar25;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)puVar14) {
            puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6734;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar14,0x23);
LAB_078b6734:
      lVar20 = (*(code *)*puVar18)(plVar25,puVar18[1]);
      auVar9._8_8_ = in_stack_00000020;
      auVar9._0_8_ = in_stack_00000018;
      auVar6._8_8_ = in_stack_00000020;
      auVar6._0_8_ = in_stack_00000018;
      uVar16 = 1;
      if (lVar20 != 0) {
        uVar16 = 2;
      }
      unaff_x19[0xe] = uVar16;
      lVar20 = *(long *)(lVar24 + 0x40);
      if (lVar20 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      iVar1 = *(int *)(lVar20 + 0x10);
      if (iVar1 == 0) {
        uVar28 = *(undefined8 *)(lVar20 + 0x18);
        FUN_0529a878(&stack0x000017e0,*(undefined4 *)(lVar20 + 0x20),*(undefined8 *)PTR_DAT_08491c30
                    );
        if (*(long *)(lVar24 + 0x40) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar30 = *(undefined8 *)(*(long *)(lVar24 + 0x40) + 0x28);
        uVar19 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
                  (uVar19,uVar16,uVar28,0,uVar30);
        puVar26 = unaff_x19 + 0x14;
        *(undefined8 *)puVar26 = uVar19;
        thunk_FUN_03afed3c(puVar26,uVar19);
        lVar20 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                           (lVar24,*(undefined8 *)puVar26);
        if (lVar20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar20,0);
        uVar22 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar22 & 1) != 0) goto LAB_078b5a1c;
        *unaff_x19 = 6;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else if (iVar1 == 1) {
        plVar25 = *(long **)(lVar24 + 0x60);
        if (plVar25 == (long *)0x0) {
          _in_stack_00000018 = auVar9;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar25;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) ==
                *(long *)System_Collections_Generic_List<Transform>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_078b6900;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,
                               0);
LAB_078b6900:
        uVar28 = (*(code *)*puVar18)(plVar25,puVar18[1]);
        puVar18 = (undefined8 *)(lVar24 + 0x38);
        *puVar18 = uVar28;
        thunk_FUN_03afed3c(puVar18);
        plVar25 = *(long **)puVar29;
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar25;
        plVar27 = (long *)*puVar18;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar14) {
              puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x1d) * 0x10 + 0x138);
              goto LAB_078b69f0;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar14,0x1d);
LAB_078b69f0:
        uVar17 = (*(code *)*puVar18)(plVar25,puVar18[1]);
        auVar8._8_8_ = in_stack_00000020;
        auVar8._0_8_ = in_stack_00000018;
        if (*(long *)(lVar24 + 0x40) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (plVar27 == (long *)0x0) {
          _in_stack_00000018 = auVar8;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar27;
        uVar28 = *(undefined8 *)(*(long *)(lVar24 + 0x40) + 0x30);
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 3) * 0x10 + 0x138);
              goto LAB_078b6ae0;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar27,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,3);
LAB_078b6ae0:
        lVar20 = (*(code *)*puVar18)(plVar27,uVar17,uVar28,puVar18[1]);
        if (lVar20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar20,0);
        uVar22 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar22 & 1) != 0) goto LAB_078b5c6c;
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        if (iVar1 != 2) goto LAB_078b640c;
        plVar25 = *(long **)(lVar24 + 0x58);
        if (plVar25 == (long *)0x0) {
          _in_stack_00000018 = auVar6;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar25;
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_078b6978;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar25,*(long *)
                                        System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo
                               ,0);
LAB_078b6978:
        uVar28 = (*(code *)*puVar18)(plVar25,puVar18[1]);
        *(undefined8 *)(lVar24 + 0x30) = uVar28;
        thunk_FUN_03afed3c();
        plVar25 = *(long **)(lVar24 + 0x48);
        if (plVar25 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar25;
        plVar27 = *(long **)(lVar24 + 0x30);
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar14) {
              puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 0x16) * 0x10 + 0x138);
              goto FUN_078b6a68;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)FUN_03ac43c4(plVar25,*(long *)puVar14,0x16);
FUN_078b6a68:
        uVar28 = (*(code *)*puVar18)(plVar25,puVar18[1]);
        auVar5._8_8_ = in_stack_00000020;
        auVar5._0_8_ = in_stack_00000018;
        if (*(long *)(lVar24 + 0x40) == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (plVar27 == (long *)0x0) {
          _in_stack_00000018 = auVar5;
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar20 = *plVar27;
        uVar19 = *(undefined8 *)(*(long *)(lVar24 + 0x40) + 0x30);
        uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar18 = (undefined8 *)(lVar20 + (long)(*piVar23 + 2) * 0x10 + 0x138);
              goto LAB_078b6b70;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_03ac43c4(plVar27,*(long *)
                                        System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                               ,2);
LAB_078b6b70:
        lVar20 = (*(code *)*puVar18)(plVar27,uVar28,uVar19,puVar18[1]);
        if (lVar20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00002198) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        in_stack_00000028 = FUN_067c4bec(lVar20,0);
        uVar22 = FUN_0666e8e0(&stack0x00000028,0);
        if ((uVar22 & 1) != 0) goto LAB_078b5b9c;
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
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


