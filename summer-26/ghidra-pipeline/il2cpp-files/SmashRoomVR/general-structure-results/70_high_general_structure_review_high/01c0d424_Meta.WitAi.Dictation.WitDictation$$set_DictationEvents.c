/*
FUNCTION_NAME: Meta.WitAi.Dictation.WitDictation$$set_DictationEvents
ENTRY_POINT: 01c0d424
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01c0d914) */
/* WARNING: Removing unreachable block (ram,0x01c0ded8) */

void Meta_WitAi_Dictation_WitDictation__set_DictationEvents(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar16;
  
  plVar16 = *(long **)(unaff_x24 + 0xf90);
  plVar9 = (long *)thunk_FUN_01afa9e0();
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar16) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01c0d488;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*plVar16,0);
LAB_01c0d488:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(unaff_x22);
  }
  if ((unaff_w20 != 7) && (unaff_w20 != 0)) {
    return;
  }
  if (*unaff_x23 != 0) {
    iVar8 = FUN_0391faf0(*unaff_x23,0);
    if (iVar8 == 0xd) {
      *(undefined2 *)(unaff_x19 + 0x130) = 1;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
LAB_01c0de08:
      thunk_FUN_01b4f09c();
      return;
    }
    if ((*unaff_x23 != 0) && (lVar13 = FUN_0391fab4(*unaff_x23,0), lVar13 != 0)) {
      plVar9 = (long *)FUN_0392a954(lVar13,0);
      puVar7 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
      puVar6 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
      puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_17__;
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar13 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01c0d574;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar6,0);
LAB_01c0d574:
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
        if ((uVar14 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01afa9e0(plVar9,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                             );
          if (plVar9 == (long *)0x0) goto LAB_01c0da24;
          lVar13 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_01c0d9fc;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_01c0d9e4;
        }
        lVar13 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_01c0d5d4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar6,1);
LAB_01c0d5d4:
        plVar16 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar13 = *(long *)puVar7;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar16);
        }
        uVar11 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar14 = FUN_0391f968(uVar11,0,0);
        if ((uVar14 & 1) != 0) {
          lVar13 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a360(lVar13,1,0);
          lVar13 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a294(lVar13,0,0);
        }
        uVar11 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar14 = FUN_03923030(uVar11,0);
        if ((uVar14 & 1) != 0) {
          lVar13 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar3);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          *(undefined4 *)(lVar13 + 0x20) = 0x501502f9;
        }
        plVar16 = (long *)FUN_0392a954(plVar16,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_01c0d6e0:
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01c0d72c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)puVar6,0);
LAB_01c0d72c:
        uVar14 = (*(code *)*puVar10)(plVar16,puVar10[1]);
        if ((uVar14 & 1) != 0) {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_01c0d78c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)puVar6,1);
LAB_01c0d78c:
          plVar12 = (long *)(*(code *)*puVar10)(plVar16,puVar10[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar13 = *(long *)puVar7;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar12);
          }
          uVar11 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar14 = FUN_0391f968(uVar11,0,0);
          if ((uVar14 & 1) != 0) {
            lVar13 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a360(lVar13,1,0);
            lVar13 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a294(lVar13,0,0);
          }
          uVar11 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar14 = FUN_03923030(uVar11,0);
          if ((uVar14 & 1) != 0) {
            lVar13 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            *(undefined4 *)(lVar13 + 0x20) = 0x4e6e6b28;
          }
          goto LAB_01c0d6e0;
        }
        plVar16 = (long *)thunk_FUN_01afa9e0(plVar16,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                            );
        if (plVar16 != (long *)0x0) {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01c0d8f8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ae9f78(plVar16,*(long *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                 ,0);
LAB_01c0d8f8:
          (*(code *)*puVar10)(plVar16,puVar10[1]);
        }
      } while( true );
    }
  }
  goto LAB_01c0de9c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01c0d9e4:
    if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar5,0);
LAB_01c0da18:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_01c0da24:
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  if (*unaff_x23 != 0) {
    lVar13 = FUN_01ed7390(*unaff_x23,
                          *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_28__
                         );
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar14 = FUN_0391f968(lVar13,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar13 == 0) goto LAB_01c0de9c;
      *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1d8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x20));
    }
    if (*unaff_x23 != 0) {
      lVar13 = FUN_01ed7390(*unaff_x23,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_3__);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      uVar14 = FUN_0391f968(lVar13,0,0);
      if ((uVar14 & 1) != 0) {
        if (lVar13 == 0) goto LAB_01c0de9c;
        *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
        thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x48));
      }
      if (*unaff_x23 != 0) {
        lVar13 = FUN_01ed7390(*unaff_x23,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_25__);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar14 = FUN_0391f968(lVar13,0,0);
        if ((uVar14 & 1) != 0) {
          if (lVar13 == 0) goto LAB_01c0de9c;
          *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(unaff_x19 + 0x1d8);
          thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x38));
        }
        if (*unaff_x23 != 0) {
          lVar13 = FUN_01ed7390(*unaff_x23,
                                *(undefined8 *)
                                 Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar14 = FUN_0391f968(lVar13,0,0);
          if ((uVar14 & 1) != 0) {
            if (lVar13 == 0) goto LAB_01c0de9c;
            *(undefined8 *)(lVar13 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x1d8);
            thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0xf0));
          }
          if (*unaff_x23 != 0) {
            lVar13 = FUN_01ed7390(*unaff_x23,
                                  *(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar3);
            }
            uVar14 = FUN_0391f968(lVar13,0,0);
            if ((uVar14 & 1) != 0) {
              if (lVar13 == 0) goto LAB_01c0de9c;
              *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1d8);
              thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x40));
            }
            if (*unaff_x23 != 0) {
              lVar13 = FUN_01ed7390(*unaff_x23,
                                    *(undefined8 *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_26__);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar3);
              }
              uVar14 = FUN_0391f968(lVar13,0,0);
              if ((uVar14 & 1) != 0) {
                if (lVar13 == 0) goto LAB_01c0de9c;
                *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)(unaff_x19 + 0x1d8);
                thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x50));
              }
              if (*unaff_x23 != 0) {
                lVar13 = FUN_01ed7390(*unaff_x23,
                                      *(undefined8 *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_27__);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar3);
                }
                uVar14 = FUN_0391f968(lVar13,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar13 == 0) goto LAB_01c0de9c;
                  *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                  thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x48));
                }
                if (*unaff_x23 != 0) {
                  lVar13 = FUN_01ed7390(*unaff_x23,
                                        *(undefined8 *)
                                         Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_29__
                                       );
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar3);
                  }
                  uVar14 = FUN_0391f968(lVar13,0,0);
                  if ((uVar14 & 1) != 0) {
                    if (lVar13 == 0) goto LAB_01c0de9c;
                    *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                    thunk_FUN_01b4f09c();
                    *(undefined8 *)(lVar13 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1f8);
                    thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x80));
                  }
                  if (*unaff_x23 != 0) {
                    lVar13 = FUN_01ed7390(*unaff_x23,
                                          *(undefined8 *)
                                           Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__
                                         );
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar3);
                    }
                    uVar14 = FUN_0391f968(lVar13,0,0);
                    if ((uVar14 & 1) != 0) {
                      if (lVar13 == 0) goto LAB_01c0de9c;
                      *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                      thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x48));
                    }
                    if (*unaff_x23 != 0) {
                      iVar8 = FUN_0391faf0(*unaff_x23,0);
                      if (iVar8 == 2) {
                        *(undefined2 *)(unaff_x19 + 0x130) = 0x101;
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar13 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2)
                           , lVar13 == 0)) goto LAB_01c0de9c;
                        *(undefined1 *)(lVar13 + 0x80) = 1;
                      }
                      if ((*unaff_x23 != 0) &&
                         (lVar13 = FUN_01ed712c(*unaff_x23,*(undefined8 *)puVar2), lVar13 != 0)) {
                        *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (lVar13 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2)
                           , lVar13 != 0)) {
                          *(undefined1 *)(lVar13 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar13 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),
                                                    *(undefined8 *)puVar2), lVar13 != 0)) {
                            *(undefined1 *)(lVar13 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x130);
                            *(undefined8 *)(unaff_x19 + 0x38) = 0;
                            goto LAB_01c0de08;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01c0de9c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


