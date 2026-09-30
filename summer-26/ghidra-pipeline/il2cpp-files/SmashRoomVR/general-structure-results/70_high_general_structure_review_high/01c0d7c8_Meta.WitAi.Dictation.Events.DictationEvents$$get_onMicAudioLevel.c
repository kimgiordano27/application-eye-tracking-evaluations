/*
FUNCTION_NAME: Meta.WitAi.Dictation.Events.DictationEvents$$get_onMicAudioLevel
ENTRY_POINT: 01c0d7c8
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

void Meta_WitAi_Dictation_Events_DictationEvents__get_onMicAudioLevel(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000018;
  
code_r0x01c0d7c8:
  if ((bool)in_ZR) {
    uVar6 = FUN_01e8a9f8(unaff_x23,*unaff_x29);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_01e8a9f8(unaff_x23,*unaff_x29);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0395a360(lVar8,1,0);
      lVar8 = FUN_01e8a9f8(unaff_x23,*unaff_x29);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0395a294(lVar8,0,0);
    }
    uVar6 = FUN_01e8a9f8(unaff_x23,*unaff_x26);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03923030(uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_01e8a9f8(unaff_x23,*unaff_x26);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined4 *)(lVar8 + 0x20) = unaff_w20;
    }
    do {
      lVar8 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01c0d72c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(unaff_x22,*unaff_x27,0);
LAB_01c0d72c:
      uVar7 = (*(code *)*puVar5)(unaff_x22,puVar5[1]);
      if ((uVar7 & 1) != 0) goto code_r0x01c0d73c;
      plVar9 = (long *)thunk_FUN_01afa9e0(unaff_x22,
                                          *(undefined8 *)
                                           Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                         );
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01c0d8f8;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ae9f78(plVar9,*(long *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0)
        ;
LAB_01c0d8f8:
        (*(code *)*puVar5)(plVar9,puVar5[1]);
      }
      lVar8 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01c0d574;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d574:
      uVar7 = (*(code *)*puVar5)();
      puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
      if ((uVar7 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01afa9e0();
        if (plVar9 == (long *)0x0) goto LAB_01c0da24;
        lVar8 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 == 0) goto LAB_01c0d9fc;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01c0d9e4;
      }
      lVar8 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01c0d5d4;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d5d4:
      plVar9 = (long *)(*(code *)*puVar5)();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar9);
      }
      uVar6 = FUN_01e8a9f8(plVar9,*unaff_x29);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0391f968(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        lVar8 = FUN_01e8a9f8(plVar9,*unaff_x29);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a360(lVar8,1,0);
        lVar8 = FUN_01e8a9f8(plVar9,*unaff_x29);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a294(lVar8,0,0);
      }
      uVar6 = FUN_01e8a9f8(plVar9,*unaff_x26);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar8 = FUN_01e8a9f8(plVar9,*unaff_x26);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar8 + 0x20) = 0x501502f9;
      }
      unaff_x22 = (long *)FUN_0392a954(plVar9,0);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    } while( true );
  }
LAB_01c0d918:
                    /* WARNING: Subroutine does not return */
  FUN_01b4841c(unaff_x23);
code_r0x01c0d73c:
  lVar8 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_01c0d78c;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ae9f78(unaff_x22,*unaff_x27,1);
LAB_01c0d78c:
  unaff_x23 = (long *)(*(code *)*puVar5)(unaff_x22,puVar5[1]);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  bVar1 = *(byte *)(*unaff_x28 + 0x130);
  if (*(byte *)(*unaff_x23 + 0x130) < bVar1) goto LAB_01c0d918;
  in_ZR = *(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28;
  goto code_r0x01c0d7c8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar10 = piVar10 + 4;
    if (uVar7 == 0) break;
LAB_01c0d9e4:
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar5 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar3,0);
LAB_01c0da18:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
LAB_01c0da24:
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  if (*in_stack_00000018 != 0) {
    lVar8 = FUN_01ed7390(*in_stack_00000018,
                         *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_28__)
    ;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar7 = FUN_0391f968(lVar8,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar8 == 0) goto LAB_01c0de9c;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1d8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x20));
    }
    if (*in_stack_00000018 != 0) {
      lVar8 = FUN_01ed7390(*in_stack_00000018,
                           *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_3__
                          );
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar7 = FUN_0391f968(lVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (lVar8 == 0) goto LAB_01c0de9c;
        *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
        thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x48));
      }
      if (*in_stack_00000018 != 0) {
        lVar8 = FUN_01ed7390(*in_stack_00000018,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_25__);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar7 = FUN_0391f968(lVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar8 == 0) goto LAB_01c0de9c;
          *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(unaff_x19 + 0x1d8);
          thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x38));
        }
        if (*in_stack_00000018 != 0) {
          lVar8 = FUN_01ed7390(*in_stack_00000018,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar7 = FUN_0391f968(lVar8,0,0);
          if ((uVar7 & 1) != 0) {
            if (lVar8 == 0) goto LAB_01c0de9c;
            *(undefined8 *)(lVar8 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x1d8);
            thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0xf0));
          }
          if (*in_stack_00000018 != 0) {
            lVar8 = FUN_01ed7390(*in_stack_00000018,
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar7 = FUN_0391f968(lVar8,0,0);
            if ((uVar7 & 1) != 0) {
              if (lVar8 == 0) goto LAB_01c0de9c;
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1d8);
              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x40));
            }
            if (*in_stack_00000018 != 0) {
              lVar8 = FUN_01ed7390(*in_stack_00000018,
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_26__);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar2);
              }
              uVar7 = FUN_0391f968(lVar8,0,0);
              if ((uVar7 & 1) != 0) {
                if (lVar8 == 0) goto LAB_01c0de9c;
                *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(unaff_x19 + 0x1d8);
                thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x50));
              }
              if (*in_stack_00000018 != 0) {
                lVar8 = FUN_01ed7390(*in_stack_00000018,
                                     *(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_27__);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                uVar7 = FUN_0391f968(lVar8,0,0);
                if ((uVar7 & 1) != 0) {
                  if (lVar8 == 0) goto LAB_01c0de9c;
                  *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                  thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x48));
                }
                if (*in_stack_00000018 != 0) {
                  lVar8 = FUN_01ed7390(*in_stack_00000018,
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_29__)
                  ;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar2);
                  }
                  uVar7 = FUN_0391f968(lVar8,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (lVar8 == 0) goto LAB_01c0de9c;
                    *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                    thunk_FUN_01b4f09c();
                    *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1f8);
                    thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x80));
                  }
                  if (*in_stack_00000018 != 0) {
                    lVar8 = FUN_01ed7390(*in_stack_00000018,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__
                                        );
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar2);
                    }
                    uVar7 = FUN_0391f968(lVar8,0,0);
                    if ((uVar7 & 1) != 0) {
                      if (lVar8 == 0) goto LAB_01c0de9c;
                      *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                      thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x48));
                    }
                    if (*in_stack_00000018 != 0) {
                      iVar4 = FUN_0391faf0(*in_stack_00000018,0);
                      if (iVar4 == 2) {
                        *(undefined2 *)(unaff_x19 + 0x130) = 0x101;
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar8 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3),
                           lVar8 == 0)) goto LAB_01c0de9c;
                        *(undefined1 *)(lVar8 + 0x80) = 1;
                      }
                      if ((*in_stack_00000018 != 0) &&
                         (lVar8 = FUN_01ed712c(*in_stack_00000018,*(undefined8 *)puVar3), lVar8 != 0
                         )) {
                        *(undefined4 *)(lVar8 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (lVar8 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3),
                           lVar8 != 0)) {
                          *(undefined1 *)(lVar8 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar8 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3
                                                  ), lVar8 != 0)) {
                            *(undefined1 *)(lVar8 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x130);
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


