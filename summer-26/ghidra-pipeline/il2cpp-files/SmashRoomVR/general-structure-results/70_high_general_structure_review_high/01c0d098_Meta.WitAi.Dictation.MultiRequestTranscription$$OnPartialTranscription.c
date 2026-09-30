/*
FUNCTION_NAME: Meta.WitAi.Dictation.MultiRequestTranscription$$OnPartialTranscription
ENTRY_POINT: 01c0d098
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x01c0def0) */
/* WARNING: Removing unreachable block (ram,0x01c0d914) */
/* WARNING: Removing unreachable block (ram,0x01c0ded8) */
/* WARNING: Removing unreachable block (ram,0x01c0d4a0) */

void Meta_WitAi_Dictation_MultiRequestTranscription__OnPartialTranscription(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long unaff_x20;
  long *plVar19;
  
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_39__);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_21__);
  *(undefined1 *)(unaff_x20 + 0x3f2) = 1;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_21__;
  plVar19 = (long *)(unaff_x19 + 0x38);
  if (*plVar19 != 0) {
    iVar8 = FUN_0391faf0(*plVar19,0);
    if (iVar8 != 2) {
      FUN_01c0eb34();
    }
    iVar8 = FUN_0391993c(*(undefined8 *)puVar2,0);
    if (iVar8 == 1) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x178) != 0) {
      FUN_0391fb70(*(long *)(unaff_x19 + 0x178),1,0);
      puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
      lVar10 = *(long *)(unaff_x19 + 0x38);
      if (lVar10 != 0) {
        if (*(char *)(unaff_x19 + 0x50) == '\0') {
          FUN_01ed7044(lVar10,*(undefined8 *)
                               Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_22__);
          puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
          if (*plVar19 != 0) {
            lVar10 = FUN_01ed712c(*plVar19,*(undefined8 *)
                                            Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__
                                 );
            lVar16 = *(long *)(unaff_x19 + 0x90);
            if (lVar16 != 0) {
              if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0xac)) {
LAB_01c0deec:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0xac) * 8 + 0x20);
              if ((lVar16 != 0) && (uVar11 = FUN_039230bc(lVar16,0), lVar10 != 0)) {
                *(undefined8 *)(lVar10 + 0x30) = uVar11;
                thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x30),uVar11);
                if (*plVar19 != 0) {
                  lVar10 = FUN_01ed712c(*plVar19,*(undefined8 *)puVar2);
                  lVar16 = *(long *)(unaff_x19 + 0x90);
                  if (lVar16 != 0) {
                    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0xac)) goto LAB_01c0deec;
                    lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0xac) * 8 + 0x20);
                    if ((lVar16 != 0) && (uVar11 = FUN_039230bc(lVar16,0), lVar10 != 0)) {
                      *(undefined8 *)(lVar10 + 0x28) = uVar11;
                      thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x28),uVar11);
                      if (*plVar19 != 0) {
                        lVar10 = FUN_01ed712c(*plVar19,*(undefined8 *)puVar2);
                        uVar9 = FUN_0391993c(*(undefined8 *)
                                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_39__
                                             ,0);
                        if (lVar10 != 0) {
                          *(undefined4 *)(lVar10 + 0x24) = uVar9;
                          if (*(long *)(unaff_x19 + 0x70) != 0) {
                            FUN_0391fb70(*(long *)(unaff_x19 + 0x70),1,0);
                            if ((*(long *)(unaff_x19 + 0x78) != 0) &&
                               (lVar10 = FUN_0391fab4(*(long *)(unaff_x19 + 0x78),0), lVar10 != 0))
                            {
                              plVar12 = (long *)FUN_0392a954(lVar10,0);
                              puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
                              puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
                              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01b48178();
                              }
                              do {
                                lVar16 = *plVar12;
                                lVar10 = *(long *)puVar2;
                                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                if (uVar17 != 0) {
                                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar18 + -2) == lVar10) {
                                      puVar13 = (undefined8 *)
                                                (lVar16 + (long)*piVar18 * 0x10 + 0x138);
                                      goto LAB_01c0d360;
                                    }
                                    uVar17 = uVar17 - 1;
                                    piVar18 = piVar18 + 4;
                                  } while (uVar17 != 0);
                                }
                                puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,lVar10,0);
LAB_01c0d360:
                                uVar17 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                                puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                ;
                                if ((uVar17 & 1) == 0) {
                                  plVar12 = (long *)thunk_FUN_01afa9e0(plVar12,*(undefined8 *)
                                                                                                                                                                
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                                  );
                                  if (plVar12 == (long *)0x0) goto LAB_01c0d494;
                                  lVar10 = *plVar12;
                                  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                  if (uVar17 == 0) goto LAB_01c0d46c;
                                  piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                  goto LAB_01c0d454;
                                }
                                lVar16 = *plVar12;
                                lVar10 = *(long *)puVar2;
                                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                if (uVar17 != 0) {
                                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar18 + -2) == lVar10) {
                                      puVar13 = (undefined8 *)
                                                (lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                                      goto LAB_01c0d3c0;
                                    }
                                    uVar17 = uVar17 - 1;
                                    piVar18 = piVar18 + 4;
                                  } while (uVar17 != 0);
                                }
                                puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,lVar10,1);
LAB_01c0d3c0:
                                plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
                                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48178();
                                }
                                bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                                if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                                    *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01b4841c();
                                }
                                lVar10 = FUN_0391c2b8(plVar14,0);
                                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01b48178();
                                }
                                FUN_0391fb70(lVar10,0,0);
                              } while( true );
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
        else {
          lVar10 = FUN_01ed712c(lVar10,*(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__)
          ;
          if (lVar10 != 0) {
            *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
            if ((*(long *)(unaff_x19 + 0x38) != 0) &&
               (lVar10 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2),
               lVar10 != 0)) {
              *(undefined1 *)(lVar10 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
              *(undefined8 *)(unaff_x19 + 0x38) = 0;
              thunk_FUN_01b4f09c(plVar19,0);
              *(undefined1 *)(unaff_x19 + 0x50) = 0;
              return;
            }
          }
        }
      }
    }
  }
  goto LAB_01c0de9c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_01c0d454:
    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_01c0d488;
    }
  }
LAB_01c0d46c:
  puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar4,0);
LAB_01c0d488:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01c0d494:
  if (*plVar19 != 0) {
    iVar8 = FUN_0391faf0(*plVar19,0);
    if (iVar8 == 0xd) {
      *(undefined2 *)(unaff_x19 + 0x130) = 1;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
LAB_01c0de08:
      thunk_FUN_01b4f09c(plVar19,0);
      return;
    }
    if ((*plVar19 != 0) && (lVar10 = FUN_0391fab4(*plVar19,0), lVar10 != 0)) {
      plVar12 = (long *)FUN_0392a954(lVar10,0);
      puVar7 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
      puVar6 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
      puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_17__;
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar10 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_01c0d574;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,0);
LAB_01c0d574:
        uVar17 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
        if ((uVar17 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01afa9e0(plVar12,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                              );
          if (plVar12 == (long *)0x0) goto LAB_01c0da24;
          lVar10 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar17 == 0) goto LAB_01c0d9fc;
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_01c0d9e4;
        }
        lVar10 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_01c0d5d4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,1);
LAB_01c0d5d4:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar10 = *(long *)puVar7;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar14);
        }
        uVar11 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar17 = FUN_0391f968(uVar11,0,0);
        if ((uVar17 & 1) != 0) {
          lVar10 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a360(lVar10,1,0);
          lVar10 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a294(lVar10,0,0);
        }
        uVar11 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar17 = FUN_03923030(uVar11,0);
        if ((uVar17 & 1) != 0) {
          lVar10 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar3);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          *(undefined4 *)(lVar10 + 0x20) = 0x501502f9;
        }
        plVar14 = (long *)FUN_0392a954(plVar14,0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_01c0d6e0:
        lVar10 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_01c0d72c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ae9f78(plVar14,*(long *)puVar6,0);
LAB_01c0d72c:
        uVar17 = (*(code *)*puVar13)(plVar14,puVar13[1]);
        if ((uVar17 & 1) != 0) {
          lVar10 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01c0d78c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ae9f78(plVar14,*(long *)puVar6,1);
LAB_01c0d78c:
          plVar15 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar10 = *(long *)puVar7;
          bVar1 = *(byte *)(lVar10 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar15);
          }
          uVar11 = FUN_01e8a9f8(plVar15,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar17 = FUN_0391f968(uVar11,0,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = FUN_01e8a9f8(plVar15,*(undefined8 *)puVar4);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a360(lVar10,1,0);
            lVar10 = FUN_01e8a9f8(plVar15,*(undefined8 *)puVar4);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a294(lVar10,0,0);
          }
          uVar11 = FUN_01e8a9f8(plVar15,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar17 = FUN_03923030(uVar11,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = FUN_01e8a9f8(plVar15,*(undefined8 *)puVar3);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            *(undefined4 *)(lVar10 + 0x20) = 0x4e6e6b28;
          }
          goto LAB_01c0d6e0;
        }
        plVar14 = (long *)thunk_FUN_01afa9e0(plVar14,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                            );
        if (plVar14 != (long *)0x0) {
          lVar10 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_01c0d8f8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_01ae9f78(plVar14,*(long *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                 ,0);
LAB_01c0d8f8:
          (*(code *)*puVar13)(plVar14,puVar13[1]);
        }
      } while( true );
    }
  }
  goto LAB_01c0de9c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_01c0d9e4:
    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar5,0);
LAB_01c0da18:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_01c0da24:
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  if (*plVar19 != 0) {
    lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_28__);
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar17 = FUN_0391f968(lVar10,0,0);
    if ((uVar17 & 1) != 0) {
      if (lVar10 == 0) goto LAB_01c0de9c;
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1d8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x20));
    }
    if (*plVar19 != 0) {
      lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_3__);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      uVar17 = FUN_0391f968(lVar10,0,0);
      if ((uVar17 & 1) != 0) {
        if (lVar10 == 0) goto LAB_01c0de9c;
        *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x48));
      }
      if (*plVar19 != 0) {
        lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_25__)
        ;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar17 = FUN_0391f968(lVar10,0,0);
        if ((uVar17 & 1) != 0) {
          if (lVar10 == 0) goto LAB_01c0de9c;
          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(unaff_x19 + 0x1d8);
          thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x38));
        }
        if (*plVar19 != 0) {
          lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__
                               );
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar17 = FUN_0391f968(lVar10,0,0);
          if ((uVar17 & 1) != 0) {
            if (lVar10 == 0) goto LAB_01c0de9c;
            *(undefined8 *)(lVar10 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x1d8);
            thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0xf0));
          }
          if (*plVar19 != 0) {
            lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                            Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__
                                 );
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar3);
            }
            uVar17 = FUN_0391f968(lVar10,0,0);
            if ((uVar17 & 1) != 0) {
              if (lVar10 == 0) goto LAB_01c0de9c;
              *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1d8);
              thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x40));
            }
            if (*plVar19 != 0) {
              lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_26__
                                   );
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar3);
              }
              uVar17 = FUN_0391f968(lVar10,0,0);
              if ((uVar17 & 1) != 0) {
                if (lVar10 == 0) goto LAB_01c0de9c;
                *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(unaff_x19 + 0x1d8);
                thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x50));
              }
              if (*plVar19 != 0) {
                lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_27__
                                     );
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar3);
                }
                uVar17 = FUN_0391f968(lVar10,0,0);
                if ((uVar17 & 1) != 0) {
                  if (lVar10 == 0) goto LAB_01c0de9c;
                  *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                  thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x48));
                }
                if (*plVar19 != 0) {
                  lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_29__
                                       );
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar3);
                  }
                  uVar17 = FUN_0391f968(lVar10,0,0);
                  if ((uVar17 & 1) != 0) {
                    if (lVar10 == 0) goto LAB_01c0de9c;
                    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                    thunk_FUN_01b4f09c();
                    *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1f8);
                    thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x80));
                  }
                  if (*plVar19 != 0) {
                    lVar10 = FUN_01ed7390(*plVar19,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__
                                         );
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar3);
                    }
                    uVar17 = FUN_0391f968(lVar10,0,0);
                    if ((uVar17 & 1) != 0) {
                      if (lVar10 == 0) goto LAB_01c0de9c;
                      *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                      thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x48));
                    }
                    if (*plVar19 != 0) {
                      iVar8 = FUN_0391faf0(*plVar19,0);
                      if (iVar8 == 2) {
                        *(undefined2 *)(unaff_x19 + 0x130) = 0x101;
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar10 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2)
                           , lVar10 == 0)) goto LAB_01c0de9c;
                        *(undefined1 *)(lVar10 + 0x80) = 1;
                      }
                      if ((*plVar19 != 0) &&
                         (lVar10 = FUN_01ed712c(*plVar19,*(undefined8 *)puVar2), lVar10 != 0)) {
                        *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (lVar10 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2)
                           , lVar10 != 0)) {
                          *(undefined1 *)(lVar10 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar10 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),
                                                    *(undefined8 *)puVar2), lVar10 != 0)) {
                            *(undefined1 *)(lVar10 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x130);
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


