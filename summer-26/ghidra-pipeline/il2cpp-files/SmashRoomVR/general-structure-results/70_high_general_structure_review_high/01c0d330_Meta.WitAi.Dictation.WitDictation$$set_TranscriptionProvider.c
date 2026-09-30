/*
FUNCTION_NAME: Meta.WitAi.Dictation.WitDictation$$set_TranscriptionProvider
ENTRY_POINT: 01c0d330
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


/* WARNING: Removing unreachable block (ram,0x01c0def0) */
/* WARNING: Removing unreachable block (ram,0x01c0d914) */
/* WARNING: Removing unreachable block (ram,0x01c0ded8) */
/* WARNING: Removing unreachable block (ram,0x01c0d4a0) */
/* WARNING: Removing unreachable block (ram,0x01c0d1b8) */

void Meta_WitAi_Dictation_WitDictation__set_TranscriptionProvider
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  ulong in_x9;
  int *in_x10;
  int *piVar16;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    if (in_x11 == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_01c0d360;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar9 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d360:
        uVar10 = (*(code *)*puVar9)();
        puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
        if ((uVar10 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_01afa9e0();
          if (plVar11 == (long *)0x0) goto LAB_01c0d494;
          lVar15 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 == 0) goto LAB_01c0d46c;
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_01c0d454;
        }
        lVar15 = *unaff_x21;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x20) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01c0d3c0;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d3c0:
        plVar11 = (long *)(*(code *)*puVar9)();
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        bVar1 = *(byte *)(*unaff_x22 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c();
        }
        lVar15 = FUN_0391c2b8(plVar11,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0391fb70(lVar15,0,0);
        param_1 = *unaff_x21;
        param_3 = *unaff_x20;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_01c0d454:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01c0d488;
    }
  }
LAB_01c0d46c:
  puVar9 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_01c0d488:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
LAB_01c0d494:
  if (*unaff_x23 != 0) {
    iVar8 = FUN_0391faf0(*unaff_x23,0);
    if (iVar8 == 0xd) {
      *(undefined2 *)(unaff_x19 + 0x130) = 1;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
LAB_01c0de08:
      thunk_FUN_01b4f09c();
      return;
    }
    if ((*unaff_x23 != 0) && (lVar15 = FUN_0391fab4(*unaff_x23,0), lVar15 != 0)) {
      plVar11 = (long *)FUN_0392a954(lVar15,0);
      puVar7 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
      puVar6 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
      puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_17__;
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar15 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c0d574;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar6,0);
LAB_01c0d574:
        uVar10 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
        if ((uVar10 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_01afa9e0(plVar11,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                              );
          if (plVar11 == (long *)0x0) goto LAB_01c0da24;
          lVar15 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 == 0) goto LAB_01c0d9fc;
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_01c0d9e4;
        }
        lVar15 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01c0d5d4;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar6,1);
LAB_01c0d5d4:
        plVar12 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar15 = *(long *)puVar7;
        bVar1 = *(byte *)(lVar15 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar12);
        }
        uVar13 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_0391f968(uVar13,0,0);
        if ((uVar10 & 1) != 0) {
          lVar15 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a360(lVar15,1,0);
          lVar15 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_0395a294(lVar15,0,0);
        }
        uVar13 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_03923030(uVar13,0);
        if ((uVar10 & 1) != 0) {
          lVar15 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          *(undefined4 *)(lVar15 + 0x20) = 0x501502f9;
        }
        plVar12 = (long *)FUN_0392a954(plVar12,0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_01c0d6e0:
        lVar15 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_01c0d72c;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,0);
LAB_01c0d72c:
        uVar10 = (*(code *)*puVar9)(plVar12,puVar9[1]);
        if ((uVar10 & 1) != 0) {
          lVar15 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_01c0d78c;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,1);
LAB_01c0d78c:
          plVar14 = (long *)(*(code *)*puVar9)(plVar12,puVar9[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar15 = *(long *)puVar7;
          bVar1 = *(byte *)(lVar15 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar14);
          }
          uVar13 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_0391f968(uVar13,0,0);
          if ((uVar10 & 1) != 0) {
            lVar15 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a360(lVar15,1,0);
            lVar15 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar4);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0395a294(lVar15,0,0);
          }
          uVar13 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_03923030(uVar13,0);
          if ((uVar10 & 1) != 0) {
            lVar15 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar3);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            *(undefined4 *)(lVar15 + 0x20) = 0x4e6e6b28;
          }
          goto LAB_01c0d6e0;
        }
        plVar12 = (long *)thunk_FUN_01afa9e0(plVar12,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                            );
        if (plVar12 != (long *)0x0) {
          lVar15 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01c0d8f8;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01ae9f78(plVar12,*(long *)
                                         Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                ,0);
LAB_01c0d8f8:
          (*(code *)*puVar9)(plVar12,puVar9[1]);
        }
      } while( true );
    }
  }
  goto LAB_01c0de9c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_01c0d9e4:
    if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar9 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar5,0);
LAB_01c0da18:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
LAB_01c0da24:
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  if (*unaff_x23 != 0) {
    lVar15 = FUN_01ed7390(*unaff_x23,
                          *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_28__
                         );
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar10 = FUN_0391f968(lVar15,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar15 == 0) goto LAB_01c0de9c;
      *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1d8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x20));
    }
    if (*unaff_x23 != 0) {
      lVar15 = FUN_01ed7390(*unaff_x23,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_3__);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      uVar10 = FUN_0391f968(lVar15,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar15 == 0) goto LAB_01c0de9c;
        *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
        thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x48));
      }
      if (*unaff_x23 != 0) {
        lVar15 = FUN_01ed7390(*unaff_x23,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_25__);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar10 = FUN_0391f968(lVar15,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar15 == 0) goto LAB_01c0de9c;
          *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(unaff_x19 + 0x1d8);
          thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x38));
        }
        if (*unaff_x23 != 0) {
          lVar15 = FUN_01ed7390(*unaff_x23,
                                *(undefined8 *)
                                 Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar10 = FUN_0391f968(lVar15,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar15 == 0) goto LAB_01c0de9c;
            *(undefined8 *)(lVar15 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x1d8);
            thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0xf0));
          }
          if (*unaff_x23 != 0) {
            lVar15 = FUN_01ed7390(*unaff_x23,
                                  *(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar3);
            }
            uVar10 = FUN_0391f968(lVar15,0,0);
            if ((uVar10 & 1) != 0) {
              if (lVar15 == 0) goto LAB_01c0de9c;
              *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1d8);
              thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x40));
            }
            if (*unaff_x23 != 0) {
              lVar15 = FUN_01ed7390(*unaff_x23,
                                    *(undefined8 *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_26__);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar3);
              }
              uVar10 = FUN_0391f968(lVar15,0,0);
              if ((uVar10 & 1) != 0) {
                if (lVar15 == 0) goto LAB_01c0de9c;
                *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)(unaff_x19 + 0x1d8);
                thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x50));
              }
              if (*unaff_x23 != 0) {
                lVar15 = FUN_01ed7390(*unaff_x23,
                                      *(undefined8 *)
                                       Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_27__);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar3);
                }
                uVar10 = FUN_0391f968(lVar15,0,0);
                if ((uVar10 & 1) != 0) {
                  if (lVar15 == 0) goto LAB_01c0de9c;
                  *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                  thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x48));
                }
                if (*unaff_x23 != 0) {
                  lVar15 = FUN_01ed7390(*unaff_x23,
                                        *(undefined8 *)
                                         Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_29__
                                       );
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar3);
                  }
                  uVar10 = FUN_0391f968(lVar15,0,0);
                  if ((uVar10 & 1) != 0) {
                    if (lVar15 == 0) goto LAB_01c0de9c;
                    *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                    thunk_FUN_01b4f09c();
                    *(undefined8 *)(lVar15 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1f8);
                    thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x80));
                  }
                  if (*unaff_x23 != 0) {
                    lVar15 = FUN_01ed7390(*unaff_x23,
                                          *(undefined8 *)
                                           Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__
                                         );
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar3);
                    }
                    uVar10 = FUN_0391f968(lVar15,0,0);
                    if ((uVar10 & 1) != 0) {
                      if (lVar15 == 0) goto LAB_01c0de9c;
                      *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                      thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x48));
                    }
                    if (*unaff_x23 != 0) {
                      iVar8 = FUN_0391faf0(*unaff_x23,0);
                      if (iVar8 == 2) {
                        *(undefined2 *)(unaff_x19 + 0x130) = 0x101;
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar15 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2)
                           , lVar15 == 0)) goto LAB_01c0de9c;
                        *(undefined1 *)(lVar15 + 0x80) = 1;
                      }
                      if ((*unaff_x23 != 0) &&
                         (lVar15 = FUN_01ed712c(*unaff_x23,*(undefined8 *)puVar2), lVar15 != 0)) {
                        *(undefined4 *)(lVar15 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (lVar15 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2)
                           , lVar15 != 0)) {
                          *(undefined1 *)(lVar15 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar15 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),
                                                    *(undefined8 *)puVar2), lVar15 != 0)) {
                            *(undefined1 *)(lVar15 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x130);
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


