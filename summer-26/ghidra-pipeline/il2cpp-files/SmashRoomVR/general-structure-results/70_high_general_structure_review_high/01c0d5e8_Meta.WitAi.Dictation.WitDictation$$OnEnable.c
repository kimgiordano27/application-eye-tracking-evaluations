/*
FUNCTION_NAME: Meta.WitAi.Dictation.WitDictation$$OnEnable
ENTRY_POINT: 01c0d5e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01c0def0) */
/* WARNING: Removing unreachable block (ram,0x01c0d914) */
/* WARNING: Removing unreachable block (ram,0x01c0ded8) */
/* WARNING: Removing unreachable block (ram,0x01c0d1b8) */

void Meta_WitAi_Dictation_WitDictation__OnEnable(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
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
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(unaff_x22);
    }
    uVar5 = FUN_01e8a9f8(unaff_x22,*unaff_x29);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_01e8a9f8(unaff_x22,*unaff_x29);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0395a360(lVar7,1,0);
      lVar7 = FUN_01e8a9f8(unaff_x22,*unaff_x29);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0395a294(lVar7,0,0);
    }
    uVar5 = FUN_01e8a9f8(unaff_x22,*unaff_x26);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03923030(uVar5,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_01e8a9f8(unaff_x22,*unaff_x26);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined4 *)(lVar7 + 0x20) = 0x501502f9;
    }
    plVar8 = (long *)FUN_0392a954(unaff_x22,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_01c0d6e0:
    lVar7 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01c0d72c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*unaff_x27,0);
LAB_01c0d72c:
    uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar6 & 1) != 0) {
      lVar7 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_01c0d78c;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*unaff_x27,1);
LAB_01c0d78c:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar10);
      }
      uVar5 = FUN_01e8a9f8(plVar10,*unaff_x29);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0391f968(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = FUN_01e8a9f8(plVar10,*unaff_x29);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a360(lVar7,1,0);
        lVar7 = FUN_01e8a9f8(plVar10,*unaff_x29);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_0395a294(lVar7,0,0);
      }
      uVar5 = FUN_01e8a9f8(plVar10,*unaff_x26);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_03923030(uVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = FUN_01e8a9f8(plVar10,*unaff_x26);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar7 + 0x20) = unaff_w20;
      }
      goto LAB_01c0d6e0;
    }
    plVar8 = (long *)thunk_FUN_01afa9e0(plVar8,*(undefined8 *)
                                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                       );
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01c0d8f8;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ae9f78(plVar8,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_01c0d8f8:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
    lVar7 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01c0d574;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d574:
    uVar6 = (*(code *)*puVar9)();
    puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01afa9e0();
      if (plVar8 == (long *)0x0) goto LAB_01c0da24;
      lVar7 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 == 0) goto LAB_01c0d9fc;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_01c0d5d4;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78();
LAB_01c0d5d4:
    unaff_x22 = (long *)(*(code *)*puVar9)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar11 = piVar11 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01c0da18;
    }
  }
LAB_01c0d9fc:
  puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar3,0);
LAB_01c0da18:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01c0da24:
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  if (*in_stack_00000018 != 0) {
    lVar7 = FUN_01ed7390(*in_stack_00000018,
                         *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_28__)
    ;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar6 = FUN_0391f968(lVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (lVar7 == 0) goto LAB_01c0de9c;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1d8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x20));
    }
    if (*in_stack_00000018 != 0) {
      lVar7 = FUN_01ed7390(*in_stack_00000018,
                           *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_3__
                          );
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar6 = FUN_0391f968(lVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar7 == 0) goto LAB_01c0de9c;
        *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
        thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x48));
      }
      if (*in_stack_00000018 != 0) {
        lVar7 = FUN_01ed7390(*in_stack_00000018,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_25__);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar6 = FUN_0391f968(lVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar7 == 0) goto LAB_01c0de9c;
          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(unaff_x19 + 0x1d8);
          thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x38));
        }
        if (*in_stack_00000018 != 0) {
          lVar7 = FUN_01ed7390(*in_stack_00000018,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar6 = FUN_0391f968(lVar7,0,0);
          if ((uVar6 & 1) != 0) {
            if (lVar7 == 0) goto LAB_01c0de9c;
            *(undefined8 *)(lVar7 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x1d8);
            thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0xf0));
          }
          if (*in_stack_00000018 != 0) {
            lVar7 = FUN_01ed7390(*in_stack_00000018,
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar6 = FUN_0391f968(lVar7,0,0);
            if ((uVar6 & 1) != 0) {
              if (lVar7 == 0) goto LAB_01c0de9c;
              *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1d8);
              thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x40));
            }
            if (*in_stack_00000018 != 0) {
              lVar7 = FUN_01ed7390(*in_stack_00000018,
                                   *(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_26__);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar2);
              }
              uVar6 = FUN_0391f968(lVar7,0,0);
              if ((uVar6 & 1) != 0) {
                if (lVar7 == 0) goto LAB_01c0de9c;
                *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(unaff_x19 + 0x1d8);
                thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x50));
              }
              if (*in_stack_00000018 != 0) {
                lVar7 = FUN_01ed7390(*in_stack_00000018,
                                     *(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_27__);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                uVar6 = FUN_0391f968(lVar7,0,0);
                if ((uVar6 & 1) != 0) {
                  if (lVar7 == 0) goto LAB_01c0de9c;
                  *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                  thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x48));
                }
                if (*in_stack_00000018 != 0) {
                  lVar7 = FUN_01ed7390(*in_stack_00000018,
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_29__)
                  ;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar2);
                  }
                  uVar6 = FUN_0391f968(lVar7,0,0);
                  if ((uVar6 & 1) != 0) {
                    if (lVar7 == 0) goto LAB_01c0de9c;
                    *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                    thunk_FUN_01b4f09c();
                    *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(unaff_x19 + 0x1f8);
                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x80));
                  }
                  if (*in_stack_00000018 != 0) {
                    lVar7 = FUN_01ed7390(*in_stack_00000018,
                                         *(undefined8 *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_30__
                                        );
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar2);
                    }
                    uVar6 = FUN_0391f968(lVar7,0,0);
                    if ((uVar6 & 1) != 0) {
                      if (lVar7 == 0) goto LAB_01c0de9c;
                      *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(unaff_x19 + 0x1d8);
                      thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x48));
                    }
                    if (*in_stack_00000018 != 0) {
                      iVar4 = FUN_0391faf0(*in_stack_00000018,0);
                      if (iVar4 == 2) {
                        *(undefined2 *)(unaff_x19 + 0x130) = 0x101;
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3),
                           lVar7 == 0)) goto LAB_01c0de9c;
                        *(undefined1 *)(lVar7 + 0x80) = 1;
                      }
                      if ((*in_stack_00000018 != 0) &&
                         (lVar7 = FUN_01ed712c(*in_stack_00000018,*(undefined8 *)puVar3), lVar7 != 0
                         )) {
                        *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(unaff_x19 + 0x134);
                        if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                           (lVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3),
                           lVar7 != 0)) {
                          *(undefined1 *)(lVar7 + 0x7e) = *(undefined1 *)(unaff_x19 + 0x131);
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar3
                                                  ), lVar7 != 0)) {
                            *(undefined1 *)(lVar7 + 0x7d) = *(undefined1 *)(unaff_x19 + 0x130);
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


