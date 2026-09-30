/*
FUNCTION_NAME: Meta.WitAi.Dictation.WitDictation$$CreateWitRequest
ENTRY_POINT: 01c0d4a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x01c0def0) */
/* WARNING: Removing unreachable block (ram,0x01c0d914) */
/* WARNING: Removing unreachable block (ram,0x01c0ded8) */

void Meta_WitAi_Dictation_WitDictation__CreateWitRequest(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x23;
  
  if (unaff_w20 != 0) {
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
    if ((*unaff_x23 != 0) && (lVar9 = FUN_0391fab4(*unaff_x23,0), lVar9 != 0)) {
      plVar10 = (long *)FUN_0392a954(lVar9,0);
      puVar7 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
      puVar6 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
      puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_17__;
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar9 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c0d574;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar6,0);
LAB_01c0d574:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
        if ((uVar15 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_01afa9e0(plVar10,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                              );
          if (plVar10 == (long *)0x0) goto LAB_01c0da24;
          lVar9 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar15 == 0) goto LAB_01c0d9fc;
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_01c0d9e4;
        }
        lVar9 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar11 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01c0d5d4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar6,1);
LAB_01c0d5d4:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar9 = *(long *)puVar7;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar12);
        }
        uVar13 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar15 = FUN_0391f968(uVar13,0,0);
        if ((uVar15 & 1) != 0) {
          lVar9 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a360(lVar9,1,0);
          lVar9 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a294(lVar9,0,0);
        }
        uVar13 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar15 = FUN_03923030(uVar13,0);
        if ((uVar15 & 1) != 0) {
          lVar9 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          *(undefined4 *)(lVar9 + 0x20) = 0x501502f9;
        }
        plVar12 = (long *)FUN_0392a954(plVar12,0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_01c0d6e0:
        lVar9 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c0d72c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,0);
LAB_01c0d72c:
        uVar15 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        if ((uVar15 & 1) != 0) {
          lVar9 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar11 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_01c0d78c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,1);
LAB_01c0d78c:
          plVar14 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar9 = *(long *)puVar7;
          bVar1 = *(byte *)(lVar9 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar14);
          }
          uVar13 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar15 = FUN_0391f968(uVar13,0,0);
          if ((uVar15 & 1) != 0) {
            lVar9 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a360(lVar9,1,0);
            lVar9 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a294(lVar9,0,0);
          }
          uVar13 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar15 = FUN_03923030(uVar13,0);
          if ((uVar15 & 1) != 0) {
            lVar9 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar3);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            *(undefined4 *)(lVar9 + 0x20) = 0x4e6e6b28;
          }
          goto LAB_01c0d6e0;
        }
        plVar12 = (long *)thunk_FUN_01afa9e0(plVar12,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                            );
        if (plVar12 != (long *)0x0) {
          lVar9 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01c0d8f8;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_01ae9f78(plVar12,*(long *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                 ,0);
LAB_01c0d8f8:
          (*(code *)*puVar11)(plVar12,puVar11[1]);
        }
      } while( true );
    }
  }
  goto LAB_01c0de9c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01c0d9e4:
    if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar5,0);
LAB_01c0da18:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_01c0da24:
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  if (*unaff_x23 != 0) {
    lVar9 = FUN_01ed7390(*unaff_x23,
                         *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_28__)
    ;
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar15 = FUN_0391f968(lVar9,0,0);
    if ((uVar15 & 1) != 0) {
      if (lVar9 == 0) goto LAB_01c0de9c;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1d8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x20));
    }
    if (*unaff_x23 != 0) {
      lVar9 = FUN_01ed7390(*unaff_x23,
                           *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_3__
                          );
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      uVar15 = FUN_0391f968(lVar9,0,0);
      if ((uVar15 & 1) != 0) {
        if (lVar9 == 0) goto LAB_01c0de9c;
        *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
        thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48));
      }
      if (*unaff_x23 != 0) {
        lVar9 = FUN_01ed7390(*unaff_x23,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_25__);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar15 = FUN_0391f968(lVar9,0,0);
        if ((uVar15 & 1) != 0) {
          if (lVar9 == 0) goto LAB_01c0de9c;
          *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(unaff_x19 + 0x1d8);
          thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x38));
        }
        if (*unaff_x23 != 0) {
          lVar9 = FUN_01ed7390(*unaff_x23,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar15 = FUN_0391f968(lVar9,0,0);
          if ((uVar15 & 1) != 0) {
            if (lVar9 == 0) goto LAB_01c0de9c;
            *(undefined8 *)(lVar9 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x1d8);
            thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0xf0));
          }
          if (*unaff_x23 != 0) {
            lVar9 = FUN_01ed7390(*unaff_x23,
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar3);
            }
            uVar15 = FUN_0391f968(lVar9,0,0);
            if ((uVar15 & 1) != 0) {
              if (lVar9 == 0) goto LAB_01c0de9c;
              *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1d8);
              thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x40));
            }
            if (*unaff_x23 != 0) {
              lVar9 = FUN_01ed7390(*unaff_x23,
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_26__);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar3);
              }
              uVar15 = FUN_0391f968(lVar9,0,0);
              if ((uVar15 & 1) != 0) {
                if (lVar9 == 0) goto LAB_01c0de9c;
                *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(unaff_x19 + 0x1d8);
                thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x50));
              }
              if (*unaff_x23 != 0) {
                lVar9 = FUN_01ed7390(*unaff_x23,
                                     *(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_27__);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar3);
                }
                uVar15 = FUN_0391f968(lVar9,0,0);
                if ((uVar15 & 1) != 0) {
                  if (lVar9 == 0) goto LAB_01c0de9c;
                  *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                  thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48));
                }
                if (*unaff_x23 != 0) {
                  lVar9 = FUN_01ed7390(*unaff_x23,
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_29__)
                  ;
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar3);
                  }
                  uVar15 = FUN_0391f968(lVar9,0,0);
                  if ((uVar15 & 1) != 0) {
                    if (lVar9 == 0) goto LAB_01c0de9c;
                    *(undefined8 *)(lVar9 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                    thunk_FUN_01b4f09c();
                    *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1f8);
                    thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x80));
                  }
                  if (*unaff_x23 != 0) {
                    lVar9 = FUN_01ed7390(*unaff_x23,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__
                                        );
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar3);
                    }
                    uVar15 = FUN_0391f968(lVar9,0,0);
                    if ((uVar15 & 1) != 0) {
                      if (lVar9 == 0) goto LAB_01c0de9c;
                      *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                      thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48));
                    }
                    if (*unaff_x23 != 0) {
                      iVar8 = FUN_0391faf0(*unaff_x23,0);
                      if (iVar8 == 2) {
                        *(undefined2 *)(unaff_x19 + 0x130) = 0x101;
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2),
                           lVar9 == 0)) goto LAB_01c0de9c;
                        *(undefined1 *)(lVar9 + 0x80) = 1;
                      }
                      if ((*unaff_x23 != 0) &&
                         (lVar9 = FUN_01ed712c(*unaff_x23,*(undefined8 *)puVar2), lVar9 != 0)) {
                        *(undefined4 *)(lVar9 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2),
                           lVar9 != 0)) {
                          *(undefined1 *)(lVar9 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2
                                                  ), lVar9 != 0)) {
                            *(undefined1 *)(lVar9 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x130);
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


