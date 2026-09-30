/*
FUNCTION_NAME: OVRPlugin.OVRP_1_56_0$$.cctor
ENTRY_POINT: 0339d798
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

undefined8 OVRPlugin_OVRP_1_56_0___cctor(code *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x28;
  undefined8 uVar20;
  undefined1 auVar21 [16];
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
  
  (*param_1)();
  lVar9 = FUN_0339ef18();
  if (in_stack_00000038._4_4_ != 0) {
    if (*(long *)(unaff_x21 + 0xd8) != 0) {
      plVar10 = (long *)FUN_027bd80c(*(long *)(unaff_x21 + 0xd8),
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_DebugUI_Field<Object>_GetValue__)
      ;
      puVar6 = Method_System_Collections_Generic_HashSet<PhotonView>_Clear__;
      puVar5 = Method_System_Collections_Generic_HashSet<PhotonView>_Add__;
      puVar4 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Remove__;
      puVar3 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_GetEnumerator__;
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_getter__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar14 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04230960) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0339d86c;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04230960,0);
LAB_0339d86c:
        uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        unaff_x28 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        if ((uVar17 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_0339da70;
          lVar14 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 == 0) goto LAB_0339da38;
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_0339da20;
        }
        lVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
        FUN_03313b6c(lVar14,0);
        lVar15 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0339d8dc;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar2,0);
LAB_0339d8dc:
        lVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(lVar14 + 0x10) = lVar15;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(char *)(lVar15 + 0x80) == '\0') {
          uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_02b67c90(uVar12,lVar14,*(undefined8 *)puVar5,0);
          uVar17 = FUN_02335b00(lVar9,uVar12,*(undefined8 *)puVar3);
          if ((uVar17 & 1) != 0) {
            if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x30);
            lVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                                       );
            FUN_03313b6c(lVar15,0);
            *(undefined8 *)(lVar15 + 0x10) = uVar12;
            *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(lVar14 + 0x10);
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar15 + 0x28) = in_stack_00000040;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar18 = *(long *)Method_System_Collections_Generic_HashSet<object>_Add__;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar8 = *(uint *)(lVar9 + 0x18);
            unaff_x21 = in_stack_00000030;
            if (uVar8 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar8 + 1;
              *(long *)(lVar14 + (long)(int)uVar8 * 8 + 0x20) = lVar15;
            }
            else {
              FUN_02d5004c(lVar9,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_0339e9a4;
  }
  goto LAB_0339da70;
LAB_0339dc90:
  if (*(long *)(lVar14 + 0x18) != 0) {
    uVar12 = FUN_03392404(unaff_x21);
    lVar15 = *unaff_x28;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar15);
      lVar15 = *unaff_x28;
    }
    lVar18 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar18 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar15);
        lVar15 = *unaff_x28;
      }
      uVar20 = **(undefined8 **)(lVar15 + 0xb8);
      lVar18 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar18,uVar20,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      unaff_x28 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar18;
    }
    if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar15 = FUN_0242e528(uVar12,lVar18,*(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x60),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    if (lVar15 != 0) {
LAB_0339db88:
      if (*(char *)(lVar15 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar14 + 0x28) != '\0')) &&
           (*(uint *)(lVar14 + 0x2c) < 2)) {
          if (*(long *)(lVar15 + 0x48) == 0) {
            uVar12 = FUN_03395dc8(in_stack_00000028,*(undefined8 *)(lVar15 + 0x40));
            *(undefined8 *)(lVar15 + 0x48) = uVar12;
          }
          in_stack_00000058 = *(undefined8 *)(lVar15 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar8 = FUN_02f211a0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if ((uVar8 >> 1 & 1) != 0) {
            FUN_033931b0(lVar15);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            uVar12 = FUN_033985d4();
            *(undefined8 *)(lVar14 + 0x30) = uVar12;
          }
        }
        lVar18 = FUN_03392404(unaff_x21);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar8 = FUN_027bd894(lVar18,lVar15,*(undefined8 *)puVar2);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar15 = *(long *)(lVar14 + 0x30);
        if ((lVar15 != 0) &&
           (lVar18 = thunk_FUN_01c495e4(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0)) {
          uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar12,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar10[(long)(int)uVar8 + 4] = lVar15;
        *(undefined1 *)(lVar14 + 0x38) = 1;
      }
    }
  }
  goto LAB_0339dae8;
LAB_0339e690:
  plVar10 = (long *)thunk_FUN_01c495e4(plVar10,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar10 != (long *)0x0) {
    lVar15 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar10 = (long *)thunk_FUN_01c495e4(plVar10,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar10 != (long *)0x0) {
    lVar15 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar14 + 0x38) = 1;
  goto LAB_0339dde0;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_0339da20:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0339da54;
    }
  }
LAB_0339da38:
  puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_0422fce8,0);
LAB_0339da54:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0339da70:
  lVar14 = FUN_03392404(unaff_x21);
  puVar2 = PTR_DAT_042305b8;
  if (lVar14 != 0) {
    uVar7 = FUN_027bd234(lVar14,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    plVar10 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,uVar7);
    puVar3 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__;
    if (lVar9 != 0) {
      FUN_02d50a3c(&stack0x00000040,lVar9,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_0339dae8:
      uVar17 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
      lVar14 = in_stack_00000070;
      if ((uVar17 & 1) != 0) {
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
          lVar15 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar15 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar7 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar17 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                 (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x48));
              uVar7 = 1;
              if ((uVar17 & 1) == 0) {
                uVar7 = 2;
              }
            }
            else {
              uVar7 = 2;
            }
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,uVar7,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar14 + 0x28) = in_stack_00000040;
          }
        }
        lVar15 = *(long *)(lVar14 + 0x20);
        if (lVar15 == 0) goto LAB_0339dc90;
        goto LAB_0339db88;
      }
      FUN_029fd610(&stack0x00000060,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
      if (in_stack_00000020 != 0) {
        uVar12 = (**(code **)(in_stack_00000020 + 0x18))
                           (*(undefined8 *)(in_stack_00000020 + 0x40),plVar10,
                            *(undefined8 *)(in_stack_00000020 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_0339c944(in_stack_00000028);
        }
        FUN_0339cd08(in_stack_00000028);
        FUN_02d50a3c(&stack0x00000040,lVar9,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_0339dde0:
        do {
          while( true ) {
            do {
              uVar17 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
              lVar14 = in_stack_00000070;
              if ((uVar17 & 1) == 0) {
                FUN_029fd610(&stack0x00000060,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                if (*(long *)(unaff_x21 + 0xe0) != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar9,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar17 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar17 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar14 = *(long *)(unaff_x21 + 0xe0);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(lVar14 + 0x18))
                                (*(undefined8 *)(lVar14 + 0x40),uVar12,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar14 + 0x28));
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar9,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar17 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar17 & 1) != 0) {
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
                      FUN_0339f5a0(in_stack_00000028,uVar12);
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                FUN_0339cf34(in_stack_00000028);
                return uVar12;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar15 = *(long *)(in_stack_00000070 + 0x18), lVar15 == 0)) ||
                     (*(char *)(lVar15 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar18 = *(long *)(in_stack_00000070 + 0x30);
            uVar17 = FUN_0339c840(in_stack_00000028,lVar15,unaff_x21,lVar18);
            if ((uVar17 & 1) == 0) break;
            plVar10 = *(long **)(lVar15 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *plVar10;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0339df04;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c72498(plVar10,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,0);
LAB_0339df04:
            (*(code *)*puVar11)(plVar10,uVar12,lVar18,puVar11[1]);
            *(undefined1 *)(lVar14 + 0x38) = 1;
          }
        } while ((lVar18 == 0) || (*(char *)(lVar15 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar10 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar16 = *plVar10;
        uVar20 = *(undefined8 *)(lVar15 + 0x40);
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(plVar10,*(long *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                               ,0);
LAB_0339df30:
        plVar10 = (long *)(*(code *)*puVar11)(plVar10,uVar20,puVar11[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)((long)plVar10 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar10);
          }
          if ((*(char *)((long)plVar10 + 0xf2) != '\0') && ((char)plVar10[5] == '\0')) {
            plVar10 = *(long **)(lVar15 + 0x68);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *plVar10;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c72498(plVar10,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e000:
            lVar15 = (*(code *)*puVar11)(plVar10,uVar12,puVar11[1]);
            if (lVar15 != 0) {
              uVar20 = thunk_FUN_01c5d21c(lVar15,0);
              plVar10 = (long *)FUN_03395e54(in_stack_00000028,uVar20);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                               0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar10);
              }
              if (*(char *)((long)plVar10 + 0xf1) == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_04237778;
                plVar13 = (long *)thunk_FUN_01c495e4(lVar15);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar15,uVar20);
                }
              }
              else {
                plVar13 = (long *)FUN_0338eda8(plVar10,lVar15);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar15 = *plVar13;
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar11 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar17 = (*(code *)*puVar11)(plVar13,puVar11[1]);
              if ((uVar17 & 1) == 0) {
                if (*(char *)((long)plVar10 + 0xf1) == '\0') {
                  uVar20 = *(undefined8 *)PTR_DAT_04237778;
                  plVar10 = (long *)thunk_FUN_01c495e4(lVar18,uVar20);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar18,uVar20);
                  }
                }
                else {
                  plVar10 = (long *)FUN_0338eda8(plVar10,lVar18);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar15 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01c72498(plVar10,*(long *)
                                                System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                       ,0);
LAB_0339e1a8:
                plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar15 = *plVar10;
                  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                  if ((uVar17 & 1) == 0) goto LAB_0339e2f4;
                  lVar15 = *plVar10;
                  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar20 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                  lVar15 = *plVar13;
                  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar11)(plVar13,uVar20,puVar11[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar10 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          if ((char)plVar10[5] == '\0') {
            plVar13 = *(long **)(lVar15 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *plVar13;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c72498(plVar13,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e44c:
            lVar15 = (*(code *)*puVar11)(plVar13,uVar12,puVar11[1]);
            if (lVar15 != 0) {
              if ((char)plVar10[0x20] == '\0') {
                uVar20 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar13 = (long *)thunk_FUN_01c495e4(lVar15,uVar20);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar15,uVar20);
                }
              }
              else {
                plVar13 = (long *)OVRPlugin_Sizei___cctor(plVar10,lVar15);
              }
              if ((char)plVar10[0x20] == '\0') {
                uVar20 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar10 = (long *)thunk_FUN_01c495e4(lVar18,uVar20);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar18,uVar20);
                }
              }
              else {
                plVar10 = (long *)OVRPlugin_Sizei___cctor(plVar10,lVar18);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar15 = *plVar10;
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_01c72498(plVar10,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar15 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if ((uVar17 & 1) == 0) goto LAB_0339e690;
                lVar15 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar11 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar21 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar15 = *plVar13;
                uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01c72498(plVar13,*(long *)
                                                System_Security_Cryptography_CryptoConfig_TypeInfo,1
                                      );
LAB_0339e678:
                (*(code *)*puVar11)(plVar13,auVar21._0_8_,auVar21._8_8_,puVar11[1]);
              } while( true );
            }
          }
        }
        goto LAB_0339e3dc;
      }
    }
  }
LAB_0339e9a4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


