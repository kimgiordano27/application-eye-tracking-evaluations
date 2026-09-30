/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<XmlTextWriter.Namespace>
ENTRY_POINT: 031980e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031985b0) */
/* WARNING: Removing unreachable block (ram,0x03198778) */

void System_Array__InternalArray__ICollection_CopyTo<XmlTextWriter_Namespace>(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 in_CY;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  long in_x9;
  long lVar21;
  long lVar22;
  uint uVar23;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 uVar24;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  uint uStack00000000000000c0;
  uint uStack00000000000000c4;
  uint in_stack_000000c8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  
code_r0x031980e8:
  if (((bool)in_CY) || ((uint)*(long *)(param_1 + 8) < 10)) {
LAB_03198640:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined4 *)(unaff_x27 + *(long *)(param_1 + 8) * (unaff_x22 + in_x9 * unaff_x28) * 4 + 0x44) =
       in_stack_00000020._4_4_;
LAB_0319810c:
  iVar14 = FUN_063e9d98(unaff_x26,0);
  if (10 < iVar14) {
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    puVar18 = *(uint **)(unaff_x27 + 0x10);
    if (((*puVar18 <= (uint)unaff_x28) || ((uint)*(long *)(puVar18 + 4) <= (uint)unaff_x22)) ||
       ((uint)*(long *)(puVar18 + 8) < 0xb)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(undefined4 *)
     (unaff_x27 + *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
     0x48) = in_stack_00000018;
  }
  iVar14 = FUN_063e9d98(unaff_x26,0);
  if (iVar14 < 0xc) goto LAB_03197da4;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  puVar18 = *(uint **)(unaff_x27 + 0x10);
  if (((*puVar18 <= (uint)unaff_x28) || ((uint)*(long *)(puVar18 + 4) <= (uint)unaff_x22)) ||
     (uVar19 = *(ulong *)(puVar18 + 8), (uint)uVar19 < 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  lVar21 = unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28;
  lVar22 = 0xb;
  uVar12 = in_stack_00000010._4_4_;
LAB_03198578:
  do {
    *(undefined4 *)(unaff_x27 + (lVar22 + uVar19 * lVar21) * 4 + 0x20) = uVar12;
LAB_03197da4:
    do {
      do {
        while( true ) {
          while( true ) {
            while (uVar19 = FUN_0513d1e0(&stack0x000000b0,*unaff_x24),
                  uVar11 = uStack0000000000000100, uVar10 = uStack00000000000000fc,
                  uVar9 = uStack00000000000000f8, uVar8 = uStack00000000000000f4,
                  uVar7 = uStack00000000000000f0, uVar12 = uStack00000000000000ec,
                  uVar6 = uStack00000000000000e8, uVar5 = uStack00000000000000e4,
                  uVar13 = uStack00000000000000e0, uVar23 = uStack00000000000000c4,
                  uVar17 = uStack00000000000000c0, (uVar19 & 1) == 0) {
              FUN_0513d1dc(&stack0x000000b0,*(undefined8 *)PTR_DAT_06a0c298);
              FUN_063ea1c4(unaff_x26,0,0,unaff_x27,0);
              do {
                *(undefined1 *)(unaff_x25 + 0xd9) = 0;
                unaff_x29 = unaff_x29 + 1;
                if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x29) {
                  if (*(char *)(unaff_x19 + 0x33c) == '\0') goto LAB_03198d54;
                  uVar24 = *(undefined8 *)PTR_DAT_06a0be50;
                  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar24 = FUN_054f73b4(uVar24,0);
                  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*unaff_x20);
                  }
                  uVar24 = FUN_06355258(uVar24,0);
                  lVar21 = thunk_FUN_02dd3048(uVar24,*(undefined8 *)PTR_DAT_06a0be48);
                  puVar4 = PTR_DAT_06a0c0b8;
                  puVar3 = PTR_DAT_06a0c020;
                  puVar2 = PTR_DAT_069fc650;
                  puVar1 = PTR_DAT_069fc218;
                  if (lVar21 == 0) goto LAB_03199104;
                  if ((int)*(ulong *)(lVar21 + 0x18) < 1) goto LAB_03198d54;
                  uVar19 = 0;
                  uVar20 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
                  goto LAB_03198a54;
                }
                if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x29) goto LAB_03198f44;
                unaff_x25 = *(long *)(in_stack_00000008 + unaff_x29 * 8 + 0x20);
                if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(long *)(unaff_x25 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
              } while (*(int *)(*(long *)(unaff_x25 + 0x98) + 0x18) < 1);
              lVar21 = FUN_0634bbcc(unaff_x25,0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar21 = FUN_0364c2b0(lVar21,*(undefined8 *)PTR_DAT_069fc400);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              unaff_x26 = FUN_063e6cf4(lVar21,0);
              if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar12 = UnityEngine_UIElements_VisualElementAnimationSystem__OnVersionChanged
                                 (unaff_x26,0);
              uVar13 = UnityEngine_UIElements_VisualElementAnimationSystem___ctor(unaff_x26,0);
              unaff_x27 = FUN_063e9e70(unaff_x26,0,0,uVar12,uVar13,0);
              if (*(long *)(unaff_x25 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_03f68c98(&stack0x00000030,*(long *)(unaff_x25 + 0x98),
                           *(undefined8 *)PTR_DAT_06a0c2b0);
              memcpy(&stack0x000000b0,&stack0x00000030,0x60);
              in_stack_00000030 = 0;
            }
            unaff_x28 = (long)(int)uStack00000000000000c0;
            unaff_x22 = (long)(int)uStack00000000000000c4;
            if (*(char *)(unaff_x19 + 0x24) != '\0') {
              in_stack_00000020._4_4_ = uStack0000000000000104;
              in_stack_00000010._4_4_ = uStack000000000000010c;
              in_stack_00000018 = uStack0000000000000108;
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (0 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((int)*(long *)(puVar18 + 8) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x20) = uVar13;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (1 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((*(ulong *)(puVar18 + 8) & 0xfffffffe) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(ulong *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x24) = uVar5;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (2 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((uint)*(long *)(puVar18 + 8) < 3)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x28) = uVar6;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (3 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((*(ulong *)(puVar18 + 8) & 0xfffffffc) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(ulong *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x2c) = uVar12;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (4 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((uint)*(long *)(puVar18 + 8) < 5)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x30) = uVar7;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (5 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((uint)*(long *)(puVar18 + 8) < 6)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x34) = uVar8;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (6 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((uint)*(long *)(puVar18 + 8) < 7)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x38) = uVar9;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (7 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((*(ulong *)(puVar18 + 8) & 0xfffffff8) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(ulong *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x3c) = uVar10;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (8 < iVar14) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar18 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                   ((uint)*(long *)(puVar18 + 8) < 9)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
                 0x40) = uVar11;
              }
              iVar14 = FUN_063e9d98(unaff_x26,0);
              if (iVar14 < 10) goto LAB_0319810c;
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              param_1 = *(uint **)(unaff_x27 + 0x10);
              if (*param_1 <= uVar17) goto LAB_03198640;
              in_x9 = *(long *)(param_1 + 4);
              in_CY = (uint)in_x9 <= uVar23;
              goto code_r0x031980e8;
            }
            if (4 < (int)in_stack_000000c8) break;
            iVar14 = FUN_063e9d98(unaff_x26,0);
            if (0 < iVar14) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar18 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                 ((int)*(long *)(puVar18 + 8) == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 +
                *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 + 0x20
               ) = uVar13;
            }
            iVar14 = FUN_063e9d98(unaff_x26,0);
            if (1 < iVar14) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar18 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                 ((*(ulong *)(puVar18 + 8) & 0xfffffffe) == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 +
                *(ulong *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 +
               0x24) = uVar5;
            }
            iVar14 = FUN_063e9d98(unaff_x26,0);
            if (2 < iVar14) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar18 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                 ((uint)*(long *)(puVar18 + 8) < 3)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 +
                *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 + 0x28
               ) = uVar6;
            }
            iVar14 = FUN_063e9d98(unaff_x26,0);
            if (3 < iVar14) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar18 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
                 (uVar19 = *(ulong *)(puVar18 + 8), (uVar19 & 0xfffffffc) == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              lVar21 = unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28;
              lVar22 = 3;
              goto LAB_03198578;
            }
          }
          if (8 < in_stack_000000c8) break;
          iVar14 = FUN_063e9d98(unaff_x26,0);
          if (4 < iVar14) {
            if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            puVar18 = *(uint **)(unaff_x27 + 0x10);
            if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
               ((uint)*(long *)(puVar18 + 8) < 5)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            *(undefined4 *)
             (unaff_x27 +
              *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 + 0x30)
                 = uVar13;
          }
          iVar14 = FUN_063e9d98(unaff_x26,0);
          if (5 < iVar14) {
            if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            puVar18 = *(uint **)(unaff_x27 + 0x10);
            if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
               ((uint)*(long *)(puVar18 + 8) < 6)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            *(undefined4 *)
             (unaff_x27 +
              *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 + 0x34)
                 = uVar5;
          }
          iVar14 = FUN_063e9d98(unaff_x26,0);
          if (6 < iVar14) {
            if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            puVar18 = *(uint **)(unaff_x27 + 0x10);
            if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
               ((uint)*(long *)(puVar18 + 8) < 7)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            *(undefined4 *)
             (unaff_x27 +
              *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4 + 0x38)
                 = uVar6;
          }
          iVar14 = FUN_063e9d98(unaff_x26,0);
          if (7 < iVar14) {
            if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            puVar18 = *(uint **)(unaff_x27 + 0x10);
            if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
               (uVar19 = *(ulong *)(puVar18 + 8), (uVar19 & 0xfffffff8) == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar21 = unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28;
            lVar22 = 7;
            goto LAB_03198578;
          }
        }
      } while (0xc < in_stack_000000c8);
      iVar14 = FUN_063e9d98(unaff_x26,0);
      if (8 < iVar14) {
        if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        puVar18 = *(uint **)(unaff_x27 + 0x10);
        if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
           ((uint)*(long *)(puVar18 + 8) < 9)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        *(undefined4 *)
         (unaff_x27 + *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4
         + 0x40) = uVar13;
      }
      iVar14 = FUN_063e9d98(unaff_x26,0);
      if (9 < iVar14) {
        if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        puVar18 = *(uint **)(unaff_x27 + 0x10);
        if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
           ((uint)*(long *)(puVar18 + 8) < 10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        *(undefined4 *)
         (unaff_x27 + *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4
         + 0x44) = uVar5;
      }
      iVar14 = FUN_063e9d98(unaff_x26,0);
      if (10 < iVar14) {
        if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        puVar18 = *(uint **)(unaff_x27 + 0x10);
        if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
           ((uint)*(long *)(puVar18 + 8) < 0xb)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        *(undefined4 *)
         (unaff_x27 + *(long *)(puVar18 + 8) * (unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28) * 4
         + 0x48) = uVar6;
      }
      iVar14 = FUN_063e9d98(unaff_x26,0);
    } while (iVar14 < 0xc);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    puVar18 = *(uint **)(unaff_x27 + 0x10);
    if (((*puVar18 <= uVar17) || ((uint)*(long *)(puVar18 + 4) <= uVar23)) ||
       (uVar19 = *(ulong *)(puVar18 + 8), (uint)uVar19 < 0xc)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar21 = unaff_x22 + *(long *)(puVar18 + 4) * unaff_x28;
    lVar22 = 0xb;
  } while( true );
LAB_03198a54:
  do {
    if (uVar20 <= uVar19) goto LAB_03198f44;
    lVar22 = *(long *)(lVar21 + uVar19 * 8 + 0x20);
    if (*(char *)(unaff_x19 + 0x270) == '\0') {
LAB_03198ad8:
      if ((lVar22 == 0) || (lVar15 = FUN_0634bbcc(lVar22,0), lVar15 == 0)) goto LAB_03199104;
      uVar24 = FUN_0364c2b0(lVar15,*(undefined8 *)PTR_DAT_06a0ca58);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x20);
      }
      uVar20 = FUN_063542dc(uVar24,0);
      if ((uVar20 & 1) != 0) {
        lVar15 = FUN_0634bbcc(lVar22,0);
        if (lVar15 == 0) goto LAB_03199104;
        uVar24 = FUN_0364c2b0(lVar15,*(undefined8 *)PTR_DAT_06a0ca58);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x20);
        }
        FUN_06355200(uVar24,0);
      }
      if (0 < *(int *)(unaff_x19 + 0x340)) {
        iVar14 = 0;
        do {
          lVar15 = FUN_0634bb04(lVar22,0);
          in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar14);
          uVar24 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000030);
          uVar24 = FUN_0536d408(*(undefined8 *)puVar3,uVar24,0);
          if (lVar15 == 0) goto LAB_03199104;
          lVar15 = FUN_0635fd00(lVar15,uVar24,0);
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x20);
          }
          uVar20 = FUN_063542dc(lVar15,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar20 = FUN_063074b0(0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar20 = FUN_06304820(0);
              if ((uVar20 & 1) == 0) {
                if (lVar15 != 0) {
                  uVar24 = FUN_0634bbcc(lVar15,0);
                  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*unaff_x20);
                  }
                  FUN_06355200(uVar24,0);
                  goto LAB_03198c94;
                }
                goto LAB_03199104;
              }
            }
            if (lVar15 == 0) goto LAB_03199104;
            uVar24 = FUN_0634bbcc(lVar15,0);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x20);
            }
            FUN_063550b4(uVar24,0);
          }
LAB_03198c94:
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(unaff_x19 + 0x340));
      }
      uVar24 = FUN_035ab08c(lVar22,*(undefined8 *)puVar2);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x20);
      }
      uVar20 = FUN_063542dc(uVar24,0);
      if ((uVar20 & 1) != 0) {
        lVar15 = FUN_035ab08c(lVar22,*(undefined8 *)puVar2);
        if (lVar15 == 0) goto LAB_03199104;
        FUN_0631cb1c(lVar15,1,0);
      }
      uVar24 = FUN_035ab08c(lVar22,*(undefined8 *)puVar4);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x20);
      }
      uVar20 = FUN_063542dc(uVar24,0);
      if ((uVar20 & 1) != 0) {
        lVar22 = FUN_035ab08c(lVar22,*(undefined8 *)puVar4);
        if (lVar22 == 0) goto LAB_03199104;
        FUN_063c35d0(lVar22,1,0);
      }
    }
    else {
      lVar15 = *(long *)(unaff_x19 + 0x548);
      if (lVar15 == 0) goto LAB_03199104;
      iVar14 = 0;
      while (iVar14 < *(int *)(lVar15 + 0x18)) {
        lVar15 = FUN_0400ff1c(lVar15,iVar14,*(undefined8 *)PTR_DAT_06a0bfc0);
        if (lVar15 == 0) goto LAB_03199104;
        uVar24 = *(undefined8 *)(lVar15 + 0x18);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar20 = FUN_06350670(uVar24,lVar22,0);
        if ((uVar20 & 1) != 0) goto LAB_03198ad8;
        lVar15 = *(long *)(unaff_x19 + 0x548);
        iVar14 = iVar14 + 1;
        if (lVar15 == 0) goto LAB_03199104;
      }
    }
    uVar20 = (ulong)*(uint *)(lVar21 + 0x18);
    uVar19 = uVar19 + 1;
  } while ((long)uVar19 < (long)(int)*(uint *)(lVar21 + 0x18));
LAB_03198d54:
  if ((((*(char *)(unaff_x19 + 0x27c) != '\0') && (*(char *)(unaff_x19 + 0x65c) != '\0')) &&
      (*(char *)(unaff_x19 + 0x65e) != '\0')) && (*(long *)(unaff_x19 + 0x5d8) != 0)) {
    plVar16 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
    in_stack_00000030 = 0;
    lVar21 = thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0ca38,&stack0x00000030);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((lVar21 != 0) &&
       (lVar22 = thunk_FUN_02dd3048(lVar21,*(undefined8 *)(*plVar16 + 0x40)), lVar22 == 0)) {
      uVar24 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar24,0);
    }
    if ((int)plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar16[4] = lVar21;
    LeanTween__value(plVar16 + 4,lVar21);
    if (*(long *)(unaff_x19 + 0x5d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0541fb58(*(long *)(unaff_x19 + 0x5d8),0,plVar16,0);
  }
  if (in_stack_00000008 != 0) {
    uVar17 = *(uint *)(in_stack_00000008 + 0x18);
    if (0 < (int)uVar17) {
      uVar23 = 0;
      do {
        if (uVar17 <= uVar23) {
LAB_03198f44:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar21 = *(long *)(in_stack_00000008 + (long)(int)uVar23 * 8 + 0x20);
        if ((lVar21 == 0) || (lVar22 = *(long *)(lVar21 + 0x98), lVar22 == 0)) goto LAB_03199104;
        iVar14 = *(int *)(lVar22 + 0x18);
        *(undefined4 *)(lVar22 + 0x18) = 0;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (0 < iVar14) {
          FUN_0550afb4(*(undefined8 *)(lVar22 + 0x10),0,iVar14,0);
        }
        lVar22 = *(long *)(lVar21 + 0x60);
        if (lVar22 == 0) goto LAB_03199104;
        *(undefined4 *)(lVar22 + 0x18) = 0;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        lVar22 = *(long *)(lVar21 + 0xa0);
        if (lVar22 == 0) goto LAB_03199104;
        iVar14 = *(int *)(lVar22 + 0x18);
        *(undefined4 *)(lVar22 + 0x18) = 0;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (0 < iVar14) {
          FUN_0550afb4(*(undefined8 *)(lVar22 + 0x10),0,iVar14,0);
        }
        lVar22 = *(long *)(lVar21 + 0x68);
        if (lVar22 == 0) goto LAB_03199104;
        iVar14 = *(int *)(lVar22 + 0x18);
        *(undefined4 *)(lVar22 + 0x18) = 0;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (0 < iVar14) {
          FUN_0550afb4(*(undefined8 *)(lVar22 + 0x10),0,iVar14,0);
        }
        lVar22 = *(long *)(lVar21 + 0x78);
        if (lVar22 == 0) goto LAB_03199104;
        iVar14 = *(int *)(lVar22 + 0x18);
        *(undefined4 *)(lVar22 + 0x18) = 0;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (0 < iVar14) {
          FUN_0550afb4(*(undefined8 *)(lVar22 + 0x10),0,iVar14,0);
        }
        lVar21 = *(long *)(lVar21 + 0xa8);
        if (lVar21 == 0) goto LAB_03199104;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(lVar21 + 0x18) = 0;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        uVar17 = *(uint *)(in_stack_00000008 + 0x18);
      } while ((int)uVar23 < (int)uVar17);
    }
    FUN_030f6f5c(0);
    return;
  }
LAB_03199104:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


