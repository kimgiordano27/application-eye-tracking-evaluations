/*
FUNCTION_NAME: FUN_078b57b4
ENTRY_POINT: 078b57b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_16
*/


void FUN_078b57b4(uint *param_1)

{
  int iVar1;
  long lVar2;
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
  undefined1 auVar13 [16];
  undefined *puVar14;
  undefined *puVar15;
  short sVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  long lVar25;
  long *plVar26;
  uint *puVar27;
  long *plVar28;
  undefined8 uVar29;
  uint *puVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 local_21e8 [16];
  undefined8 local_21d8;
  undefined1 auStack_21d0 [1216];
  undefined1 auStack_1d10 [1208];
  undefined1 auStack_1858 [1216];
  undefined1 auStack_1398 [1208];
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined1 auStack_520 [1208];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_08987940 & 1) == 0) {
                    /* try { // try from 078b57f8 to 079b57fb has its CatchHandler @ 078b5808 */
    FUN_03a8a718(System_Collections_Generic_List<TokenRequest>_TypeInfo);
                    /* try { // try from 078b57fc to 079b57ff has its CatchHandler @ 078b5804 */
                    /* try { // try from 078b5800 to 079b582f has its CatchHandler @ 078b5468 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b57fc with catch @ 078b5804
                        */
    FUN_03a8a718(PTR_DAT_08488b88);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b57f8 with catch @ 078b5808
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b573c with catch @ 078b580c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b5640 with catch @ 078b5810
                        */
    FUN_03a8a718(System_Collections_Generic_List<TrackAsset>_TypeInfo);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 078b574c with catch @ 078b5814
                        */
    FUN_03a8a718(System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TransactionItem>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<Transform>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TreeInstance>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TrialOffer>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084ec1d8);
    FUN_03a8a718(PTR_DAT_08491c30);
    FUN_03a8a718(System_Collections_Generic_List<TriangleER>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TMP_FontAsset>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<Type>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<TypeIdentifier>_TypeInfo);
    DAT_08987940 = 1;
  }
  local_21e8._8_8_ = 0;
  local_21d8 = 0;
  local_21e8._0_8_ = 0;
  memset(auStack_520,0,0x4b8);
  auVar32._8_8_ = local_21e8._8_8_;
  auVar32._0_8_ = local_21e8._0_8_;
  uVar17 = *param_1;
  lVar25 = *(long *)(param_1 + 8);
  uStack_528 = 0;
  local_530 = 0;
  uStack_538 = 0;
  local_540 = 0;
  uStack_548 = 0;
  local_550 = 0;
  uStack_558 = 0;
  local_560 = 0;
  if (6 < uVar17) {
    if (lVar25 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar26 = *(long **)(lVar25 + 0x48);
    if (plVar26 == (long *)0x0) {
      local_21e8 = auVar32;
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar21 = *plVar26;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) ==
            *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
          puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x18) * 0x10 + 0x138);
          goto LAB_078b596c;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar19 = (undefined8 *)
              FUN_03ac43c4(plVar26,*(long *)
                                    System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x18);
LAB_078b596c:
    uVar23 = (*(code *)*puVar19)(plVar26,puVar19[1]);
    if ((uVar23 & 1) == 0) {
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar29 = thunk_FUN_03ac74bc();
      uVar20 = thunk_FUN_03af1434(System_Collections_Generic_List<TypeSpec>_TypeInfo);
      FUN_078bbac4(uVar29,uVar20,0x1c,0);
      uVar20 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar29,uVar20);
      }
      goto LAB_078b7484;
    }
    if (*(char *)(lVar25 + 0x10) != '\0') {
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar29 = thunk_FUN_03ac74bc();
      uVar20 = thunk_FUN_03af1434(System_Collections_Generic_List<UIDocument>_TypeInfo);
      FUN_078bbac4(uVar29,uVar20,0x1c,0);
      uVar20 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar29,uVar20);
      }
      goto LAB_078b7484;
    }
    if (*(char *)(lVar25 + 0x11) != '\0') {
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar29 = thunk_FUN_03ac74bc();
      uVar20 = thunk_FUN_03af1434(System_Collections_Generic_List<UILineInfo>_TypeInfo);
      FUN_078bbac4(uVar29,uVar20,0x1c,0);
      uVar20 = thunk_FUN_03af1434(System_Collections_Generic_List<UICharInfo>_TypeInfo);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar29,uVar20);
      }
      goto LAB_078b7484;
    }
  }
  puVar14 = PTR_DAT_08488b88;
  auVar13._8_8_ = local_21e8._8_8_;
  auVar13._0_8_ = local_21e8._0_8_;
  if ((int)uVar17 < 3) {
    if (uVar17 == 0) {
      local_21d8 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = 0xffffffff;
LAB_078b5b9c:
      FUN_0666e9a8(&local_21d8,0);
      puVar15 = System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo;
      auVar5._8_8_ = local_21e8._8_8_;
      auVar5._0_8_ = local_21e8._0_8_;
      if (lVar25 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar26 = *(long **)(lVar25 + 0x30);
      if (plVar26 == (long *)0x0) {
        local_21e8 = auVar5;
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_078b5d0c;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)
                FUN_03ac43c4(plVar26,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,1);
LAB_078b5d0c:
      local_21e8 = (*(code *)*puVar19)(plVar26,puVar19[1]);
      uVar29 = FUN_0674aae0(local_21e8,0);
      *(undefined8 *)(param_1 + 0xc) = uVar29;
      thunk_FUN_03afed3c();
      plVar26 = *(long **)(lVar25 + 0x30);
      if (plVar26 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar15) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 5) * 0x10 + 0x138);
            goto LAB_078b60fc;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)FUN_03ac43c4(plVar26,*(long *)puVar15,5);
LAB_078b60fc:
      uVar29 = (*(code *)*puVar19)(plVar26,puVar19[1]);
      puVar27 = param_1 + 0x10;
      *(undefined8 *)puVar27 = uVar29;
      thunk_FUN_03afed3c(puVar27);
      lVar21 = FUN_078b567c(lVar25,*(undefined8 *)puVar27);
      if (lVar21 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      local_21d8 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&local_21d8,0);
      if ((uVar23 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x12) = local_21d8;
        thunk_FUN_03afed3c(param_1 + 0x12,0);
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(param_1 + 2,&local_21d8,param_1,
                     *(undefined8 *)System_Collections_Generic_List<TokenRequest>_TypeInfo);
        goto LAB_078b6668;
      }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get:
      FUN_0666e9a8(&local_21d8,0);
      if (lVar25 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      uVar17 = param_1[0xe];
      plVar26 = *(long **)(lVar25 + 0x30);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar26 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      uVar29 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 4) * 0x10 + 0x138);
            goto LAB_078b6234;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)
                FUN_03ac43c4(plVar26,*(long *)
                                      System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                             ,4);
LAB_078b6234:
      (*(code *)*puVar19)(&local_ee0,plVar26,uVar29,puVar19[1]);
      memcpy(&local_a20,&local_ee0,0x4b8);
      if (*(long *)(param_1 + 0x10) == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      auVar32 = FUN_079239d0(*(long *)(param_1 + 0x10),0);
      uVar29 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(auStack_1398,&local_a20,0x4b8);
      memset(auStack_1858,0,0x4c0);
      FUN_078b748c(uVar29,uVar17,2,auStack_1398,auVar32._0_8_,auVar32._8_8_,auStack_1858);
      lVar21 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         (lVar25,uVar29);
      if (lVar21 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      local_21d8 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&local_21d8,0);
      if ((uVar23 & 1) == 0) {
        *param_1 = 2;
        *(undefined8 *)(param_1 + 0x12) = local_21d8;
        thunk_FUN_03afed3c(param_1 + 0x12,0);
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(param_1 + 2,&local_21d8,param_1,
                     *(undefined8 *)System_Collections_Generic_List<TokenRequest>_TypeInfo);
        goto LAB_078b6668;
      }
    }
    else {
      if (uVar17 == 1) {
        local_21d8 = *(undefined8 *)(param_1 + 0x12);
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = 0xffffffff;
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_session_handle_get
        ;
      }
      if (uVar17 != 2) goto LAB_078b5bfc;
      local_21d8 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = 0xffffffff;
    }
    FUN_0666e9a8(&local_21d8,0);
    lVar21 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TrackAsset>_TypeInfo)
    ;
    FUN_0679343c(lVar21,0);
    if (lVar21 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    *(undefined4 *)(lVar21 + 0x10) = 2;
    if (lVar25 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    plVar26 = *(long **)(lVar25 + 0x30);
    if (plVar26 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar22 = *plVar26;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) ==
            *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
          puVar19 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_078b63e0;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar19 = (undefined8 *)
              FUN_03ac43c4(plVar26,*(long *)
                                    System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                           ,0);
LAB_078b63e0:
    uVar29 = (*(code *)*puVar19)(plVar26,puVar19[1]);
    *(undefined8 *)(lVar21 + 0x28) = uVar29;
    thunk_FUN_03afed3c();
    *(long *)(lVar25 + 0x20) = lVar21;
    thunk_FUN_03afed3c((long *)(lVar25 + 0x20),lVar21);
LAB_078b640c:
    puVar27 = param_1 + 0xc;
    uVar23 = FUN_065cd268(*(undefined8 *)puVar27,0);
    puVar15 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    if ((uVar23 & 1) == 0) {
      if (lVar25 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar26 = *(long **)(lVar25 + 0x48);
      if (plVar26 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6484;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)
                FUN_03ac43c4(plVar26,*(long *)
                                      System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x23
                            );
LAB_078b6484:
      lVar21 = (*(code *)*puVar19)(plVar26,puVar19[1]);
      uVar23 = 0;
      if (lVar21 != 0) {
        plVar26 = *(long **)(lVar25 + 0x48);
        if (plVar26 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar15) {
              puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x23) * 0x10 + 0x138);
              goto LAB_078b64ec;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_03ac43c4(plVar26,*(long *)puVar15,0x23);
LAB_078b64ec:
        plVar26 = (long *)(*(code *)*puVar19)(plVar26,puVar19[1]);
        if (plVar26 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        uVar29 = *(undefined8 *)puVar27;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo) {
              puVar19 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_078b6558;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_03ac43c4(plVar26,*(long *)
                                        System_Collections_Generic_List<TransactionVirtualCurrency>_TypeInfo
                               ,0);
LAB_078b6558:
        uVar23 = (*(code *)*puVar19)(plVar26,uVar29,puVar19[1]);
      }
    }
    if (lVar25 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    uVar29 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_channel_invite_user_t
                       (uVar23,*(undefined8 *)(lVar25 + 0x20));
    uVar20 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo)
    ;
    FUN_078c41d8(uVar20,uVar29,2,0,0);
    puVar30 = param_1 + 10;
    plVar26 = *(long **)puVar30;
    if (plVar26 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_078b7484;
    }
    lVar25 = *plVar26;
    uVar23 = (ulong)*(ushort *)(lVar25 + 0x12e);
    uVar29 = *(undefined8 *)System_Collections_Generic_List<TMP_FontAsset>_TypeInfo;
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) ==
            *(long *)System_Collections_Generic_List<TransactionItem>_TypeInfo) {
          puVar19 = (undefined8 *)(lVar25 + (long)(*piVar24 + 0xb) * 0x10 + 0x138);
          goto LAB_078b6610;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar19 = (undefined8 *)
              FUN_03ac43c4(plVar26,*(long *)
                                    System_Collections_Generic_List<TransactionItem>_TypeInfo,0xb);
LAB_078b6610:
    (*(code *)*puVar19)(plVar26,uVar29,uVar20,puVar19[1]);
    puVar30[0] = 0;
    puVar30[1] = 0;
    thunk_FUN_03afed3c(puVar30,0);
    puVar27[0] = 0;
    puVar27[1] = 0;
    thunk_FUN_03afed3c(puVar27,0);
    *param_1 = 0xfffffffe;
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(param_1 + 2,0);
  }
  else {
    if (4 < (int)uVar17) {
      if (uVar17 == 5) {
        local_21d8 = *(undefined8 *)(param_1 + 0x12);
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = 0xffffffff;
LAB_078b5f54:
        FUN_0666e9a8(&local_21d8,0);
        lVar21 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar21,0);
        auVar4._8_8_ = local_21e8._8_8_;
        auVar4._0_8_ = local_21e8._0_8_;
        auVar3._8_8_ = local_21e8._8_8_;
        auVar3._0_8_ = local_21e8._0_8_;
        if (lVar21 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar21 + 0x10) = 1;
        puVar15 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
        if (lVar25 == 0) {
          local_21e8 = auVar4;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        plVar26 = *(long **)(lVar25 + 0x38);
        if (plVar26 == (long *)0x0) {
          local_21e8 = auVar3;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar22 = *plVar26;
        uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar19 = (undefined8 *)(lVar22 + (long)(*piVar24 + 2) * 0x10 + 0x138);
              goto LAB_078b6038;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_03ac43c4(plVar26,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,2);
LAB_078b6038:
        uVar29 = (*(code *)*puVar19)(plVar26,puVar19[1]);
        *(undefined8 *)(lVar21 + 0x28) = uVar29;
        thunk_FUN_03afed3c();
        *(long *)(lVar25 + 0x20) = lVar21;
        thunk_FUN_03afed3c((long *)(lVar25 + 0x20),lVar21);
        plVar26 = *(long **)(lVar25 + 0x38);
        if (plVar26 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar15) {
              puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto LAB_078b60bc;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_03ac43c4(plVar26,*(long *)puVar15,1);
LAB_078b60bc:
        local_21e8 = (*(code *)*puVar19)(plVar26,puVar19[1]);
        uVar29 = FUN_0674aae0(local_21e8,0);
        *(undefined8 *)(param_1 + 0xc) = uVar29;
        thunk_FUN_03afed3c();
      }
      else {
        if (uVar17 != 6) goto LAB_078b5bfc;
        local_21d8 = *(undefined8 *)(param_1 + 0x12);
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = 0xffffffff;
LAB_078b5a1c:
        FUN_0666e9a8(&local_21d8,0);
        lVar21 = *(long *)(param_1 + 0x14);
        if (lVar21 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (*(int *)(lVar21 + 0x10) != 0) {
          uStack_558 = *(undefined8 *)(lVar21 + 0x20);
          local_560 = *(undefined8 *)(lVar21 + 0x18);
          uStack_548 = *(undefined8 *)(lVar21 + 0x30);
          local_550 = *(undefined8 *)(lVar21 + 0x28);
          uStack_538 = *(undefined8 *)(lVar21 + 0x40);
          local_540 = *(undefined8 *)(lVar21 + 0x38);
          uStack_528 = *(undefined8 *)(lVar21 + 0x50);
          local_530 = *(undefined8 *)(lVar21 + 0x48);
          sVar16 = FUN_07336274(&local_560,0);
          if (sVar16 == 0) {
            lVar21 = *(long *)(param_1 + 0x14);
            if (lVar21 == 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_078b7484;
            }
            uStack_ed8 = *(undefined8 *)(lVar21 + 0x20);
            local_ee0 = *(undefined8 *)(lVar21 + 0x18);
            uStack_ec8 = *(undefined8 *)(lVar21 + 0x30);
            local_ed0 = *(undefined8 *)(lVar21 + 0x28);
            uStack_eb8 = *(undefined8 *)(lVar21 + 0x40);
            local_ec0 = *(undefined8 *)(lVar21 + 0x38);
            uStack_ea8 = *(undefined8 *)(lVar21 + 0x50);
            local_eb0 = *(undefined8 *)(lVar21 + 0x48);
            local_a20 = local_ee0;
            uStack_a18 = uStack_ed8;
            local_a10 = local_ed0;
            uStack_a08 = uStack_ec8;
            local_a00 = local_ec0;
            uStack_9f8 = uStack_eb8;
            local_9f0 = local_eb0;
            uStack_9e8 = uStack_ea8;
            uVar29 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084ec1d8,&local_ee0);
            uVar29 = FUN_065c412c(*(undefined8 *)System_Collections_Generic_List<Type>_TypeInfo,
                                  uVar29,0);
            uVar29 = FUN_065c0764(uVar29,*(undefined8 *)
                                          System_Collections_Generic_List<TypeIdentifier>_TypeInfo,0
                                 );
            FUN_078c790c(uVar29,0);
          }
        }
        lVar21 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrackAsset>_TypeInfo);
        FUN_0679343c(lVar21,0);
        auVar12._8_8_ = local_21e8._8_8_;
        auVar12._0_8_ = local_21e8._0_8_;
        auVar11._8_8_ = local_21e8._8_8_;
        auVar11._0_8_ = local_21e8._0_8_;
        if (lVar21 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined4 *)(lVar21 + 0x10) = 0;
        if (lVar25 == 0) {
          local_21e8 = auVar12;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (*(long *)(lVar25 + 0x40) == 0) {
          local_21e8 = auVar11;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(*(long *)(lVar25 + 0x40) + 0x18);
        thunk_FUN_03afed3c();
        lVar22 = *(long *)(param_1 + 0x14);
        if (lVar22 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uStack_558 = *(undefined8 *)(lVar22 + 0x20);
        local_560 = *(undefined8 *)(lVar22 + 0x18);
        uStack_548 = *(undefined8 *)(lVar22 + 0x30);
        local_550 = *(undefined8 *)(lVar22 + 0x28);
        uStack_538 = *(undefined8 *)(lVar22 + 0x40);
        local_540 = *(undefined8 *)(lVar22 + 0x38);
        uStack_528 = *(undefined8 *)(lVar22 + 0x50);
        local_530 = *(undefined8 *)(lVar22 + 0x48);
        uVar17 = FUN_07336274(&local_560,0);
        *(uint *)(lVar21 + 0x20) = uVar17 & 0xffff;
        *(long *)(lVar25 + 0x20) = lVar21;
        thunk_FUN_03afed3c((long *)(lVar25 + 0x20),lVar21);
      }
      goto LAB_078b640c;
    }
    if (uVar17 == 3) {
      local_21d8 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = 0xffffffff;
LAB_078b5c6c:
      FUN_0666e9a8(&local_21d8,0);
      auVar8._8_8_ = local_21e8._8_8_;
      auVar8._0_8_ = local_21e8._0_8_;
      if (lVar25 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar26 = *(long **)(lVar25 + 0x38);
      if (plVar26 == (long *)0x0) {
        local_21e8 = auVar8;
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 5) * 0x10 + 0x138);
            goto LAB_078b5d90;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)
                FUN_03ac43c4(plVar26,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,5);
LAB_078b5d90:
      lVar21 = (*(code *)*puVar19)(plVar26,puVar19[1]);
      if (lVar21 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      local_21d8 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&local_21d8,0);
      if ((uVar23 & 1) != 0) goto LAB_078b5dbc;
      *param_1 = 4;
      *(undefined8 *)(param_1 + 0x12) = local_21d8;
      thunk_FUN_03afed3c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(param_1 + 2,&local_21d8,param_1,
                   *(undefined8 *)System_Collections_Generic_List<TokenRequest>_TypeInfo);
    }
    else if (uVar17 == 4) {
      local_21d8 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = 0xffffffff;
LAB_078b5dbc:
      FUN_0666e9a8(&local_21d8,0);
      if (lVar25 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar26 = *(long **)(lVar25 + 0x38);
      if ((DAT_0898793f & 1) == 0) {
        FUN_03a8a718(PTR_DAT_0848af98);
        DAT_0898793f = 1;
      }
      if (plVar26 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      uVar29 = *(undefined8 *)PTR_DAT_0848af98;
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 7) * 0x10 + 0x138);
            goto LAB_078b5ea4;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)
                FUN_03ac43c4(plVar26,*(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo
                             ,7);
LAB_078b5ea4:
      (*(code *)*puVar19)(&local_a20,plVar26,uVar29,puVar19[1]);
      memcpy(auStack_520,&local_a20,0x4b8);
      uVar17 = param_1[0xe];
      uVar29 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_List<TrialOffer>_TypeInfo);
      memcpy(auStack_1d10,auStack_520,0x4b8);
      memset(auStack_21d0,0,0x4c0);
      FUN_078b75cc(uVar29,uVar17,1,auStack_1d10,auStack_21d0);
      lVar21 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                         (lVar25,uVar29);
      if (lVar21 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      local_21d8 = FUN_067c4bec(lVar21,0);
      uVar23 = FUN_0666e8e0(&local_21d8,0);
      if ((uVar23 & 1) != 0) goto LAB_078b5f54;
      *param_1 = 5;
      *(undefined8 *)(param_1 + 0x12) = local_21d8;
      thunk_FUN_03afed3c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4df0(param_1 + 2,&local_21d8,param_1,
                   *(undefined8 *)System_Collections_Generic_List<TokenRequest>_TypeInfo);
    }
    else {
LAB_078b5bfc:
      if (lVar25 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      plVar26 = *(long **)(lVar25 + 0x48);
      *(undefined1 *)(lVar25 + 0x10) = 1;
      puVar15 = System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
      if (plVar26 == (long *)0x0) {
        local_21e8 = auVar13;
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x28) * 0x10 + 0x138);
            goto LAB_078b66ac;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)
                FUN_03ac43c4(plVar26,*(long *)
                                      System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo,0x28
                            );
LAB_078b66ac:
      uVar29 = (*(code *)*puVar19)(plVar26,puVar19[1]);
      puVar30 = param_1 + 10;
      *(undefined8 *)puVar30 = uVar29;
      thunk_FUN_03afed3c(puVar30);
      puVar27 = param_1 + 0xc;
      puVar27[0] = 0;
      puVar27[1] = 0;
      thunk_FUN_03afed3c(puVar27,0);
      plVar26 = *(long **)(lVar25 + 0x48);
      if (plVar26 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      lVar21 = *plVar26;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar15) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x23) * 0x10 + 0x138);
            goto LAB_078b6734;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar19 = (undefined8 *)FUN_03ac43c4(plVar26,*(long *)puVar15,0x23);
LAB_078b6734:
      lVar21 = (*(code *)*puVar19)(plVar26,puVar19[1]);
      auVar10._8_8_ = local_21e8._8_8_;
      auVar10._0_8_ = local_21e8._0_8_;
      auVar7._8_8_ = local_21e8._8_8_;
      auVar7._0_8_ = local_21e8._0_8_;
      uVar17 = 1;
      if (lVar21 != 0) {
        uVar17 = 2;
      }
      param_1[0xe] = uVar17;
      lVar21 = *(long *)(lVar25 + 0x40);
      if (lVar21 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_078b7484;
      }
      iVar1 = *(int *)(lVar21 + 0x10);
      if (iVar1 == 0) {
        uVar29 = *(undefined8 *)(lVar21 + 0x18);
        local_a20 = 0;
        FUN_0529a878(&local_a20,*(undefined4 *)(lVar21 + 0x20),*(undefined8 *)PTR_DAT_08491c30);
        if (*(long *)(lVar25 + 0x40) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        uVar31 = *(undefined8 *)(*(long *)(lVar25 + 0x40) + 0x28);
        uVar20 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_List<TrialOffer>_TypeInfo);
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_channel_change_owner_t_new_owner_uri_set
                  (uVar20,uVar17,uVar29,local_a20,uVar31);
        puVar27 = param_1 + 0x14;
        *(undefined8 *)puVar27 = uVar20;
        thunk_FUN_03afed3c(puVar27,uVar20);
        lVar21 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_participant_uri_get
                           (lVar25,*(undefined8 *)puVar27);
        if (lVar21 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        local_21d8 = FUN_067c4bec(lVar21,0);
        uVar23 = FUN_0666e8e0(&local_21d8,0);
        if ((uVar23 & 1) != 0) goto LAB_078b5a1c;
        *param_1 = 6;
        *(undefined8 *)(param_1 + 0x12) = local_21d8;
        thunk_FUN_03afed3c(param_1 + 0x12,0);
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(param_1 + 2,&local_21d8,param_1,
                     *(undefined8 *)System_Collections_Generic_List<TokenRequest>_TypeInfo);
      }
      else if (iVar1 == 1) {
        plVar26 = *(long **)(lVar25 + 0x60);
        if (plVar26 == (long *)0x0) {
          local_21e8 = auVar10;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<Transform>_TypeInfo) {
              puVar19 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_078b6900;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_03ac43c4(plVar26,*(long *)System_Collections_Generic_List<Transform>_TypeInfo,
                               0);
LAB_078b6900:
        uVar29 = (*(code *)*puVar19)(plVar26,puVar19[1]);
        puVar19 = (undefined8 *)(lVar25 + 0x38);
        *puVar19 = uVar29;
        thunk_FUN_03afed3c(puVar19);
        plVar26 = *(long **)puVar30;
        if (plVar26 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        plVar28 = (long *)*puVar19;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar15) {
              puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x1d) * 0x10 + 0x138);
              goto LAB_078b69f0;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_03ac43c4(plVar26,*(long *)puVar15,0x1d);
LAB_078b69f0:
        uVar18 = (*(code *)*puVar19)(plVar26,puVar19[1]);
        auVar9._8_8_ = local_21e8._8_8_;
        auVar9._0_8_ = local_21e8._0_8_;
        if (*(long *)(lVar25 + 0x40) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (plVar28 == (long *)0x0) {
          local_21e8 = auVar9;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar28;
        uVar29 = *(undefined8 *)(*(long *)(lVar25 + 0x40) + 0x30);
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TreeInstance>_TypeInfo) {
              puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 3) * 0x10 + 0x138);
              goto LAB_078b6ae0;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_03ac43c4(plVar28,*(long *)
                                        System_Collections_Generic_List<TreeInstance>_TypeInfo,3);
LAB_078b6ae0:
        lVar21 = (*(code *)*puVar19)(plVar28,uVar18,uVar29,puVar19[1]);
        if (lVar21 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        local_21d8 = FUN_067c4bec(lVar21,0);
        uVar23 = FUN_0666e8e0(&local_21d8,0);
        if ((uVar23 & 1) != 0) goto LAB_078b5c6c;
        *param_1 = 3;
        *(undefined8 *)(param_1 + 0x12) = local_21d8;
        thunk_FUN_03afed3c(param_1 + 0x12,0);
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(param_1 + 2,&local_21d8,param_1,
                     *(undefined8 *)System_Collections_Generic_List<TokenRequest>_TypeInfo);
      }
      else {
        if (iVar1 != 2) goto LAB_078b640c;
        plVar26 = *(long **)(lVar25 + 0x58);
        if (plVar26 == (long *)0x0) {
          local_21e8 = auVar7;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo) {
              puVar19 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_078b6978;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_03ac43c4(plVar26,*(long *)
                                        System_Collections_Generic_List<TrafficLightsCrossing>_TypeInfo
                               ,0);
LAB_078b6978:
        uVar29 = (*(code *)*puVar19)(plVar26,puVar19[1]);
        *(undefined8 *)(lVar25 + 0x30) = uVar29;
        thunk_FUN_03afed3c();
        plVar26 = *(long **)(lVar25 + 0x48);
        if (plVar26 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar26;
        plVar28 = *(long **)(lVar25 + 0x30);
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)puVar15) {
              puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 0x16) * 0x10 + 0x138);
              goto FUN_078b6a68;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_03ac43c4(plVar26,*(long *)puVar15,0x16);
FUN_078b6a68:
        uVar29 = (*(code *)*puVar19)(plVar26,puVar19[1]);
        auVar6._8_8_ = local_21e8._8_8_;
        auVar6._0_8_ = local_21e8._0_8_;
        if (*(long *)(lVar25 + 0x40) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        if (plVar28 == (long *)0x0) {
          local_21e8 = auVar6;
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        lVar21 = *plVar28;
        uVar20 = *(undefined8 *)(*(long *)(lVar25 + 0x40) + 0x30);
        uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) ==
                *(long *)System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo) {
              puVar19 = (undefined8 *)(lVar21 + (long)(*piVar24 + 2) * 0x10 + 0x138);
              goto LAB_078b6b70;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_03ac43c4(plVar28,*(long *)
                                        System_Collections_Generic_List<TrafficLightsIntersection>_TypeInfo
                               ,2);
LAB_078b6b70:
        lVar21 = (*(code *)*puVar19)(plVar28,uVar29,uVar20,puVar19[1]);
        if (lVar21 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_078b7484;
        }
        local_21d8 = FUN_067c4bec(lVar21,0);
        uVar23 = FUN_0666e8e0(&local_21d8,0);
        if ((uVar23 & 1) != 0) goto LAB_078b5b9c;
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = local_21d8;
        thunk_FUN_03afed3c(param_1 + 0x12,0);
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e4df0(param_1 + 2,&local_21d8,param_1,
                     *(undefined8 *)System_Collections_Generic_List<TokenRequest>_TypeInfo);
      }
    }
  }
LAB_078b6668:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_078b7484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


