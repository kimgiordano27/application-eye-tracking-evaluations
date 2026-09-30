/*
FUNCTION_NAME: Meta.WitAi.Dictation.WitDictation$$Cancel
ENTRY_POINT: 01c0d508
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01c0def0) */
/* WARNING: Removing unreachable block (ram,0x01c0d914) */
/* WARNING: Removing unreachable block (ram,0x01c0ded8) */
/* WARNING: Removing unreachable block (ram,0x01c0d1b8) */

void Meta_WitAi_Dictation_WitDictation__Cancel(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x25;
  long *plVar12;
  long unaff_x27;
  long *plVar13;
  long unaff_x28;
  long *plVar14;
  long unaff_x29;
  undefined8 *puVar15;
  long *in_stack_00000018;
  
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_17__;
  plVar13 = *(long **)(unaff_x27 + 0xf98);
  plVar14 = *(long **)(unaff_x28 + 4000);
  puVar15 = *(undefined8 **)(unaff_x29 + 0xf88);
  plVar12 = *(long **)(unaff_x25 + 0xcf8);
  do {
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar13) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01c0d574;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d574:
    uVar10 = (*(code *)*puVar5)();
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
    if ((uVar10 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_01afa9e0();
      if (plVar12 == (long *)0x0) goto LAB_01c0da24;
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_01c0d9fc;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar13) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_01c0d5d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d5d4:
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *plVar14;
    bVar1 = *(byte *)(lVar9 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(plVar6);
    }
    uVar7 = FUN_01e8a9f8(plVar6,*puVar15);
    if (*(int *)(*plVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_0391f968(uVar7,0,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = FUN_01e8a9f8(plVar6,*puVar15);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0395a360(lVar9,1,0);
      lVar9 = FUN_01e8a9f8(plVar6,*puVar15);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0395a294(lVar9,0,0);
    }
    uVar7 = FUN_01e8a9f8(plVar6,*(undefined8 *)puVar3);
    if (*(int *)(*plVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03923030(uVar7,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = FUN_01e8a9f8(plVar6,*(undefined8 *)puVar3);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined4 *)(lVar9 + 0x20) = 0x501502f9;
    }
    plVar6 = (long *)FUN_0392a954(plVar6,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_01c0d6e0:
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar13) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01c0d72c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar6,*plVar13,0);
LAB_01c0d72c:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) != 0) {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *plVar13) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_01c0d78c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar6,*plVar13,1);
LAB_01c0d78c:
      plVar8 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar9 = *plVar14;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar8);
      }
      uVar7 = FUN_01e8a9f8(plVar8,*puVar15);
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_0391f968(uVar7,0,0);
      if ((uVar10 & 1) != 0) {
        lVar9 = FUN_01e8a9f8(plVar8,*puVar15);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a360(lVar9,1,0);
        lVar9 = FUN_01e8a9f8(plVar8,*puVar15);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a294(lVar9,0,0);
      }
      uVar7 = FUN_01e8a9f8(plVar8,*(undefined8 *)puVar3);
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_03923030(uVar7,0);
      if ((uVar10 & 1) != 0) {
        lVar9 = FUN_01e8a9f8(plVar8,*(undefined8 *)puVar3);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar9 + 0x20) = 0x4e6e6b28;
      }
      goto LAB_01c0d6e0;
    }
    plVar6 = (long *)thunk_FUN_01afa9e0(plVar6,*(undefined8 *)
                                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                       );
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01c0d8f8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ae9f78(plVar6,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_01c0d8f8:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar15 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar15 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar2,0);
LAB_01c0da18:
  (*(code *)*puVar15)(plVar12,puVar15[1]);
LAB_01c0da24:
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  if (*in_stack_00000018 != 0) {
    lVar9 = FUN_01ed7390(*in_stack_00000018,
                         *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_28__)
    ;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar10 = FUN_0391f968(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar9 == 0) goto LAB_01c0de9c;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1d8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x20));
    }
    if (*in_stack_00000018 != 0) {
      lVar9 = FUN_01ed7390(*in_stack_00000018,
                           *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_3__
                          );
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar10 = FUN_0391f968(lVar9,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar9 == 0) goto LAB_01c0de9c;
        *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
        thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48));
      }
      if (*in_stack_00000018 != 0) {
        lVar9 = FUN_01ed7390(*in_stack_00000018,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_25__);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar10 = FUN_0391f968(lVar9,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar9 == 0) goto LAB_01c0de9c;
          *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(unaff_x19 + 0x1d8);
          thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x38));
        }
        if (*in_stack_00000018 != 0) {
          lVar9 = FUN_01ed7390(*in_stack_00000018,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar10 = FUN_0391f968(lVar9,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar9 == 0) goto LAB_01c0de9c;
            *(undefined8 *)(lVar9 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x1d8);
            thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0xf0));
          }
          if (*in_stack_00000018 != 0) {
            lVar9 = FUN_01ed7390(*in_stack_00000018,
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar10 = FUN_0391f968(lVar9,0,0);
            if ((uVar10 & 1) != 0) {
              if (lVar9 == 0) goto LAB_01c0de9c;
              *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1d8);
              thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x40));
            }
            if (*in_stack_00000018 != 0) {
              lVar9 = FUN_01ed7390(*in_stack_00000018,
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_26__);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar2);
              }
              uVar10 = FUN_0391f968(lVar9,0,0);
              if ((uVar10 & 1) != 0) {
                if (lVar9 == 0) goto LAB_01c0de9c;
                *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(unaff_x19 + 0x1d8);
                thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x50));
              }
              if (*in_stack_00000018 != 0) {
                lVar9 = FUN_01ed7390(*in_stack_00000018,
                                     *(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_27__);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                uVar10 = FUN_0391f968(lVar9,0,0);
                if ((uVar10 & 1) != 0) {
                  if (lVar9 == 0) goto LAB_01c0de9c;
                  *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                  thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48));
                }
                if (*in_stack_00000018 != 0) {
                  lVar9 = FUN_01ed7390(*in_stack_00000018,
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_29__)
                  ;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar2);
                  }
                  uVar10 = FUN_0391f968(lVar9,0,0);
                  if ((uVar10 & 1) != 0) {
                    if (lVar9 == 0) goto LAB_01c0de9c;
                    *(undefined8 *)(lVar9 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                    thunk_FUN_01b4f09c();
                    *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1f8);
                    thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x80));
                  }
                  if (*in_stack_00000018 != 0) {
                    lVar9 = FUN_01ed7390(*in_stack_00000018,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__
                                        );
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar2);
                    }
                    uVar10 = FUN_0391f968(lVar9,0,0);
                    if ((uVar10 & 1) != 0) {
                      if (lVar9 == 0) goto LAB_01c0de9c;
                      *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                      thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48));
                    }
                    if (*in_stack_00000018 != 0) {
                      iVar4 = FUN_0391faf0(*in_stack_00000018,0);
                      if (iVar4 == 2) {
                        *(undefined2 *)(unaff_x19 + 0x130) = 0x101;
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3),
                           lVar9 == 0)) goto LAB_01c0de9c;
                        *(undefined1 *)(lVar9 + 0x80) = 1;
                      }
                      if ((*in_stack_00000018 != 0) &&
                         (lVar9 = FUN_01ed712c(*in_stack_00000018,*(undefined8 *)puVar3), lVar9 != 0
                         )) {
                        *(undefined4 *)(lVar9 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3),
                           lVar9 != 0)) {
                          *(undefined1 *)(lVar9 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3
                                                  ), lVar9 != 0)) {
                            *(undefined1 *)(lVar9 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x130);
                            *(undefined8 *)(unaff_x19 + 0x38) = 0;
                            thunk_FUN_01b4f09c(in_stack_00000018,0);
                            return;
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


