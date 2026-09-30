/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetKeyboardOverlayUV
ENTRY_POINT: 0339d90c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0339eafc) */
/* WARNING: Removing unreachable block (ram,0x0339da6c) */
/* WARNING: Removing unreachable block (ram,0x0339e384) */
/* WARNING: Removing unreachable block (ram,0x0339e388) */
/* WARNING: Removing unreachable block (ram,0x0339ee24) */
/* WARNING: Removing unreachable block (ram,0x0339e720) */
/* WARNING: Removing unreachable block (ram,0x0339e724) */
/* WARNING: Removing unreachable block (ram,0x0339e970) */
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */

undefined8
OVRPlugin_OVRP_1_57_0__ovrp_SetKeyboardOverlayUV
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *plVar15;
  long unaff_x26;
  undefined8 *unaff_x28;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  do {
    FUN_02b67c90(param_1,unaff_x26,param_3,0);
    uVar7 = FUN_02335b00();
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x26 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar14 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x30);
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                                );
      FUN_03313b6c(lVar8,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar14;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(unaff_x26 + 0x10);
      in_stack_00000040 = 0;
      FUN_02f2115c(&stack0x00000040,0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar5 = *(uint *)(unaff_x22 + 0x18);
      unaff_x21 = in_stack_00000030;
      if (uVar5 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
        *(long *)(lVar11 + (long)(int)uVar5 * 8 + 0x20) = lVar8;
      }
      else {
        FUN_02d5004c();
      }
    }
    do {
      lVar8 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04230960) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0339d86c;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498();
LAB_0339d86c:
      uVar7 = (*(code *)*puVar6)();
      plVar15 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      if ((uVar7 & 1) == 0) {
        if (unaff_x23 == (long *)0x0) goto LAB_0339da60;
        lVar8 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 == 0) goto LAB_0339da38;
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0339da20;
      }
      unaff_x26 = thunk_FUN_01c496e0(*unaff_x19);
      FUN_03313b6c(unaff_x26,0);
      lVar8 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x24) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0339d8dc;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498();
LAB_0339d8dc:
      lVar8 = (*(code *)*puVar6)();
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(long *)(unaff_x26 + 0x10) = lVar8;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    } while (*(char *)(lVar8 + 0x80) != '\0');
    param_1 = thunk_FUN_01c496e0(*unaff_x25);
    param_3 = *unaff_x28;
  } while( true );
LAB_0339dc90:
  if (*(long *)(lVar8 + 0x18) != 0) {
    uVar14 = FUN_03392404(unaff_x21);
    lVar11 = *plVar15;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar11);
      lVar11 = *plVar15;
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar10 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar11);
        lVar11 = *plVar15;
      }
      uVar16 = **(undefined8 **)(lVar11 + 0xb8);
      lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar10,uVar16,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      plVar15 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar10;
    }
    if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar11 = FUN_0242e528(uVar14,lVar10,*(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x60),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    if (lVar11 != 0) {
LAB_0339db88:
      if (*(char *)(lVar11 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar8 + 0x28) != '\0')) &&
           (*(uint *)(lVar8 + 0x2c) < 2)) {
          if (*(long *)(lVar11 + 0x48) == 0) {
            uVar14 = FUN_03395dc8(in_stack_00000028,*(undefined8 *)(lVar11 + 0x40));
            *(undefined8 *)(lVar11 + 0x48) = uVar14;
          }
          in_stack_00000058 = *(undefined8 *)(lVar11 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar5 = FUN_02f211a0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if ((uVar5 >> 1 & 1) != 0) {
            FUN_033931b0(lVar11);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            uVar14 = FUN_033985d4();
            *(undefined8 *)(lVar8 + 0x30) = uVar14;
          }
        }
        lVar10 = FUN_03392404(unaff_x21);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar5 = FUN_027bd894(lVar10,lVar11,*(undefined8 *)puVar2);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar11 = *(long *)(lVar8 + 0x30);
        if ((lVar11 != 0) &&
           (lVar10 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
          uVar14 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar14,0);
        }
        if (*(uint *)(plVar9 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar9[(long)(int)uVar5 + 4] = lVar11;
        *(undefined1 *)(lVar8 + 0x38) = 1;
      }
    }
  }
  goto LAB_0339dae8;
LAB_0339e690:
  plVar15 = (long *)thunk_FUN_01c495e4(plVar15,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar15,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar6)(plVar15,puVar6[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar15 = (long *)thunk_FUN_01c495e4(plVar15,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar15,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar6)(plVar15,puVar6[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar8 + 0x38) = 1;
  goto LAB_0339dde0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_0339da20:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0339da54;
    }
  }
LAB_0339da38:
  puVar6 = (undefined8 *)FUN_01c72498();
LAB_0339da54:
  (*(code *)*puVar6)();
LAB_0339da60:
  lVar8 = FUN_03392404(unaff_x21);
  puVar2 = PTR_DAT_042305b8;
  if (lVar8 != 0) {
    uVar4 = FUN_027bd234(lVar8,*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,uVar4);
    puVar3 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__;
    if (unaff_x22 != 0) {
      FUN_02d50a3c(&stack0x00000040);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_0339dae8:
      uVar7 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
      lVar8 = in_stack_00000070;
      if ((uVar7 & 1) != 0) {
        if (in_stack_00000038._4_4_ == 0) {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        else {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar11 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar4 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar7 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x48));
              uVar4 = 1;
              if ((uVar7 & 1) == 0) {
                uVar4 = 2;
              }
            }
            else {
              uVar4 = 2;
            }
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,uVar4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
          }
        }
        lVar11 = *(long *)(lVar8 + 0x20);
        if (lVar11 == 0) goto LAB_0339dc90;
        goto LAB_0339db88;
      }
      FUN_029fd610(&stack0x00000060,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
      if (in_stack_00000020 != 0) {
        uVar14 = (**(code **)(in_stack_00000020 + 0x18))
                           (*(undefined8 *)(in_stack_00000020 + 0x40),plVar9,
                            *(undefined8 *)(in_stack_00000020 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_0339c944(in_stack_00000028);
        }
        FUN_0339cd08(in_stack_00000028);
        FUN_02d50a3c(&stack0x00000040);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_0339dde0:
        do {
          while( true ) {
            do {
              uVar7 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
              lVar8 = in_stack_00000070;
              if ((uVar7 & 1) == 0) {
                FUN_029fd610(&stack0x00000060,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                if (*(long *)(unaff_x21 + 0xe0) != 0) {
                  FUN_02d50a3c(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar7 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar7 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar8 = *(long *)(unaff_x21 + 0xe0);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(lVar8 + 0x18))
                                (*(undefined8 *)(lVar8 + 0x40),uVar14,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar8 + 0x28));
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_02d50a3c(&stack0x00000040);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar7 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar7 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if (*(long *)(in_stack_00000070 + 0x18) != 0) {
                      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(*unaff_x20 + 0x1b8))();
                      FUN_0339f5a0(in_stack_00000028,uVar14);
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                FUN_0339cf34(in_stack_00000028);
                return uVar14;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar11 = *(long *)(in_stack_00000070 + 0x18), lVar11 == 0)) ||
                     (*(char *)(lVar11 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar10 = *(long *)(in_stack_00000070 + 0x30);
            uVar7 = FUN_0339c840(in_stack_00000028,lVar11,unaff_x21,lVar10);
            if ((uVar7 & 1) == 0) break;
            plVar15 = *(long **)(lVar11 + 0x68);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar15;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0339df04;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01c72498(plVar15,*(long *)
                                           Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,0);
LAB_0339df04:
            (*(code *)*puVar6)(plVar15,uVar14,lVar10,puVar6[1]);
            *(undefined1 *)(lVar8 + 0x38) = 1;
          }
        } while ((lVar10 == 0) || (*(char *)(lVar11 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar15 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar12 = *plVar15;
        uVar16 = *(undefined8 *)(lVar11 + 0x40);
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar15,*(long *)
                                       Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                              ,0);
LAB_0339df30:
        plVar15 = (long *)(*(code *)*puVar6)(plVar15,uVar16,puVar6[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)((long)plVar15 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar15);
          }
          if ((*(char *)((long)plVar15 + 0xf2) != '\0') && ((char)plVar15[5] == '\0')) {
            plVar15 = *(long **)(lVar11 + 0x68);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar15;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01c72498(plVar15,*(long *)
                                           Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,1);
LAB_0339e000:
            lVar11 = (*(code *)*puVar6)(plVar15,uVar14,puVar6[1]);
            if (lVar11 != 0) {
              uVar16 = thunk_FUN_01c5d21c(lVar11,0);
              plVar15 = (long *)FUN_03395e54(in_stack_00000028,uVar16);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                               0x130);
              if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar15);
              }
              if (*(char *)((long)plVar15 + 0xf1) == '\0') {
                uVar16 = *(undefined8 *)PTR_DAT_04237778;
                plVar9 = (long *)thunk_FUN_01c495e4(lVar11);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar11,uVar16);
                }
              }
              else {
                plVar9 = (long *)FUN_0338eda8(plVar15,lVar11);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar11 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_01c72498(plVar9,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
              if ((uVar7 & 1) == 0) {
                if (*(char *)((long)plVar15 + 0xf1) == '\0') {
                  uVar16 = *(undefined8 *)PTR_DAT_04237778;
                  plVar15 = (long *)thunk_FUN_01c495e4(lVar10,uVar16);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar10,uVar16);
                  }
                }
                else {
                  plVar15 = (long *)FUN_0338eda8(plVar15,lVar10);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar11 = *plVar15;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)
                         FUN_01c72498(plVar15,*(long *)
                                               System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                      ,0);
LAB_0339e1a8:
                plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar11 = *plVar15;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar7 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar7 = uVar7 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar15,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar7 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                  if ((uVar7 & 1) == 0) goto LAB_0339e2f4;
                  lVar11 = *plVar15;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar7 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar7 = uVar7 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar15,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar16 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                  lVar11 = *plVar9;
                  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar7 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar7 = uVar7 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar9,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar6)(plVar9,uVar16,puVar6[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar15 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          if ((char)plVar15[5] == '\0') {
            plVar9 = *(long **)(lVar11 + 0x68);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01c72498(plVar9,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,1);
LAB_0339e44c:
            lVar11 = (*(code *)*puVar6)(plVar9,uVar14,puVar6[1]);
            if (lVar11 != 0) {
              if ((char)plVar15[0x20] == '\0') {
                uVar16 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar9 = (long *)thunk_FUN_01c495e4(lVar11,uVar16);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar11,uVar16);
                }
              }
              else {
                plVar9 = (long *)OVRPlugin_Sizei___cctor(plVar15,lVar11);
              }
              if ((char)plVar15[0x20] == '\0') {
                uVar16 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar15 = (long *)thunk_FUN_01c495e4(lVar10,uVar16);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar10,uVar16);
                }
              }
              else {
                plVar15 = (long *)OVRPlugin_Sizei___cctor(plVar15,lVar10);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar11 = *plVar15;
              uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar7 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)
                       FUN_01c72498(plVar15,*(long *)
                                             System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar11 = *plVar15;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_01c72498(plVar15,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar7 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                if ((uVar7 & 1) == 0) goto LAB_0339e690;
                lVar11 = *plVar15;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_01c72498(plVar15,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar17 = (*(code *)*puVar6)(plVar15,puVar6[1]);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar11 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)
                         FUN_01c72498(plVar9,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,1);
LAB_0339e678:
                (*(code *)*puVar6)(plVar9,auVar17._0_8_,auVar17._8_8_,puVar6[1]);
              } while( true );
            }
          }
        }
        goto LAB_0339e3dc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


