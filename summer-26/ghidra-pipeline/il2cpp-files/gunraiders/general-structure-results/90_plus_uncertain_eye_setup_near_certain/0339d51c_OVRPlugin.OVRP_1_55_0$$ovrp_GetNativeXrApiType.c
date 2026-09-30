/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetNativeXrApiType
ENTRY_POINT: 0339d51c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
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

undefined8 OVRPlugin_OVRP_1_55_0__ovrp_GetNativeXrApiType(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000030;
  int iStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  plVar18 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
  puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  iStack000000000000003c = 1;
  plVar19 = *(long **)(unaff_x24 + 0x28);
  if (plVar19 != (long *)0x0) {
    lVar12 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0339d5a4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01c72498(plVar19,*(long *)
                                    Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                           ,0);
LAB_0339d5a4:
    iVar7 = (*(code *)*puVar10)(plVar19,puVar10[1]);
    if (2 < iVar7) {
      uVar11 = FUN_03392404();
      lVar12 = *plVar18;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar12);
        lVar12 = *plVar18;
      }
      lVar21 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      uVar20 = *(undefined8 *)PTR_DAT_04236ef0;
      if (lVar21 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar12);
          lVar12 = *(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        }
        puVar3 = Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        uVar22 = **(undefined8 **)(lVar12 + 0xb8);
        lVar21 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Collections_Generic_HashSet<object>__ctor__);
        FUN_02b6841c(lVar21,uVar22,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<ParameterExpression>_GetEnumerator__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar21;
      }
      uVar11 = FUN_0234eea4(uVar11,lVar21,
                            *(undefined8 *)
                             Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
      uVar11 = FUN_03153bd8(uVar20,uVar11,0);
      if (unaff_x20 == (long *)0x0) goto LAB_0339e9a4;
      plVar19 = *(long **)(unaff_x24 + 0x28);
      uVar20 = (**(code **)(*unaff_x20 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar22 = FUN_03295500(0);
      uVar11 = FUN_033704d4(*(undefined8 *)
                             Method_System_Collections_Generic_HashSet<PhotonView>_Contains__,uVar22
                            ,*(undefined8 *)(unaff_x21 + 0x60),uVar11,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar22 = thunk_FUN_01c495e4();
      uVar11 = FUN_03358c64(uVar22,uVar20,uVar11,0);
      plVar18 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      if (plVar19 == (long *)0x0) goto LAB_0339e9a4;
      lVar12 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0339d794;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_01c72498(plVar19,*(long *)puVar2,1);
LAB_0339d794:
      (*(code *)*puVar10)(plVar19,3,uVar11,0,puVar10[1]);
    }
  }
  lVar12 = FUN_0339ef18(unaff_x24);
  if (iStack000000000000003c != 0) {
    if (*(long *)(unaff_x21 + 0xd8) != 0) {
      plVar19 = (long *)FUN_027bd80c(*(long *)(unaff_x21 + 0xd8),
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_DebugUI_Field<Object>_GetValue__)
      ;
      puVar6 = Method_System_Collections_Generic_HashSet<PhotonView>_Clear__;
      puVar5 = Method_System_Collections_Generic_HashSet<PhotonView>_Add__;
      puVar4 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Remove__;
      puVar3 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_GetEnumerator__;
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_getter__;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar21 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
              puVar10 = (undefined8 *)(lVar21 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0339d86c;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01c72498(plVar19,*(long *)PTR_DAT_04230960,0);
LAB_0339d86c:
        uVar15 = (*(code *)*puVar10)(plVar19,puVar10[1]);
        plVar18 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        if ((uVar15 & 1) == 0) {
          if (plVar19 == (long *)0x0) goto LAB_0339da70;
          lVar21 = *plVar19;
          uVar15 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar15 == 0) goto LAB_0339da38;
          piVar17 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          goto LAB_0339da20;
        }
        lVar21 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
        FUN_03313b6c(lVar21,0);
        lVar13 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0339d8dc;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01c72498(plVar19,*(long *)puVar2,0);
LAB_0339d8dc:
        lVar13 = (*(code *)*puVar10)(plVar19,puVar10[1]);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(lVar21 + 0x10) = lVar13;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(char *)(lVar13 + 0x80) == '\0') {
          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_02b67c90(uVar11,lVar21,*(undefined8 *)puVar5,0);
          uVar15 = FUN_02335b00(lVar12,uVar11,*(undefined8 *)puVar3);
          if ((uVar15 & 1) != 0) {
            if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar21 + 0x10) + 0x30);
            lVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                                       );
            FUN_03313b6c(lVar13,0);
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
            *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar21 + 0x10);
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar13 + 0x28) = in_stack_00000040;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar21 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)Method_System_Collections_Generic_HashSet<object>_Add__;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar9 = *(uint *)(lVar12 + 0x18);
            unaff_x21 = in_stack_00000030;
            if (uVar9 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar9 + 1;
              *(long *)(lVar21 + (long)(int)uVar9 * 8 + 0x20) = lVar13;
            }
            else {
              FUN_02d5004c(lVar12,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_0339e9a4;
  }
  goto LAB_0339da70;
LAB_0339dc90:
  if (*(long *)(lVar21 + 0x18) != 0) {
    uVar11 = FUN_03392404(unaff_x21);
    lVar13 = *plVar18;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar13);
      lVar13 = *plVar18;
    }
    lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
    if (lVar16 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar13);
        lVar13 = *plVar18;
      }
      uVar20 = **(undefined8 **)(lVar13 + 0xb8);
      lVar16 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar16,uVar20,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      plVar18 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar16;
    }
    if (*(long *)(lVar21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar13 = FUN_0242e528(uVar11,lVar16,*(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x60),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    if (lVar13 != 0) {
LAB_0339db88:
      if (*(char *)(lVar13 + 0x80) == '\0') {
        if (((iStack000000000000003c != 0) && (*(char *)(lVar21 + 0x28) != '\0')) &&
           (*(uint *)(lVar21 + 0x2c) < 2)) {
          if (*(long *)(lVar13 + 0x48) == 0) {
            uVar11 = FUN_03395dc8(unaff_x24,*(undefined8 *)(lVar13 + 0x40));
            *(undefined8 *)(lVar13 + 0x48) = uVar11;
          }
          in_stack_00000058 = *(undefined8 *)(lVar13 + 0x90);
          if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = FUN_02f211a0(&stack0x00000058,*(undefined4 *)(*(long *)(unaff_x24 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if ((uVar9 >> 1 & 1) != 0) {
            FUN_033931b0(lVar13);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            uVar11 = FUN_033985d4();
            *(undefined8 *)(lVar21 + 0x30) = uVar11;
          }
        }
        lVar16 = FUN_03392404(unaff_x21);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar9 = FUN_027bd894(lVar16,lVar13,*(undefined8 *)puVar2);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar13 = *(long *)(lVar21 + 0x30);
        if ((lVar13 != 0) &&
           (lVar16 = thunk_FUN_01c495e4(lVar13,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0)) {
          uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar11,0);
        }
        if (*(uint *)(plVar19 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar19[(long)(int)uVar9 + 4] = lVar13;
        *(undefined1 *)(lVar21 + 0x38) = 1;
      }
    }
  }
  goto LAB_0339dae8;
LAB_0339e690:
  plVar18 = (long *)thunk_FUN_01c495e4(plVar18,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar18 != (long *)0x0) {
    lVar13 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01c72498(plVar18,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar10)(plVar18,puVar10[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar18 = (long *)thunk_FUN_01c495e4(plVar18,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar18 != (long *)0x0) {
    lVar13 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01c72498(plVar18,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar10)(plVar18,puVar10[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar21 + 0x38) = 1;
  goto LAB_0339dde0;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_0339da20:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar10 = (undefined8 *)(lVar21 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0339da54;
    }
  }
LAB_0339da38:
  puVar10 = (undefined8 *)FUN_01c72498(plVar19,*(long *)PTR_DAT_0422fce8,0);
LAB_0339da54:
  (*(code *)*puVar10)(plVar19,puVar10[1]);
LAB_0339da70:
  lVar21 = FUN_03392404(unaff_x21);
  puVar2 = PTR_DAT_042305b8;
  if (lVar21 != 0) {
    uVar8 = FUN_027bd234(lVar21,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    plVar19 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,uVar8);
    puVar3 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__;
    if (lVar12 != 0) {
      FUN_02d50a3c(&stack0x00000040,lVar12,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_0339dae8:
      uVar15 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
      lVar21 = in_stack_00000070;
      if ((uVar15 & 1) != 0) {
        if (iStack000000000000003c == 0) {
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
          lVar13 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar13 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar8 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar15 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                 (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x48));
              uVar8 = 1;
              if ((uVar15 & 1) == 0) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,uVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar21 + 0x28) = in_stack_00000040;
          }
        }
        lVar13 = *(long *)(lVar21 + 0x20);
        if (lVar13 == 0) goto LAB_0339dc90;
        goto LAB_0339db88;
      }
      FUN_029fd610(&stack0x00000060,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
      if (in_stack_00000020 != 0) {
        uVar11 = (**(code **)(in_stack_00000020 + 0x18))
                           (*(undefined8 *)(in_stack_00000020 + 0x40),plVar19,
                            *(undefined8 *)(in_stack_00000020 + 0x28));
        if (in_stack_00000018 != 0) {
          FUN_0339c944(unaff_x24);
        }
        FUN_0339cd08(unaff_x24);
        FUN_02d50a3c(&stack0x00000040,lVar12,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_0339dde0:
        do {
          while( true ) {
            do {
              uVar15 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
              lVar21 = in_stack_00000070;
              if ((uVar15 & 1) == 0) {
                FUN_029fd610(&stack0x00000060,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                if (*(long *)(unaff_x21 + 0xe0) != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar12,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar15 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar15 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar21 = *(long *)(unaff_x21 + 0xe0);
                      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(lVar21 + 0x18))
                                (*(undefined8 *)(lVar21 + 0x40),uVar11,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar21 + 0x28));
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                if (iStack000000000000003c != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar12,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar15 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar15 & 1) != 0) {
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
                      FUN_0339f5a0(unaff_x24,uVar11);
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                FUN_0339cf34(unaff_x24);
                return uVar11;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar13 = *(long *)(in_stack_00000070 + 0x18), lVar13 == 0)) ||
                     (*(char *)(lVar13 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar16 = *(long *)(in_stack_00000070 + 0x30);
            uVar15 = FUN_0339c840(unaff_x24,lVar13,unaff_x21,lVar16);
            if ((uVar15 & 1) == 0) break;
            plVar18 = *(long **)(lVar13 + 0x68);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar13 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0339df04;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01c72498(plVar18,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,0);
LAB_0339df04:
            (*(code *)*puVar10)(plVar18,uVar11,lVar16,puVar10[1]);
            *(undefined1 *)(lVar21 + 0x38) = 1;
          }
        } while ((lVar16 == 0) || (*(char *)(lVar13 + 0x82) != '\0'));
        if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar18 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0x40);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = *plVar18;
        uVar20 = *(undefined8 *)(lVar13 + 0x40);
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01c72498(plVar18,*(long *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                               ,0);
LAB_0339df30:
        plVar18 = (long *)(*(code *)*puVar10)(plVar18,uVar20,puVar10[1]);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)((long)plVar18 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar18);
          }
          if ((*(char *)((long)plVar18 + 0xf2) != '\0') && ((char)plVar18[5] == '\0')) {
            plVar18 = *(long **)(lVar13 + 0x68);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar13 = *plVar18;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01c72498(plVar18,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e000:
            lVar13 = (*(code *)*puVar10)(plVar18,uVar11,puVar10[1]);
            if (lVar13 != 0) {
              uVar20 = thunk_FUN_01c5d21c(lVar13,0);
              plVar18 = (long *)FUN_03395e54(unaff_x24,uVar20);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                               0x130);
              if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar18);
              }
              if (*(char *)((long)plVar18 + 0xf1) == '\0') {
                uVar20 = *(undefined8 *)PTR_DAT_04237778;
                plVar19 = (long *)thunk_FUN_01c495e4(lVar13);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar13,uVar20);
                }
              }
              else {
                plVar19 = (long *)FUN_0338eda8(plVar18,lVar13);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar13 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_01c72498(plVar19,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar15 = (*(code *)*puVar10)(plVar19,puVar10[1]);
              if ((uVar15 & 1) == 0) {
                if (*(char *)((long)plVar18 + 0xf1) == '\0') {
                  uVar20 = *(undefined8 *)PTR_DAT_04237778;
                  plVar18 = (long *)thunk_FUN_01c495e4(lVar16,uVar20);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar16,uVar20);
                  }
                }
                else {
                  plVar18 = (long *)FUN_0338eda8(plVar18,lVar16);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar13 = *plVar18;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)
                          FUN_01c72498(plVar18,*(long *)
                                                System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                       ,0);
LAB_0339e1a8:
                plVar18 = (long *)(*(code *)*puVar10)(plVar18,puVar10[1]);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar13 = *plVar18;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar15 = uVar15 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01c72498(plVar18,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar15 = (*(code *)*puVar10)(plVar18,puVar10[1]);
                  if ((uVar15 & 1) == 0) goto LAB_0339e2f4;
                  lVar13 = *plVar18;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar15 = uVar15 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01c72498(plVar18,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar20 = (*(code *)*puVar10)(plVar18,puVar10[1]);
                  lVar13 = *plVar19;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar15 = uVar15 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_01c72498(plVar19,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar10)(plVar19,uVar20,puVar10[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar18 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          if ((char)plVar18[5] == '\0') {
            plVar19 = *(long **)(lVar13 + 0x68);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar13 = *plVar19;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01c72498(plVar19,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e44c:
            lVar13 = (*(code *)*puVar10)(plVar19,uVar11,puVar10[1]);
            if (lVar13 != 0) {
              if ((char)plVar18[0x20] == '\0') {
                uVar20 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar19 = (long *)thunk_FUN_01c495e4(lVar13,uVar20);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar13,uVar20);
                }
              }
              else {
                plVar19 = (long *)OVRPlugin_Sizei___cctor(plVar18,lVar13);
              }
              if ((char)plVar18[0x20] == '\0') {
                uVar20 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar18 = (long *)thunk_FUN_01c495e4(lVar16,uVar20);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar16,uVar20);
                }
              }
              else {
                plVar18 = (long *)OVRPlugin_Sizei___cctor(plVar18,lVar16);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar13 = *plVar18;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_01c72498(plVar18,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar18 = (long *)(*(code *)*puVar10)(plVar18,puVar10[1]);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar13 = *plVar18;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)FUN_01c72498(plVar18,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar15 = (*(code *)*puVar10)(plVar18,puVar10[1]);
                if ((uVar15 & 1) == 0) goto LAB_0339e690;
                lVar13 = *plVar18;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)FUN_01c72498(plVar18,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar23 = (*(code *)*puVar10)(plVar18,puVar10[1]);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar13 = *plVar19;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar10 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)
                          FUN_01c72498(plVar19,*(long *)
                                                System_Security_Cryptography_CryptoConfig_TypeInfo,1
                                      );
LAB_0339e678:
                (*(code *)*puVar10)(plVar19,auVar23._0_8_,auVar23._8_8_,puVar10[1]);
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


