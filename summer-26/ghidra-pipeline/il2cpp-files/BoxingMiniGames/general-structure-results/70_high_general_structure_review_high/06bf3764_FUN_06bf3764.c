/*
FUNCTION_NAME: FUN_06bf3764
ENTRY_POINT: 06bf3764
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06bf48c8) */
/* WARNING: Removing unreachable block (ram,0x06bf6cc8) */
/* WARNING: Removing unreachable block (ram,0x06bf6c24) */
/* WARNING: Removing unreachable block (ram,0x06bfa8d4) */
/* WARNING: Removing unreachable block (ram,0x06bf46e8) */
/* WARNING: Removing unreachable block (ram,0x06bf5bec) */
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
/* WARNING: Removing unreachable block (ram,0x06bf9f88) */
/* WARNING: Removing unreachable block (ram,0x06bf68e4) */
/* WARNING: Removing unreachable block (ram,0x06bf50c8) */
/* WARNING: Removing unreachable block (ram,0x06bfb22c) */
/* WARNING: Removing unreachable block (ram,0x06bf6a28) */
/* WARNING: Removing unreachable block (ram,0x06bfb0e8) */
/* WARNING: Removing unreachable block (ram,0x06bf92f8) */
/* WARNING: Removing unreachable block (ram,0x06bf4a48) */
/* WARNING: Removing unreachable block (ram,0x06bf7280) */
/* WARNING: Removing unreachable block (ram,0x06bf9adc) */
/* WARNING: Removing unreachable block (ram,0x06bf6c0c) */
/* WARNING: Removing unreachable block (ram,0x06bf95ec) */
/* WARNING: Removing unreachable block (ram,0x06bf9c5c) */
/* WARNING: Removing unreachable block (ram,0x06bf9c6c) */
/* WARNING: Removing unreachable block (ram,0x06bf9c84) */
/* WARNING: Removing unreachable block (ram,0x06bfa32c) */
/* WARNING: Removing unreachable block (ram,0x06bfa5f4) */
/* WARNING: Removing unreachable block (ram,0x06bfa604) */
/* WARNING: Removing unreachable block (ram,0x06bfabb0) */
/* WARNING: Removing unreachable block (ram,0x06bfad4c) */
/* WARNING: Removing unreachable block (ram,0x06bfad5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_06bf3764(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x22;
  undefined8 uVar19;
  long unaff_x25;
  long unaff_x27;
  undefined8 uVar20;
  long *unaff_x28;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long lVar26;
  long lVar27;
  float unaff_s12;
  undefined1 auVar28 [16];
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
  uint in_stack_000003b0;
  uint in_stack_000003b4;
  long in_stack_000003b8;
  long in_stack_00000490;
  long in_stack_00000498;
  long in_stack_000004a0;
  long in_stack_000004e8;
  
code_r0x06bf3764:
  plVar7 = (long *)FUN_06c8a240(param_1,param_2,param_3,0);
FUN_06bf37ac:
  puVar16 = (undefined8 *)&stack0x000003a8;
  uVar8 = FUN_06bfc538();
  uVar19 = *(undefined8 *)PTR_DAT_07a36770;
  if ((int)unaff_x25 == 1) {
    plVar9 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
    lVar10 = FUN_06bb3098(uVar8,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar8,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    plVar9[4] = lVar10;
    thunk_FUN_036b7ad0(plVar9 + 4,lVar10);
    lVar10 = *(long *)(unaff_x22 + 0x28);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((uint)unaff_x27 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = *(long *)(lVar10 + unaff_x27 * 8 + 0x20);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar8,0);
      }
      if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
        plVar9[5] = lVar10;
        thunk_FUN_036b7ad0(plVar9 + 5,lVar10);
        goto LAB_06bf393c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  plVar9 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
  lVar10 = *(long *)(unaff_x22 + 0x28);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((uint)unaff_x27 < *(uint *)(lVar10 + 0x18)) {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar10 = *(long *)(lVar10 + unaff_x27 * 8 + 0x20);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar8,0);
    }
    if ((int)plVar9[3] != 0) {
      plVar9[4] = lVar10;
      thunk_FUN_036b7ad0(plVar9 + 4,lVar10);
      lVar10 = FUN_06bb3098(uVar8,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar8,0);
      }
      if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar9[5] = lVar10;
      thunk_FUN_036b7ad0(plVar9 + 5,lVar10);
LAB_06bf393c:
      FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar19,plVar9,0);
      FUN_04ee7cc8();
      if (plVar7 != (long *)0x0) {
        lVar10 = *plVar7;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06bf39d4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_06bf39d4:
        (*(code *)*puVar12)(plVar7,puVar12[1]);
      }
LAB_06bf354c:
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
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            unaff_x25 = (long)(int)in_stack_000003b4;
            if (*(uint *)(lVar10 + 0x18) <= in_stack_000003b4) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            unaff_x22 = FUN_06bb3114(*(undefined8 *)(lVar10 + unaff_x25 * 8 + 0x20),0);
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
          iVar2 = FUN_053a3a50(*(long *)(unaff_x22 + 0x58),
                               *(undefined8 *)
                                System_Collections_Generic_KeyValuePair<string,_string>_TypeInfo);
        } while (iVar2 != 1);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar17 = FUN_06bfc160(unaff_x22);
      } while ((uVar17 & 1) != 0);
      uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,
                                  0);
      if ((uVar17 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a36770,0);
        if ((uVar17 & 1) != 0) goto code_r0x06bf3668;
      }
      uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36770,
                                  0);
      if ((uVar17 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a30a70,0);
        if ((uVar17 & 1) != 0) {
          plVar7 = (long *)FUN_06bfc93c();
          plVar9 = (long *)FUN_06bfc93c();
          if (plVar7 == (long *)0x0) {
LAB_06bf3a98:
            if (in_stack_000003b0 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)PTR_DAT_07a33940;
              if (plVar9 == (long *)0x0) {
LAB_06bf3d50:
                plVar9 = (long *)0x0;
                if (plVar7 == (long *)0x0) goto LAB_06bf448c;
LAB_06bf4478:
                if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_06bf448c;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8)
                    != lVar10) {
                  plVar7 = (long *)0x0;
                }
              }
              else {
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_06bf3d50;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8)
                    != lVar10) {
                  plVar9 = (long *)0x0;
                }
                if (plVar7 != (long *)0x0) goto LAB_06bf4478;
LAB_06bf448c:
                plVar7 = (long *)0x0;
              }
              lVar10 = FUN_06c8a0c8(in_stack_000004e8,plVar9,plVar7,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)PTR_DAT_07a33940;
              if (plVar7 == (long *)0x0) {
LAB_06bf3ac8:
                plVar7 = (long *)0x0;
                if (plVar9 == (long *)0x0)
                goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
LAB_06bf3f1c:
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar10 + 0x130))
                goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8)
                    != lVar10) {
                  plVar9 = (long *)0x0;
                }
              }
              else {
                if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_06bf3ac8;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8)
                    != lVar10) {
                  plVar7 = (long *)0x0;
                }
                if (plVar9 != (long *)0x0) goto LAB_06bf3f1c;
UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson:
                plVar9 = (long *)0x0;
              }
              lVar10 = FUN_06c89dd8(in_stack_000004e8,plVar7,plVar9,0);
            }
          }
          else {
            lVar10 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
            bVar1 = *(byte *)(lVar10 + 0x130);
            uVar17 = (ulong)bVar1;
            if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + uVar17 * 8 + -8) != lVar10)) goto LAB_06bf3a98;
            if (in_stack_000003b0 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar1)) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + uVar17 * 8 + -8) != lVar10) {
                plVar9 = (long *)0x0;
              }
              lVar10 = FUN_06c8a240(in_stack_000004e8,plVar9,plVar7,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar1)) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + uVar17 * 8 + -8) != lVar10) {
                plVar9 = (long *)0x0;
              }
              lVar10 = FUN_06c89f50(in_stack_000004e8,plVar7,plVar9,0);
            }
          }
          uVar8 = FUN_06bfc538();
          if (in_stack_000003b0 == 0) {
            plVar7 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          2);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar11 + 0x18) == 0) {
LAB_06bfb104:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar11 = *(long *)(lVar11 + 0x20);
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0)) {
              uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar8,0);
            }
            if ((int)plVar7[3] == 0) goto LAB_06bfb104;
            plVar7[4] = lVar11;
            thunk_FUN_036b7ad0(plVar7 + 4,lVar11);
            lVar11 = FUN_06bb3098(uVar8,0);
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0)) {
              uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar8,0);
            }
            if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar7[5] = lVar11;
            thunk_FUN_036b7ad0(plVar7 + 5,lVar11);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar7,0);
            FUN_04ee7cc8();
          }
          else {
            plVar7 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          2);
            lVar11 = FUN_06bb3098(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0)) {
              uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar8,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar7[4] = lVar11;
            thunk_FUN_036b7ad0(plVar7 + 4,lVar11);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0e0:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar11 = *(long *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0)) {
              uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar8,0);
            }
            if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_06bfb0e0;
            plVar7[5] = lVar11;
            thunk_FUN_036b7ad0(plVar7 + 5,lVar11);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,plVar7,0);
            FUN_04ee7cc8();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_06ae5f08(lVar10,0);
          goto LAB_06bf354c;
        }
      }
      uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,
                                  0);
      if ((uVar17 & 1) == 0) {
LAB_06bf3bc0:
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
            plVar7 = (long *)FUN_06bfc93c();
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
              if (in_stack_000004e8 == 0) {
LAB_06bfb148:
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)PTR_DAT_07a33940;
LAB_06bf3da8:
              plVar7 = (long *)0x0;
LAB_06bf3dac:
              if (plVar9 == (long *)0x0) {
LAB_06bf3dc4:
                plVar9 = (long *)0x0;
              }
              else {
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_06bf3dc4;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8)
                    != lVar10) {
                  plVar9 = (long *)0x0;
                }
              }
              lVar10 = FUN_06c8a3b8(in_stack_000004e8,plVar7,plVar9,0);
            }
            else {
              lVar11 = *plVar7;
              lVar10 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
              bVar1 = *(byte *)(lVar10 + 0x130);
              if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
                if (in_stack_000004e8 == 0) goto LAB_06bfb148;
                lVar10 = *(long *)PTR_DAT_07a33940;
                if (*(byte *)(lVar11 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_06bf3da8;
                if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8)
                    != lVar10) {
                  plVar7 = (long *)0x0;
                }
                goto LAB_06bf3dac;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar1)) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
                plVar9 = (long *)0x0;
              }
              lVar10 = FUN_06c8a530(in_stack_000004e8,plVar7,plVar9,0);
            }
            uVar8 = FUN_06bfc538();
            plVar7 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          2);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (in_stack_000003b0 < *(uint *)(lVar11 + 0x18)) {
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar11 = *(long *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              if ((lVar11 != 0) &&
                 (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0))
              {
                uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar8,0);
              }
              if ((int)plVar7[3] != 0) {
                plVar7[4] = lVar11;
                thunk_FUN_036b7ad0(plVar7 + 4,lVar11);
                lVar11 = FUN_06bb3098(uVar8,0);
                if ((lVar11 != 0) &&
                   (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0
                   )) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar7[5] = lVar11;
                thunk_FUN_036b7ad0(plVar7 + 5,lVar11);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,plVar7,0);
                FUN_04ee7cc8();
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_06ae5f08(lVar10,0);
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
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bf3d20:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf3d20;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf40e0:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf40e0;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar13 = (long *)FUN_06bfc93c();
            if (plVar13 == (long *)0x0) {
UnityEngine_InputSystem_InputInteractionContext__get_control:
              plVar13 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar1)
              goto UnityEngine_InputSystem_InputInteractionContext__get_control;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar13 = (long *)0x0;
              }
            }
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bf4188:
              plVar14 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar1) goto LAB_06bf4188;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c8a3b8(in_stack_000004e8,plVar7,plVar13,0);
            in_stack_00000058 = (undefined8 *)&stack0x000003a0;
            in_stack_00000050 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar8 = FUN_06c8a3b8(in_stack_000004e8,plVar9,plVar13,0);
            in_stack_000000c8 = (undefined8 *)&stack0x00000398;
            in_stack_000000c0 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar7 = (long *)FUN_06c89dd8(in_stack_000004e8,uVar8,plVar14,0);
            in_stack_000000b8 = (undefined8 *)&stack0x00000390;
            in_stack_000000b0 = 0;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar3 = FUN_06ae539c(&stack0x00000360,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            puVar16 = (undefined8 *)0x0;
            FUN_06ae4cb4(&stack0x00000480,uVar3,0);
            (**(code **)(*plVar7 + 0x188))(plVar7,&stack0x000003c0,*(undefined8 *)(*plVar7 + 400));
            uVar8 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            plVar9 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          3);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar10 + 0x18) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(lVar10 + 0x20);
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
              {
                uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar8,0);
              }
              if ((int)plVar9[3] != 0) {
                plVar9[4] = lVar10;
                thunk_FUN_036b7ad0(plVar9 + 4,lVar10);
                lVar10 = FUN_06bb3098(uVar8,0);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0
                   )) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar9[5] = lVar10;
                thunk_FUN_036b7ad0(plVar9 + 5,lVar10);
                lVar10 = FUN_06bb3098(uVar19,0);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0
                   )) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar9[6] = lVar10;
                thunk_FUN_036b7ad0(plVar9 + 6,lVar10);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,plVar9,0);
                FUN_04ee7cc8();
                if (plVar7 != (long *)0x0) {
                  lVar10 = *plVar7;
                  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                        puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06bf46d4;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_06bf46d4:
                  (*(code *)*puVar12)(plVar7,puVar12[1]);
                }
                plVar7 = (long *)*in_stack_000000c8;
                if (plVar7 != (long *)0x0) {
                  lVar10 = *plVar7;
                  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                        puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06bf474c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_06bf474c:
                  (*(code *)*puVar12)(plVar7,puVar12[1]);
                }
                if (in_stack_000000c0 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c00();
                }
                plVar7 = (long *)*in_stack_00000058;
                if (plVar7 != (long *)0x0) {
                  lVar10 = *plVar7;
                  uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                        puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06bf4aac;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_06bf4aac:
                  (*(code *)*puVar12)(plVar7,puVar12[1]);
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
                                    *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                                    0);
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bf4b3c:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf4b3c;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf4b90:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf4b90;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar3 = FUN_06bb2960(*(long *)(lVar10 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar21 = FUN_06bb2960(*(long *)(lVar10 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c896c8(uVar3,0,in_stack_000004e8,plVar7,0);
            in_stack_00000058 = (undefined8 *)&stack0x00000358;
            in_stack_00000050 = 0;
            if (plVar9 == (long *)0x0) {
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              FUN_06ae4cb4(&stack0x00000480,uVar3,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000088 = 0;
              in_stack_00000080 = 0;
              in_stack_00000098 = 0;
              in_stack_00000090 = 0;
              in_stack_000000a0 = 0;
              plVar7 = (long *)FUN_06c8aaf0(uVar21,in_stack_000004e8,&stack0x00000080,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar7 = (long *)FUN_06c896c8(uVar3,uVar21,in_stack_000004e8,plVar9,0);
            }
            puVar16 = (undefined8 *)&stack0x00000350;
            uVar8 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            plVar9 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          10);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar10 + 0x18) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(lVar10 + 0x20);
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
              {
                uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar8,0);
              }
              if ((int)plVar9[3] != 0) {
                plVar9[4] = lVar10;
                thunk_FUN_036b7ad0(plVar9 + 4,lVar10);
                lVar10 = FUN_06bb3098(uVar8,0);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0
                   )) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar9[5] = lVar10;
                thunk_FUN_036b7ad0(plVar9 + 5,lVar10);
                lVar10 = FUN_06bb3098(uVar19,0);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0
                   )) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar9[6] = lVar10;
                thunk_FUN_036b7ad0(plVar9 + 6,lVar10);
                lVar10 = *(long *)(unaff_x22 + 0x28);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                  lVar10 = *(long *)(lVar10 + 0x38);
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar11 == 0)) {
                    uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar8,0);
                  }
                  if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                    plVar9[7] = lVar10;
                    thunk_FUN_036b7ad0(plVar9 + 7,lVar10);
                    lVar10 = *(long *)(unaff_x22 + 0x28);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    if (4 < *(uint *)(lVar10 + 0x18)) {
                      lVar10 = *(long *)(lVar10 + 0x40);
                      if ((lVar10 != 0) &&
                         (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar11 == 0)) {
                        uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                        FUN_03642acc(uVar8,0);
                      }
                      if (4 < *(uint *)(plVar9 + 3)) {
                        plVar9[8] = lVar10;
                        thunk_FUN_036b7ad0(plVar9 + 8,lVar10);
                        lVar10 = *(long *)(unaff_x22 + 0x28);
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        if (5 < *(uint *)(lVar10 + 0x18)) {
                          lVar10 = *(long *)(lVar10 + 0x48);
                          if ((lVar10 != 0) &&
                             (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)),
                             lVar11 == 0)) {
                            uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                            FUN_03642acc(uVar8,0);
                          }
                          if (5 < *(uint *)(plVar9 + 3)) {
                            plVar9[9] = lVar10;
                            thunk_FUN_036b7ad0(plVar9 + 9,lVar10);
                            lVar10 = *(long *)(unaff_x22 + 0x28);
                            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03642c18();
                            }
                            if (6 < *(uint *)(lVar10 + 0x18)) {
                              lVar10 = *(long *)(lVar10 + 0x50);
                              if ((lVar10 != 0) &&
                                 (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)
                                                             ), lVar11 == 0)) {
                                uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                FUN_03642acc(uVar8,0);
                              }
                              if (6 < *(uint *)(plVar9 + 3)) {
                                plVar9[10] = lVar10;
                                thunk_FUN_036b7ad0(plVar9 + 10,lVar10);
                                lVar10 = *(long *)(unaff_x22 + 0x28);
                                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03642c18();
                                }
                                if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) != 0) {
                                  lVar10 = *(long *)(lVar10 + 0x58);
                                  if ((lVar10 != 0) &&
                                     (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)
                                                                          (*plVar9 + 0x40)),
                                     lVar11 == 0)) {
                                    uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                    FUN_03642acc(uVar8,0);
                                  }
                                  if ((*(uint *)(plVar9 + 3) & 0xfffffff8) != 0) {
                                    plVar9[0xb] = lVar10;
                                    thunk_FUN_036b7ad0(plVar9 + 0xb,lVar10);
                                    lVar10 = *(long *)(unaff_x22 + 0x28);
                                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c18();
                                    }
                                    if (8 < *(uint *)(lVar10 + 0x18)) {
                                      lVar10 = *(long *)(lVar10 + 0x60);
                                      if ((lVar10 != 0) &&
                                         (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)
                                                                              (*plVar9 + 0x40)),
                                         lVar11 == 0)) {
                                        uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                        FUN_03642acc(uVar8,0);
                                      }
                                      if (8 < *(uint *)(plVar9 + 3)) {
                                        plVar9[0xc] = lVar10;
                                        thunk_FUN_036b7ad0(plVar9 + 0xc,lVar10);
                                        lVar10 = *(long *)(unaff_x22 + 0x28);
                                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03642c18();
                                        }
                                        if (9 < *(uint *)(lVar10 + 0x18)) {
                                          lVar10 = *(long *)(lVar10 + 0x68);
                                          if ((lVar10 != 0) &&
                                             (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)
                                                                                  (*plVar9 + 0x40)),
                                             lVar11 == 0)) {
                                            uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                            FUN_03642acc(uVar8,0);
                                          }
                                          if (9 < *(uint *)(plVar9 + 3)) {
                                            plVar9[0xd] = lVar10;
                                            thunk_FUN_036b7ad0(plVar9 + 0xd,lVar10);
                                            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar9,0);
                                            FUN_04ee7cc8();
                                            if (plVar7 != (long *)0x0) {
                                              lVar10 = *plVar7;
                                              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                              if (uVar17 != 0) {
                                                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar18 + -2) ==
                                                      *(long *)PTR_DAT_079f4598) {
                                                    puVar12 = (undefined8 *)
                                                              (lVar10 + (long)*piVar18 * 0x10 +
                                                              0x138);
                                                    goto LAB_06bf50b4;
                                                  }
                                                  uVar17 = uVar17 - 1;
                                                  piVar18 = piVar18 + 4;
                                                } while (uVar17 != 0);
                                              }
                                              puVar12 = (undefined8 *)
                                                        FUN_0367cd30(plVar7,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf50b4:
                                              (*(code *)*puVar12)(plVar7,puVar12[1]);
                                            }
                                            plVar7 = (long *)*in_stack_00000058;
                                            if (plVar7 != (long *)0x0) {
                                              lVar10 = *plVar7;
                                              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                              if (uVar17 != 0) {
                                                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar18 + -2) ==
                                                      *(long *)PTR_DAT_079f4598) {
                                                    puVar12 = (undefined8 *)
                                                              (lVar10 + (long)*piVar18 * 0x10 +
                                                              0x138);
                                                    goto LAB_06bf512c;
                                                  }
                                                  uVar17 = uVar17 - 1;
                                                  piVar18 = piVar18 + 4;
                                                } while (uVar17 != 0);
                                              }
                                              puVar12 = (undefined8 *)
                                                        FUN_0367cd30(plVar7,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf512c:
                                              (*(code *)*puVar12)(plVar7,puVar12[1]);
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
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            fVar22 = (float)FUN_06bb2960(*(long *)(lVar10 + 0x38),0);
            if (fVar22 == 0.0) {
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar3 = FUN_06bb2960(*(long *)(lVar10 + 0x30),0);
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bf5210:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf5210;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,plVar7);
              }
              plVar7 = (long *)FUN_06c896c8(uVar3,0,in_stack_000004e8,plVar7,0);
              puVar16 = (undefined8 *)&stack0x00000348;
              uVar8 = FUN_06bfc538();
              plVar9 = (long *)FUN_03642a4c(*(undefined8 *)
                                             System_Func<int,_int,_int,_float>_TypeInfo,10);
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar10 + 0x18) != 0) {
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar10 = *(long *)(lVar10 + 0x20);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0
                   )) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if ((int)plVar9[3] != 0) {
                  plVar9[4] = lVar10;
                  thunk_FUN_036b7ad0(plVar9 + 4,lVar10);
                  lVar10 = FUN_06bb3098(uVar8,0);
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar11 == 0)) {
                    uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar8,0);
                  }
                  if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c20();
                  }
                  plVar9[5] = lVar10;
                  thunk_FUN_036b7ad0(plVar9 + 5,lVar10);
                  if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (2 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = *(long *)(lVar10 + 0x30);
                    if ((lVar10 != 0) &&
                       (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar11 == 0)) {
                      uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                      FUN_03642acc(uVar8,0);
                    }
                    if (2 < *(uint *)(plVar9 + 3)) {
                      plVar9[6] = lVar10;
                      thunk_FUN_036b7ad0(plVar9 + 6,lVar10);
                      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                        lVar10 = *(long *)(lVar10 + 0x38);
                        if ((lVar10 != 0) &&
                           (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)),
                           lVar11 == 0)) {
                          uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                          FUN_03642acc(uVar8,0);
                        }
                        if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                          plVar9[7] = lVar10;
                          thunk_FUN_036b7ad0(plVar9 + 7,lVar10);
                          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03642c18();
                          }
                          lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03642c18();
                          }
                          if (4 < *(uint *)(lVar10 + 0x18)) {
                            lVar10 = *(long *)(lVar10 + 0x40);
                            if ((lVar10 != 0) &&
                               (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar9 + 0x40)),
                               lVar11 == 0)) {
                              uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                              FUN_03642acc(uVar8,0);
                            }
                            if (4 < *(uint *)(plVar9 + 3)) {
                              plVar9[8] = lVar10;
                              thunk_FUN_036b7ad0(plVar9 + 8,lVar10);
                              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_03642c18();
                              }
                              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_03642c18();
                              }
                              if (5 < *(uint *)(lVar10 + 0x18)) {
                                lVar10 = *(long *)(lVar10 + 0x48);
                                if ((lVar10 != 0) &&
                                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)
                                                                        (*plVar9 + 0x40)),
                                   lVar11 == 0)) {
                                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                  FUN_03642acc(uVar8,0);
                                }
                                if (5 < *(uint *)(plVar9 + 3)) {
                                  plVar9[9] = lVar10;
                                  thunk_FUN_036b7ad0(plVar9 + 9,lVar10);
                                  if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03642c18();
                                  }
                                  lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03642c18();
                                  }
                                  if (6 < *(uint *)(lVar10 + 0x18)) {
                                    lVar10 = *(long *)(lVar10 + 0x50);
                                    if ((lVar10 != 0) &&
                                       (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)
                                                                            (*plVar9 + 0x40)),
                                       lVar11 == 0)) {
                                      uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                      FUN_03642acc(uVar8,0);
                                    }
                                    if (6 < *(uint *)(plVar9 + 3)) {
                                      plVar9[10] = lVar10;
                                      thunk_FUN_036b7ad0(plVar9 + 10,lVar10);
                                      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03642c18();
                                      }
                                      lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03642c18();
                                      }
                                      if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) != 0) {
                                        lVar10 = *(long *)(lVar10 + 0x58);
                                        if ((lVar10 != 0) &&
                                           (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)
                                                                                (*plVar9 + 0x40)),
                                           lVar11 == 0)) {
                                          uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                          FUN_03642acc(uVar8,0);
                                        }
                                        if ((*(uint *)(plVar9 + 3) & 0xfffffff8) != 0) {
                                          plVar9[0xb] = lVar10;
                                          thunk_FUN_036b7ad0(plVar9 + 0xb,lVar10);
                                          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_03642c18();
                                          }
                                          lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_03642c18();
                                          }
                                          if (8 < *(uint *)(lVar10 + 0x18)) {
                                            lVar10 = *(long *)(lVar10 + 0x60);
                                            if ((lVar10 != 0) &&
                                               (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)
                                                                                    (*plVar9 + 0x40)
                                                                           ), lVar11 == 0)) {
                                              uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                              FUN_03642acc(uVar8,0);
                                            }
                                            if (8 < *(uint *)(plVar9 + 3)) {
                                              plVar9[0xc] = lVar10;
                                              thunk_FUN_036b7ad0(plVar9 + 0xc,lVar10);
                                              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_03642c18();
                                              }
                                              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                                              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_03642c18();
                                              }
                                              if (9 < *(uint *)(lVar10 + 0x18)) {
                                                lVar10 = *(long *)(lVar10 + 0x68);
                                                if ((lVar10 != 0) &&
                                                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40)), lVar11 == 0)) {
                                                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                                  FUN_03642acc(uVar8,0);
                                                }
                                                if (9 < *(uint *)(plVar9 + 3)) {
                                                  plVar9[0xd] = lVar10;
                                                  thunk_FUN_036b7ad0(plVar9 + 0xd,lVar10);
                                                  FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar9,0);
                                                  FUN_04ee7cc8();
                                                  if (plVar7 != (long *)0x0) {
                                                    lVar10 = *plVar7;
                                                    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                    if (uVar17 != 0) {
                                                      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar18 + -2) ==
                                                            *(long *)PTR_DAT_079f4598) {
                                                          puVar12 = (undefined8 *)
                                                                    (lVar10 + (long)*piVar18 * 0x10
                                                                    + 0x138);
                                                          goto LAB_06bf5654;
                                                        }
                                                        uVar17 = uVar17 - 1;
                                                        piVar18 = piVar18 + 4;
                                                      } while (uVar17 != 0);
                                                    }
                                                    puVar12 = (undefined8 *)
                                                              FUN_0367cd30(plVar7,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf5654:
                                                  (*(code *)*puVar12)(plVar7,puVar12[1]);
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
                                    *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                                    0);
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar17 & 1) != 0) {
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bf56e0:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf56e0;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf5734:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf5734;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar13 = (long *)FUN_06bfc93c();
            if (plVar13 == (long *)0x0) {
LAB_06bf5790:
              plVar13 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf5790;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar13 = (long *)0x0;
              }
            }
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = plVar7[7];
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06ae539c(&stack0x00000360,0);
            iVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            if (((iVar2 == iVar4) && ((int)plVar13[7] <= (int)plVar7[7])) &&
               ((int)lVar10 + -1 <= (int)plVar13[7])) {
              iVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item
                                (&stack0x00000360,1 - (int)lVar10,0);
              iVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              if (iVar2 == iVar4) {
                uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_00000070 = 0;
                in_stack_00000058 = (undefined8 *)0x0;
                in_stack_00000050 = 0;
                in_stack_00000068 = 0;
                in_stack_00000060 = 0;
                FUN_06ae4cb4(&stack0x00000050,uVar3,0);
                in_stack_000004a0 = in_stack_00000070;
                in_stack_00000498 = in_stack_00000068;
                in_stack_00000490 = in_stack_00000060;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar8 = FUN_03e16e50(in_stack_000004e8,plVar13,&stack0x00000480,
                                     *(undefined8 *)
                                      System_Collections_Generic_List<IFDStructure>_TypeInfo);
                puVar16 = (undefined8 *)&stack0x00000340;
                if (plVar9 != (long *)0x0) {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_06c89dd8(in_stack_000004e8,plVar9,uVar8,0);
                }
                in_stack_00000058 = (undefined8 *)&stack0x00000338;
                in_stack_00000050 = 0;
                uVar8 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,10);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar19 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar19);
                FUN_03154bd8(lVar10,0,uVar19);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar19 = *(undefined8 *)(lVar11 + 0x28);
                FUN_03154b74(lVar10,uVar19);
                FUN_03154bd8(lVar10,1,uVar19);
                uVar8 = FUN_06bb3098(uVar8,0);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,2,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x38);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,3,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar11 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x40);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,4,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar11 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x48);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,5,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar11 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x50);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,6,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x58);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,7,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar11 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x60);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,8,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar11 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x68);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,9,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,lVar10,
                             0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000050);
                FUN_03154064(&stack0x00000480);
              }
            }
            goto LAB_06bf354c;
          }
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                                    0);
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bf5c78:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf5c78;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf5ccc:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf5ccc;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar13 = (long *)FUN_06bfc93c();
            if (plVar13 == (long *)0x0) {
LAB_06bf5d20:
              plVar13 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf5d20;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar13 = (long *)0x0;
              }
            }
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bf5d74:
              plVar14 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar1) goto LAB_06bf5d74;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = plVar13[4];
            lVar11 = plVar13[3];
            lVar27 = plVar13[6];
            lVar26 = plVar13[5];
            lVar10 = plVar13[7];
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06adfe8c(&stack0x00000480,plVar7[7],0);
            uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            FUN_06adff70(&stack0x000002e0,0,uVar3,0);
            plVar13[7] = in_stack_000004a0;
            plVar13[4] = (long)puVar16;
            plVar13[3] = 0;
            plVar13[6] = in_stack_00000498;
            plVar13[5] = in_stack_00000490;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c8a3b8(in_stack_000004e8,plVar13,plVar7,0);
            in_stack_000000c8 = (undefined8 *)&stack0x000002d8;
            in_stack_000000c0 = 0;
            plVar13[4] = lVar15;
            plVar13[3] = lVar11;
            plVar13[6] = lVar27;
            plVar13[5] = lVar26;
            plVar13[7] = lVar10;
            if (plVar9 == (long *)0x0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar7 = (long *)FUN_03e16a04(in_stack_000004e8,plVar14,
                                            *(undefined8 *)
                                             System_Collections_Generic_List<IFDDirectory>_TypeInfo)
              ;
              goto LAB_06bf5f54;
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar9 = (long *)FUN_06c8a3b8(in_stack_000004e8,plVar9,plVar13,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar7 = (long *)FUN_06c89dd8(in_stack_000004e8,plVar9,plVar14,0);
            if (plVar9 == (long *)0x0) goto LAB_06bf5f54;
            lVar10 = *plVar9;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 == 0) goto LAB_06bf5efc;
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
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
          if ((uVar17 & 1) != 0) {
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bf643c:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf643c;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf6490:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf6490;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar13 = (long *)FUN_06bfc93c();
            if (plVar13 == (long *)0x0) {
LAB_06bf64e4:
              plVar13 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf64e4;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar13 = (long *)0x0;
              }
            }
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bf6538:
              plVar14 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar1) goto LAB_06bf6538;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c89998(in_stack_000004e8,plVar7,plVar13,0,0,0);
            in_stack_00000058 = (undefined8 *)&stack0x000002c8;
            in_stack_00000050 = 0;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            FUN_06ae496c(&stack0x00000480,1,uVar3,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar7 = (long *)FUN_03e16e50(in_stack_000004e8,plVar9,&stack0x00000420,
                                          *(undefined8 *)
                                           System_Collections_Generic_List<IFDStructure>_TypeInfo);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar9 = (long *)FUN_06c89c20(in_stack_000004e8,plVar7,plVar13,plVar14,0);
            in_stack_000000c8 = (undefined8 *)&stack0x000002b8;
            in_stack_000000c0 = 0;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,1,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            puVar16 = (undefined8 *)0x0;
            FUN_06ae4cb4(&stack0x00000480,uVar3,0);
            (**(code **)(*plVar9 + 0x188))(plVar9,&stack0x00000450,*(undefined8 *)(*plVar9 + 400));
            uVar8 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            plVar13 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,4);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar10 + 0x18) != 0) {
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(lVar10 + 0x20);
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0)
                 ) {
                uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar8,0);
              }
              if ((int)plVar13[3] != 0) {
                plVar13[4] = lVar10;
                thunk_FUN_036b7ad0(plVar13 + 4,lVar10);
                lVar10 = FUN_06bb3098(uVar8,0);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar11 == 0)) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if ((*(uint *)(plVar13 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar13[5] = lVar10;
                thunk_FUN_036b7ad0(plVar13 + 5,lVar10);
                lVar10 = FUN_06bb3098(uVar19,0);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar11 == 0)) {
                  uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar8,0);
                }
                if (*(uint *)(plVar13 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar13[6] = lVar10;
                thunk_FUN_036b7ad0(plVar13 + 6,lVar10);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar10 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                  lVar10 = *(long *)(lVar10 + 0x38);
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar11 == 0)) {
                    uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar8,0);
                  }
                  if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                    plVar13[7] = lVar10;
                    thunk_FUN_036b7ad0(plVar13 + 7,lVar10);
                    FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                 *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,plVar13,0);
                    FUN_04ee7cc8();
                    if (plVar9 != (long *)0x0) {
                      lVar10 = *plVar9;
                      uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                            puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                            goto FUN_06bf68d0;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)PTR_DAT_079f4598,0);
FUN_06bf68d0:
                      (*(code *)*puVar12)(plVar9,puVar12[1]);
                    }
                    if (plVar7 != (long *)0x0) {
                      lVar10 = *plVar7;
                      uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                            puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_06bf6948;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_06bf6948:
                      (*(code *)*puVar12)(plVar7,puVar12[1]);
                    }
                    plVar7 = (long *)*in_stack_00000058;
                    if (plVar7 != (long *)0x0) {
                      lVar10 = *plVar7;
                      uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                            puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_06bf72e4;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_06bf72e4:
                      (*(code *)*puVar12)(plVar7,puVar12[1]);
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
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (iVar2 == 1) {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar2 = FUN_06bb2f08(*(undefined8 *)(lVar10 + 0x40),0);
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar4 = FUN_06bb2f08(*(undefined8 *)(lVar10 + 0x48),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar5 = FUN_06bb2f08(*(undefined8 *)(lVar10 + 0x40),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar6 = FUN_06bb2f08(*(undefined8 *)(lVar10 + 0x48),0);
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar8 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,0,uVar8);
              uVar8 = FUN_06bb2ea4(1,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              uVar8 = FUN_06bb2f90(0,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,2,uVar8);
              uVar8 = FUN_06bb2f90(0,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,3,uVar8);
              uVar8 = FUN_06bb2ea4(iVar5 * iVar2,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,4,uVar8);
              uVar8 = FUN_06bb2ea4(iVar6 + iVar5 * iVar4,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,5,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar10,0);
              FUN_04ee7cc8();
            }
            else {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar23 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar25 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar8 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,0,uVar8);
              uVar8 = FUN_06bb2ea4(0,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              uVar8 = FUN_06bb2f90(fVar22 * fVar24,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,2,uVar8);
              uVar8 = FUN_06bb2f90(fVar23 * fVar24 + fVar25,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,3,uVar8);
              uVar8 = FUN_06bb2ea4(0,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,4,uVar8);
              uVar8 = FUN_06bb2ea4(0,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,5,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar10,0);
              FUN_04ee7cc8();
            }
            goto LAB_06bf354c;
          }
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36348,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == 0.0)) {
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar7 == (long *)0x0) {
LAB_06bf7678:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf7678;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              FUN_06c896c8(uVar3,0,in_stack_000004e8,plVar7,0);
              puVar16 = (undefined8 *)&stack0x000002b0;
              uVar8 = FUN_06bfc538();
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar10,uVar19);
              FUN_03154bd8(lVar10,0,uVar19);
              uVar8 = FUN_06bb3098(uVar8,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar10,0);
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
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == 0.0)) {
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar8 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar7 == (long *)0x0) {
LAB_06bf7ab0:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf7ab0;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              FUN_06c896c8(uVar8,0,in_stack_000004e8,plVar7,0);
              puVar16 = (undefined8 *)&stack0x000002a8;
              uVar8 = FUN_06bfc538();
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              FUN_03154b74(lVar10,uVar19);
              FUN_03154bd8(lVar10,0,uVar19);
              uVar8 = FUN_06bb3098(uVar8,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar10,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
            }
            goto LAB_06bf354c;
          }
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == unaff_s12)) {
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar7 == (long *)0x0) {
LAB_06bf7cd0:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf7cd0;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,uVar3,in_stack_000004e8,plVar7,0);
              puVar16 = (undefined8 *)&stack0x000002a0;
              uVar8 = FUN_06bfc538();
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar10,uVar19);
              FUN_03154bd8(lVar10,0,uVar19);
              uVar8 = FUN_06bb3098(uVar8,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar10,0);
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
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == unaff_s12)) {
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar7 == (long *)0x0) {
LAB_06bf7f04:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf7f04;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,uVar3,in_stack_000004e8,plVar7,0);
              puVar16 = (undefined8 *)&stack0x00000298;
              uVar8 = FUN_06bfc538();
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              FUN_03154b74(lVar10,uVar19);
              FUN_03154bd8(lVar10,0,uVar19);
              uVar8 = FUN_06bb3098(uVar8,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar10,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
            }
            goto LAB_06bf354c;
          }
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36770,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == unaff_s12)) {
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000003b4 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar7 == (long *)0x0) {
LAB_06bf812c:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf812c;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,-fVar22,in_stack_000004e8,plVar7,0);
                puVar16 = (undefined8 *)&stack0x00000290;
                uVar8 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar19 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar19);
                FUN_03154bd8(lVar10,0,uVar19);
                uVar8 = FUN_06bb3098(uVar8,0);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar10,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              else {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar7 == (long *)0x0) {
LAB_06bf8270:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf8270;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,-fVar22,in_stack_000004e8,plVar7,0);
                puVar16 = (undefined8 *)&stack0x00000288;
                uVar8 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                uVar8 = FUN_06bb3098(uVar8,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,0,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar10,0);
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
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == unaff_s12)) {
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
              if (in_stack_000003b0 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar7 == (long *)0x0) {
LAB_06bf84a8:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf84a8;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,-fVar22,in_stack_000004e8,plVar7,0);
                puVar16 = (undefined8 *)&stack0x00000280;
                uVar8 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar19 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar19);
                FUN_03154bd8(lVar10,0,uVar19);
                uVar8 = FUN_06bb3098(uVar8,0);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar10,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              else {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar7 == (long *)0x0) {
LAB_06bf85ec:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf85ec;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                FUN_06c896c8(0x3f800000,fVar22,in_stack_000004e8,plVar7,0);
                puVar16 = (undefined8 *)&stack0x00000278;
                uVar8 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                uVar8 = FUN_06bb3098(uVar8,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,0,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x28);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar10,0);
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
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == unaff_s12)) {
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar7 == (long *)0x0) {
LAB_06bf8824:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf8824;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,uVar3,in_stack_000004e8,plVar7,0);
              puVar16 = (undefined8 *)&stack0x00000270;
              uVar8 = FUN_06bfc538();
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
              FUN_03154b74(lVar10,uVar19);
              FUN_03154bd8(lVar10,0,uVar19);
              uVar8 = FUN_06bb3098(uVar8,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar10,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
            }
            goto LAB_06bf354c;
          }
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a35338,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == 0.0)) {
              lVar10 = *(long *)(unaff_x22 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar7 == (long *)0x0) {
LAB_06bf8a44:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf8a44;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              FUN_06c896c8(unaff_s12 / fVar22,0,in_stack_000004e8,plVar7,0);
              puVar16 = (undefined8 *)&stack0x00000268;
              uVar8 = FUN_06bfc538();
              uVar19 = *(undefined8 *)PTR_DAT_07a35338;
              if (in_stack_000003b4 == 0) {
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar20 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar20);
                FUN_03154bd8(lVar10,0,uVar20);
                uVar8 = FUN_06bb3098(uVar8,0);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
              }
              else {
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                uVar8 = FUN_06bb3098(uVar8,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,0,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
              }
              FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar19,lVar10,0);
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
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar2 = FUN_06bb28d4(*(long *)(lVar10 + 0x28),0);
            if ((iVar2 == 0) && (fVar22 == 0.0)) {
              plVar7 = (long *)FUN_06bfc93c();
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
              if (in_stack_000003b0 == 0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar7 == (long *)0x0) {
LAB_06bf8cf4:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf8cf4;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                FUN_06c896c8(unaff_s12 / fVar22,0,in_stack_000004e8,plVar7,0);
                puVar16 = (undefined8 *)&stack0x00000260;
                uVar8 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar19 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar19);
                FUN_03154bd8(lVar10,0,uVar19);
                uVar8 = FUN_06bb3098(uVar8,0);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar10,0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000480);
              }
              else {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (plVar7 == (long *)0x0) {
LAB_06bf8e38:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf8e38;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                FUN_06c896c8(fVar22,0,in_stack_000004e8,plVar7,0);
                puVar16 = (undefined8 *)&stack0x00000258;
                uVar8 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
                uVar8 = FUN_06bb3098(uVar8,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,0,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x28);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar10,0);
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
                plVar7 = (long *)FUN_06bfc93c();
                if (plVar7 == (long *)0x0) {
LAB_06bf9018:
                  plVar7 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf9018;
                  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar7 = (long *)0x0;
                  }
                }
                plVar9 = (long *)FUN_06bfc93c();
                if (plVar9 == (long *)0x0) {
LAB_06bf906c:
                  plVar9 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf906c;
                  if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar9 = (long *)0x0;
                  }
                }
                plVar13 = (long *)FUN_06bfc93c();
                if (plVar13 == (long *)0x0) {
LAB_06bf90c0:
                  plVar13 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf90c0;
                  if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar13 = (long *)0x0;
                  }
                }
                plVar14 = (long *)FUN_06bfc93c();
                if (plVar14 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__get_remoting:
                  plVar14 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                  if (*(byte *)(*plVar14 + 0x130) < bVar1)
                  goto UnityEngine_InputSystem_InputSystem__get_remoting;
                  if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_07a33940) {
                    plVar14 = (long *)0x0;
                  }
                }
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_06c8a3b8(in_stack_000004e8,plVar7,plVar13,0);
                puVar16 = (undefined8 *)&stack0x00000250;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar8 = FUN_06c8a3b8(in_stack_000004e8,plVar9,plVar13,0);
                in_stack_00000058 = (undefined8 *)&stack0x00000248;
                in_stack_00000050 = 0;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_06c89dd8(in_stack_000004e8,uVar8,plVar14,0);
                in_stack_000000c8 = (undefined8 *)&stack0x00000240;
                in_stack_000000c0 = 0;
                uVar8 = FUN_06bfc538();
                uVar19 = FUN_06bfc538();
                lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar20 = *(undefined8 *)(lVar11 + 0x20);
                FUN_03154b74(lVar10,uVar20);
                FUN_03154bd8(lVar10,0,uVar20);
                uVar8 = FUN_06bb3098(uVar8,0);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,1,uVar8);
                uVar8 = FUN_06bb3098(uVar19,0);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,2,uVar8);
                lVar11 = *(long *)(unaff_x22 + 0x28);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar8 = *(undefined8 *)(lVar11 + 0x38);
                FUN_03154b74(lVar10,uVar8);
                FUN_03154bd8(lVar10,3,uVar8);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar10,0);
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
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar10 = FUN_06bb3114(*(undefined8 *)(lVar10 + 0x20),0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(long *)(lVar10 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            memmove(&stack0x00000160,(void *)(*(long *)(lVar10 + 0x78) + 0x14),0x68);
            bVar1 = FUN_06cada30(&stack0x00000160,0);
            if ((bVar1 & in_stack_000001c0._4_4_ == 2) != 0) {
              plVar7 = (long *)FUN_06bfc93c();
              if (plVar7 == (long *)0x0) {
LAB_06bf96cc:
                plVar7 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf96cc;
                if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar7 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bf9720:
                plVar9 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf9720;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              plVar13 = (long *)FUN_06bfc93c();
              if (plVar13 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization:
                plVar13 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1)
                goto UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar13 = (long *)0x0;
                }
              }
              plVar14 = (long *)FUN_06bfc93c();
              if (plVar14 == (long *)0x0) {
LAB_06bf97c8:
                plVar14 = (long *)0x0;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar14 + 0x130) < bVar1) goto LAB_06bf97c8;
                if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar14 = (long *)0x0;
                }
              }
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_00000070 = 0;
              in_stack_00000058 = (undefined8 *)0x0;
              in_stack_00000050 = 0;
              in_stack_00000068 = 0;
              in_stack_00000060 = 0;
              FUN_06ae496c(&stack0x00000050,uVar3,1,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              auVar28 = FUN_03e16e50(in_stack_000004e8,plVar7,&stack0x00000480,
                                     *(undefined8 *)
                                      System_Collections_Generic_List<IFDStructure>_TypeInfo);
              in_stack_00000158 = auVar28._0_8_;
              in_stack_00000058 = &stack0x00000158;
              in_stack_00000050 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,auVar28._8_8_,in_stack_00000158);
              }
              in_stack_00000150 = FUN_06c8a3b8(in_stack_000004e8,plVar13,in_stack_00000158,0);
              in_stack_000000c8 = &stack0x00000150;
              in_stack_000000c0 = 0;
              uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              FUN_06ae496c(&stack0x00000480,1,uVar3,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000148 =
                   FUN_03e16e50(in_stack_000004e8,plVar9,&stack0x000004b0,
                                *(undefined8 *)
                                 System_Collections_Generic_List<IFDStructure>_TypeInfo);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              auVar28 = FUN_06c89998(in_stack_000004e8,in_stack_00000148,plVar13,0,0,0);
              in_stack_00000140 = auVar28._0_8_;
              puVar16 = &stack0x00000140;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,auVar28._8_8_,in_stack_00000140);
              }
              in_stack_00000138 = FUN_06c89dd8(in_stack_000004e8,plVar14,in_stack_00000140,0);
              in_stack_000000b8 = &stack0x00000138;
              in_stack_000000b0 = 0;
              uVar8 = FUN_06bfc538();
              uVar19 = FUN_06bfc538();
              lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar11 = *(long *)(unaff_x22 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar11 + 0x20);
              FUN_03154b74(lVar10,uVar20);
              FUN_03154bd8(lVar10,0,uVar20);
              uVar8 = FUN_06bb3098(uVar8,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,1,uVar8);
              uVar8 = FUN_06bb3098(uVar19,0);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,2,uVar8);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar11 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar8 = *(undefined8 *)(lVar11 + 0x38);
              FUN_03154b74(lVar10,uVar8);
              FUN_03154bd8(lVar10,3,uVar8);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar10,0);
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
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bf9d14:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bf9d14;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf9d68:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bf9d68;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000130 = FUN_06c896c8(uVar3,0,in_stack_000004e8,plVar7,0);
            puVar16 = &stack0x00000130;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000128 = FUN_06c896c8(uVar3,uVar21,in_stack_000004e8,plVar9,0);
            in_stack_00000058 = &stack0x00000128;
            in_stack_00000050 = 0;
            uVar8 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar11 + 0x20);
            FUN_03154b74(lVar10,uVar20);
            FUN_03154bd8(lVar10,0,uVar20);
            uVar8 = FUN_06bb3098(uVar8,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,1,uVar8);
            uVar8 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,2,uVar8);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar8 = *(undefined8 *)(lVar11 + 0x38);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,3,uVar8);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar10,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000050);
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bfa058:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bfa058;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bfa0ac:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bfa0ac;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000120 = FUN_06c896c8(uVar3,0,in_stack_000004e8,plVar7,0);
            in_stack_00000058 = &stack0x00000120;
            in_stack_00000050 = 0;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            FUN_06ae496c(&stack0x00000480,1,uVar3,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000040 = 0;
            in_stack_00000118 = FUN_06c8aaf0(uVar21,in_stack_000004e8,&stack0x00000020,0);
            puVar16 = &stack0x00000118;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            auVar28 = FUN_06c89998(in_stack_000004e8,in_stack_00000118,plVar7,0,0,0);
            in_stack_00000110 = auVar28._0_8_;
            in_stack_000000c8 = &stack0x00000110;
            in_stack_000000c0 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar28._8_8_,in_stack_00000110);
            }
            in_stack_00000108 = FUN_06c89dd8(in_stack_000004e8,plVar9,in_stack_00000110,0);
            in_stack_000000b8 = &stack0x00000108;
            in_stack_000000b0 = 0;
            uVar8 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar11 + 0x20);
            FUN_03154b74(lVar10,uVar20);
            FUN_03154bd8(lVar10,0,uVar20);
            uVar8 = FUN_06bb3098(uVar8,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,1,uVar8);
            uVar8 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,2,uVar8);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar11 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar8 = *(undefined8 *)(lVar11 + 0x38);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,3,uVar8);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar10,0);
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
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar17 & 1) != 0) {
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bfa694:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bfa694;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bfa6e8:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bfa6e8;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar10 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000100 = FUN_06c896c8(uVar3,0,in_stack_000004e8,plVar7,0);
            puVar16 = &stack0x00000100;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_000000f8 = FUN_06c896c8(uVar3,uVar21,in_stack_000004e8,plVar9,0);
            in_stack_00000058 = &stack0x000000f8;
            in_stack_00000050 = 0;
            uVar8 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar11 + 0x20);
            FUN_03154b74(lVar10,uVar20);
            FUN_03154bd8(lVar10,0,uVar20);
            uVar8 = FUN_06bb3098(uVar8,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,1,uVar8);
            uVar8 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,2,uVar8);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar10,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000050);
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar17 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar17 & 1) != 0) {
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar3 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x30),0);
            lVar10 = *(long *)(unaff_x22 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar10 + 0x38),0);
            plVar7 = (long *)FUN_06bfc93c();
            if (plVar7 == (long *)0x0) {
LAB_06bfa9a4:
              plVar7 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_06bfa9a4;
              if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar7 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bfa9f8:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_06bfa9f8;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_000000f0 = FUN_06c896c8(uVar3,0,in_stack_000004e8,plVar7,0);
            puVar16 = &stack0x000000f0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            auVar28 = FUN_06c896c8(uVar21,0,in_stack_000004e8,plVar7,0);
            in_stack_000000e8 = auVar28._0_8_;
            in_stack_00000058 = &stack0x000000e8;
            in_stack_00000050 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar28._8_8_,in_stack_000000e8);
            }
            in_stack_000000e0 = FUN_06c89dd8(in_stack_000004e8,plVar9,in_stack_000000e8,0);
            in_stack_000000c8 = &stack0x000000e0;
            in_stack_000000c0 = 0;
            uVar8 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar10 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
            lVar11 = *(long *)(unaff_x22 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar11 + 0x20);
            FUN_03154b74(lVar10,uVar20);
            FUN_03154bd8(lVar10,0,uVar20);
            uVar8 = FUN_06bb3098(uVar8,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,1,uVar8);
            uVar8 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar10,uVar8);
            FUN_03154bd8(lVar10,2,uVar8);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar10,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x000000c0);
            FUN_03154064(&stack0x00000050);
            FUN_03154064(&stack0x00000480);
          }
        }
        goto LAB_06bf354c;
      }
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar17 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                  *(undefined8 *)PTR_DAT_07a30a70,0);
      if ((uVar17 & 1) == 0) goto LAB_06bf3bc0;
      plVar7 = (long *)FUN_06bfc93c();
      plVar9 = (long *)FUN_06bfc93c();
      if (plVar7 == (long *)0x0) {
        if (in_stack_000004e8 == 0) {
LAB_06bfb11c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar10 = *(long *)PTR_DAT_07a33940;
LAB_06bf3d70:
        plVar7 = (long *)0x0;
        if (plVar9 == (long *)0x0) {
LAB_06bf3d8c:
          plVar9 = (long *)0x0;
        }
        else {
LAB_06bf3d78:
          if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_06bf3d8c;
          if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
              lVar10) {
            plVar9 = (long *)0x0;
          }
        }
        lVar10 = FUN_06c89dd8(in_stack_000004e8,plVar7,plVar9,0);
      }
      else {
        lVar11 = *plVar7;
        lVar10 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
          if (in_stack_000004e8 == 0) goto LAB_06bfb11c;
          lVar10 = *(long *)PTR_DAT_07a33940;
          if (*(byte *)(lVar11 + 0x130) < *(byte *)(lVar10 + 0x130)) goto LAB_06bf3d70;
          if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
              lVar10) {
            plVar7 = (long *)0x0;
          }
          if (plVar9 != (long *)0x0) goto LAB_06bf3d78;
          goto LAB_06bf3d8c;
        }
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar1)) {
          plVar9 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
          plVar9 = (long *)0x0;
        }
        lVar10 = FUN_06c89f50(in_stack_000004e8,plVar7,plVar9,0);
      }
      uVar8 = FUN_06bfc538();
      plVar7 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
      lVar11 = *(long *)(unaff_x22 + 0x28);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar11 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0d8:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar11 = *(long *)(lVar11 + (long)(int)in_stack_000003b0 * 8 + 0x20);
      if ((lVar11 != 0) &&
         (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0)) {
        uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar8,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_06bfb0d8;
      plVar7[4] = lVar11;
      thunk_FUN_036b7ad0(plVar7 + 4,lVar11);
      lVar11 = FUN_06bb3098(uVar8,0);
      if ((lVar11 != 0) &&
         (lVar15 = thunk_FUN_0367fd24(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0)) {
        uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar8,0);
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar7[5] = lVar11;
      thunk_FUN_036b7ad0(plVar7 + 5,lVar11);
      FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar7,0);
      FUN_04ee7cc8();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_06ae5f08(lVar10,0);
      goto LAB_06bf354c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
code_r0x06bf3668:
  unaff_x27 = (long)(int)in_stack_000003b0;
  param_3 = (long *)FUN_06bfc93c();
  param_2 = (long *)FUN_06bfc93c();
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((int)param_3[9] != 0) goto code_r0x06bf36b0;
  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar10 = *(long *)PTR_DAT_07a33940;
  if (param_2 == (long *)0x0) {
    uVar17 = (ulong)*(byte *)(lVar10 + 0x130);
  }
  else {
    uVar17 = (ulong)*(byte *)(lVar10 + 0x130);
    if (*(byte *)(lVar10 + 0x130) <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + uVar17 * 8 + -8) != lVar10) {
        param_2 = (long *)0x0;
      }
      goto LAB_06bf3778;
    }
  }
  param_2 = (long *)0x0;
LAB_06bf3778:
  if ((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar17) {
    param_3 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_3 + 200) + uVar17 * 8 + -8) != lVar10) {
    param_3 = (long *)0x0;
  }
  plVar7 = (long *)FUN_06c8a0c8(in_stack_000004e8,param_2,param_3,0);
  goto FUN_06bf37ac;
code_r0x06bf36b0:
  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar10 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
  if (param_2 == (long *)0x0) {
    uVar17 = (ulong)*(byte *)(lVar10 + 0x130);
  }
  else {
    uVar17 = (ulong)*(byte *)(lVar10 + 0x130);
    if (*(byte *)(lVar10 + 0x130) <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + uVar17 * 8 + -8) != lVar10) {
        param_2 = (long *)0x0;
      }
      goto LAB_06bf3738;
    }
  }
  param_2 = (long *)0x0;
LAB_06bf3738:
  param_1 = in_stack_000004e8;
  if ((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar17) {
    param_3 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_3 + 200) + uVar17 * 8 + -8) != lVar10) {
    param_3 = (long *)0x0;
  }
  goto code_r0x06bf3764;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_06bf5ee4:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar16 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_06bf5f18;
    }
  }
LAB_06bf5efc:
  puVar16 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5f18:
  (*(code *)*puVar16)(plVar9,puVar16[1]);
LAB_06bf5f54:
  if (plVar7 != (long *)0x0) {
    uVar3 = FUN_06ae539c(&stack0x00000360,0);
    in_stack_00000070 = 0;
    in_stack_00000058 = (undefined8 *)0x0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06ae4cb4(&stack0x00000050,uVar3,0);
    (**(code **)(*plVar7 + 0x188))(plVar7,&stack0x000003f0,*(undefined8 *)(*plVar7 + 400));
    FUN_06bfc538();
    FUN_06bfc538();
    FUN_0753c580(&System_Func<UniqueIdentifier_Decorator>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


