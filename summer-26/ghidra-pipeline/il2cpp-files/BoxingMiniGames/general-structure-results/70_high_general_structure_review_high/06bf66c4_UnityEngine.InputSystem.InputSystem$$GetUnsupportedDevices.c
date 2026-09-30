/*
FUNCTION_NAME: UnityEngine.InputSystem.InputSystem$$GetUnsupportedDevices
ENTRY_POINT: 06bf66c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06bfb22c) */
/* WARNING: Removing unreachable block (ram,0x06bf9f88) */
/* WARNING: Removing unreachable block (ram,0x06bfa32c) */
/* WARNING: Removing unreachable block (ram,0x06bf5bec) */
/* WARNING: Removing unreachable block (ram,0x06bf92f8) */
/* WARNING: Removing unreachable block (ram,0x06bf68e4) */
/* WARNING: Removing unreachable block (ram,0x06bf9adc) */
/* WARNING: Removing unreachable block (ram,0x06bf6cc8) */
/* WARNING: Removing unreachable block (ram,0x06bf6a28) */
/* WARNING: Removing unreachable block (ram,0x06bf6c24) */
/* WARNING: Removing unreachable block (ram,0x06bfa5f4) */
/* WARNING: Removing unreachable block (ram,0x06bf95ec) */
/* WARNING: Removing unreachable block (ram,0x06bf7280) */
/* WARNING: Removing unreachable block (ram,0x06bf5f30) */
/* WARNING: Removing unreachable block (ram,0x06bf6348) */
/* WARNING: Removing unreachable block (ram,0x06bf6358) */
/* WARNING: Removing unreachable block (ram,0x06bf6370) */
/* WARNING: Removing unreachable block (ram,0x06bf6378) */
/* WARNING: Removing unreachable block (ram,0x06bf63a0) */
/* WARNING: Removing unreachable block (ram,0x06bf6384) */
/* WARNING: Removing unreachable block (ram,0x06bf6390) */
/* WARNING: Removing unreachable block (ram,0x06bf63ac) */
/* WARNING: Removing unreachable block (ram,0x06bf63b8) */
/* WARNING: Removing unreachable block (ram,0x06bfb234) */
/* WARNING: Removing unreachable block (ram,0x06bf63c0) */
/* WARNING: Removing unreachable block (ram,0x06bf9c5c) */
/* WARNING: Removing unreachable block (ram,0x06bf48c8) */
/* WARNING: Removing unreachable block (ram,0x06bf9c84) */
/* WARNING: Removing unreachable block (ram,0x06bf46e8) */
/* WARNING: Removing unreachable block (ram,0x06bf9c6c) */
/* WARNING: Removing unreachable block (ram,0x06bfb0e8) */
/* WARNING: Removing unreachable block (ram,0x06bf4a48) */
/* WARNING: Removing unreachable block (ram,0x06bfa604) */
/* WARNING: Removing unreachable block (ram,0x06bf50c8) */
/* WARNING: Removing unreachable block (ram,0x06bfa8d4) */
/* WARNING: Removing unreachable block (ram,0x06bfabb0) */
/* WARNING: Removing unreachable block (ram,0x06bfad4c) */
/* WARNING: Removing unreachable block (ram,0x06bfad5c) */

void UnityEngine_InputSystem_InputSystem__GetUnsupportedDevices(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x22;
  undefined8 uVar19;
  long *unaff_x28;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long lVar25;
  long lVar26;
  float unaff_s12;
  undefined1 auVar27 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_000001c0;
  int in_stack_00000234;
  long *in_stack_000002b8;
  uint in_stack_000003b0;
  uint in_stack_000003b4;
  long in_stack_000003b8;
  long in_stack_00000420;
  undefined8 *in_stack_00000428;
  long in_stack_00000480;
  undefined8 *in_stack_00000488;
  long in_stack_00000490;
  long in_stack_00000498;
  long in_stack_000004a0;
  long in_stack_000004e8;
  
code_r0x06bf66c4:
  uVar11 = FUN_06bfc538();
  uVar12 = FUN_06bfc538();
  plVar13 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
  lVar16 = *(long *)(unaff_x22 + 0x28);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)(lVar16 + 0x18) != 0) {
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar16 = *(long *)(lVar16 + 0x20);
    if ((lVar16 != 0) &&
       (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
      uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar11,0);
    }
    if ((int)plVar13[3] != 0) {
      plVar13[4] = lVar16;
      thunk_FUN_036b7ad0(plVar13 + 4,lVar16);
      lVar16 = FUN_06bb3098(uVar11,0);
      if ((lVar16 != 0) &&
         (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
        uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar11,0);
      }
      if ((*(uint *)(plVar13 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar13[5] = lVar16;
      thunk_FUN_036b7ad0(plVar13 + 5,lVar16);
      lVar16 = FUN_06bb3098(uVar12,0);
      if ((lVar16 != 0) &&
         (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
        uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar11,0);
      }
      if (*(uint *)(plVar13 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar13[6] = lVar16;
      thunk_FUN_036b7ad0(plVar13 + 6,lVar16);
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar16 = *(long *)(in_stack_000003b8 + 0x28);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
        lVar16 = *(long *)(lVar16 + 0x38);
        if ((lVar16 != 0) &&
           (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
          uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar11,0);
        }
        if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
          plVar13[7] = lVar16;
          thunk_FUN_036b7ad0(plVar13 + 7,lVar16);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,
                       *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,plVar13,0);
          FUN_04ee7cc8();
          if (in_stack_000002b8 != (long *)0x0) {
            lVar16 = *in_stack_000002b8;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto FUN_06bf68d0;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar15 = (undefined8 *)FUN_0367cd30(in_stack_000002b8,*(long *)PTR_DAT_079f4598,0);
FUN_06bf68d0:
            (*(code *)*puVar15)(in_stack_000002b8,puVar15[1]);
          }
          plVar13 = (long *)*in_stack_00000428;
          if (plVar13 != (long *)0x0) {
            lVar16 = *plVar13;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06bf6948;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar15 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)PTR_DAT_079f4598,0);
LAB_06bf6948:
            (*(code *)*puVar15)(plVar13,puVar15[1]);
          }
          if (in_stack_00000420 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c00();
          }
          plVar13 = (long *)*in_stack_00000058;
          if (plVar13 != (long *)0x0) {
            lVar16 = *plVar13;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06bf72e4;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar15 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)PTR_DAT_079f4598,0);
LAB_06bf72e4:
            (*(code *)*puVar15)(plVar13,puVar15[1]);
          }
          if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c00();
          }
LAB_06bf354c:
          while( true ) {
            do {
              do {
                do {
                  do {
                    do {
                      uVar17 = FUN_04ee7c30();
                      if ((uVar17 & 1) == 0) {
                        FUN_06bfbedc();
                        return;
                      }
                      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                    } while (*(char *)(in_stack_000003b8 + 0x10) != '\0');
                    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                    }
                    uVar17 = FUN_06bfbf98(in_stack_000003b8,&stack0x000003b4);
                  } while ((uVar17 & 1) == 0);
                  if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar16 + 0x18) <= in_stack_000003b4) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  unaff_x22 = FUN_06bb3114(*(undefined8 *)
                                            (lVar16 + (long)(int)in_stack_000003b4 * 8 + 0x20),0);
                  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                  }
                  uVar17 = FUN_06bfbf98(unaff_x22,&stack0x000003b0);
                } while ((uVar17 & 1) == 0);
                if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(long *)(unaff_x22 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                iVar3 = FUN_053a3a50(*(long *)(unaff_x22 + 0x58),
                                     *(undefined8 *)
                                      System_Collections_Generic_KeyValuePair<string,_string>_TypeInfo
                                    );
              } while (iVar3 != 1);
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar17 = FUN_06bfc160(unaff_x22);
            } while ((uVar17 & 1) != 0);
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar17 & 1) == 0) break;
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36770,0);
            if ((uVar17 & 1) == 0) break;
            plVar7 = (long *)FUN_06bfc93c();
            plVar13 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((int)plVar7[9] == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)PTR_DAT_07a33940;
              if (plVar13 == (long *)0x0) {
                uVar17 = (ulong)*(byte *)(lVar16 + 0x130);
LAB_06bf3774:
                plVar13 = (long *)0x0;
              }
              else {
                uVar17 = (ulong)*(byte *)(lVar16 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3774;
                if (*(long *)(*(long *)(*plVar13 + 200) + uVar17 * 8 + -8) != lVar16) {
                  plVar13 = (long *)0x0;
                }
              }
              if ((uint)*(byte *)(*plVar7 + 0x130) < (uint)uVar17) {
                plVar7 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar7 + 200) + uVar17 * 8 + -8) != lVar16) {
                plVar7 = (long *)0x0;
              }
              plVar13 = (long *)FUN_06c8a0c8(in_stack_000004e8,plVar13,plVar7,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
              if (plVar13 == (long *)0x0) {
                uVar17 = (ulong)*(byte *)(lVar16 + 0x130);
LAB_06bf3734:
                plVar13 = (long *)0x0;
              }
              else {
                uVar17 = (ulong)*(byte *)(lVar16 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3734;
                if (*(long *)(*(long *)(*plVar13 + 200) + uVar17 * 8 + -8) != lVar16) {
                  plVar13 = (long *)0x0;
                }
              }
              if ((uint)*(byte *)(*plVar7 + 0x130) < (uint)uVar17) {
                plVar7 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar7 + 200) + uVar17 * 8 + -8) != lVar16) {
                plVar7 = (long *)0x0;
              }
              plVar13 = (long *)FUN_06c8a240(in_stack_000004e8,plVar13,plVar7,0);
            }
            in_stack_00000488 = (undefined8 *)&stack0x000003a8;
            in_stack_00000480 = 0;
            uVar11 = FUN_06bfc538();
            uVar12 = *(undefined8 *)PTR_DAT_07a36770;
            if (in_stack_000003b4 == 1) {
              plVar7 = (long *)FUN_03642a4c(*(undefined8 *)
                                             System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar16 = FUN_06bb3098(uVar11,0);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((lVar16 != 0) &&
                 (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar11,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar7[4] = lVar16;
              thunk_FUN_036b7ad0(plVar7 + 4,lVar16);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) <= in_stack_000003b0) {
LAB_06bf4858:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar16 = *(long *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              if ((lVar16 != 0) &&
                 (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar11,0);
              }
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_06bf4858;
              plVar7[5] = lVar16;
              thunk_FUN_036b7ad0(plVar7 + 5,lVar16);
            }
            else {
              plVar7 = (long *)FUN_03642a4c(*(undefined8 *)
                                             System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) <= in_stack_000003b0) {
LAB_06bf4850:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              if ((lVar16 != 0) &&
                 (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar11,0);
              }
              if ((int)plVar7[3] == 0) goto LAB_06bf4850;
              plVar7[4] = lVar16;
              thunk_FUN_036b7ad0(plVar7 + 4,lVar16);
              lVar16 = FUN_06bb3098(uVar11,0);
              if ((lVar16 != 0) &&
                 (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
              {
                uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar11,0);
              }
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar7[5] = lVar16;
              thunk_FUN_036b7ad0(plVar7 + 5,lVar16);
            }
            FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar12,plVar7,0);
            FUN_04ee7cc8();
            if (plVar13 != (long *)0x0) {
              lVar16 = *plVar13;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_06bf39d4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar15 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)PTR_DAT_079f4598,0);
LAB_06bf39d4:
              (*(code *)*puVar15)(plVar13,puVar15[1]);
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36770,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf3a98:
                if (in_stack_000003b0 == 0) {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  lVar16 = *(long *)PTR_DAT_07a33940;
                  if (plVar7 == (long *)0x0) {
LAB_06bf3d50:
                    plVar7 = (long *)0x0;
                    if (plVar13 == (long *)0x0) goto LAB_06bf448c;
LAB_06bf4478:
                    if (*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf448c;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 +
                                 -8) != lVar16) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  else {
                    if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3d50;
                    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 +
                                 -8) != lVar16) {
                      plVar7 = (long *)0x0;
                    }
                    if (plVar13 != (long *)0x0) goto LAB_06bf4478;
LAB_06bf448c:
                    plVar13 = (long *)0x0;
                  }
                  lVar16 = FUN_06c8a0c8(in_stack_000004e8,plVar7,plVar13,0);
                }
                else {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  lVar16 = *(long *)PTR_DAT_07a33940;
                  if (plVar13 == (long *)0x0) {
LAB_06bf3ac8:
                    plVar13 = (long *)0x0;
                    if (plVar7 == (long *)0x0)
                    goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
LAB_06bf3f1c:
                    if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar16 + 0x130))
                    goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
                    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 +
                                 -8) != lVar16) {
                      plVar7 = (long *)0x0;
                    }
                  }
                  else {
                    if (*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3ac8;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 +
                                 -8) != lVar16) {
                      plVar13 = (long *)0x0;
                    }
                    if (plVar7 != (long *)0x0) goto LAB_06bf3f1c;
UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson:
                    plVar7 = (long *)0x0;
                  }
                  lVar16 = FUN_06c89dd8(in_stack_000004e8,plVar13,plVar7,0);
                }
              }
              else {
                lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
                bVar1 = *(byte *)(lVar16 + 0x130);
                uVar17 = (ulong)bVar1;
                if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar13 + 200) + uVar17 * 8 + -8) != lVar16))
                goto LAB_06bf3a98;
                if (in_stack_000003b0 == 0) {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((plVar7 == (long *)0x0) || (*(byte *)(*plVar7 + 0x130) < bVar1)) {
                    plVar7 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar7 + 200) + uVar17 * 8 + -8) != lVar16) {
                    plVar7 = (long *)0x0;
                  }
                  lVar16 = FUN_06c8a240(in_stack_000004e8,plVar7,plVar13,0);
                }
                else {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((plVar7 == (long *)0x0) || (*(byte *)(*plVar7 + 0x130) < bVar1)) {
                    plVar7 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar7 + 200) + uVar17 * 8 + -8) != lVar16) {
                    plVar7 = (long *)0x0;
                  }
                  lVar16 = FUN_06c89f50(in_stack_000004e8,plVar13,plVar7,0);
                }
              }
              uVar11 = FUN_06bfc538();
              if (in_stack_000003b0 == 0) {
                plVar13 = (long *)FUN_03642a4c(*(undefined8 *)
                                                System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06bfb104:
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(lVar14 + 0x20);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar10 == 0)) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((int)plVar13[3] == 0) goto LAB_06bfb104;
                plVar13[4] = lVar14;
                thunk_FUN_036b7ad0(plVar13 + 4,lVar14);
                lVar14 = FUN_06bb3098(uVar11,0);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar10 == 0)) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((*(uint *)(plVar13 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar13[5] = lVar14;
                thunk_FUN_036b7ad0(plVar13 + 5,lVar14);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar13,0);
                FUN_04ee7cc8();
              }
              else {
                plVar13 = (long *)FUN_03642a4c(*(undefined8 *)
                                                System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = FUN_06bb3098(uVar11,0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar10 == 0)) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar13[4] = lVar14;
                thunk_FUN_036b7ad0(plVar13 + 4,lVar14);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0e0:
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar10 == 0)) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((*(uint *)(plVar13 + 3) & 0xfffffffe) == 0) goto LAB_06bfb0e0;
                plVar13[5] = lVar14;
                thunk_FUN_036b7ad0(plVar13 + 5,lVar14);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,plVar13,0);
                FUN_04ee7cc8();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06ae5f08(lVar16,0);
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
                if (in_stack_000004e8 == 0) {
LAB_06bfb11c:
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)PTR_DAT_07a33940;
LAB_06bf3d70:
                plVar13 = (long *)0x0;
                if (plVar7 == (long *)0x0) {
LAB_06bf3d8c:
                  plVar7 = (long *)0x0;
                }
                else {
LAB_06bf3d78:
                  if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3d8c;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8
                               ) != lVar16) {
                    plVar7 = (long *)0x0;
                  }
                }
                lVar16 = FUN_06c89dd8(in_stack_000004e8,plVar13,plVar7,0);
              }
              else {
                lVar14 = *plVar13;
                lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
                bVar1 = *(byte *)(lVar16 + 0x130);
                if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16)) {
                  if (in_stack_000004e8 == 0) goto LAB_06bfb11c;
                  lVar16 = *(long *)PTR_DAT_07a33940;
                  if (*(byte *)(lVar14 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3d70;
                  if (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8)
                      != lVar16) {
                    plVar13 = (long *)0x0;
                  }
                  if (plVar7 != (long *)0x0) goto LAB_06bf3d78;
                  goto LAB_06bf3d8c;
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((plVar7 == (long *)0x0) || (*(byte *)(*plVar7 + 0x130) < bVar1)) {
                  plVar7 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
                  plVar7 = (long *)0x0;
                }
                lVar16 = FUN_06c89f50(in_stack_000004e8,plVar13,plVar7,0);
              }
              uVar11 = FUN_06bfc538();
              plVar13 = (long *)FUN_03642a4c(*(undefined8 *)
                                              System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (in_stack_000003b0 < *(uint *)(lVar14 + 0x18)) {
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar10 == 0)) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((int)plVar13[3] != 0) {
                  plVar13[4] = lVar14;
                  thunk_FUN_036b7ad0(plVar13 + 4,lVar14);
                  lVar14 = FUN_06bb3098(uVar11,0);
                  if ((lVar14 != 0) &&
                     (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar10 == 0)) {
                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,0);
                  }
                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar13[5] = lVar14;
                  thunk_FUN_036b7ad0(plVar13 + 5,lVar14);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar13,0
                              );
                  FUN_04ee7cc8();
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_06ae5f08(lVar16,0);
                  goto LAB_06bf354c;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36348,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36348,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
                if (in_stack_000004e8 == 0) {
LAB_06bfb148:
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)PTR_DAT_07a33940;
LAB_06bf3da8:
                plVar13 = (long *)0x0;
LAB_06bf3dac:
                if (plVar7 == (long *)0x0) {
LAB_06bf3dc4:
                  plVar7 = (long *)0x0;
                }
                else {
                  if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3dc4;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8
                               ) != lVar16) {
                    plVar7 = (long *)0x0;
                  }
                }
                lVar16 = FUN_06c8a3b8(in_stack_000004e8,plVar13,plVar7,0);
              }
              else {
                lVar14 = *plVar13;
                lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
                bVar1 = *(byte *)(lVar16 + 0x130);
                if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar16)) {
                  if (in_stack_000004e8 == 0) goto LAB_06bfb148;
                  lVar16 = *(long *)PTR_DAT_07a33940;
                  if (*(byte *)(lVar14 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3da8;
                  if (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8)
                      != lVar16) {
                    plVar13 = (long *)0x0;
                  }
                  goto LAB_06bf3dac;
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((plVar7 == (long *)0x0) || (*(byte *)(*plVar7 + 0x130) < bVar1)) {
                  plVar7 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
                  plVar7 = (long *)0x0;
                }
                lVar16 = FUN_06c8a530(in_stack_000004e8,plVar13,plVar7,0);
              }
              uVar11 = FUN_06bfc538();
              plVar13 = (long *)FUN_03642a4c(*(undefined8 *)
                                              System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (in_stack_000003b0 < *(uint *)(lVar14 + 0x18)) {
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar10 == 0)) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((int)plVar13[3] != 0) {
                  plVar13[4] = lVar14;
                  thunk_FUN_036b7ad0(plVar13 + 4,lVar14);
                  lVar14 = FUN_06bb3098(uVar11,0);
                  if ((lVar14 != 0) &&
                     (lVar10 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar10 == 0)) {
                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,0);
                  }
                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar13[5] = lVar14;
                  thunk_FUN_036b7ad0(plVar13 + 5,lVar14);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,plVar13,0
                              );
                  FUN_04ee7cc8();
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_06ae5f08(lVar16,0);
                  goto LAB_06bf354c;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf3d20:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf3d20;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bf40e0:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf40e0;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              plVar8 = (long *)FUN_06bfc93c();
              if (plVar8 == (long *)0x0) {
UnityEngine_InputSystem_InputInteractionContext__get_control:
                plVar8 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1)
                goto UnityEngine_InputSystem_InputInteractionContext__get_control;
                if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar8 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bf4188:
                plVar9 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf4188;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c8a3b8(in_stack_000004e8,plVar13,plVar8,0);
              in_stack_00000058 = (undefined8 *)&stack0x000003a0;
              in_stack_00000050 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar11 = FUN_06c8a3b8(in_stack_000004e8,plVar7,plVar8,0);
              in_stack_000000c8 = (undefined8 *)&stack0x00000398;
              in_stack_000000c0 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar13 = (long *)FUN_06c89dd8(in_stack_000004e8,uVar11,plVar9,0);
              in_stack_000000b8 = (undefined8 *)&stack0x00000390;
              in_stack_000000b0 = 0;
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar2 = FUN_06ae539c(&stack0x00000360,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              in_stack_00000488 = (undefined8 *)0x0;
              in_stack_00000480 = 0;
              FUN_06ae4cb4(&stack0x00000480,uVar2,0);
              (**(code **)(*plVar13 + 0x188))
                        (plVar13,&stack0x000003c0,*(undefined8 *)(*plVar13 + 400));
              uVar11 = FUN_06bfc538();
              uVar12 = FUN_06bfc538();
              plVar7 = (long *)FUN_03642a4c(*(undefined8 *)
                                             System_Func<int,_int,_int,_float>_TypeInfo,3);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar16 + 0x18) != 0) {
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(lVar16 + 0x20);
                if ((lVar16 != 0) &&
                   (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0
                   )) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((int)plVar7[3] != 0) {
                  plVar7[4] = lVar16;
                  thunk_FUN_036b7ad0(plVar7 + 4,lVar16);
                  lVar16 = FUN_06bb3098(uVar11,0);
                  if ((lVar16 != 0) &&
                     (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                     lVar14 == 0)) {
                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,0);
                  }
                  if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar7[5] = lVar16;
                  thunk_FUN_036b7ad0(plVar7 + 5,lVar16);
                  lVar16 = FUN_06bb3098(uVar12,0);
                  if ((lVar16 != 0) &&
                     (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                     lVar14 == 0)) {
                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,0);
                  }
                  if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar7[6] = lVar16;
                  thunk_FUN_036b7ad0(plVar7 + 6,lVar16);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,
                               *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,plVar7,0);
                  FUN_04ee7cc8();
                  if (plVar13 != (long *)0x0) {
                    lVar16 = *plVar13;
                    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                          puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_06bf46d4;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)PTR_DAT_079f4598,0);
LAB_06bf46d4:
                    (*(code *)*puVar15)(plVar13,puVar15[1]);
                  }
                  plVar13 = (long *)*in_stack_000000c8;
                  if (plVar13 != (long *)0x0) {
                    lVar16 = *plVar13;
                    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                          puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_06bf474c;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)PTR_DAT_079f4598,0);
LAB_06bf474c:
                    (*(code *)*puVar15)(plVar13,puVar15[1]);
                  }
                  if (in_stack_000000c0 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c00();
                  }
                  plVar13 = (long *)*in_stack_00000058;
                  if (plVar13 != (long *)0x0) {
                    lVar16 = *plVar13;
                    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                          puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_06bf4aac;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)PTR_DAT_079f4598,0);
LAB_06bf4aac:
                    (*(code *)*puVar15)(plVar13,puVar15[1]);
                  }
                  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c00();
                  }
                  goto LAB_06bf354c;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf4b3c:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf4b3c;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bf4b90:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf4b90;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar2 = FUN_06bb2960(*(long *)(lVar16 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = FUN_06bb2960(*(long *)(lVar16 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c896c8(uVar2,0,in_stack_000004e8,plVar13,0);
              in_stack_00000058 = (undefined8 *)&stack0x00000358;
              in_stack_00000050 = 0;
              if (plVar7 == (long *)0x0) {
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_000004a0 = 0;
                in_stack_00000498 = 0;
                in_stack_00000490 = 0;
                FUN_06ae4cb4(&stack0x00000480,uVar2,0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000088 = 0;
                in_stack_00000080 = 0;
                in_stack_00000098 = 0;
                in_stack_00000090 = 0;
                in_stack_000000a0 = 0;
                plVar13 = (long *)FUN_06c8aaf0(uVar20,in_stack_000004e8,&stack0x00000080,0);
              }
              else {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                plVar13 = (long *)FUN_06c896c8(uVar2,uVar20,in_stack_000004e8,plVar7,0);
              }
              in_stack_00000488 = (undefined8 *)&stack0x00000350;
              in_stack_00000480 = 0;
              uVar11 = FUN_06bfc538();
              uVar12 = FUN_06bfc538();
              plVar7 = (long *)FUN_03642a4c(*(undefined8 *)
                                             System_Func<int,_int,_int,_float>_TypeInfo,10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar16 + 0x18) != 0) {
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(lVar16 + 0x20);
                if ((lVar16 != 0) &&
                   (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0
                   )) {
                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar11,0);
                }
                if ((int)plVar7[3] != 0) {
                  plVar7[4] = lVar16;
                  thunk_FUN_036b7ad0(plVar7 + 4,lVar16);
                  lVar16 = FUN_06bb3098(uVar11,0);
                  if ((lVar16 != 0) &&
                     (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                     lVar14 == 0)) {
                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,0);
                  }
                  if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar7[5] = lVar16;
                  thunk_FUN_036b7ad0(plVar7 + 5,lVar16);
                  lVar16 = FUN_06bb3098(uVar12,0);
                  if ((lVar16 != 0) &&
                     (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                     lVar14 == 0)) {
                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,0);
                  }
                  if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar7[6] = lVar16;
                  thunk_FUN_036b7ad0(plVar7 + 6,lVar16);
                  lVar16 = *(long *)(unaff_x22 + 0x28);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
                    lVar16 = *(long *)(lVar16 + 0x38);
                    if ((lVar16 != 0) &&
                       (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar14 == 0)) {
                      uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                      FUN_03642acc(uVar11,0);
                    }
                    if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                      plVar7[7] = lVar16;
                      thunk_FUN_036b7ad0(plVar7 + 7,lVar16);
                      lVar16 = *(long *)(unaff_x22 + 0x28);
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      if (4 < *(uint *)(lVar16 + 0x18)) {
                        lVar16 = *(long *)(lVar16 + 0x40);
                        if ((lVar16 != 0) &&
                           (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar14 == 0)) {
                          uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                          FUN_03642acc(uVar11,0);
                        }
                        if (4 < *(uint *)(plVar7 + 3)) {
                          plVar7[8] = lVar16;
                          thunk_FUN_036b7ad0(plVar7 + 8,lVar16);
                          lVar16 = *(long *)(unaff_x22 + 0x28);
                          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03642c18();
                          }
                          if (5 < *(uint *)(lVar16 + 0x18)) {
                            lVar16 = *(long *)(lVar16 + 0x48);
                            if ((lVar16 != 0) &&
                               (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar14 == 0)) {
                              uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                              FUN_03642acc(uVar11,0);
                            }
                            if (5 < *(uint *)(plVar7 + 3)) {
                              plVar7[9] = lVar16;
                              thunk_FUN_036b7ad0(plVar7 + 9,lVar16);
                              lVar16 = *(long *)(unaff_x22 + 0x28);
                              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_03642c18();
                              }
                              if (6 < *(uint *)(lVar16 + 0x18)) {
                                lVar16 = *(long *)(lVar16 + 0x50);
                                if ((lVar16 != 0) &&
                                   (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                        (*plVar7 + 0x40)),
                                   lVar14 == 0)) {
                                  uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                  FUN_03642acc(uVar11,0);
                                }
                                if (6 < *(uint *)(plVar7 + 3)) {
                                  plVar7[10] = lVar16;
                                  thunk_FUN_036b7ad0(plVar7 + 10,lVar16);
                                  lVar16 = *(long *)(unaff_x22 + 0x28);
                                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03642c18();
                                  }
                                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffff8) != 0) {
                                    lVar16 = *(long *)(lVar16 + 0x58);
                                    if ((lVar16 != 0) &&
                                       (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                            (*plVar7 + 0x40)),
                                       lVar14 == 0)) {
                                      uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                      FUN_03642acc(uVar11,0);
                                    }
                                    if ((*(uint *)(plVar7 + 3) & 0xfffffff8) != 0) {
                                      plVar7[0xb] = lVar16;
                                      thunk_FUN_036b7ad0(plVar7 + 0xb,lVar16);
                                      lVar16 = *(long *)(unaff_x22 + 0x28);
                                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03642c18();
                                      }
                                      if (8 < *(uint *)(lVar16 + 0x18)) {
                                        lVar16 = *(long *)(lVar16 + 0x60);
                                        if ((lVar16 != 0) &&
                                           (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                                (*plVar7 + 0x40)),
                                           lVar14 == 0)) {
                                          uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                          FUN_03642acc(uVar11,0);
                                        }
                                        if (8 < *(uint *)(plVar7 + 3)) {
                                          plVar7[0xc] = lVar16;
                                          thunk_FUN_036b7ad0(plVar7 + 0xc,lVar16);
                                          lVar16 = *(long *)(unaff_x22 + 0x28);
                                          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_03642c18();
                                          }
                                          if (9 < *(uint *)(lVar16 + 0x18)) {
                                            lVar16 = *(long *)(lVar16 + 0x68);
                                            if ((lVar16 != 0) &&
                                               (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                           ), lVar14 == 0)) {
                                              uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                              FUN_03642acc(uVar11,0);
                                            }
                                            if (9 < *(uint *)(plVar7 + 3)) {
                                              plVar7[0xd] = lVar16;
                                              thunk_FUN_036b7ad0(plVar7 + 0xd,lVar16);
                                              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar7,0);
                                              FUN_04ee7cc8();
                                              if (plVar13 != (long *)0x0) {
                                                lVar16 = *plVar13;
                                                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                if (uVar17 != 0) {
                                                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar18 + -2) ==
                                                        *(long *)PTR_DAT_079f4598) {
                                                      puVar15 = (undefined8 *)
                                                                (lVar16 + (long)*piVar18 * 0x10 +
                                                                0x138);
                                                      goto LAB_06bf50b4;
                                                    }
                                                    uVar17 = uVar17 - 1;
                                                    piVar18 = piVar18 + 4;
                                                  } while (uVar17 != 0);
                                                }
                                                puVar15 = (undefined8 *)
                                                          FUN_0367cd30(plVar13,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf50b4:
                                                (*(code *)*puVar15)(plVar13,puVar15[1]);
                                              }
                                              plVar13 = (long *)*in_stack_00000058;
                                              if (plVar13 != (long *)0x0) {
                                                lVar16 = *plVar13;
                                                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                if (uVar17 != 0) {
                                                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar18 + -2) ==
                                                        *(long *)PTR_DAT_079f4598) {
                                                      puVar15 = (undefined8 *)
                                                                (lVar16 + (long)*piVar18 * 0x10 +
                                                                0x138);
                                                      goto LAB_06bf512c;
                                                    }
                                                    uVar17 = uVar17 - 1;
                                                    piVar18 = piVar18 + 4;
                                                  } while (uVar17 != 0);
                                                }
                                                puVar15 = (undefined8 *)
                                                          FUN_0367cd30(plVar13,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf512c:
                                                (*(code *)*puVar15)(plVar13,puVar15[1]);
                                              }
                                              if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_03642c00();
                                              }
                                              goto LAB_06bf354c;
                                            }
                                          }
                    /* WARNING: Subroutine does not return */
                                          FUN_03642c20();
                                        }
                                      }
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c20();
                                    }
                                  }
                    /* WARNING: Subroutine does not return */
                                  FUN_03642c20();
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_03642c20();
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_03642c20();
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_03642c20();
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Model_Output,_Model_Output>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              fVar21 = (float)FUN_06bb2960(*(long *)(lVar16 + 0x38),0);
              if (fVar21 == 0.0) {
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (*(long *)(lVar16 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar2 = FUN_06bb2960(*(long *)(lVar16 + 0x30),0);
                plVar13 = (long *)FUN_06bfc93c();
                if (plVar13 == (long *)0x0) {
LAB_06bf5210:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf5210;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18(0,plVar13);
                }
                plVar13 = (long *)FUN_06c896c8(uVar2,0,in_stack_000004e8,plVar13,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000348;
                in_stack_00000480 = 0;
                uVar11 = FUN_06bfc538();
                plVar7 = (long *)FUN_03642a4c(*(undefined8 *)
                                               System_Func<int,_int,_int,_float>_TypeInfo,10);
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar16 + 0x18) != 0) {
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  lVar16 = *(long *)(lVar16 + 0x20);
                  if ((lVar16 != 0) &&
                     (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                     lVar14 == 0)) {
                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar11,0);
                  }
                  if ((int)plVar7[3] != 0) {
                    plVar7[4] = lVar16;
                    thunk_FUN_036b7ad0(plVar7 + 4,lVar16);
                    lVar16 = FUN_06bb3098(uVar11,0);
                    if ((lVar16 != 0) &&
                       (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar14 == 0)) {
                      uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                      FUN_03642acc(uVar11,0);
                    }
                    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c20();
                    }
                    plVar7[5] = lVar16;
                    thunk_FUN_036b7ad0(plVar7 + 5,lVar16);
                    if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    if (2 < *(uint *)(lVar16 + 0x18)) {
                      lVar16 = *(long *)(lVar16 + 0x30);
                      if ((lVar16 != 0) &&
                         (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar14 == 0)) {
                        uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                        FUN_03642acc(uVar11,0);
                      }
                      if (2 < *(uint *)(plVar7 + 3)) {
                        plVar7[6] = lVar16;
                        thunk_FUN_036b7ad0(plVar7 + 6,lVar16);
                        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
                          lVar16 = *(long *)(lVar16 + 0x38);
                          if ((lVar16 != 0) &&
                             (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar14 == 0)) {
                            uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                            FUN_03642acc(uVar11,0);
                          }
                          if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                            plVar7[7] = lVar16;
                            thunk_FUN_036b7ad0(plVar7 + 7,lVar16);
                            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03642c18();
                            }
                            lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03642c18();
                            }
                            if (4 < *(uint *)(lVar16 + 0x18)) {
                              lVar16 = *(long *)(lVar16 + 0x40);
                              if ((lVar16 != 0) &&
                                 (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar7 + 0x40)
                                                             ), lVar14 == 0)) {
                                uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                FUN_03642acc(uVar11,0);
                              }
                              if (4 < *(uint *)(plVar7 + 3)) {
                                plVar7[8] = lVar16;
                                thunk_FUN_036b7ad0(plVar7 + 8,lVar16);
                                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03642c18();
                                }
                                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03642c18();
                                }
                                if (5 < *(uint *)(lVar16 + 0x18)) {
                                  lVar16 = *(long *)(lVar16 + 0x48);
                                  if ((lVar16 != 0) &&
                                     (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                     lVar14 == 0)) {
                                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                    FUN_03642acc(uVar11,0);
                                  }
                                  if (5 < *(uint *)(plVar7 + 3)) {
                                    plVar7[9] = lVar16;
                                    thunk_FUN_036b7ad0(plVar7 + 9,lVar16);
                                    if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c18();
                                    }
                                    lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c18();
                                    }
                                    if (6 < *(uint *)(lVar16 + 0x18)) {
                                      lVar16 = *(long *)(lVar16 + 0x50);
                                      if ((lVar16 != 0) &&
                                         (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                              (*plVar7 + 0x40)),
                                         lVar14 == 0)) {
                                        uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                        FUN_03642acc(uVar11,0);
                                      }
                                      if (6 < *(uint *)(plVar7 + 3)) {
                                        plVar7[10] = lVar16;
                                        thunk_FUN_036b7ad0(plVar7 + 10,lVar16);
                                        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03642c18();
                                        }
                                        lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03642c18();
                                        }
                                        if ((*(uint *)(lVar16 + 0x18) & 0xfffffff8) != 0) {
                                          lVar16 = *(long *)(lVar16 + 0x58);
                                          if ((lVar16 != 0) &&
                                             (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                             lVar14 == 0)) {
                                            uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                            FUN_03642acc(uVar11,0);
                                          }
                                          if ((*(uint *)(plVar7 + 3) & 0xfffffff8) != 0) {
                                            plVar7[0xb] = lVar16;
                                            thunk_FUN_036b7ad0(plVar7 + 0xb,lVar16);
                                            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_03642c18();
                                            }
                                            lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_03642c18();
                                            }
                                            if (8 < *(uint *)(lVar16 + 0x18)) {
                                              lVar16 = *(long *)(lVar16 + 0x60);
                                              if ((lVar16 != 0) &&
                                                 (lVar14 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40)),
                                                 lVar14 == 0)) {
                                                uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                                FUN_03642acc(uVar11,0);
                                              }
                                              if (8 < *(uint *)(plVar7 + 3)) {
                                                plVar7[0xc] = lVar16;
                                                thunk_FUN_036b7ad0(plVar7 + 0xc,lVar16);
                                                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  FUN_03642c18();
                                                }
                                                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  FUN_03642c18();
                                                }
                                                if (9 < *(uint *)(lVar16 + 0x18)) {
                                                  lVar16 = *(long *)(lVar16 + 0x68);
                                                  if ((lVar16 != 0) &&
                                                     (lVar14 = thunk_FUN_0367fd24(lVar16,*(
                                                  undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
                                                    uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                                    FUN_03642acc(uVar11,0);
                                                  }
                                                  if (9 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0xd] = lVar16;
                                                    thunk_FUN_036b7ad0(plVar7 + 0xd,lVar16);
                                                    FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar7,0);
                                                  FUN_04ee7cc8();
                                                  if (plVar13 != (long *)0x0) {
                                                    lVar16 = *plVar13;
                                                    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                    if (uVar17 != 0) {
                                                      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar18 + -2) ==
                                                            *(long *)PTR_DAT_079f4598) {
                                                          puVar15 = (undefined8 *)
                                                                    (lVar16 + (long)*piVar18 * 0x10
                                                                    + 0x138);
                                                          goto LAB_06bf5654;
                                                        }
                                                        uVar17 = uVar17 - 1;
                                                        piVar18 = piVar18 + 4;
                                                      } while (uVar17 != 0);
                                                    }
                                                    puVar15 = (undefined8 *)
                                                              FUN_0367cd30(plVar13,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf5654:
                                                  (*(code *)*puVar15)(plVar13,puVar15[1]);
                                                  }
                                                  goto LAB_06bf354c;
                                                  }
                                                }
                    /* WARNING: Subroutine does not return */
                                                FUN_03642c20();
                                              }
                                            }
                    /* WARNING: Subroutine does not return */
                                            FUN_03642c20();
                                          }
                                        }
                    /* WARNING: Subroutine does not return */
                                        FUN_03642c20();
                                      }
                                    }
                    /* WARNING: Subroutine does not return */
                                    FUN_03642c20();
                                  }
                                }
                    /* WARNING: Subroutine does not return */
                                FUN_03642c20();
                              }
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_03642c20();
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_03642c20();
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf56e0:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf56e0;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bf5734:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf5734;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              plVar8 = (long *)FUN_06bfc93c();
              if (plVar8 == (long *)0x0) {
LAB_06bf5790:
                plVar8 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf5790;
                if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar8 = (long *)0x0;
                }
              }
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = plVar13[7];
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06ae539c(&stack0x00000360,0);
              iVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              if (((iVar3 == iVar4) && ((int)plVar8[7] <= (int)plVar13[7])) &&
                 ((int)lVar16 + -1 <= (int)plVar8[7])) {
                iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item
                                  (&stack0x00000360,1 - (int)lVar16,0);
                iVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                if (iVar3 == iVar4) {
                  uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                  in_stack_00000070 = 0;
                  in_stack_00000058 = (undefined8 *)0x0;
                  in_stack_00000050 = 0;
                  in_stack_00000068 = 0;
                  in_stack_00000060 = 0;
                  FUN_06ae4cb4(&stack0x00000050,uVar2,0);
                  in_stack_000004a0 = in_stack_00000070;
                  in_stack_00000498 = in_stack_00000068;
                  in_stack_00000490 = in_stack_00000060;
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar11 = FUN_03e16e50(in_stack_000004e8,plVar8,&stack0x00000480,
                                        *(undefined8 *)
                                         System_Collections_Generic_List<IFDStructure>_TypeInfo);
                  in_stack_00000488 = (undefined8 *)&stack0x00000340;
                  in_stack_00000480 = 0;
                  if (plVar7 != (long *)0x0) {
                    if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    FUN_06c89dd8(in_stack_000004e8,plVar7,uVar11,0);
                  }
                  in_stack_00000058 = (undefined8 *)&stack0x00000338;
                  in_stack_00000050 = 0;
                  uVar11 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,10
                                       );
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar12 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar12);
                  FUN_03154bd8(lVar16,0,uVar12);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar12 = *(undefined8 *)(lVar14 + 0x28);
                  FUN_03154b74(lVar16,uVar12);
                  FUN_03154bd8(lVar16,1,uVar12);
                  uVar11 = FUN_06bb3098(uVar11,0);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,2,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x38);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,3,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x40);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,4,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x48);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,5,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar14 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x50);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,6,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x58);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,7,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar14 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x60);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,8,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(uint *)(lVar14 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x68);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,9,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,
                               *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                               lVar16,0);
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000050);
                  FUN_03154064(&stack0x00000480);
                }
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf5c78:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf5c78;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bf5ccc:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf5ccc;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              plVar8 = (long *)FUN_06bfc93c();
              if (plVar8 == (long *)0x0) {
LAB_06bf5d20:
                plVar8 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf5d20;
                if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar8 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bf5d74:
                plVar9 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf5d74;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = plVar8[4];
              lVar14 = plVar8[3];
              lVar26 = plVar8[6];
              lVar25 = plVar8[5];
              lVar16 = plVar8[7];
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06adfe8c(&stack0x00000480,plVar13[7],0);
              uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              FUN_06adff70(&stack0x000002e0,0,uVar2,0);
              plVar8[7] = in_stack_000004a0;
              plVar8[4] = (long)in_stack_00000488;
              plVar8[3] = in_stack_00000480;
              plVar8[6] = in_stack_00000498;
              plVar8[5] = in_stack_00000490;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c8a3b8(in_stack_000004e8,plVar8,plVar13,0);
              in_stack_000000c8 = (undefined8 *)&stack0x000002d8;
              in_stack_000000c0 = 0;
              plVar8[4] = lVar10;
              plVar8[3] = lVar14;
              plVar8[6] = lVar26;
              plVar8[5] = lVar25;
              plVar8[7] = lVar16;
              if (plVar7 == (long *)0x0) {
                in_stack_000000c0 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                plVar13 = (long *)FUN_03e16a04(in_stack_000004e8,plVar9,
                                               *(undefined8 *)
                                                System_Collections_Generic_List<IFDDirectory>_TypeInfo
                                              );
                goto LAB_06bf5f54;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar7 = (long *)FUN_06c8a3b8(in_stack_000004e8,plVar7,plVar8,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar13 = (long *)FUN_06c89dd8(in_stack_000004e8,plVar7,plVar9,0);
              if (plVar7 == (long *)0x0) goto LAB_06bf5f54;
              lVar16 = *plVar7;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar17 == 0) goto LAB_06bf5efc;
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              goto LAB_06bf5ee4;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
            if ((uVar17 & 1) != 0) goto code_r0x06bf6404;
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (iVar3 == 1) {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar3 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x40),0);
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar4 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x48),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar5 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x40),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                iVar6 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x48),0);
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar11 = *(undefined8 *)(lVar14 + 0x20);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,0,uVar11);
                uVar11 = FUN_06bb2ea4(1,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                uVar11 = FUN_06bb2f90(0,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,2,uVar11);
                uVar11 = FUN_06bb2f90(0,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,3,uVar11);
                uVar11 = FUN_06bb2ea4(iVar5 * iVar3,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,4,uVar11);
                uVar11 = FUN_06bb2ea4(iVar6 + iVar5 * iVar4,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,5,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar16,0
                            );
                FUN_04ee7cc8();
              }
              else {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar23 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar11 = *(undefined8 *)(lVar14 + 0x20);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,0,uVar11);
                uVar11 = FUN_06bb2ea4(0,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                uVar11 = FUN_06bb2f90(fVar21 * fVar23,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,2,uVar11);
                uVar11 = FUN_06bb2f90(fVar22 * fVar23 + fVar24,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,3,uVar11);
                uVar11 = FUN_06bb2ea4(0,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,4,uVar11);
                uVar11 = FUN_06bb2ea4(0,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,5,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar16,0
                            );
                FUN_04ee7cc8();
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36348,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == 0.0)) {
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar13 == (long *)0x0) {
LAB_06bf7678:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf7678;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                FUN_06c896c8(uVar2,0,in_stack_000004e8,plVar13,0);
                in_stack_00000488 = (undefined8 *)&stack0x000002b0;
                in_stack_00000480 = 0;
                uVar11 = FUN_06bfc538();
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x20);
                FUN_03154b74(lVar16,uVar12);
                FUN_03154bd8(lVar16,0,uVar12);
                uVar11 = FUN_06bb3098(uVar11,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar16,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36348,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == 0.0)) {
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar11 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar13 == (long *)0x0) {
LAB_06bf7ab0:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf7ab0;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                FUN_06c896c8(uVar11,0,in_stack_000004e8,plVar13,0);
                in_stack_00000488 = (undefined8 *)&stack0x000002a8;
                in_stack_00000480 = 0;
                uVar11 = FUN_06bfc538();
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar12 = *(undefined8 *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                FUN_03154b74(lVar16,uVar12);
                FUN_03154bd8(lVar16,0,uVar12);
                uVar11 = FUN_06bb3098(uVar11,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar16,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a30a70,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == unaff_s12)) {
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar13 == (long *)0x0) {
LAB_06bf7cd0:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf7cd0;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,uVar2,in_stack_000004e8,plVar13,0);
                in_stack_00000488 = (undefined8 *)&stack0x000002a0;
                in_stack_00000480 = 0;
                uVar11 = FUN_06bfc538();
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x20);
                FUN_03154b74(lVar16,uVar12);
                FUN_03154bd8(lVar16,0,uVar12);
                uVar11 = FUN_06bb3098(uVar11,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar16,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == unaff_s12)) {
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar13 == (long *)0x0) {
LAB_06bf7f04:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf7f04;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,uVar2,in_stack_000004e8,plVar13,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000298;
                in_stack_00000480 = 0;
                uVar11 = FUN_06bfc538();
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar12 = *(undefined8 *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                FUN_03154b74(lVar16,uVar12);
                FUN_03154bd8(lVar16,0,uVar12);
                uVar11 = FUN_06bb3098(uVar11,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar16,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a36770,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == unaff_s12)) {
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000003b4 == 0) {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (plVar13 == (long *)0x0) {
LAB_06bf812c:
                    plVar13 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf812c;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  FUN_06c896c8(0x3f800000,-fVar21,in_stack_000004e8,plVar13,0);
                  in_stack_00000488 = (undefined8 *)&stack0x00000290;
                  in_stack_00000480 = 0;
                  uVar11 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar12 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar12);
                  FUN_03154bd8(lVar16,0,uVar12);
                  uVar11 = FUN_06bb3098(uVar11,0);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0)
                  ;
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000480);
                }
                else {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (plVar13 == (long *)0x0) {
LAB_06bf8270:
                    plVar13 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf8270;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  FUN_06c896c8(0x3f800000,-fVar21,in_stack_000004e8,plVar13,0);
                  in_stack_00000488 = (undefined8 *)&stack0x00000288;
                  in_stack_00000480 = 0;
                  uVar11 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  uVar11 = FUN_06bb3098(uVar11,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,0,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0)
                  ;
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000480);
                }
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36770,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == unaff_s12)) {
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
                if (in_stack_000003b0 == 0) {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (plVar13 == (long *)0x0) {
LAB_06bf84a8:
                    plVar13 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf84a8;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  FUN_06c896c8(0x3f800000,-fVar21,in_stack_000004e8,plVar13,0);
                  in_stack_00000488 = (undefined8 *)&stack0x00000280;
                  in_stack_00000480 = 0;
                  uVar11 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar12 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar12);
                  FUN_03154bd8(lVar16,0,uVar12);
                  uVar11 = FUN_06bb3098(uVar11,0);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0)
                  ;
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000480);
                }
                else {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (plVar13 == (long *)0x0) {
LAB_06bf85ec:
                    plVar13 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf85ec;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  FUN_06c896c8(0x3f800000,fVar21,in_stack_000004e8,plVar13,0);
                  in_stack_00000488 = (undefined8 *)&stack0x00000278;
                  in_stack_00000480 = 0;
                  uVar11 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  uVar11 = FUN_06bb3098(uVar11,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,0,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x28);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0)
                  ;
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000480);
                }
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == unaff_s12)) {
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar13 == (long *)0x0) {
LAB_06bf8824:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf8824;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,uVar2,in_stack_000004e8,plVar13,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000270;
                in_stack_00000480 = 0;
                uVar11 = FUN_06bfc538();
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar12 = *(undefined8 *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
                FUN_03154b74(lVar16,uVar12);
                FUN_03154bd8(lVar16,0,uVar12);
                uVar11 = FUN_06bb3098(uVar11,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar16,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)PTR_DAT_07a35338,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == 0.0)) {
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar13 == (long *)0x0) {
LAB_06bf8a44:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf8a44;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                FUN_06c896c8(unaff_s12 / fVar21,0,in_stack_000004e8,plVar13,0);
                in_stack_00000488 = (undefined8 *)&stack0x00000268;
                in_stack_00000480 = 0;
                uVar11 = FUN_06bfc538();
                uVar12 = *(undefined8 *)PTR_DAT_07a35338;
                if (in_stack_000003b4 == 0) {
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar19 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar19);
                  FUN_03154bd8(lVar16,0,uVar19);
                  uVar11 = FUN_06bb3098(uVar11,0);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                }
                else {
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  uVar11 = FUN_06bb3098(uVar11,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,0,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                }
                FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar12,lVar16,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a35338,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar3 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
              if ((iVar3 == 0) && (fVar21 == 0.0)) {
                plVar13 = (long *)FUN_06bfc93c();
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar16 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
                if (in_stack_000003b0 == 0) {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (plVar13 == (long *)0x0) {
LAB_06bf8cf4:
                    plVar13 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf8cf4;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  FUN_06c896c8(unaff_s12 / fVar21,0,in_stack_000004e8,plVar13,0);
                  in_stack_00000488 = (undefined8 *)&stack0x00000260;
                  in_stack_00000480 = 0;
                  uVar11 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar12 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar12);
                  FUN_03154bd8(lVar16,0,uVar12);
                  uVar11 = FUN_06bb3098(uVar11,0);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar16,0)
                  ;
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000480);
                }
                else {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (plVar13 == (long *)0x0) {
LAB_06bf8e38:
                    plVar13 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf8e38;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  FUN_06c896c8(fVar21,0,in_stack_000004e8,plVar13,0);
                  in_stack_00000488 = (undefined8 *)&stack0x00000258;
                  in_stack_00000480 = 0;
                  uVar11 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2)
                  ;
                  uVar11 = FUN_06bb3098(uVar11,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,0,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x28);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar16,0)
                  ;
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x00000480);
                }
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
              uVar17 = FUN_06cada30(&stack0x000001d0,0);
              if ((uVar17 & 1) != 0) {
                if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
                if (in_stack_00000234 == 2) {
                  plVar13 = (long *)FUN_06bfc93c();
                  if (plVar13 == (long *)0x0) {
LAB_06bf9018:
                    plVar13 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf9018;
                    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar13 = (long *)0x0;
                    }
                  }
                  plVar7 = (long *)FUN_06bfc93c();
                  if (plVar7 == (long *)0x0) {
LAB_06bf906c:
                    plVar7 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf906c;
                    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar7 = (long *)0x0;
                    }
                  }
                  plVar8 = (long *)FUN_06bfc93c();
                  if (plVar8 == (long *)0x0) {
LAB_06bf90c0:
                    plVar8 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf90c0;
                    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar8 = (long *)0x0;
                    }
                  }
                  plVar9 = (long *)FUN_06bfc93c();
                  if (plVar9 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__get_remoting:
                    plVar9 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                    if (*(byte *)(*plVar9 + 0x130) < bVar1)
                    goto UnityEngine_InputSystem_InputSystem__get_remoting;
                    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_07a33940) {
                      plVar9 = (long *)0x0;
                    }
                  }
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_06c8a3b8(in_stack_000004e8,plVar13,plVar8,0);
                  in_stack_00000488 = (undefined8 *)&stack0x00000250;
                  in_stack_00000480 = 0;
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar11 = FUN_06c8a3b8(in_stack_000004e8,plVar7,plVar8,0);
                  in_stack_00000058 = (undefined8 *)&stack0x00000248;
                  in_stack_00000050 = 0;
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_06c89dd8(in_stack_000004e8,uVar11,plVar9,0);
                  in_stack_000000c8 = (undefined8 *)&stack0x00000240;
                  in_stack_000000c0 = 0;
                  uVar11 = FUN_06bfc538();
                  uVar12 = FUN_06bfc538();
                  lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4)
                  ;
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar19 = *(undefined8 *)(lVar14 + 0x20);
                  FUN_03154b74(lVar16,uVar19);
                  FUN_03154bd8(lVar16,0,uVar19);
                  uVar11 = FUN_06bb3098(uVar11,0);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,1,uVar11);
                  uVar11 = FUN_06bb3098(uVar12,0);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,2,uVar11);
                  lVar14 = *(long *)(unaff_x22 + 0x28);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  uVar11 = *(undefined8 *)(lVar14 + 0x38);
                  FUN_03154b74(lVar16,uVar11);
                  FUN_03154bd8(lVar16,3,uVar11);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,
                               *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar16,0);
                  FUN_04ee7cc8();
                  FUN_03154064(&stack0x000000c0);
                  FUN_03154064(&stack0x00000050);
                  FUN_03154064(&stack0x00000480);
                }
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar16 = FUN_06bb3114(*(undefined8 *)(lVar16 + 0x20),0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(long *)(lVar16 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              memmove(&stack0x00000160,(void *)(*(long *)(lVar16 + 0x78) + 0x14),0x68);
              bVar1 = FUN_06cada30(&stack0x00000160,0);
              if ((bVar1 & in_stack_000001c0._4_4_ == 2) != 0) {
                plVar13 = (long *)FUN_06bfc93c();
                if (plVar13 == (long *)0x0) {
LAB_06bf96cc:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf96cc;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                plVar7 = (long *)FUN_06bfc93c();
                if (plVar7 == (long *)0x0) {
LAB_06bf9720:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf9720;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                plVar8 = (long *)FUN_06bfc93c();
                if (plVar8 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization:
                  plVar8 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar1)
                  goto UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar8 = (long *)0x0;
                  }
                }
                plVar9 = (long *)FUN_06bfc93c();
                if (plVar9 == (long *)0x0) {
LAB_06bf97c8:
                  plVar9 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf97c8;
                  if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar9 = (long *)0x0;
                  }
                }
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_00000070 = 0;
                in_stack_00000058 = (undefined8 *)0x0;
                in_stack_00000050 = 0;
                in_stack_00000068 = 0;
                in_stack_00000060 = 0;
                FUN_06ae496c(&stack0x00000050,uVar2,1,0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                auVar27 = FUN_03e16e50(in_stack_000004e8,plVar13,&stack0x00000480,
                                       *(undefined8 *)
                                        System_Collections_Generic_List<IFDStructure>_TypeInfo);
                in_stack_00000158 = auVar27._0_8_;
                in_stack_00000058 = &stack0x00000158;
                in_stack_00000050 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18(0,auVar27._8_8_,in_stack_00000158);
                }
                in_stack_00000150 = FUN_06c8a3b8(in_stack_000004e8,plVar8,in_stack_00000158,0);
                in_stack_000000c8 = &stack0x00000150;
                in_stack_000000c0 = 0;
                uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_000004a0 = 0;
                in_stack_00000498 = 0;
                in_stack_00000490 = 0;
                FUN_06ae496c(&stack0x00000480,1,uVar2,0);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000148 =
                     FUN_03e16e50(in_stack_000004e8,plVar7,&stack0x000004b0,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<IFDStructure>_TypeInfo);
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                auVar27 = FUN_06c89998(in_stack_000004e8,in_stack_00000148,plVar8,0,0,0);
                in_stack_00000140 = auVar27._0_8_;
                in_stack_00000488 = &stack0x00000140;
                in_stack_00000480 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18(0,auVar27._8_8_,in_stack_00000140);
                }
                in_stack_00000138 = FUN_06c89dd8(in_stack_000004e8,plVar9,in_stack_00000140,0);
                in_stack_000000b8 = &stack0x00000138;
                in_stack_000000b0 = 0;
                uVar11 = FUN_06bfc538();
                uVar12 = FUN_06bfc538();
                lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar19 = *(undefined8 *)(lVar14 + 0x20);
                FUN_03154b74(lVar16,uVar19);
                FUN_03154bd8(lVar16,0,uVar19);
                uVar11 = FUN_06bb3098(uVar11,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,1,uVar11);
                uVar11 = FUN_06bb3098(uVar12,0);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,2,uVar11);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar14 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar11 = *(undefined8 *)(lVar14 + 0x38);
                FUN_03154b74(lVar16,uVar11);
                FUN_03154bd8(lVar16,3,uVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar16,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x000000b0);
                FUN_03154064(&stack0x00000480);
                FUN_03154064(&stack0x000004b0);
                FUN_03154064(&stack0x000000c0);
                FUN_03154064(&stack0x00000050);
              }
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bf9d14:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf9d14;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bf9d68:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf9d68;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000130 = FUN_06c896c8(uVar2,0,in_stack_000004e8,plVar13,0);
              in_stack_00000488 = &stack0x00000130;
              in_stack_00000480 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000128 = FUN_06c896c8(uVar2,uVar20,in_stack_000004e8,plVar7,0);
              in_stack_00000058 = &stack0x00000128;
              in_stack_00000050 = 0;
              uVar11 = FUN_06bfc538();
              uVar12 = FUN_06bfc538();
              lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar16,uVar19);
              FUN_03154bd8(lVar16,0,uVar19);
              uVar11 = FUN_06bb3098(uVar11,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,1,uVar11);
              uVar11 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,2,uVar11);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar11 = *(undefined8 *)(lVar14 + 0x38);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,3,uVar11);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar16,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000050);
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bfa058:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bfa058;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bfa0ac:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bfa0ac;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000120 = FUN_06c896c8(uVar2,0,in_stack_000004e8,plVar13,0);
              in_stack_00000058 = &stack0x00000120;
              in_stack_00000050 = 0;
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              FUN_06ae496c(&stack0x00000480,1,uVar2,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000028 = 0;
              in_stack_00000020 = 0;
              in_stack_00000038 = 0;
              in_stack_00000030 = 0;
              in_stack_00000040 = 0;
              in_stack_00000118 = FUN_06c8aaf0(uVar20,in_stack_000004e8,&stack0x00000020,0);
              in_stack_00000488 = &stack0x00000118;
              in_stack_00000480 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              auVar27 = FUN_06c89998(in_stack_000004e8,in_stack_00000118,plVar13,0,0,0);
              in_stack_00000110 = auVar27._0_8_;
              in_stack_000000c8 = &stack0x00000110;
              in_stack_000000c0 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,auVar27._8_8_,in_stack_00000110);
              }
              in_stack_00000108 = FUN_06c89dd8(in_stack_000004e8,plVar7,in_stack_00000110,0);
              in_stack_000000b8 = &stack0x00000108;
              in_stack_000000b0 = 0;
              uVar11 = FUN_06bfc538();
              uVar12 = FUN_06bfc538();
              lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar16,uVar19);
              FUN_03154bd8(lVar16,0,uVar19);
              uVar11 = FUN_06bb3098(uVar11,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,1,uVar11);
              uVar11 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,2,uVar11);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar14 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar11 = *(undefined8 *)(lVar14 + 0x38);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,3,uVar11);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar16,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x000000b0);
              FUN_03154064(&stack0x000000c0);
              FUN_03154064(&stack0x00000480);
              FUN_03154064(&stack0x00000050);
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bfa694:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bfa694;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bfa6e8:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bfa6e8;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar16 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000100 = FUN_06c896c8(uVar2,0,in_stack_000004e8,plVar13,0);
              in_stack_00000488 = &stack0x00000100;
              in_stack_00000480 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_000000f8 = FUN_06c896c8(uVar2,uVar20,in_stack_000004e8,plVar7,0);
              in_stack_00000058 = &stack0x000000f8;
              in_stack_00000050 = 0;
              uVar11 = FUN_06bfc538();
              uVar12 = FUN_06bfc538();
              lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar16,uVar19);
              FUN_03154bd8(lVar16,0,uVar19);
              uVar11 = FUN_06bb3098(uVar11,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,1,uVar11);
              uVar11 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,2,uVar11);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar16,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000050);
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar2 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar20 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
LAB_06bfa9a4:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bfa9a4;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bfa9f8:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bfa9f8;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_000000f0 = FUN_06c896c8(uVar2,0,in_stack_000004e8,plVar13,0);
              in_stack_00000488 = &stack0x000000f0;
              in_stack_00000480 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              auVar27 = FUN_06c896c8(uVar20,0,in_stack_000004e8,plVar13,0);
              in_stack_000000e8 = auVar27._0_8_;
              in_stack_00000058 = &stack0x000000e8;
              in_stack_00000050 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,auVar27._8_8_,in_stack_000000e8);
              }
              in_stack_000000e0 = FUN_06c89dd8(in_stack_000004e8,plVar7,in_stack_000000e8,0);
              in_stack_000000c8 = &stack0x000000e0;
              in_stack_000000c0 = 0;
              uVar11 = FUN_06bfc538();
              uVar12 = FUN_06bfc538();
              lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar16,uVar19);
              FUN_03154bd8(lVar16,0,uVar19);
              uVar11 = FUN_06bb3098(uVar11,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,1,uVar11);
              uVar11 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar16,uVar11);
              FUN_03154bd8(lVar16,2,uVar11);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar16,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x000000c0);
              FUN_03154064(&stack0x00000050);
              FUN_03154064(&stack0x00000480);
            }
          }
          goto LAB_06bf354c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
code_r0x06bf6404:
  plVar13 = (long *)FUN_06bfc93c();
  if (plVar13 == (long *)0x0) {
LAB_06bf643c:
    plVar13 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
    if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf643c;
    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a33940) {
      plVar13 = (long *)0x0;
    }
  }
  plVar7 = (long *)FUN_06bfc93c();
  if (plVar7 == (long *)0x0) {
LAB_06bf6490:
    plVar7 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf6490;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a33940) {
      plVar7 = (long *)0x0;
    }
  }
  plVar8 = (long *)FUN_06bfc93c();
  if (plVar8 == (long *)0x0) {
LAB_06bf64e4:
    plVar8 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_06bf64e4;
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a33940) {
      plVar8 = (long *)0x0;
    }
  }
  plVar9 = (long *)FUN_06bfc93c();
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
    if (bVar1 <= *(byte *)(*plVar9 + 0x130)) {
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a33940)
      {
        plVar9 = (long *)0x0;
      }
      goto LAB_06bf6554;
    }
  }
  plVar9 = (long *)0x0;
LAB_06bf6554:
  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06c89998(in_stack_000004e8,plVar13,plVar8,0,0,0);
  in_stack_00000058 = (undefined8 *)&stack0x000002c8;
  in_stack_00000050 = 0;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
  FUN_06ae496c(&stack0x00000480,1,uVar2,0);
  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar11 = FUN_03e16e50(in_stack_000004e8,plVar7,&stack0x00000420,
                        *(undefined8 *)System_Collections_Generic_List<IFDStructure>_TypeInfo);
  in_stack_00000428 = (undefined8 *)&stack0x000002c0;
  in_stack_00000420 = 0;
  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  in_stack_000002b8 = (long *)FUN_06c89c20(in_stack_000004e8,uVar11,plVar8,plVar9,0);
  in_stack_000000c8 = (undefined8 *)&stack0x000002b8;
  in_stack_000000c0 = 0;
  if (in_stack_000002b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,1,0);
  in_stack_000004a0 = 0;
  in_stack_00000498 = 0;
  in_stack_00000490 = 0;
  in_stack_00000488 = (undefined8 *)0x0;
  in_stack_00000480 = 0;
  FUN_06ae4cb4(&stack0x00000480,uVar2,0);
  (**(code **)(*in_stack_000002b8 + 0x188))
            (in_stack_000002b8,&stack0x00000450,*(undefined8 *)(*in_stack_000002b8 + 400));
  goto code_r0x06bf66c4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_06bf5ee4:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_06bf5f18;
    }
  }
LAB_06bf5efc:
  puVar15 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5f18:
  (*(code *)*puVar15)(plVar7,puVar15[1]);
LAB_06bf5f54:
  if (plVar13 != (long *)0x0) {
    uVar2 = FUN_06ae539c(&stack0x00000360,0);
    in_stack_00000070 = 0;
    in_stack_00000058 = (undefined8 *)0x0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06ae4cb4(&stack0x00000050,uVar2,0);
    (**(code **)(*plVar13 + 0x188))(plVar13,&stack0x000003f0,*(undefined8 *)(*plVar13 + 400));
    FUN_06bfc538();
    FUN_06bfc538();
    FUN_0753c580(&System_Func<UniqueIdentifier_Decorator>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


