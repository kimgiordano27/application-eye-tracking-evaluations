/*
FUNCTION_NAME: MikeNspired.UnityXRHandPoser.TransformJoint$$OnAfterDeserialize
ENTRY_POINT: 0565ea10
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0565ffb0) */
/* WARNING: Removing unreachable block (ram,0x05660e14) */
/* WARNING: Removing unreachable block (ram,0x0565f978) */
/* WARNING: Removing unreachable block (ram,0x0565fc68) */
/* WARNING: Removing unreachable block (ram,0x05661060) */
/* WARNING: Removing unreachable block (ram,0x0565ff80) */
/* WARNING: Removing unreachable block (ram,0x0565ffdc) */
/* WARNING: Removing unreachable block (ram,0x0565f640) */
/* WARNING: Removing unreachable block (ram,0x0565ffe8) */

void MikeNspired_UnityXRHandPoser_TransformJoint__OnAfterDeserialize(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 in_w8;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  long unaff_x19;
  uint uVar27;
  long lVar28;
  undefined8 *unaff_x25;
  undefined1 auVar29 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
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
  char cStack00000000000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  byte bStack00000000000001c8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  *(undefined1 *)(unaff_x19 + 0x48) = in_w8;
  FUN_050f26dc(&stack0x00000048);
  in_stack_00000078 = in_stack_00000050;
  in_stack_00000070 = in_stack_00000048;
  in_stack_00000088 = in_stack_00000060;
  in_stack_00000080 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000060;
  *(long *)(unaff_x19 + 0x60) = in_stack_00000058;
  thunk_FUN_0333a630(unaff_x19 + 0x50,0);
  while (uVar12 = FUN_05390594(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_07287118),
        puVar3 = PTR_DAT_072854c8, (uVar12 & 1) != 0) {
    lVar13 = *(long *)(in_stack_00000040 + 0x18);
    unaff_x25[0xb] = *(undefined8 *)(in_stack_00000040 + 0x1a);
    unaff_x25[10] = lVar13;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar22 = *(long *)(lVar13 + 0x10);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar26 = *(int *)(lVar22 + 0x18);
    iVar9 = *(int *)(lVar22 + 0x14);
    if (*(int *)(lVar22 + 0x1c) < 0) {
      lVar23 = 0;
    }
    else {
      iVar25 = 1;
      if (-1 < *(int *)(lVar22 + 0x20)) {
        iVar25 = 2;
      }
      lVar23 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,
                            (((((iVar25 - ((int)~*(uint *)(lVar22 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar22 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar22 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar22 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar22 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar22 + 0x38) >> 0x1f));
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar27 = *(uint *)(lVar23 + 0x18);
      if (uVar27 == 0) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined4 *)(lVar23 + 0x20) = *(undefined4 *)(lVar22 + 0x1c);
      if (-1 < *(int *)(lVar22 + 0x20)) {
        if (uVar27 < 2) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar23 + 0x24) = *(int *)(lVar22 + 0x20);
      }
      if (-1 < *(int *)(lVar22 + 0x24)) {
        if (uVar27 < 3) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar23 + 0x28) = *(int *)(lVar22 + 0x24);
      }
      if (-1 < *(int *)(lVar22 + 0x28)) {
        if (uVar27 < 4) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar23 + 0x2c) = *(int *)(lVar22 + 0x28);
      }
      if (-1 < *(int *)(lVar22 + 0x2c)) {
        if (uVar27 < 5) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar23 + 0x30) = *(int *)(lVar22 + 0x2c);
      }
      if (-1 < *(int *)(lVar22 + 0x30)) {
        if (uVar27 < 6) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar23 + 0x34) = *(int *)(lVar22 + 0x30);
      }
      if (-1 < *(int *)(lVar22 + 0x34)) {
        if (uVar27 < 7) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar23 + 0x38) = *(int *)(lVar22 + 0x34);
      }
      if (-1 < *(int *)(lVar22 + 0x38)) {
        if (uVar27 < 8) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(int *)(lVar23 + 0x3c) = *(int *)(lVar22 + 0x38);
      }
      if (-1 < *(int *)(lVar22 + 0x3c)) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar14 = *(long **)(in_stack_00000030 + 0x130);
        if (plVar14 != (long *)0x0) {
          lVar28 = *(long *)PTR_DAT_07286b50;
          lVar21 = *(long *)(lVar28 + 0x38);
          if (lVar21 == 0) {
            FUN_03293514(lVar28);
            lVar21 = *(long *)(lVar28 + 0x38);
          }
          lVar21 = *(long *)(lVar21 + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = FUN_032934b8();
          }
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          lVar21 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
            lVar21 = FUN_032934b8();
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar20 = *plVar14;
          lVar28 = *(long *)puVar3;
          uVar19 = **(undefined8 **)(lVar21 + 0xb8);
          uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar28) {
                puVar15 = (undefined8 *)(lVar20 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0565f108;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_032937ac(plVar14,lVar28,1);
LAB_0565f108:
          (*(code *)*puVar15)(plVar14,0x33,uVar19,puVar15[1]);
        }
      }
    }
    if (_bStack00000000000001c8 == 1) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar19 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar14 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07287238);
      FUN_04da2800(plVar14,uVar19,*(undefined8 *)PTR_DAT_07287230);
    }
    else if (_bStack00000000000001c8 == 3) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar19 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar14 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07287248);
      FUN_04da3854(plVar14,uVar19,*(undefined8 *)PTR_DAT_07287228);
    }
    else {
      if (_bStack00000000000001c8 != 7) {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar14 = *(long **)(in_stack_00000030 + 0x130);
        unaff_x25 = (undefined8 *)&stack0x00000170;
        if (plVar14 == (long *)0x0) goto LAB_0565f4ec;
        lVar13 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,1);
        uVar19 = FUN_03fbd4f0(&stack0x000001c0,*(undefined8 *)PTR_DAT_07287190);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar13 + 0x20) = uVar19;
        thunk_FUN_0333a630();
        lVar23 = *plVar14;
        lVar22 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar12 == 0) goto MikeNspired_UnityXRHandPoser_XRGripButton___ctor;
        piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        goto LAB_0565f4a4;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar19 = *(undefined8 *)(in_stack_00000030 + 0x130);
      plVar14 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07287240);
      FUN_04da48a8(plVar14,uVar19,*(undefined8 *)PTR_DAT_07287220);
    }
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    bVar2 = 0;
    if (iVar9 < 0) {
      bVar2 = bStack00000000000001c8 >> 1 & 1;
    }
    bVar1 = 0;
    if (iVar26 < 0) {
      bVar1 = bStack00000000000001c8 >> 2 & 1;
    }
    *(byte *)((long)plVar14 + 0x11) = bVar1;
    *(byte *)(plVar14 + 2) = bVar2;
    if (*(long *)(in_stack_00000030 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    unaff_x25 = (undefined8 *)&stack0x00000170;
    FUN_050f8afc(*(long *)(in_stack_00000030 + 0x90),lVar13,plVar14,*(undefined8 *)PTR_DAT_072870c8)
    ;
    (**(code **)(*plVar14 + 0x178))
              (&stack0x00000070,plVar14,in_stack_00000030,*(undefined4 *)(lVar22 + 0x10),
               *(undefined4 *)(lVar22 + 0x14),*(undefined4 *)(lVar22 + 0x18),lVar23,
               *(undefined4 *)(lVar22 + 0x40),*(undefined4 *)(lVar22 + 0x48));
    in_stack_000001a8 = in_stack_00000078;
    _cStack00000000000001a0 = in_stack_00000070;
    uVar19 = _cStack00000000000001a0;
    cStack00000000000001a0 = (char)in_stack_00000070;
    in_stack_000001b0 = in_stack_00000080;
    _cStack00000000000001a0 = uVar19;
    if (cStack00000000000001a0 == '\0') {
      iVar26 = 0x52;
      *(undefined1 *)(in_stack_00000040 + 0x12) = 0;
      goto LAB_0565f4f4;
    }
    lVar13 = *(long *)(in_stack_00000040 + 0x10);
    auVar29 = FUN_0464838c(&stack0x000001a0,*(undefined8 *)PTR_DAT_07285500);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar22 = *(long *)(lVar13 + 0x10);
    lVar23 = *(long *)PTR_DAT_072871b8;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar27 = *(uint *)(lVar13 + 0x18);
    if (uVar27 < *(uint *)(lVar22 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar27 + 1;
      *(undefined1 (*) [16])(lVar22 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
    }
    else {
      FUN_041ad9c0(lVar13,auVar29._0_8_,auVar29._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    }
    plVar14 = *(long **)(in_stack_00000030 + 0x20);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar13 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07286820) {
          puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 2) * 0x10 + 0x138);
          goto FUN_0565f364;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07286820,2);
FUN_0565f364:
    lVar13 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    in_stack_00000198 = FUN_05998974(lVar13,0);
    uVar12 = FUN_0584e4a0(&stack0x00000198,0);
    if ((uVar12 & 1) == 0) {
      *in_stack_00000040 = 0;
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
  iVar26 = 0x52;
  goto LAB_0565f4f4;
LAB_0565f8f8:
  if ((in_stack_00000028 < 0) && (plVar16 != (long *)0x0)) {
    lVar13 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0565f960;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_032937ac(plVar16,*(long *)PTR_DAT_07279f60,0);
LAB_0565f960:
    (*(code *)*puVar15)(plVar16,puVar15[1]);
  }
  plVar16 = (long *)(**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar13 = *plVar16;
  uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar12 != 0) {
    piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07287150) {
        puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
        goto MikeNspired_UnityXRHandPoser_XRKnob__get_PositionTrackedRadius;
      }
      uVar12 = uVar12 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar12 != 0);
  }
  puVar15 = (undefined8 *)FUN_032937ac(plVar16,*(long *)PTR_DAT_07287150,0);
MikeNspired_UnityXRHandPoser_XRKnob__get_PositionTrackedRadius:
  plVar16 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
switchD_0565fb74_default:
  lVar22 = *plVar16;
  lVar13 = *(long *)puVar3;
  uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar12 != 0) {
    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == lVar13) {
        puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_0565fa50;
      }
      uVar12 = uVar12 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar12 != 0);
  }
  puVar15 = (undefined8 *)FUN_032937ac(plVar16,lVar13,0);
LAB_0565fa50:
  uVar12 = (*(code *)*puVar15)(plVar16,puVar15[1]);
  if ((uVar12 & 1) != 0) {
    lVar13 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)puVar5) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0565faac;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_032937ac(plVar16,*(long *)puVar5,0);
LAB_0565faac:
    plVar17 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
    plVar18 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar22 = *plVar18;
    lVar13 = plVar17[2];
    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
          puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0565fb28;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_032937ac(plVar18,*(long *)puVar6,0);
LAB_0565fb28:
    lVar13 = (*(code *)*puVar15)(plVar18,(int)lVar13,puVar15[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar11 = *(undefined4 *)(lVar13 + 0x24);
    lVar13 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar10 = FUN_0567822c(lVar13,0);
    switch(uVar10) {
    case 2:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar11,0x400,0);
      break;
    case 3:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar11,0x800,0);
      break;
    case 4:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar11,0x1000,0);
      break;
    case 5:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05655694(in_stack_00000030,uVar11,0x2000,0);
    }
    goto switchD_0565fb74_default;
  }
  if ((in_stack_00000028 < 0) && (plVar16 != (long *)0x0)) {
    lVar13 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0565fc50;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)FUN_032937ac(plVar16,*(long *)PTR_DAT_07279f60,0);
LAB_0565fc50:
    (*(code *)*puVar15)(plVar16,puVar15[1]);
  }
  plVar14 = *(long **)(in_stack_00000040 + 8);
  iVar26 = iVar26 + 1;
  if (plVar14 == (long *)0x0) goto LAB_0565ff68;
  goto LAB_0565f694;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar24 = piVar24 + 4;
    if (uVar12 == 0) break;
LAB_0565f4a4:
    if (*(long *)(piVar24 + -2) == lVar22) {
      puVar15 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_0565f4d8;
    }
  }
MikeNspired_UnityXRHandPoser_XRGripButton___ctor:
  puVar15 = (undefined8 *)FUN_032937ac(plVar14,lVar22,0);
LAB_0565f4d8:
  (*(code *)*puVar15)(plVar14,9,lVar13,puVar15[1]);
LAB_0565f4ec:
  iVar26 = 0x48;
LAB_0565f4f4:
  if (in_stack_00000028 < 0) {
    FUN_053906b8(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_07287100);
  }
  if (iVar26 == 0x52) {
LAB_0565f52c:
    *(undefined8 *)(in_stack_00000040 + 0x1c) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x16) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x1a) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x18) = 0;
    if (*(char *)(in_stack_00000040 + 0x12) != '\0') {
      if (*(long *)(in_stack_00000040 + 0xe) != 0) {
        FUN_050f8f40(&stack0x00000070,*(long *)(in_stack_00000040 + 0xe),
                     *(undefined8 *)PTR_DAT_07287058);
        puVar3 = PTR_DAT_07287110;
        unaff_x25[1] = in_stack_00000078;
        *unaff_x25 = in_stack_00000070;
        unaff_x25[3] = in_stack_00000088;
        unaff_x25[2] = in_stack_00000080;
        in_stack_00000190 = in_stack_00000090;
        while (uVar12 = FUN_05391a64(&stack0x00000170,*(undefined8 *)puVar3), (uVar12 & 1) != 0) {
          if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          auVar29 = FUN_05661290();
          lVar13 = *(long *)(in_stack_00000040 + 0x10);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar22 = *(long *)(lVar13 + 0x10);
          lVar23 = *(long *)PTR_DAT_072871b8;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar27 = *(uint *)(lVar13 + 0x18);
          if (uVar27 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar27 + 1;
            *(undefined1 (*) [16])(lVar22 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
          }
          else {
            FUN_041ad9c0(lVar13,auVar29._0_8_,auVar29._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
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
      uVar12 = FUN_0567dd8c(*(long *)(in_stack_00000040 + 8),0);
      puVar6 = PTR_DAT_07287188;
      puVar5 = PTR_DAT_07287168;
      puVar4 = PTR_DAT_07287160;
      puVar3 = PTR_DAT_0727a180;
      if ((uVar12 & 1) != 0) {
        plVar14 = *(long **)(in_stack_00000040 + 8);
        if (plVar14 == (long *)0x0) {
LAB_0565ff68:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        iVar26 = 0;
LAB_0565f694:
        plVar14 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar13 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07287178) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0565f6fc;
            }
            uVar12 = uVar12 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07287178,0);
LAB_0565f6fc:
        iVar9 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if (iVar26 < iVar9) {
          plVar14 = *(long **)(in_stack_00000040 + 8);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          plVar14 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400))
          ;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07287180) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_0565f788;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07287180,0);
LAB_0565f788:
          plVar14 = (long *)(*(code *)*puVar15)(plVar14,iVar26,puVar15[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          plVar16 = (long *)(**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400))
          ;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07287140) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_0565f810;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_032937ac(plVar16,*(long *)PTR_DAT_07287140,0);
LAB_0565f810:
          plVar16 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          do {
            lVar22 = *plVar16;
            lVar13 = *(long *)puVar3;
            uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar12 != 0) {
              piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar13) {
                  puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0565f870;
                }
                uVar12 = uVar12 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar12 != 0);
            }
            puVar15 = (undefined8 *)FUN_032937ac(plVar16,lVar13,0);
LAB_0565f870:
            uVar12 = (*(code *)*puVar15)(plVar16,puVar15[1]);
            if ((uVar12 & 1) == 0) goto LAB_0565f8f8;
            lVar13 = *plVar16;
            uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar12 != 0) {
              piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0565f8cc;
                }
                uVar12 = uVar12 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar12 != 0);
            }
            puVar15 = (undefined8 *)FUN_032937ac(plVar16,*(long *)puVar4,0);
LAB_0565f8cc:
            lVar13 = (*(code *)*puVar15)(plVar16,puVar15[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_05655694(in_stack_00000030,*(undefined4 *)(lVar13 + 0x10),0x200,0);
          } while( true );
        }
      }
      plVar14 = *(long **)(in_stack_00000040 + 8);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar14 = (long *)(**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar13 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07286a98) {
            puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
            goto MikeNspired_UnityXRHandPoser_XRKnob__UpdateRotation;
          }
          uVar12 = uVar12 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar12 != 0);
      }
      puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07286a98,0);
MikeNspired_UnityXRHandPoser_XRKnob__UpdateRotation:
      uVar11 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      uVar19 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07286ff0,uVar11);
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(undefined8 *)(in_stack_00000030 + 0x68) = uVar19;
      thunk_FUN_0333a630();
      iVar26 = 0;
      in_stack_00000040[0x20] = 0;
      while( true ) {
        puVar4 = PTR_DAT_07286ee0;
        puVar3 = PTR_DAT_07286ed8;
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(long *)(in_stack_00000030 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar26) break;
        plVar14 = *(long **)(in_stack_00000040 + 8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180))
        ;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar13 = *plVar14;
        uVar11 = in_stack_00000040[0x20];
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07286aa0) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_056602a8;
            }
            uVar12 = uVar12 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07286aa0,0);
LAB_056602a8:
        lVar13 = (*(code *)*puVar15)(plVar14,uVar11,puVar15[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (-1 < *(int *)(lVar13 + 0x18)) {
          uVar8 = FUN_05675d98(lVar13,0);
          switch(uVar8) {
          case 1:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            iVar26 = *(int *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if (iVar26 < 0x200) {
              if ((iVar26 == 2) || (iVar26 == 4)) {
                lVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286cd8);
                UnityEngine_UIElements_StylePropertyAnimationSystem_AnimationDataSet<StylePropertyAnimationSystem_Values_EmptyData<BackgroundPosition>,_BackgroundPosition>__Add
                          (lVar13,*(undefined8 *)PTR_DAT_07286ff8);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar22 = *(long *)(in_stack_00000030 + 0x70);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar27 = in_stack_00000040[0x20];
                if (*(uint *)(lVar22 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                FUN_0565609c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             (long)(int)uVar27,lVar13 + 0x10,&stack0x00000158,lVar13 + 0x18,
                             *(int *)(lVar22 + (long)(int)uVar27 * 4 + 0x20) == 4,0);
                lVar22 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0464838c(&stack0x00000158,*(undefined8 *)PTR_DAT_07285500);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar23 = *(long *)(lVar22 + 0x10);
                lVar21 = *(long *)PTR_DAT_072871b8;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar27 = *(uint *)(lVar22 + 0x18);
                if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                  *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_041ad9c0(lVar22,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                plVar14 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar27 = in_stack_00000040[0x20];
                lVar22 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar22 == 0) {
                  uVar19 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                  FUN_032d5dbc(uVar19,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                plVar14[(long)(int)uVar27 + 4] = lVar13;
                thunk_FUN_0333a630(plVar14 + (long)(int)uVar27 + 4,lVar13);
              }
            }
            else if ((iVar26 == 0x200) || (iVar26 == 0x2000)) {
              lVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07287020);
              FUN_05015df0(lVar13,*(undefined8 *)PTR_DAT_07287008);
              FUN_056573b8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8,0);
              if (in_stack_000000e0 != '\0') {
                auVar29 = FUN_0463a610(&stack0x000000e0,*(undefined8 *)PTR_DAT_07286df8);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                *(undefined1 (*) [16])(lVar13 + 0x10) = auVar29;
              }
              if (in_stack_000000c8 != '\0') {
                lVar22 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0464838c(&stack0x000000c8,*(undefined8 *)PTR_DAT_07285500);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar23 = *(long *)(lVar22 + 0x10);
                lVar21 = *(long *)PTR_DAT_072871b8;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar27 = *(uint *)(lVar22 + 0x18);
                if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                  *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_041ad9c0(lVar22,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar27 = in_stack_00000040[0x20];
              if ((lVar13 != 0) &&
                 (lVar22 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar22 == 0)
                 ) {
                uVar19 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_0333a630(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
            break;
          case 3:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            uVar27 = *(uint *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if ((uVar27 >> 10 & 1) == 0) {
              if ((uVar27 >> 0xc & 1) != 0) {
                lVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e28);
                FUN_05015e10(lVar13,*(undefined8 *)PTR_DAT_07287000);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_05656aa4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             in_stack_00000040[0x20],lVar13 + 0x10,&stack0x000000f8,0,0);
                lVar22 = *(long *)(in_stack_00000040 + 0x10);
                auVar29 = FUN_0464838c(&stack0x000000f8,*(undefined8 *)PTR_DAT_07285500);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar23 = *(long *)(lVar22 + 0x10);
                lVar21 = *(long *)PTR_DAT_072871b8;
                *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar27 = *(uint *)(lVar22 + 0x18);
                if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                  *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
                }
                else {
                  FUN_041ad9c0(lVar22,auVar29._0_8_,auVar29._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                plVar14 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                uVar27 = in_stack_00000040[0x20];
                lVar22 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar22 == 0) {
                  uVar19 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                  FUN_032d5dbc(uVar19,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                plVar14[(long)(int)uVar27 + 4] = lVar13;
                thunk_FUN_0333a630(plVar14 + (long)(int)uVar27 + 4,lVar13);
              }
            }
            else {
              lVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e28);
              FUN_05015e10(lVar13,*(undefined8 *)PTR_DAT_07287000);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_05656aa4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar13 + 0x10,&stack0x00000128,1,0);
              lVar22 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0464838c(&stack0x00000128,*(undefined8 *)PTR_DAT_07285500);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar23 = *(long *)(lVar22 + 0x10);
              lVar21 = *(long *)PTR_DAT_072871b8;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar27 = *(uint *)(lVar22 + 0x18);
              if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_041ad9c0(lVar22,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar27 = in_stack_00000040[0x20];
              lVar22 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar22 == 0) {
                uVar19 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_0333a630(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
            break;
          case 4:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            if ((*(uint *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e30);
              FUN_05015dd0(lVar13,*(undefined8 *)PTR_DAT_07287018);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_05656ee4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar13 + 0x10,&stack0x00000110,0);
              lVar22 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0464838c(&stack0x00000110,*(undefined8 *)PTR_DAT_07285500);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar23 = *(long *)(lVar22 + 0x10);
              lVar21 = *(long *)PTR_DAT_072871b8;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar27 = *(uint *)(lVar22 + 0x18);
              if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_041ad9c0(lVar22,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar27 = in_stack_00000040[0x20];
              lVar22 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar22 == 0) {
                uVar19 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_0333a630(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
            break;
          case 7:
            lVar13 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(uint *)(lVar13 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            if (*(int *)(lVar13 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
              lVar13 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07286e70);
              FUN_05015db0(lVar13,*(undefined8 *)PTR_DAT_07287010);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_056566c0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar13 + 0x10,&stack0x00000140,0);
              lVar22 = *(long *)(in_stack_00000040 + 0x10);
              auVar29 = FUN_0464838c(&stack0x00000140,*(undefined8 *)PTR_DAT_07285500);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              lVar23 = *(long *)(lVar22 + 0x10);
              lVar21 = *(long *)PTR_DAT_072871b8;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar27 = *(uint *)(lVar22 + 0x18);
              if (uVar27 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar22 + 0x18) = uVar27 + 1;
                *(undefined1 (*) [16])(lVar23 + (long)(int)uVar27 * 0x10 + 0x20) = auVar29;
              }
              else {
                FUN_041ad9c0(lVar22,auVar29._0_8_,auVar29._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar27 = in_stack_00000040[0x20];
              lVar22 = thunk_FUN_032a55a4(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar22 == 0) {
                uVar19 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar19,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              plVar14[(long)(int)uVar27 + 4] = lVar13;
              thunk_FUN_0333a630(plVar14 + (long)(int)uVar27 + 4,lVar13);
            }
          }
          plVar14 = *(long **)(in_stack_00000030 + 0x20);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07286820) {
                puVar15 = (undefined8 *)(lVar13 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_05660af4;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07286820,2);
LAB_05660af4:
          lVar13 = (*(code *)*puVar15)(plVar14,puVar15[1]);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          in_stack_00000198 = FUN_05998974(lVar13,0);
          uVar12 = FUN_0584e4a0(&stack0x00000198,0);
          if ((uVar12 & 1) == 0) {
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
        iVar26 = in_stack_00000040[0x20] + 1;
        in_stack_00000040[0x20] = iVar26;
      }
      if (0 < (int)in_stack_00000040[0xc]) {
        uStack0000000000000038 = 0;
        uVar27 = 0;
        do {
          plVar14 = *(long **)(in_stack_00000040 + 8);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x200));
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar12 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07286a30) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_05660bf0;
              }
              uVar12 = uVar12 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_032937ac(plVar14,*(long *)PTR_DAT_07286a30,0);
LAB_05660bf0:
          lVar13 = (*(code *)*puVar15)(plVar14,uStack0000000000000038,puVar15[1]);
          lVar22 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          lVar22 = *(long *)(lVar22 + (long)(int)uStack0000000000000038 * 8 + 0x20);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar22 = FUN_050f8940(lVar22,*(undefined8 *)PTR_DAT_072870a8);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_04c929a8(&stack0x00000070,lVar22,*(undefined8 *)PTR_DAT_07287210);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar12 = FUN_05392010(&stack0x000000b0,*(undefined8 *)PTR_DAT_07287108),
                lVar22 = in_stack_000000c0, (uVar12 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar14 = (long *)0x0;
            }
            else {
              iVar26 = 0;
              plVar14 = (long *)0x0;
              do {
                auVar29 = FUN_040e5ba0(lVar22,iVar26,*(undefined8 *)puVar3);
                lVar23 = auVar29._8_8_;
                if (plVar14 == (long *)0x0) {
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  uVar11 = *(undefined4 *)(lVar22 + 0x18);
                  uVar19 = *(undefined8 *)(lVar13 + 0x10);
                  plVar14 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                  FUN_05661324(plVar14,uStack0000000000000038,uVar27,uVar11,uVar19);
                }
                else {
                  lVar21 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar21 + 0x130);
                  if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_05660e38;
                  if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != lVar21) {
                    plVar14 = (long *)0x0;
                  }
                }
                if (plVar14 == (long *)0x0) {
LAB_05660e38:
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_056613ec(plVar14,iVar26,auVar29._0_8_ & 0xffffffff);
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                if (*(long *)(lVar23 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  lVar21 = FUN_050f8a90(*(long *)(in_stack_00000040 + 0xe),lVar23,
                                        *(undefined8 *)PTR_DAT_07287098);
                  plVar14[5] = lVar21;
                  thunk_FUN_0333a630();
                }
                FUN_0566141c(plVar14,iVar26,*(undefined4 *)(lVar23 + 0x1c));
                iVar26 = iVar26 + 1;
              } while (iVar26 < *(int *)(lVar22 + 0x18));
            }
            plVar16 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if ((plVar14 != (long *)0x0) &&
               (lVar22 = thunk_FUN_032a55a4(plVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar22 == 0))
            {
              uVar19 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar19,0);
            }
            if (*(uint *)(plVar16 + 3) <= uVar27) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar16[(long)(int)uVar27 + 4] = (long)plVar14;
            thunk_FUN_0333a630(plVar16 + (long)(int)uVar27 + 4,plVar14);
            uVar27 = uVar27 + 1;
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
      uVar19 = FUN_041af4fc(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_072871c0);
      Unity_Collections_NativeList<InternalType_53>__TrimExcess
                (&stack0x000001e0,uVar19,4,*(undefined8 *)PTR_DAT_072871f8);
      auVar29 = FUN_06ba8830(in_stack_000001e0,in_stack_000001e8,0);
      *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar29;
      FUN_044aefd4(&stack0x000001e0,*(undefined8 *)PTR_DAT_072854d8);
      FUN_06ba86e8(0);
      bVar7 = *(char *)(in_stack_00000040 + 0x12) != '\0';
      goto LAB_05660f4c;
    }
  }
  else if (iVar26 != 0x48) {
    if (iVar26 != 0) {
      return;
    }
    goto LAB_0565f52c;
  }
  bVar7 = false;
LAB_05660f4c:
  *in_stack_00000040 = 0xfffffffe;
  *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
  thunk_FUN_0333a630(in_stack_00000040 + 0xe,0);
  *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
  thunk_FUN_0333a630(in_stack_00000040 + 0x10,0);
  if (*(int *)(*(long *)PTR_DAT_072867d0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_045ff158(in_stack_00000040 + 2,bVar7,*(undefined8 *)PTR_DAT_07286810);
  return;
}


