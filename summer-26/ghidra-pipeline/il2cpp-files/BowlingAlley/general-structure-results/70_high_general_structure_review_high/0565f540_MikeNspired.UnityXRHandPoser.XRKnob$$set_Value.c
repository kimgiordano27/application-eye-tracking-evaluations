/*
FUNCTION_NAME: MikeNspired.UnityXRHandPoser.XRKnob$$set_Value
ENTRY_POINT: 0565f540
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0565ffb0) */
/* WARNING: Removing unreachable block (ram,0x05660e14) */
/* WARNING: Removing unreachable block (ram,0x0565f978) */
/* WARNING: Removing unreachable block (ram,0x05661060) */
/* WARNING: Removing unreachable block (ram,0x0565f640) */
/* WARNING: Removing unreachable block (ram,0x0565ff80) */
/* WARNING: Removing unreachable block (ram,0x0565ffe8) */
/* WARNING: Removing unreachable block (ram,0x0565fc68) */

void MikeNspired_UnityXRHandPoser_XRKnob__set_Value(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  int in_w8;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  undefined4 *unaff_x19;
  uint uVar23;
  int iVar24;
  undefined8 *unaff_x25;
  undefined1 auVar25 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  if (in_w8 == 0) {
    bVar6 = false;
    in_stack_00000040 = unaff_x19;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe) != 0) {
      FUN_050f8f40(&stack0x00000070,*(long *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_07287058);
      unaff_x25[1] = in_stack_00000078;
      *unaff_x25 = in_stack_00000070;
      unaff_x25[3] = in_stack_00000088;
      unaff_x25[2] = in_stack_00000080;
      puVar2 = PTR_DAT_07287110;
      in_stack_00000190 = in_stack_00000090;
      while (uVar11 = FUN_05391a64(&stack0x00000170,*(undefined8 *)puVar2), (uVar11 & 1) != 0) {
        if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        auVar25 = FUN_05661290();
        lVar12 = *(long *)(in_stack_00000040 + 0x10);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar20 = *(long *)(lVar12 + 0x10);
        lVar21 = *(long *)PTR_DAT_072871b8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar23 = *(uint *)(lVar12 + 0x18);
        if (uVar23 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar23 + 1;
          *(undefined1 (*) [16])(lVar20 + (long)(int)uVar23 * 0x10 + 0x20) = auVar25;
        }
        else {
          FUN_041ad9c0(lVar12,auVar25._0_8_,auVar25._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (in_stack_00000028 < 0) {
        FUN_05391b84(&stack0x00000170,*(undefined8 *)PTR_DAT_072870f0);
      }
    }
    if (*(long *)(in_stack_00000040 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar11 = FUN_0567dd8c(*(long *)(in_stack_00000040 + 8),0);
    puVar5 = PTR_DAT_07287188;
    puVar4 = PTR_DAT_07287168;
    puVar3 = PTR_DAT_07287160;
    puVar2 = PTR_DAT_0727a180;
    if ((uVar11 & 1) != 0) {
      plVar13 = *(long **)(in_stack_00000040 + 8);
      if (plVar13 == (long *)0x0) {
LAB_0565ff68:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar24 = 0;
LAB_0565f694:
      plVar13 = (long *)(**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar12 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar11 != 0) {
        piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07287178) {
            puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_0565f6fc;
          }
          uVar11 = uVar11 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar11 != 0);
      }
      puVar14 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_07287178,0);
LAB_0565f6fc:
      iVar8 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if (iVar24 < iVar8) {
        plVar13 = *(long **)(in_stack_00000040 + 8);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07287180) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_0565f788;
            }
            uVar11 = uVar11 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_07287180,0);
LAB_0565f788:
        plVar13 = (long *)(*(code *)*puVar14)(plVar13,iVar24,puVar14[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar15 = (long *)(**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07287140) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_0565f810;
            }
            uVar11 = uVar11 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_032937ac(plVar15,*(long *)PTR_DAT_07287140,0);
LAB_0565f810:
        plVar15 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        do {
          lVar20 = *plVar15;
          lVar12 = *(long *)puVar2;
          uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar11 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar12) {
                puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_0565f870;
              }
              uVar11 = uVar11 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar11 != 0);
          }
          puVar14 = (undefined8 *)FUN_032937ac(plVar15,lVar12,0);
LAB_0565f870:
          uVar11 = (*(code *)*puVar14)(plVar15,puVar14[1]);
          if ((uVar11 & 1) == 0) goto LAB_0565f8f8;
          lVar12 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
                puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_0565f8cc;
              }
              uVar11 = uVar11 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar11 != 0);
          }
          puVar14 = (undefined8 *)FUN_032937ac(plVar15,*(long *)puVar3,0);
LAB_0565f8cc:
          lVar12 = (*(code *)*puVar14)(plVar15,puVar14[1]);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_05655694(in_stack_00000030,*(undefined4 *)(lVar12 + 0x10),0x200,0);
        } while( true );
      }
    }
    plVar13 = *(long **)(in_stack_00000040 + 8);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar12 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07286a98) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
          goto MikeNspired_UnityXRHandPoser_XRKnob__UpdateRotation;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_07286a98,0);
MikeNspired_UnityXRHandPoser_XRKnob__UpdateRotation:
    uVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    uVar18 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07286ff0,uVar10);
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(undefined8 *)(in_stack_00000030 + 0x68) = uVar18;
    thunk_FUN_0333a630();
    iVar24 = 0;
    in_stack_00000040[0x20] = 0;
    while( true ) {
      puVar3 = PTR_DAT_07286ee0;
      puVar2 = PTR_DAT_07286ed8;
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(long *)(in_stack_00000030 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar24) break;
      plVar13 = *(long **)(in_stack_00000040 + 8);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar12 = *plVar13;
      uVar10 = in_stack_00000040[0x20];
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar11 != 0) {
        piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07286aa0) {
            puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_056602a8;
          }
          uVar11 = uVar11 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar11 != 0);
      }
      puVar14 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_07286aa0,0);
LAB_056602a8:
      lVar12 = (*(code *)*puVar14)(plVar13,uVar10,puVar14[1]);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (-1 < *(int *)(lVar12 + 0x18)) {
        uVar7 = FUN_05675d98(lVar12,0);
        switch(uVar7) {
        case 1:
          lVar12 = *(long *)(in_stack_00000030 + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar12 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          iVar24 = *(int *)(lVar12 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
          if (iVar24 < 0x200) {
            if ((iVar24 == 2) || (iVar24 == 4)) {
              lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286cd8);
              UnityEngine_UIElements_StylePropertyAnimationSystem_AnimationDataSet<StylePropertyAnimationSystem_Values_EmptyData<BackgroundPosition>,_BackgroundPosition>__Add
                        (lVar12,*(undefined8 *)PTR_DAT_07286ff8);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar20 = *(long *)(in_stack_00000030 + 0x70);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar23 = in_stack_00000040[0x20];
              if (*(uint *)(lVar20 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              FUN_0565609c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           (long)(int)uVar23,lVar12 + 0x10,&stack0x00000158,lVar12 + 0x18,
                           *(int *)(lVar20 + (long)(int)uVar23 * 4 + 0x20) == 4,0);
              lVar20 = *(long *)(in_stack_00000040 + 0x10);
              auVar25 = FUN_0464838c(&stack0x00000158,*(undefined8 *)PTR_DAT_07285500);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar21 = *(long *)(lVar20 + 0x10);
              lVar19 = *(long *)PTR_DAT_072871b8;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar23 = *(uint *)(lVar20 + 0x18);
              if (uVar23 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar23 + 1;
                *(undefined1 (*) [16])(lVar21 + (long)(int)uVar23 * 0x10 + 0x20) = auVar25;
              }
              else {
                FUN_041ad9c0(lVar20,auVar25._0_8_,auVar25._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar23 = in_stack_00000040[0x20];
              lVar20 = thunk_FUN_032a55a4(lVar12,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar20 == 0) {
                uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar18,0);
              }
              if (*(uint *)(plVar13 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              plVar13[(long)(int)uVar23 + 4] = lVar12;
              thunk_FUN_0333a630(plVar13 + (long)(int)uVar23 + 4,lVar12);
            }
          }
          else if ((iVar24 == 0x200) || (iVar24 == 0x2000)) {
            lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07287020);
            FUN_05015df0(lVar12,*(undefined8 *)PTR_DAT_07287008);
            FUN_056573b8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                         in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8,0);
            if (in_stack_000000e0 != '\0') {
              auVar25 = FUN_0463a610(&stack0x000000e0,*(undefined8 *)PTR_DAT_07286df8);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              *(undefined1 (*) [16])(lVar12 + 0x10) = auVar25;
            }
            if (in_stack_000000c8 != '\0') {
              lVar20 = *(long *)(in_stack_00000040 + 0x10);
              auVar25 = FUN_0464838c(&stack0x000000c8,*(undefined8 *)PTR_DAT_07285500);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar21 = *(long *)(lVar20 + 0x10);
              lVar19 = *(long *)PTR_DAT_072871b8;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar23 = *(uint *)(lVar20 + 0x18);
              if (uVar23 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar23 + 1;
                *(undefined1 (*) [16])(lVar21 + (long)(int)uVar23 * 0x10 + 0x20) = auVar25;
              }
              else {
                FUN_041ad9c0(lVar20,auVar25._0_8_,auVar25._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar23 = in_stack_00000040[0x20];
            if ((lVar12 != 0) &&
               (lVar20 = thunk_FUN_032a55a4(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar20 == 0))
            {
              uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar18,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[(long)(int)uVar23 + 4] = lVar12;
            thunk_FUN_0333a630(plVar13 + (long)(int)uVar23 + 4,lVar12);
          }
          break;
        case 3:
          lVar12 = *(long *)(in_stack_00000030 + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar12 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          uVar23 = *(uint *)(lVar12 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
          if ((uVar23 >> 10 & 1) == 0) {
            if ((uVar23 >> 0xc & 1) != 0) {
              lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e28);
              FUN_05015e10(lVar12,*(undefined8 *)PTR_DAT_07287000);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_05656aa4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar12 + 0x10,&stack0x000000f8,0,0);
              lVar20 = *(long *)(in_stack_00000040 + 0x10);
              auVar25 = FUN_0464838c(&stack0x000000f8,*(undefined8 *)PTR_DAT_07285500);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar21 = *(long *)(lVar20 + 0x10);
              lVar19 = *(long *)PTR_DAT_072871b8;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar23 = *(uint *)(lVar20 + 0x18);
              if (uVar23 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar23 + 1;
                *(undefined1 (*) [16])(lVar21 + (long)(int)uVar23 * 0x10 + 0x20) = auVar25;
              }
              else {
                FUN_041ad9c0(lVar20,auVar25._0_8_,auVar25._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar23 = in_stack_00000040[0x20];
              lVar20 = thunk_FUN_032a55a4(lVar12,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar20 == 0) {
                uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar18,0);
              }
              if (*(uint *)(plVar13 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              plVar13[(long)(int)uVar23 + 4] = lVar12;
              thunk_FUN_0333a630(plVar13 + (long)(int)uVar23 + 4,lVar12);
            }
          }
          else {
            lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e28);
            FUN_05015e10(lVar12,*(undefined8 *)PTR_DAT_07287000);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_05656aa4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                         in_stack_00000040[0x20],lVar12 + 0x10,&stack0x00000128,1,0);
            lVar20 = *(long *)(in_stack_00000040 + 0x10);
            auVar25 = FUN_0464838c(&stack0x00000128,*(undefined8 *)PTR_DAT_07285500);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar21 = *(long *)(lVar20 + 0x10);
            lVar19 = *(long *)PTR_DAT_072871b8;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar23 = *(uint *)(lVar20 + 0x18);
            if (uVar23 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar23 + 1;
              *(undefined1 (*) [16])(lVar21 + (long)(int)uVar23 * 0x10 + 0x20) = auVar25;
            }
            else {
              FUN_041ad9c0(lVar20,auVar25._0_8_,auVar25._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar23 = in_stack_00000040[0x20];
            lVar20 = thunk_FUN_032a55a4(lVar12,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar20 == 0) {
              uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar18,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[(long)(int)uVar23 + 4] = lVar12;
            thunk_FUN_0333a630(plVar13 + (long)(int)uVar23 + 4,lVar12);
          }
          break;
        case 4:
          lVar12 = *(long *)(in_stack_00000030 + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar12 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          if ((*(uint *)(lVar12 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0) {
            lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e30);
            FUN_05015dd0(lVar12,*(undefined8 *)PTR_DAT_07287018);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_05656ee4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                         in_stack_00000040[0x20],lVar12 + 0x10,&stack0x00000110,0);
            lVar20 = *(long *)(in_stack_00000040 + 0x10);
            auVar25 = FUN_0464838c(&stack0x00000110,*(undefined8 *)PTR_DAT_07285500);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar21 = *(long *)(lVar20 + 0x10);
            lVar19 = *(long *)PTR_DAT_072871b8;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar23 = *(uint *)(lVar20 + 0x18);
            if (uVar23 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar23 + 1;
              *(undefined1 (*) [16])(lVar21 + (long)(int)uVar23 * 0x10 + 0x20) = auVar25;
            }
            else {
              FUN_041ad9c0(lVar20,auVar25._0_8_,auVar25._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar23 = in_stack_00000040[0x20];
            lVar20 = thunk_FUN_032a55a4(lVar12,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar20 == 0) {
              uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar18,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[(long)(int)uVar23 + 4] = lVar12;
            thunk_FUN_0333a630(plVar13 + (long)(int)uVar23 + 4,lVar12);
          }
          break;
        case 7:
          lVar12 = *(long *)(in_stack_00000030 + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar12 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          if (*(int *)(lVar12 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
            lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e70);
            FUN_05015db0(lVar12,*(undefined8 *)PTR_DAT_07287010);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_056566c0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                         in_stack_00000040[0x20],lVar12 + 0x10,&stack0x00000140,0);
            lVar20 = *(long *)(in_stack_00000040 + 0x10);
            auVar25 = FUN_0464838c(&stack0x00000140,*(undefined8 *)PTR_DAT_07285500);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar21 = *(long *)(lVar20 + 0x10);
            lVar19 = *(long *)PTR_DAT_072871b8;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar23 = *(uint *)(lVar20 + 0x18);
            if (uVar23 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar23 + 1;
              *(undefined1 (*) [16])(lVar21 + (long)(int)uVar23 * 0x10 + 0x20) = auVar25;
            }
            else {
              FUN_041ad9c0(lVar20,auVar25._0_8_,auVar25._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            plVar13 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar23 = in_stack_00000040[0x20];
            lVar20 = thunk_FUN_032a55a4(lVar12,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar20 == 0) {
              uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar18,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[(long)(int)uVar23 + 4] = lVar12;
            thunk_FUN_0333a630(plVar13 + (long)(int)uVar23 + 4,lVar12);
          }
        }
        plVar13 = *(long **)(in_stack_00000030 + 0x20);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07286820) {
              puVar14 = (undefined8 *)(lVar12 + (long)(*piVar22 + 2) * 0x10 + 0x138);
              goto LAB_05660af4;
            }
            uVar11 = uVar11 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_07286820,2);
LAB_05660af4:
        lVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        in_stack_00000198 = FUN_05998974(lVar12,0);
        uVar11 = FUN_0584e4a0(&stack0x00000198,0);
        if ((uVar11 & 1) == 0) {
          *in_stack_00000040 = 1;
          *(undefined8 *)(in_stack_00000040 + 0x1e) = in_stack_00000198;
          thunk_FUN_0333a630(in_stack_00000040 + 0x1e,0);
          if (*(int *)(*(long *)PTR_DAT_072867d0 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_03552154(in_stack_00000040 + 2,&stack0x00000198,in_stack_00000040,
                       *(undefined8 *)PTR_DAT_07287030);
          return;
        }
        FUN_0584e56c(&stack0x00000198,0);
      }
      iVar24 = in_stack_00000040[0x20] + 1;
      in_stack_00000040[0x20] = iVar24;
    }
    if (0 < (int)in_stack_00000040[0xc]) {
      uStack0000000000000038 = 0;
      uVar23 = 0;
      do {
        plVar13 = *(long **)(in_stack_00000040 + 8);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200))
        ;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar12 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07286a30) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_05660bf0;
            }
            uVar11 = uVar11 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_07286a30,0);
LAB_05660bf0:
        lVar12 = (*(code *)*puVar14)(plVar13,uStack0000000000000038,puVar14[1]);
        lVar20 = *(long *)(in_stack_00000030 + 0x98);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(lVar20 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar20 = *(long *)(lVar20 + (long)(int)uStack0000000000000038 * 8 + 0x20);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar20 = FUN_050f8940(lVar20,*(undefined8 *)PTR_DAT_072870a8);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_04c929a8(&stack0x00000070,lVar20,*(undefined8 *)PTR_DAT_07287210);
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000b0 = in_stack_00000070;
        in_stack_000000c0 = in_stack_00000080;
        while (uVar11 = FUN_05392010(&stack0x000000b0,*(undefined8 *)PTR_DAT_07287108),
              lVar20 = in_stack_000000c0, (uVar11 & 1) != 0) {
          if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
            plVar13 = (long *)0x0;
          }
          else {
            iVar24 = 0;
            plVar13 = (long *)0x0;
            do {
              auVar25 = FUN_040e5ba0(lVar20,iVar24,*(undefined8 *)puVar2);
              lVar21 = auVar25._8_8_;
              if (plVar13 == (long *)0x0) {
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar10 = *(undefined4 *)(lVar20 + 0x18);
                uVar18 = *(undefined8 *)(lVar12 + 0x10);
                plVar13 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                FUN_05661324(plVar13,uStack0000000000000038,uVar23,uVar10,uVar18);
              }
              else {
                lVar19 = *(long *)puVar3;
                bVar1 = *(byte *)(lVar19 + 0x130);
                if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_05660e38;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar19) {
                  plVar13 = (long *)0x0;
                }
              }
              if (plVar13 == (long *)0x0) {
LAB_05660e38:
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_056613ec(plVar13,iVar24,auVar25._0_8_ & 0xffffffff);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              if (*(long *)(lVar21 + 0x28) != 0) {
                if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar19 = FUN_050f8a90(*(long *)(in_stack_00000040 + 0xe),lVar21,
                                      *(undefined8 *)PTR_DAT_07287098);
                plVar13[5] = lVar19;
                thunk_FUN_0333a630();
              }
              FUN_0566141c(plVar13,iVar24,*(undefined4 *)(lVar21 + 0x1c));
              iVar24 = iVar24 + 1;
            } while (iVar24 < *(int *)(lVar20 + 0x18));
          }
          plVar15 = *(long **)(in_stack_00000030 + 0x88);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((plVar13 != (long *)0x0) &&
             (lVar20 = thunk_FUN_032a55a4(plVar13,*(undefined8 *)(*plVar15 + 0x40)), lVar20 == 0)) {
            uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar18,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar23) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          plVar15[(long)(int)uVar23 + 4] = (long)plVar13;
          thunk_FUN_0333a630(plVar15 + (long)(int)uVar23 + 4,plVar13);
          uVar23 = uVar23 + 1;
        }
        if (in_stack_00000028 < 0) {
          FUN_0539200c(&stack0x000000b0,*(undefined8 *)PTR_DAT_072870f8);
        }
        uStack0000000000000038 = uStack0000000000000038 + 1;
      } while ((int)uStack0000000000000038 < (int)in_stack_00000040[0xc]);
    }
    if (*(long *)(in_stack_00000040 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar18 = FUN_041af4fc(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_072871c0);
    Unity_Collections_NativeList<InternalType_53>__TrimExcess
              (&stack0x000001e0,uVar18,4,*(undefined8 *)PTR_DAT_072871f8);
    auVar25 = FUN_06ba8830(in_stack_000001e0,in_stack_000001e8,0);
    *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar25;
    FUN_044aefd4(&stack0x000001e0,*(undefined8 *)PTR_DAT_072854d8);
    FUN_06ba86e8(0);
    bVar6 = *(char *)(in_stack_00000040 + 0x12) != '\0';
  }
  *in_stack_00000040 = 0xfffffffe;
  *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
  thunk_FUN_0333a630(in_stack_00000040 + 0xe,0);
  *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
  thunk_FUN_0333a630(in_stack_00000040 + 0x10,0);
  if (*(int *)(*(long *)PTR_DAT_072867d0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_045ff158(in_stack_00000040 + 2,bVar6,*(undefined8 *)PTR_DAT_07286810);
  return;
LAB_0565f8f8:
  if ((in_stack_00000028 < 0) && (plVar15 != (long *)0x0)) {
    lVar12 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0565f960;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_032937ac(plVar15,*(long *)PTR_DAT_07279f60,0);
LAB_0565f960:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
  }
  plVar15 = (long *)(**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar12 = *plVar15;
  uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar11 != 0) {
    piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07287150) {
        puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
        goto MikeNspired_UnityXRHandPoser_XRKnob__get_PositionTrackedRadius;
      }
      uVar11 = uVar11 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar11 != 0);
  }
  puVar14 = (undefined8 *)FUN_032937ac(plVar15,*(long *)PTR_DAT_07287150,0);
MikeNspired_UnityXRHandPoser_XRKnob__get_PositionTrackedRadius:
  plVar15 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
switchD_0565fb74_default:
  lVar20 = *plVar15;
  lVar12 = *(long *)puVar2;
  uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar11 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == lVar12) {
        puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_0565fa50;
      }
      uVar11 = uVar11 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar11 != 0);
  }
  puVar14 = (undefined8 *)FUN_032937ac(plVar15,lVar12,0);
LAB_0565fa50:
  uVar11 = (*(code *)*puVar14)(plVar15,puVar14[1]);
  if ((uVar11 & 1) != 0) {
    lVar12 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0565faac;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_032937ac(plVar15,*(long *)puVar4,0);
LAB_0565faac:
    plVar16 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
    plVar17 = (long *)(**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar20 = *plVar17;
    lVar12 = plVar16[2];
    uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0565fb28;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_032937ac(plVar17,*(long *)puVar5,0);
LAB_0565fb28:
    lVar12 = (*(code *)*puVar14)(plVar17,(int)lVar12,puVar14[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar10 = *(undefined4 *)(lVar12 + 0x24);
    lVar12 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar9 = FUN_0567822c(lVar12,0);
    switch(uVar9) {
    case 2:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar10,0x400,0);
      break;
    case 3:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar10,0x800,0);
      break;
    case 4:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar10,0x1000,0);
      break;
    case 5:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar10,0x2000,0);
    }
    goto switchD_0565fb74_default;
  }
  if ((in_stack_00000028 < 0) && (plVar15 != (long *)0x0)) {
    lVar12 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0565fc50;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_032937ac(plVar15,*(long *)PTR_DAT_07279f60,0);
LAB_0565fc50:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
  }
  plVar13 = *(long **)(in_stack_00000040 + 8);
  iVar24 = iVar24 + 1;
  if (plVar13 == (long *)0x0) goto LAB_0565ff68;
  goto LAB_0565f694;
}


