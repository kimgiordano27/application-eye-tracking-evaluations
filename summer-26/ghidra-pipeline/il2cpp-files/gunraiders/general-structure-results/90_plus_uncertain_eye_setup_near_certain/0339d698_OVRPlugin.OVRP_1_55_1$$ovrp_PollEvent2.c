/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$ovrp_PollEvent2
ENTRY_POINT: 0339d698
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
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

undefined8 OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar21;
  long *unaff_x26;
  undefined1 auVar22 [16];
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
  
  uVar9 = (**(code **)(param_1 + 0x1c8))();
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
  }
  uVar10 = FUN_03295500(0);
  uVar10 = FUN_033704d4(*(undefined8 *)
                         Method_System_Collections_Generic_HashSet<PhotonView>_Contains__,uVar10,
                        *(undefined8 *)(unaff_x21 + 0x60));
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      );
  }
  uVar11 = thunk_FUN_01c495e4();
  FUN_03358c64(uVar11,uVar9,uVar10,0);
  plVar21 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
  if (unaff_x26 == (long *)0x0) goto LAB_0339e9a4;
  lVar14 = *unaff_x26;
  uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x19) {
        puVar12 = (undefined8 *)(lVar14 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_0339d794;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01c72498();
LAB_0339d794:
  (*(code *)*puVar12)();
  lVar14 = FUN_0339ef18();
  if (in_stack_00000038._4_4_ != 0) {
    if (*(long *)(unaff_x21 + 0xd8) != 0) {
      plVar13 = (long *)FUN_027bd80c(*(long *)(unaff_x21 + 0xd8),
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_DebugUI_Field<Object>_GetValue__)
      ;
      puVar6 = Method_System_Collections_Generic_HashSet<PhotonView>_Clear__;
      puVar5 = Method_System_Collections_Generic_HashSet<PhotonView>_Add__;
      puVar4 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Remove__;
      puVar3 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_GetEnumerator__;
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_getter__;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar15 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04230960) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0339d86c;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,0);
LAB_0339d86c:
        uVar18 = (*(code *)*puVar12)(plVar13,puVar12[1]);
        plVar21 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        if ((uVar18 & 1) == 0) {
          if (plVar13 == (long *)0x0) goto LAB_0339da70;
          lVar15 = *plVar13;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar18 == 0) goto LAB_0339da38;
          piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_0339da20;
        }
        lVar15 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
        FUN_03313b6c(lVar15,0);
        lVar16 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0339d8dc;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar2,0);
LAB_0339d8dc:
        lVar16 = (*(code *)*puVar12)(plVar13,puVar12[1]);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(lVar15 + 0x10) = lVar16;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(char *)(lVar16 + 0x80) == '\0') {
          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_02b67c90(uVar9,lVar15,*(undefined8 *)puVar5,0);
          uVar18 = FUN_02335b00(lVar14,uVar9,*(undefined8 *)puVar3);
          if ((uVar18 & 1) != 0) {
            if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar9 = *(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x30);
            lVar16 = thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                                       );
            FUN_03313b6c(lVar16,0);
            *(undefined8 *)(lVar16 + 0x10) = uVar9;
            *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar15 + 0x10);
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar16 + 0x28) = in_stack_00000040;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar19 = *(long *)Method_System_Collections_Generic_HashSet<object>_Add__;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar8 = *(uint *)(lVar14 + 0x18);
            unaff_x21 = in_stack_00000030;
            if (uVar8 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar8 + 1;
              *(long *)(lVar15 + (long)(int)uVar8 * 8 + 0x20) = lVar16;
            }
            else {
              FUN_02d5004c(lVar14,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_0339e9a4;
  }
  goto LAB_0339da70;
LAB_0339dc90:
  if (*(long *)(lVar15 + 0x18) != 0) {
    uVar9 = FUN_03392404(unaff_x21);
    lVar16 = *plVar21;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar16);
      lVar16 = *plVar21;
    }
    lVar19 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
    if (lVar19 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar16);
        lVar16 = *plVar21;
      }
      uVar10 = **(undefined8 **)(lVar16 + 0xb8);
      lVar19 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar19,uVar10,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      plVar21 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar19;
    }
    if (*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar16 = FUN_0242e528(uVar9,lVar19,*(undefined8 *)(*(long *)(lVar15 + 0x18) + 0x60),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    if (lVar16 != 0) {
LAB_0339db88:
      if (*(char *)(lVar16 + 0x80) == '\0') {
        if (((in_stack_00000038._4_4_ != 0) && (*(char *)(lVar15 + 0x28) != '\0')) &&
           (*(uint *)(lVar15 + 0x2c) < 2)) {
          if (*(long *)(lVar16 + 0x48) == 0) {
            uVar9 = FUN_03395dc8(in_stack_00000028,*(undefined8 *)(lVar16 + 0x40));
            *(undefined8 *)(lVar16 + 0x48) = uVar9;
          }
          in_stack_00000058 = *(undefined8 *)(lVar16 + 0x90);
          if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar8 = FUN_02f211a0(&stack0x00000058,
                               *(undefined4 *)(*(long *)(in_stack_00000028 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if ((uVar8 >> 1 & 1) != 0) {
            FUN_033931b0(lVar16);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            uVar9 = FUN_033985d4();
            *(undefined8 *)(lVar15 + 0x30) = uVar9;
          }
        }
        lVar19 = FUN_03392404(unaff_x21);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar8 = FUN_027bd894(lVar19,lVar16,*(undefined8 *)puVar2);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar16 = *(long *)(lVar15 + 0x30);
        if ((lVar16 != 0) &&
           (lVar19 = thunk_FUN_01c495e4(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar19 == 0)) {
          uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,0);
        }
        if (*(uint *)(plVar13 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar13[(long)(int)uVar8 + 4] = lVar16;
        *(undefined1 *)(lVar15 + 0x38) = 1;
      }
    }
  }
  goto LAB_0339dae8;
LAB_0339e690:
  plVar21 = (long *)thunk_FUN_01c495e4(plVar21,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar21 != (long *)0x0) {
    lVar16 = *plVar21;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar12)(plVar21,puVar12[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar21 = (long *)thunk_FUN_01c495e4(plVar21,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar21 != (long *)0x0) {
    lVar16 = *plVar21;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar12)(plVar21,puVar12[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar15 + 0x38) = 1;
  goto LAB_0339dde0;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_0339da20:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0339da54;
    }
  }
LAB_0339da38:
  puVar12 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_0422fce8,0);
LAB_0339da54:
  (*(code *)*puVar12)(plVar13,puVar12[1]);
LAB_0339da70:
  lVar15 = FUN_03392404(unaff_x21);
  puVar2 = PTR_DAT_042305b8;
  if (lVar15 != 0) {
    uVar7 = FUN_027bd234(lVar15,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,uVar7);
    puVar3 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__;
    if (lVar14 != 0) {
      FUN_02d50a3c(&stack0x00000040,lVar14,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_0339dae8:
      uVar18 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
      lVar15 = in_stack_00000070;
      if ((uVar18 & 1) != 0) {
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
          lVar16 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar16 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar7 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar18 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                 (*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x48));
              uVar7 = 1;
              if ((uVar18 & 1) == 0) {
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
            *(undefined8 *)(lVar15 + 0x28) = in_stack_00000040;
          }
        }
        lVar16 = *(long *)(lVar15 + 0x20);
        if (lVar16 == 0) goto LAB_0339dc90;
        goto LAB_0339db88;
      }
      FUN_029fd610(&stack0x00000060,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
      if (in_stack_00000020 != 0) {
        uVar9 = (**(code **)(in_stack_00000020 + 0x18))
                          (*(undefined8 *)(in_stack_00000020 + 0x40),plVar13,
                           *(undefined8 *)(in_stack_00000020 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_0339c944(in_stack_00000028);
        }
        FUN_0339cd08(in_stack_00000028);
        FUN_02d50a3c(&stack0x00000040,lVar14,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_0339dde0:
        do {
          while( true ) {
            do {
              uVar18 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
              lVar15 = in_stack_00000070;
              if ((uVar18 & 1) == 0) {
                FUN_029fd610(&stack0x00000060,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                if (*(long *)(unaff_x21 + 0xe0) != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar14,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar18 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar18 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar15 = *(long *)(unaff_x21 + 0xe0);
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(lVar15 + 0x18))
                                (*(undefined8 *)(lVar15 + 0x40),uVar9,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar15 + 0x28));
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                if (in_stack_00000038._4_4_ != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar14,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar18 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar18 & 1) != 0) {
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
                      FUN_0339f5a0(in_stack_00000028,uVar9);
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                FUN_0339cf34(in_stack_00000028);
                return uVar9;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar16 = *(long *)(in_stack_00000070 + 0x18), lVar16 == 0)) ||
                     (*(char *)(lVar16 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar19 = *(long *)(in_stack_00000070 + 0x30);
            uVar18 = FUN_0339c840(in_stack_00000028,lVar16,unaff_x21,lVar19);
            if ((uVar18 & 1) == 0) break;
            plVar21 = *(long **)(lVar16 + 0x68);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar16 = *plVar21;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0339df04;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01c72498(plVar21,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,0);
LAB_0339df04:
            (*(code *)*puVar12)(plVar21,uVar9,lVar19,puVar12[1]);
            *(undefined1 *)(lVar15 + 0x38) = 1;
          }
        } while ((lVar19 == 0) || (*(char *)(lVar16 + 0x82) != '\0'));
        if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar21 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar17 = *plVar21;
        uVar10 = *(undefined8 *)(lVar16 + 0x40);
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_01c72498(plVar21,*(long *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                               ,0);
LAB_0339df30:
        plVar21 = (long *)(*(code *)*puVar12)(plVar21,uVar10,puVar12[1]);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)((long)plVar21 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar21);
          }
          if ((*(char *)((long)plVar21 + 0xf2) != '\0') && ((char)plVar21[5] == '\0')) {
            plVar21 = *(long **)(lVar16 + 0x68);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar16 = *plVar21;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01c72498(plVar21,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e000:
            lVar16 = (*(code *)*puVar12)(plVar21,uVar9,puVar12[1]);
            if (lVar16 != 0) {
              uVar10 = thunk_FUN_01c5d21c(lVar16,0);
              plVar21 = (long *)FUN_03395e54(in_stack_00000028,uVar10);
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                               0x130);
              if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar21);
              }
              if (*(char *)((long)plVar21 + 0xf1) == '\0') {
                uVar10 = *(undefined8 *)PTR_DAT_04237778;
                plVar13 = (long *)thunk_FUN_01c495e4(lVar16);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar16,uVar10);
                }
              }
              else {
                plVar13 = (long *)FUN_0338eda8(plVar21,lVar16);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar16 = *plVar13;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar12 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar18 = (*(code *)*puVar12)(plVar13,puVar12[1]);
              if ((uVar18 & 1) == 0) {
                if (*(char *)((long)plVar21 + 0xf1) == '\0') {
                  uVar10 = *(undefined8 *)PTR_DAT_04237778;
                  plVar21 = (long *)thunk_FUN_01c495e4(lVar19,uVar10);
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar19,uVar10);
                  }
                }
                else {
                  plVar21 = (long *)FUN_0338eda8(plVar21,lVar19);
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar16 = *plVar21;
                uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01c72498(plVar21,*(long *)
                                                System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                       ,0);
LAB_0339e1a8:
                plVar21 = (long *)(*(code *)*puVar12)(plVar21,puVar12[1]);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar16 = *plVar21;
                  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar18 = (*(code *)*puVar12)(plVar21,puVar12[1]);
                  if ((uVar18 & 1) == 0) goto LAB_0339e2f4;
                  lVar16 = *plVar21;
                  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar10 = (*(code *)*puVar12)(plVar21,puVar12[1]);
                  lVar16 = *plVar13;
                  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar12)(plVar13,uVar10,puVar12[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar21 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          if ((char)plVar21[5] == '\0') {
            plVar13 = *(long **)(lVar16 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar16 = *plVar13;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01c72498(plVar13,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e44c:
            lVar16 = (*(code *)*puVar12)(plVar13,uVar9,puVar12[1]);
            if (lVar16 != 0) {
              if ((char)plVar21[0x20] == '\0') {
                uVar10 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar13 = (long *)thunk_FUN_01c495e4(lVar16,uVar10);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar16,uVar10);
                }
              }
              else {
                plVar13 = (long *)OVRPlugin_Sizei___cctor(plVar21,lVar16);
              }
              if ((char)plVar21[0x20] == '\0') {
                uVar10 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar21 = (long *)thunk_FUN_01c495e4(lVar19,uVar10);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar19,uVar10);
                }
              }
              else {
                plVar21 = (long *)OVRPlugin_Sizei___cctor(plVar21,lVar19);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar16 = *plVar21;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_01c72498(plVar21,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar21 = (long *)(*(code *)*puVar12)(plVar21,puVar12[1]);
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar16 = *plVar21;
                uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar12 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar18 = (*(code *)*puVar12)(plVar21,puVar12[1]);
                if ((uVar18 & 1) == 0) goto LAB_0339e690;
                lVar16 = *plVar21;
                uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar12 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar22 = (*(code *)*puVar12)(plVar21,puVar12[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar16 = *plVar13;
                uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar12 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01c72498(plVar13,*(long *)
                                                System_Security_Cryptography_CryptoConfig_TypeInfo,1
                                      );
LAB_0339e678:
                (*(code *)*puVar12)(plVar13,auVar22._0_8_,auVar22._8_8_,puVar12[1]);
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


