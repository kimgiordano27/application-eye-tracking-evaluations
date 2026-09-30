/*
FUNCTION_NAME: Meta.WitAi.Dictation.WitDictation$$.ctor
ENTRY_POINT: 01c0d730
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

void Meta_WitAi_Dictation_WitDictation___ctor(code *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000018;
  
  do {
    uVar5 = (*param_1)(unaff_x22,param_3);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01afa9e0(unaff_x22,
                                          *(undefined8 *)
                                           Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                         );
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01c0d8f8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ae9f78(plVar7,*(long *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0)
        ;
LAB_01c0d8f8:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
      lVar9 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01c0d574;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d574:
      uVar5 = (*(code *)*puVar6)();
      puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
      if ((uVar5 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01afa9e0();
        if (plVar7 == (long *)0x0) goto LAB_01c0da24;
        lVar9 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 == 0) goto LAB_01c0d9fc;
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        break;
      }
      lVar9 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01c0d5d4;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d5d4:
      plVar7 = (long *)(*(code *)*puVar6)();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar7);
      }
      uVar8 = FUN_01e8a9f8(plVar7,*unaff_x29);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        lVar9 = FUN_01e8a9f8(plVar7,*unaff_x29);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a360(lVar9,1,0);
        lVar9 = FUN_01e8a9f8(plVar7,*unaff_x29);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a294(lVar9,0,0);
      }
      uVar8 = FUN_01e8a9f8(plVar7,*unaff_x26);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(uVar8,0);
      if ((uVar5 & 1) != 0) {
        lVar9 = FUN_01e8a9f8(plVar7,*unaff_x26);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar9 + 0x20) = 0x501502f9;
      }
      unaff_x22 = (long *)FUN_0392a954(plVar7,0);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    else {
      lVar9 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01c0d78c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ae9f78(unaff_x22,*unaff_x27,1);
LAB_01c0d78c:
      plVar7 = (long *)(*(code *)*puVar6)(unaff_x22,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar7);
      }
      uVar8 = FUN_01e8a9f8(plVar7,*unaff_x29);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        lVar9 = FUN_01e8a9f8(plVar7,*unaff_x29);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a360(lVar9,1,0);
        lVar9 = FUN_01e8a9f8(plVar7,*unaff_x29);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a294(lVar9,0,0);
      }
      uVar8 = FUN_01e8a9f8(plVar7,*unaff_x26);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(uVar8,0);
      if ((uVar5 & 1) != 0) {
        lVar9 = FUN_01e8a9f8(plVar7,*unaff_x26);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar9 + 0x20) = unaff_w20;
      }
    }
    lVar9 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01c0d72c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(unaff_x22,*unaff_x27,0);
LAB_01c0d72c:
    param_1 = (code *)*puVar6;
    param_3 = puVar6[1];
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar6 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar3,0);
LAB_01c0da18:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
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
    uVar5 = FUN_0391f968(lVar9,0,0);
    if ((uVar5 & 1) != 0) {
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
      uVar5 = FUN_0391f968(lVar9,0,0);
      if ((uVar5 & 1) != 0) {
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
        uVar5 = FUN_0391f968(lVar9,0,0);
        if ((uVar5 & 1) != 0) {
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
          uVar5 = FUN_0391f968(lVar9,0,0);
          if ((uVar5 & 1) != 0) {
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
            uVar5 = FUN_0391f968(lVar9,0,0);
            if ((uVar5 & 1) != 0) {
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
              uVar5 = FUN_0391f968(lVar9,0,0);
              if ((uVar5 & 1) != 0) {
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
                uVar5 = FUN_0391f968(lVar9,0,0);
                if ((uVar5 & 1) != 0) {
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
                  uVar5 = FUN_0391f968(lVar9,0,0);
                  if ((uVar5 & 1) != 0) {
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
                    uVar5 = FUN_0391f968(lVar9,0,0);
                    if ((uVar5 & 1) != 0) {
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


