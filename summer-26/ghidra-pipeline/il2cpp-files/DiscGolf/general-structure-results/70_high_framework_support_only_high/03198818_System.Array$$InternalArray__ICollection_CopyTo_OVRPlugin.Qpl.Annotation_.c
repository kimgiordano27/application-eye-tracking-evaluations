/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03198818
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation>
               (undefined8 param_1,int param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint *puVar23;
  ulong uVar24;
  uint uVar25;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar29;
  ulong unaff_x29;
  undefined4 uVar30;
  long in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000030;
  undefined1 *in_stack_00000038;
  int in_stack_000000a8;
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
  
  _uStack0000000000000018 = param_1;
  if (param_2 == 1) {
    plVar16 = (long *)__cxa_begin_catch(param_1);
    lVar29 = *plVar16;
    in_stack_00000030 = lVar29;
    __cxa_end_catch();
    iVar15 = 0;
    goto System_Array__InternalArray__ICollection_CopyTo<InputControlScheme_MatchResult_Match>;
  }
  FUN_0297c770(&stack0x00000030);
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(_uStack0000000000000018);
  }
  puVar17 = (undefined8 *)__cxa_begin_catch(_uStack0000000000000018);
  uVar26 = thunk_FUN_02df8d3c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x10),*(undefined8 *)*puVar17);
  iVar15 = in_stack_000000a8;
  if ((uVar26 & 1) == 0) {
    puVar21 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar21 = *puVar17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar21,&PTR_PTR_066567d8,0);
  }
  *(undefined8 *)(&stack0x000000a0 + (long)in_stack_000000a8 * 8) = *puVar17;
  in_stack_000000a8 = in_stack_000000a8 + 1;
  __cxa_end_catch();
  if ((unaff_x25 != 0) && (lVar29 = FUN_0634bbcc(), lVar29 != 0)) {
    uVar27 = thunk_FUN_06354368(lVar29,0);
    uVar18 = thunk_FUN_02dfd288(PTR_DAT_06a0caa8);
    uVar19 = thunk_FUN_02dfd288(PTR_DAT_06a0c148);
    uVar27 = FUN_0536d554(uVar18,uVar27,uVar19,0);
    lVar29 = thunk_FUN_02dfd288(PTR_DAT_069fb930);
    if (*(int *)(lVar29 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0630bbe4(uVar27,0);
    in_stack_000000a8 = iVar15;
    while( true ) {
      *(undefined1 *)(unaff_x25 + 0xd9) = 0;
      unaff_x29 = unaff_x29 + 1;
      if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x29) break;
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
      if (0 < *(int *)(*(long *)(unaff_x25 + 0x98) + 0x18)) {
        lVar29 = FUN_0634bbcc(unaff_x25,0);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar29 = FUN_0364c2b0(lVar29,*(undefined8 *)PTR_DAT_069fc400);
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        unaff_x26 = FUN_063e6cf4(lVar29,0);
        if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar13 = UnityEngine_UIElements_VisualElementAnimationSystem__OnVersionChanged(unaff_x26,0);
        uVar14 = UnityEngine_UIElements_VisualElementAnimationSystem___ctor(unaff_x26,0);
        unaff_x27 = FUN_063e9e70(unaff_x26,0,0,uVar13,uVar14,0);
        if (*(long *)(unaff_x25 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_03f68c98(&stack0x00000030,*(long *)(unaff_x25 + 0x98),*(undefined8 *)PTR_DAT_06a0c2b0);
        memcpy(&stack0x000000b0,&stack0x00000030,0x60);
        in_stack_00000030 = 0;
LAB_03197da4:
        while (uVar26 = FUN_0513d1e0(&stack0x000000b0,*unaff_x24), uVar12 = uStack000000000000010c,
              uVar11 = uStack0000000000000104, uVar10 = uStack0000000000000100,
              uVar9 = uStack00000000000000fc, uVar8 = uStack00000000000000f8,
              uVar7 = uStack00000000000000f4, uVar6 = uStack00000000000000f0,
              uVar30 = uStack00000000000000ec, uVar5 = uStack00000000000000e8,
              uVar14 = uStack00000000000000e4, uVar13 = uStack00000000000000e0,
              uVar25 = uStack00000000000000c4, uVar22 = uStack00000000000000c0, (uVar26 & 1) != 0) {
          lVar29 = (long)(int)uStack00000000000000c0;
          lVar28 = (long)(int)uStack00000000000000c4;
          if (*(char *)(unaff_x19 + 0x24) == '\0') {
            if ((int)in_stack_000000c8 < 5) {
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (0 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   ((int)*(long *)(puVar23 + 8) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x20) =
                     uVar13;
              }
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (1 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   ((*(ulong *)(puVar23 + 8) & 0xfffffffe) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(ulong *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x24) =
                     uVar14;
              }
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (2 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   ((uint)*(long *)(puVar23 + 8) < 3)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x28) =
                     uVar5;
              }
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (3 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   (uVar26 = *(ulong *)(puVar23 + 8), (uVar26 & 0xfffffffc) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                lVar28 = lVar28 + *(long *)(puVar23 + 4) * lVar29;
                lVar29 = 3;
                goto LAB_03198578;
              }
            }
            else {
              if (8 < in_stack_000000c8) goto LAB_03198438;
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (4 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   ((uint)*(long *)(puVar23 + 8) < 5)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x30) =
                     uVar13;
              }
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (5 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   ((uint)*(long *)(puVar23 + 8) < 6)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x34) =
                     uVar14;
              }
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (6 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   ((uint)*(long *)(puVar23 + 8) < 7)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                *(undefined4 *)
                 (unaff_x27 +
                  *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x38) =
                     uVar5;
              }
              iVar15 = FUN_063e9d98(unaff_x26,0);
              if (7 < iVar15) {
                if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                puVar23 = *(uint **)(unaff_x27 + 0x10);
                if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                   (uVar26 = *(ulong *)(puVar23 + 8), (uVar26 & 0xfffffff8) == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                lVar28 = lVar28 + *(long *)(puVar23 + 4) * lVar29;
                lVar29 = 7;
                goto LAB_03198578;
              }
            }
          }
          else {
            _uStack0000000000000018 = CONCAT44(uStack000000000000001c,uStack0000000000000108);
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (0 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((int)*(long *)(puVar23 + 8) == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x20) = uVar13;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (1 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((*(ulong *)(puVar23 + 8) & 0xfffffffe) == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(ulong *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x24) = uVar14;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (2 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((uint)*(long *)(puVar23 + 8) < 3)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x28) = uVar5;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (3 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((*(ulong *)(puVar23 + 8) & 0xfffffffc) == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(ulong *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x2c) = uVar30;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (4 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((uint)*(long *)(puVar23 + 8) < 5)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x30) = uVar6;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (5 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((uint)*(long *)(puVar23 + 8) < 6)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x34) = uVar7;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (6 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((uint)*(long *)(puVar23 + 8) < 7)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x38) = uVar8;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (7 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((*(ulong *)(puVar23 + 8) & 0xfffffff8) == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(ulong *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x3c) = uVar9;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (8 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((uint)*(long *)(puVar23 + 8) < 9)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x40) = uVar10;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (9 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((uint)*(long *)(puVar23 + 8) < 10)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x44) = uVar11;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (10 < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 ((uint)*(long *)(puVar23 + 8) < 0xb)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              *(undefined4 *)
               (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4
               + 0x48) = uStack0000000000000018;
            }
            iVar15 = FUN_063e9d98(unaff_x26,0);
            if (0xb < iVar15) {
              if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              puVar23 = *(uint **)(unaff_x27 + 0x10);
              if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
                 (uVar26 = *(ulong *)(puVar23 + 8), (uint)uVar26 < 0xc)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              lVar28 = lVar28 + *(long *)(puVar23 + 4) * lVar29;
              lVar29 = 0xb;
              uVar30 = uVar12;
              goto LAB_03198578;
            }
          }
        }
        lVar29 = 0;
        iVar15 = 0x79;
        in_stack_00000038 = &stack0x000000b0;
System_Array__InternalArray__ICollection_CopyTo<InputControlScheme_MatchResult_Match>:
        FUN_0513d1dc(in_stack_00000038,*(undefined8 *)PTR_DAT_06a0c298);
        if (lVar29 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96858(lVar29);
        }
        if ((iVar15 != 0x79) && (iVar15 != 0)) {
          return;
        }
        FUN_063ea1c4(unaff_x26,0,0,unaff_x27,0);
      }
    }
    if (*(char *)(unaff_x19 + 0x33c) != '\0') {
      uVar27 = *(undefined8 *)PTR_DAT_06a0be50;
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar27 = FUN_054f73b4(uVar27,0);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x20);
      }
      uVar27 = FUN_06355258(uVar27,0);
      lVar29 = thunk_FUN_02dd3048(uVar27,*(undefined8 *)PTR_DAT_06a0be48);
      puVar4 = PTR_DAT_06a0c0b8;
      puVar3 = PTR_DAT_06a0c020;
      puVar2 = PTR_DAT_069fc650;
      puVar1 = PTR_DAT_069fc218;
      if (lVar29 == 0) goto LAB_03199104;
      if (0 < (int)*(ulong *)(lVar29 + 0x18)) {
        uVar26 = 0;
        uVar24 = *(ulong *)(lVar29 + 0x18) & 0xffffffff;
        do {
          if (uVar24 <= uVar26) goto LAB_03198f44;
          lVar28 = *(long *)(lVar29 + uVar26 * 8 + 0x20);
          if (*(char *)(unaff_x19 + 0x270) == '\0') {
LAB_03198ad8:
            if ((lVar28 == 0) || (lVar20 = FUN_0634bbcc(lVar28,0), lVar20 == 0)) goto LAB_03199104;
            uVar27 = FUN_0364c2b0(lVar20,*(undefined8 *)PTR_DAT_06a0ca58);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x20);
            }
            uVar24 = FUN_063542dc(uVar27,0);
            if ((uVar24 & 1) != 0) {
              lVar20 = FUN_0634bbcc(lVar28,0);
              if (lVar20 == 0) goto LAB_03199104;
              uVar27 = FUN_0364c2b0(lVar20,*(undefined8 *)PTR_DAT_06a0ca58);
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_02df485c(*unaff_x20);
              }
              FUN_06355200(uVar27,0);
            }
            if (0 < *(int *)(unaff_x19 + 0x340)) {
              iVar15 = 0;
              do {
                lVar20 = FUN_0634bb04(lVar28,0);
                in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar15);
                uVar27 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                            &stack0x00000030);
                uVar27 = FUN_0536d408(*(undefined8 *)puVar3,uVar27,0);
                if (lVar20 == 0) goto LAB_03199104;
                lVar20 = FUN_0635fd00(lVar20,uVar27,0);
                if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*unaff_x20);
                }
                uVar24 = FUN_063542dc(lVar20,0);
                if ((uVar24 & 1) != 0) {
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar24 = FUN_063074b0(0);
                  if ((uVar24 & 1) != 0) {
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar24 = FUN_06304820(0);
                    if ((uVar24 & 1) == 0) {
                      if (lVar20 != 0) {
                        uVar27 = FUN_0634bbcc(lVar20,0);
                        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                          thunk_FUN_02df485c(*unaff_x20);
                        }
                        FUN_06355200(uVar27,0);
                        goto LAB_03198c94;
                      }
                      goto LAB_03199104;
                    }
                  }
                  if (lVar20 == 0) goto LAB_03199104;
                  uVar27 = FUN_0634bbcc(lVar20,0);
                  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*unaff_x20);
                  }
                  FUN_063550b4(uVar27,0);
                }
LAB_03198c94:
                iVar15 = iVar15 + 1;
              } while (iVar15 < *(int *)(unaff_x19 + 0x340));
            }
            uVar27 = FUN_035ab08c(lVar28,*(undefined8 *)puVar2);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x20);
            }
            uVar24 = FUN_063542dc(uVar27,0);
            if ((uVar24 & 1) != 0) {
              lVar20 = FUN_035ab08c(lVar28,*(undefined8 *)puVar2);
              if (lVar20 == 0) goto LAB_03199104;
              FUN_0631cb1c(lVar20,1,0);
            }
            uVar27 = FUN_035ab08c(lVar28,*(undefined8 *)puVar4);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x20);
            }
            uVar24 = FUN_063542dc(uVar27,0);
            if ((uVar24 & 1) != 0) {
              lVar28 = FUN_035ab08c(lVar28,*(undefined8 *)puVar4);
              if (lVar28 == 0) goto LAB_03199104;
              FUN_063c35d0(lVar28,1,0);
            }
          }
          else {
            lVar20 = *(long *)(unaff_x19 + 0x548);
            if (lVar20 == 0) goto LAB_03199104;
            iVar15 = 0;
            while (iVar15 < *(int *)(lVar20 + 0x18)) {
              lVar20 = FUN_0400ff1c(lVar20,iVar15,*(undefined8 *)PTR_DAT_06a0bfc0);
              if (lVar20 == 0) goto LAB_03199104;
              uVar27 = *(undefined8 *)(lVar20 + 0x18);
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar24 = FUN_06350670(uVar27,lVar28,0);
              if ((uVar24 & 1) != 0) goto LAB_03198ad8;
              lVar20 = *(long *)(unaff_x19 + 0x548);
              iVar15 = iVar15 + 1;
              if (lVar20 == 0) goto LAB_03199104;
            }
          }
          uVar24 = (ulong)*(uint *)(lVar29 + 0x18);
          uVar26 = uVar26 + 1;
        } while ((long)uVar26 < (long)(int)*(uint *)(lVar29 + 0x18));
      }
    }
    if ((((*(char *)(unaff_x19 + 0x27c) != '\0') && (*(char *)(unaff_x19 + 0x65c) != '\0')) &&
        (*(char *)(unaff_x19 + 0x65e) != '\0')) && (*(long *)(unaff_x19 + 0x5d8) != 0)) {
      plVar16 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
      in_stack_00000030 = 0;
      lVar29 = thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0ca38,&stack0x00000030);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((lVar29 != 0) &&
         (lVar28 = thunk_FUN_02dd3048(lVar29,*(undefined8 *)(*plVar16 + 0x40)), lVar28 == 0)) {
        uVar27 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar27,0);
      }
      if ((int)plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar16[4] = lVar29;
      LeanTween__value(plVar16 + 4,lVar29);
      if (*(long *)(unaff_x19 + 0x5d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0541fb58(*(long *)(unaff_x19 + 0x5d8),0,plVar16,0);
    }
    if (in_stack_00000008 != 0) {
      uVar22 = *(uint *)(in_stack_00000008 + 0x18);
      if (0 < (int)uVar22) {
        uVar25 = 0;
        do {
          if (uVar22 <= uVar25) {
LAB_03198f44:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar29 = *(long *)(in_stack_00000008 + (long)(int)uVar25 * 8 + 0x20);
          if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x98), lVar28 == 0)) goto LAB_03199104;
          iVar15 = *(int *)(lVar28 + 0x18);
          *(undefined4 *)(lVar28 + 0x18) = 0;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          if (0 < iVar15) {
            FUN_0550afb4(*(undefined8 *)(lVar28 + 0x10),0,iVar15,0);
          }
          lVar28 = *(long *)(lVar29 + 0x60);
          if (lVar28 == 0) goto LAB_03199104;
          *(undefined4 *)(lVar28 + 0x18) = 0;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          lVar28 = *(long *)(lVar29 + 0xa0);
          if (lVar28 == 0) goto LAB_03199104;
          iVar15 = *(int *)(lVar28 + 0x18);
          *(undefined4 *)(lVar28 + 0x18) = 0;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          if (0 < iVar15) {
            FUN_0550afb4(*(undefined8 *)(lVar28 + 0x10),0,iVar15,0);
          }
          lVar28 = *(long *)(lVar29 + 0x68);
          if (lVar28 == 0) goto LAB_03199104;
          iVar15 = *(int *)(lVar28 + 0x18);
          *(undefined4 *)(lVar28 + 0x18) = 0;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          if (0 < iVar15) {
            FUN_0550afb4(*(undefined8 *)(lVar28 + 0x10),0,iVar15,0);
          }
          lVar28 = *(long *)(lVar29 + 0x78);
          if (lVar28 == 0) goto LAB_03199104;
          iVar15 = *(int *)(lVar28 + 0x18);
          *(undefined4 *)(lVar28 + 0x18) = 0;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          if (0 < iVar15) {
            FUN_0550afb4(*(undefined8 *)(lVar28 + 0x10),0,iVar15,0);
          }
          lVar29 = *(long *)(lVar29 + 0xa8);
          if (lVar29 == 0) goto LAB_03199104;
          uVar25 = uVar25 + 1;
          *(undefined4 *)(lVar29 + 0x18) = 0;
          *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
          uVar22 = *(uint *)(in_stack_00000008 + 0x18);
        } while ((int)uVar25 < (int)uVar22);
      }
      FUN_030f6f5c(0);
      return;
    }
  }
LAB_03199104:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_03198438:
  if (in_stack_000000c8 < 0xd) {
    iVar15 = FUN_063e9d98(unaff_x26,0);
    if (8 < iVar15) {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      puVar23 = *(uint **)(unaff_x27 + 0x10);
      if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
         ((uint)*(long *)(puVar23 + 8) < 9)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined4 *)
       (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x40)
           = uVar13;
    }
    iVar15 = FUN_063e9d98(unaff_x26,0);
    if (9 < iVar15) {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      puVar23 = *(uint **)(unaff_x27 + 0x10);
      if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
         ((uint)*(long *)(puVar23 + 8) < 10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined4 *)
       (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x44)
           = uVar14;
    }
    iVar15 = FUN_063e9d98(unaff_x26,0);
    if (10 < iVar15) {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      puVar23 = *(uint **)(unaff_x27 + 0x10);
      if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
         ((uint)*(long *)(puVar23 + 8) < 0xb)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined4 *)
       (unaff_x27 + *(long *)(puVar23 + 8) * (lVar28 + *(long *)(puVar23 + 4) * lVar29) * 4 + 0x48)
           = uVar5;
    }
    iVar15 = FUN_063e9d98(unaff_x26,0);
    if (0xb < iVar15) {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      puVar23 = *(uint **)(unaff_x27 + 0x10);
      if (((*puVar23 <= uVar22) || ((uint)*(long *)(puVar23 + 4) <= uVar25)) ||
         (uVar26 = *(ulong *)(puVar23 + 8), (uint)uVar26 < 0xc)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar28 = lVar28 + *(long *)(puVar23 + 4) * lVar29;
      lVar29 = 0xb;
LAB_03198578:
      *(undefined4 *)(unaff_x27 + (lVar29 + uVar26 * lVar28) * 4 + 0x20) = uVar30;
    }
  }
  goto LAB_03197da4;
}


