/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControl$$MarkAsStaleRecursively
ENTRY_POINT: 06bfb094
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06bf6cc8) */
/* WARNING: Removing unreachable block (ram,0x06bf6c24) */
/* WARNING: Removing unreachable block (ram,0x06bfa32c) */
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
/* WARNING: Removing unreachable block (ram,0x06bf92f8) */
/* WARNING: Removing unreachable block (ram,0x06bf68e4) */
/* WARNING: Removing unreachable block (ram,0x06bf46e8) */
/* WARNING: Removing unreachable block (ram,0x06bf5bec) */
/* WARNING: Removing unreachable block (ram,0x06bf50c8) */
/* WARNING: Removing unreachable block (ram,0x06bf9adc) */
/* WARNING: Removing unreachable block (ram,0x06bf6a28) */
/* WARNING: Removing unreachable block (ram,0x06bfb22c) */
/* WARNING: Removing unreachable block (ram,0x06bf48c8) */
/* WARNING: Removing unreachable block (ram,0x06bf9c6c) */
/* WARNING: Removing unreachable block (ram,0x06bfabb0) */
/* WARNING: Removing unreachable block (ram,0x06bf4a48) */
/* WARNING: Removing unreachable block (ram,0x06bf7280) */
/* WARNING: Removing unreachable block (ram,0x06bf95ec) */
/* WARNING: Removing unreachable block (ram,0x06bf9c5c) */
/* WARNING: Removing unreachable block (ram,0x06bf6c0c) */
/* WARNING: Removing unreachable block (ram,0x06bf9c84) */
/* WARNING: Removing unreachable block (ram,0x06bf9f88) */
/* WARNING: Removing unreachable block (ram,0x06bfa5f4) */
/* WARNING: Removing unreachable block (ram,0x06bfa604) */
/* WARNING: Removing unreachable block (ram,0x06bfa8d4) */
/* WARNING: Removing unreachable block (ram,0x06bfad4c) */
/* WARNING: Removing unreachable block (ram,0x06bfad5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_InputSystem_InputControl__MarkAsStaleRecursively(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x22;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
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
  undefined8 *in_stack_00000488;
  long in_stack_00000490;
  long in_stack_00000498;
  long in_stack_000004a0;
  long in_stack_000004e8;
  
  lVar17 = *param_1;
  __cxa_end_catch();
  bVar1 = true;
  do {
    plVar19 = (long *)*in_stack_00000488;
    if (plVar19 != (long *)0x0) {
      lVar14 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06bf39d4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf39d4:
      (*(code *)*puVar8)(plVar19,puVar8[1]);
    }
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c00(lVar17);
    }
    if (!bVar1) goto LAB_06bf354c;
    do {
      do {
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a36770,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) == 0) goto LAB_06bf3ad4;
          plVar19 = (long *)FUN_06bfc93c();
          plVar9 = (long *)FUN_06bfc93c();
          if (plVar19 == (long *)0x0) {
LAB_06bf3a98:
            if (in_stack_000003b0 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)PTR_DAT_07a33940;
              if (plVar9 == (long *)0x0) {
LAB_06bf3d50:
                plVar9 = (long *)0x0;
                if (plVar19 == (long *)0x0) goto LAB_06bf448c;
LAB_06bf4478:
                if (*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf448c;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar19 = (long *)0x0;
                }
              }
              else {
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3d50;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar9 = (long *)0x0;
                }
                if (plVar19 != (long *)0x0) goto LAB_06bf4478;
LAB_06bf448c:
                plVar19 = (long *)0x0;
              }
              lVar17 = FUN_06c8a0c8(in_stack_000004e8,plVar9,plVar19,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)PTR_DAT_07a33940;
              if (plVar19 == (long *)0x0) {
LAB_06bf3ac8:
                plVar19 = (long *)0x0;
                if (plVar9 == (long *)0x0)
                goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
LAB_06bf3f1c:
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar17 + 0x130))
                goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar9 = (long *)0x0;
                }
              }
              else {
                if (*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3ac8;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar19 = (long *)0x0;
                }
                if (plVar9 != (long *)0x0) goto LAB_06bf3f1c;
UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson:
                plVar9 = (long *)0x0;
              }
              lVar17 = FUN_06c89dd8(in_stack_000004e8,plVar19,plVar9,0);
            }
          }
          else {
            lVar17 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
            bVar2 = *(byte *)(lVar17 + 0x130);
            uVar15 = (ulong)bVar2;
            if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar19 + 200) + uVar15 * 8 + -8) != lVar17))
            goto LAB_06bf3a98;
            if (in_stack_000003b0 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar2)) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + uVar15 * 8 + -8) != lVar17) {
                plVar9 = (long *)0x0;
              }
              lVar17 = FUN_06c8a240(in_stack_000004e8,plVar9,plVar19,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar2)) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + uVar15 * 8 + -8) != lVar17) {
                plVar9 = (long *)0x0;
              }
              lVar17 = FUN_06c89f50(in_stack_000004e8,plVar19,plVar9,0);
            }
          }
          uVar12 = FUN_06bfc538();
          if (in_stack_000003b0 == 0) {
            plVar19 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,2);
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
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(lVar14 + 0x20);
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar19[3] == 0) goto LAB_06bfb104;
            plVar19[4] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 4,lVar14);
            lVar14 = FUN_06bb3098(uVar12,0);
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar19[5] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 5,lVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar19,0);
            FUN_04ee7cc8();
          }
          else {
            plVar19 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,2);
            lVar14 = FUN_06bb3098(uVar12,0);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar19[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar19[4] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 4,lVar14);
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
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_06bfb0e0;
            plVar19[5] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 5,lVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,plVar19,0);
            FUN_04ee7cc8();
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_06ae5f08(lVar17,0);
          goto LAB_06bf354c;
        }
LAB_06bf3ad4:
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a30a70,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) != 0) {
            plVar19 = (long *)FUN_06bfc93c();
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
              if (in_stack_000004e8 == 0) {
LAB_06bfb11c:
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)PTR_DAT_07a33940;
LAB_06bf3d70:
              plVar19 = (long *)0x0;
              if (plVar9 == (long *)0x0) {
LAB_06bf3d8c:
                plVar9 = (long *)0x0;
              }
              else {
LAB_06bf3d78:
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3d8c;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar9 = (long *)0x0;
                }
              }
              lVar17 = FUN_06c89dd8(in_stack_000004e8,plVar19,plVar9,0);
            }
            else {
              lVar14 = *plVar19;
              lVar17 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
              bVar2 = *(byte *)(lVar17 + 0x130);
              if ((*(byte *)(lVar14 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != lVar17)) {
                if (in_stack_000004e8 == 0) goto LAB_06bfb11c;
                lVar17 = *(long *)PTR_DAT_07a33940;
                if (*(byte *)(lVar14 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3d70;
                if (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar19 = (long *)0x0;
                }
                if (plVar9 != (long *)0x0) goto LAB_06bf3d78;
                goto LAB_06bf3d8c;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar2)) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
                plVar9 = (long *)0x0;
              }
              lVar17 = FUN_06c89f50(in_stack_000004e8,plVar19,plVar9,0);
            }
            uVar12 = FUN_06bfc538();
            plVar19 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,2);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0d8:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar19[3] == 0) goto LAB_06bfb0d8;
            plVar19[4] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 4,lVar14);
            lVar14 = FUN_06bb3098(uVar12,0);
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar19[5] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 5,lVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar19,0);
            FUN_04ee7cc8();
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06ae5f08(lVar17,0);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a36348,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36348,0);
          if ((uVar15 & 1) != 0) {
            plVar19 = (long *)FUN_06bfc93c();
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
              if (in_stack_000004e8 == 0) {
LAB_06bfb148:
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)PTR_DAT_07a33940;
LAB_06bf3da8:
              plVar19 = (long *)0x0;
LAB_06bf3dac:
              if (plVar9 == (long *)0x0) {
LAB_06bf3dc4:
                plVar9 = (long *)0x0;
              }
              else {
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3dc4;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar9 = (long *)0x0;
                }
              }
              lVar17 = FUN_06c8a3b8(in_stack_000004e8,plVar19,plVar9,0);
            }
            else {
              lVar14 = *plVar19;
              lVar17 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
              bVar2 = *(byte *)(lVar17 + 0x130);
              if ((*(byte *)(lVar14 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != lVar17)) {
                if (in_stack_000004e8 == 0) goto LAB_06bfb148;
                lVar17 = *(long *)PTR_DAT_07a33940;
                if (*(byte *)(lVar14 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3da8;
                if (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17) {
                  plVar19 = (long *)0x0;
                }
                goto LAB_06bf3dac;
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((plVar9 == (long *)0x0) || (*(byte *)(*plVar9 + 0x130) < bVar2)) {
                plVar9 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
                plVar9 = (long *)0x0;
              }
              lVar17 = FUN_06c8a530(in_stack_000004e8,plVar19,plVar9,0);
            }
            uVar12 = FUN_06bfc538();
            plVar19 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,2);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0f4:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar19[3] == 0) goto LAB_06bfb0f4;
            plVar19[4] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 4,lVar14);
            lVar14 = FUN_06bb3098(uVar12,0);
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar19[5] = lVar14;
            thunk_FUN_036b7ad0(plVar19 + 5,lVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,plVar19,0);
            FUN_04ee7cc8();
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06ae5f08(lVar17,0);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            plVar19 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
LAB_06bf3d20:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf3d20;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf40e0:
              plVar9 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf40e0;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar10 = (long *)FUN_06bfc93c();
            if (plVar10 == (long *)0x0) {
UnityEngine_InputSystem_InputInteractionContext__get_control:
              plVar10 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar2)
              goto UnityEngine_InputSystem_InputInteractionContext__get_control;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bf4188:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf4188;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c8a3b8(in_stack_000004e8,plVar19,plVar10,0);
            in_stack_00000058 = (undefined8 *)&stack0x000003a0;
            in_stack_00000050 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar12 = FUN_06c8a3b8(in_stack_000004e8,plVar9,plVar10,0);
            in_stack_000000c8 = (undefined8 *)&stack0x00000398;
            in_stack_000000c0 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar19 = (long *)FUN_06c89dd8(in_stack_000004e8,uVar12,plVar11,0);
            in_stack_000000b8 = (undefined8 *)&stack0x00000390;
            in_stack_000000b0 = 0;
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar4 = FUN_06ae539c(&stack0x00000360,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            in_stack_00000488 = (undefined8 *)0x0;
            FUN_06ae4cb4(&stack0x00000480,uVar4,0);
            (**(code **)(*plVar19 + 0x188))
                      (plVar19,&stack0x000003c0,*(undefined8 *)(*plVar19 + 400));
            uVar12 = FUN_06bfc538();
            uVar18 = FUN_06bfc538();
            plVar9 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          3);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
LAB_06bf4860:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(lVar17 + 0x20);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar9[3] == 0) goto LAB_06bf4860;
            plVar9[4] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 4,lVar17);
            lVar17 = FUN_06bb3098(uVar12,0);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar9[5] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 5,lVar17);
            lVar17 = FUN_06bb3098(uVar18,0);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar9[6] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 6,lVar17);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,plVar9,0);
            FUN_04ee7cc8();
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf46d4;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf46d4:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            plVar19 = (long *)*in_stack_000000c8;
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf474c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf474c:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            if (in_stack_000000c0 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            plVar19 = (long *)*in_stack_00000058;
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf4aac;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf4aac:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                                    0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            plVar19 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
LAB_06bf4b3c:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf4b3c;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf4b90:
              plVar9 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf4b90;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar4 = FUN_06bb2960(*(long *)(lVar17 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar21 = FUN_06bb2960(*(long *)(lVar17 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c896c8(uVar4,0,in_stack_000004e8,plVar19,0);
            in_stack_00000058 = (undefined8 *)&stack0x00000358;
            in_stack_00000050 = 0;
            if (plVar9 == (long *)0x0) {
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              FUN_06ae4cb4(&stack0x00000480,uVar4,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000088 = 0;
              in_stack_00000080 = 0;
              in_stack_00000098 = 0;
              in_stack_00000090 = 0;
              in_stack_000000a0 = 0;
              plVar19 = (long *)FUN_06c8aaf0(uVar21,in_stack_000004e8,&stack0x00000080,0);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar19 = (long *)FUN_06c896c8(uVar4,uVar21,in_stack_000004e8,plVar9,0);
            }
            in_stack_00000488 = (undefined8 *)&stack0x00000350;
            uVar12 = FUN_06bfc538();
            uVar18 = FUN_06bfc538();
            plVar9 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          10);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
LAB_06bf6968:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(lVar17 + 0x20);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar9[3] == 0) goto LAB_06bf6968;
            plVar9[4] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 4,lVar17);
            lVar17 = FUN_06bb3098(uVar12,0);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar9[5] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 5,lVar17);
            lVar17 = FUN_06bb3098(uVar18,0);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar9[6] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 6,lVar17);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
LAB_06bf6970:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar9 + 3) & 0xfffffffc) == 0) goto LAB_06bf6970;
            plVar9[7] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 7,lVar17);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 5) {
LAB_06bf6978:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x40);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 5) goto LAB_06bf6978;
            plVar9[8] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 8,lVar17);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 6) {
LAB_06bf6980:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x48);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 6) goto LAB_06bf6980;
            plVar9[9] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 9,lVar17);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 7) {
UnityEngine_InputSystem_InputDevice__RequestSync:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x50);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 7) goto UnityEngine_InputSystem_InputDevice__RequestSync;
            plVar9[10] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 10,lVar17);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffff8) == 0) {
LAB_06bf6990:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x58);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar9 + 3) & 0xfffffff8) == 0) goto LAB_06bf6990;
            plVar9[0xb] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 0xb,lVar17);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 9) {
LAB_06bf6998:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x60);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 9) goto LAB_06bf6998;
            plVar9[0xc] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 0xc,lVar17);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 10) {
LAB_06bf69a0:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x68);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 10) goto LAB_06bf69a0;
            plVar9[0xd] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 0xd,lVar17);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,plVar9,0);
            FUN_04ee7cc8();
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf50b4;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf50b4:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            plVar19 = (long *)*in_stack_00000058;
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf512c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf512c:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)
                                       System_Func<Model_Output,_Model_Output>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            fVar22 = (float)FUN_06bb2960(*(long *)(lVar17 + 0x38),0);
            if (fVar22 != 0.0) goto LAB_06bf354c;
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar4 = FUN_06bb2960(*(long *)(lVar17 + 0x30),0);
            plVar19 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
LAB_06bf5210:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf5210;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,plVar19);
            }
            plVar19 = (long *)FUN_06c896c8(uVar4,0,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000348;
            uVar12 = FUN_06bfc538();
            plVar9 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                          10);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
LAB_06bf69a8:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(lVar17 + 0x20);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar9[3] == 0) goto LAB_06bf69a8;
            plVar9[4] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 4,lVar17);
            lVar17 = FUN_06bb3098(uVar12,0);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar9[5] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 5,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
LAB_06bf69b0:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x30);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 3) goto LAB_06bf69b0;
            plVar9[6] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 6,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
LAB_06bf69b8:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar9 + 3) & 0xfffffffc) == 0) goto LAB_06bf69b8;
            plVar9[7] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 7,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 5) {
LAB_06bf69c0:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x40);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 5) goto LAB_06bf69c0;
            plVar9[8] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 8,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 6) {
LAB_06bf69c8:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x48);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 6) goto LAB_06bf69c8;
            plVar9[9] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 9,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 7) {
LAB_06bf69d0:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x50);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 7) goto LAB_06bf69d0;
            plVar9[10] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 10,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffff8) == 0) {
LAB_06bf69d8:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x58);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar9 + 3) & 0xfffffff8) == 0) goto LAB_06bf69d8;
            plVar9[0xb] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 0xb,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 9) {
LAB_06bf69e0:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x60);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 9) goto LAB_06bf69e0;
            plVar9[0xc] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 0xc,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 10) {
LAB_06bf69e8:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x68);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar9 + 3) < 10) goto LAB_06bf69e8;
            plVar9[0xd] = lVar17;
            thunk_FUN_036b7ad0(plVar9 + 0xd,lVar17);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,plVar9,0);
            FUN_04ee7cc8();
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf5654;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5654:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                                    0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) != 0) {
            plVar19 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
LAB_06bf56e0:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf56e0;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf5734:
              plVar9 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf5734;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar10 = (long *)FUN_06bfc93c();
            if (plVar10 == (long *)0x0) {
LAB_06bf5790:
              plVar10 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar2) goto LAB_06bf5790;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = plVar19[7];
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06ae539c(&stack0x00000360,0);
            iVar5 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            if (((iVar3 == iVar5) && ((int)plVar10[7] <= (int)plVar19[7])) &&
               ((int)lVar17 + -1 <= (int)plVar10[7])) {
              iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item
                                (&stack0x00000360,1 - (int)lVar17,0);
              iVar5 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              if (iVar3 == iVar5) {
                uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
                in_stack_00000070 = 0;
                in_stack_00000058 = (undefined8 *)0x0;
                in_stack_00000050 = 0;
                in_stack_00000068 = 0;
                in_stack_00000060 = 0;
                FUN_06ae4cb4(&stack0x00000050,uVar4,0);
                in_stack_000004a0 = in_stack_00000070;
                in_stack_00000498 = in_stack_00000068;
                in_stack_00000490 = in_stack_00000060;
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar12 = FUN_03e16e50(in_stack_000004e8,plVar10,&stack0x00000480,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<IFDStructure>_TypeInfo);
                in_stack_00000488 = (undefined8 *)&stack0x00000340;
                if (plVar9 != (long *)0x0) {
                  if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_06c89dd8(in_stack_000004e8,plVar9,uVar12,0);
                }
                in_stack_00000058 = (undefined8 *)&stack0x00000338;
                in_stack_00000050 = 0;
                uVar12 = FUN_06bfc538();
                lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,10);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = *(undefined8 *)(lVar14 + 0x20);
                FUN_03154b74(lVar17,uVar18);
                FUN_03154bd8(lVar17,0,uVar18);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar18 = *(undefined8 *)(lVar14 + 0x28);
                FUN_03154b74(lVar17,uVar18);
                FUN_03154bd8(lVar17,1,uVar18);
                uVar12 = FUN_06bb3098(uVar12,0);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,2,uVar12);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x38);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,3,uVar12);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x40);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,4,uVar12);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x48);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,5,uVar12);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x50);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,6,uVar12);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x58);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,7,uVar12);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x60);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,8,uVar12);
                lVar14 = *(long *)(unaff_x22 + 0x28);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(uint *)(lVar14 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                uVar12 = *(undefined8 *)(lVar14 + 0x68);
                FUN_03154b74(lVar17,uVar12);
                FUN_03154bd8(lVar17,9,uVar12);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,lVar17,
                             0);
                FUN_04ee7cc8();
                FUN_03154064(&stack0x00000050);
                FUN_03154064(&stack0x00000480);
              }
            }
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,
                                    0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            plVar19 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
LAB_06bf5c78:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf5c78;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf5ccc:
              plVar9 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf5ccc;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar10 = (long *)FUN_06bfc93c();
            if (plVar10 == (long *)0x0) {
LAB_06bf5d20:
              plVar10 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar2) goto LAB_06bf5d20;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bf5d74:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf5d74;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
              }
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar13 = plVar10[4];
            lVar14 = plVar10[3];
            lVar27 = plVar10[6];
            lVar26 = plVar10[5];
            lVar17 = plVar10[7];
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06adfe8c(&stack0x00000480,plVar19[7],0);
            uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            FUN_06adff70(&stack0x000002e0,0,uVar4,0);
            plVar10[7] = in_stack_000004a0;
            plVar10[4] = (long)in_stack_00000488;
            plVar10[3] = 0;
            plVar10[6] = in_stack_00000498;
            plVar10[5] = in_stack_00000490;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c8a3b8(in_stack_000004e8,plVar10,plVar19,0);
            in_stack_000000c8 = (undefined8 *)&stack0x000002d8;
            in_stack_000000c0 = 0;
            plVar10[4] = lVar13;
            plVar10[3] = lVar14;
            plVar10[6] = lVar27;
            plVar10[5] = lVar26;
            plVar10[7] = lVar17;
            if (plVar9 == (long *)0x0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              plVar19 = (long *)FUN_03e16a04(in_stack_000004e8,plVar11,
                                             *(undefined8 *)
                                              System_Collections_Generic_List<IFDDirectory>_TypeInfo
                                            );
              goto LAB_06bf5f54;
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar9 = (long *)FUN_06c8a3b8(in_stack_000004e8,plVar9,plVar10,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar19 = (long *)FUN_06c89dd8(in_stack_000004e8,plVar9,plVar11,0);
            if (plVar9 == (long *)0x0) goto LAB_06bf5f54;
            lVar17 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar15 == 0) goto LAB_06bf5efc;
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_06bf5ee4;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            plVar19 = (long *)FUN_06bfc93c();
            if (plVar19 == (long *)0x0) {
LAB_06bf643c:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf643c;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            plVar9 = (long *)FUN_06bfc93c();
            if (plVar9 == (long *)0x0) {
LAB_06bf6490:
              plVar9 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf6490;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar9 = (long *)0x0;
              }
            }
            plVar10 = (long *)FUN_06bfc93c();
            if (plVar10 == (long *)0x0) {
LAB_06bf64e4:
              plVar10 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar2) goto LAB_06bf64e4;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bf6538:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf6538;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c89998(in_stack_000004e8,plVar19,plVar10,0,0,0);
            in_stack_00000058 = (undefined8 *)&stack0x000002c8;
            in_stack_00000050 = 0;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            FUN_06ae496c(&stack0x00000480,1,uVar4,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar19 = (long *)FUN_03e16e50(in_stack_000004e8,plVar9,&stack0x00000420,
                                           *(undefined8 *)
                                            System_Collections_Generic_List<IFDStructure>_TypeInfo);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar9 = (long *)FUN_06c89c20(in_stack_000004e8,plVar19,plVar10,plVar11,0);
            in_stack_000000c8 = (undefined8 *)&stack0x000002b8;
            in_stack_000000c0 = 0;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,1,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            in_stack_00000488 = (undefined8 *)0x0;
            FUN_06ae4cb4(&stack0x00000480,uVar4,0);
            (**(code **)(*plVar9 + 0x188))(plVar9,&stack0x00000450,*(undefined8 *)(*plVar9 + 400));
            uVar12 = FUN_06bfc538();
            uVar18 = FUN_06bfc538();
            plVar10 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,4);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
LAB_06bf6a54:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(lVar17 + 0x20);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((int)plVar10[3] == 0) goto LAB_06bf6a54;
            plVar10[4] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 4,lVar17);
            lVar17 = FUN_06bb3098(uVar12,0);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar10[5] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 5,lVar17);
            lVar17 = FUN_06bb3098(uVar18,0);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if (*(uint *)(plVar10 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar10[6] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 6,lVar17);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
LAB_06bf6a5c:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if ((lVar17 != 0) &&
               (lVar14 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
            {
              uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar12,0);
            }
            if ((*(uint *)(plVar10 + 3) & 0xfffffffc) == 0) goto LAB_06bf6a5c;
            plVar10[7] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 7,lVar17);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,plVar10,0);
            FUN_04ee7cc8();
            if (plVar9 != (long *)0x0) {
              lVar17 = *plVar9;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto FUN_06bf68d0;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)PTR_DAT_079f4598,0);
FUN_06bf68d0:
              (*(code *)*puVar8)(plVar9,puVar8[1]);
            }
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf6948;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf6948:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            plVar19 = (long *)*in_stack_00000058;
            if (plVar19 != (long *)0x0) {
              lVar17 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_06bf72e4;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_0367cd30(plVar19,*(long *)PTR_DAT_079f4598,0);
LAB_06bf72e4:
              (*(code *)*puVar8)(plVar19,puVar8[1]);
            }
            if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (iVar3 == 1) {
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar3 = FUN_06bb2f08(*(undefined8 *)(lVar17 + 0x40),0);
              lVar17 = *(long *)(unaff_x22 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar5 = FUN_06bb2f08(*(undefined8 *)(lVar17 + 0x48),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar6 = FUN_06bb2f08(*(undefined8 *)(lVar17 + 0x40),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              iVar7 = FUN_06bb2f08(*(undefined8 *)(lVar17 + 0x48),0);
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar12 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,0,uVar12);
              uVar12 = FUN_06bb2ea4(1,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb2f90(0,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
              uVar12 = FUN_06bb2f90(0,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,3,uVar12);
              uVar12 = FUN_06bb2ea4(iVar6 * iVar3,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,4,uVar12);
              uVar12 = FUN_06bb2ea4(iVar7 + iVar6 * iVar5,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,5,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
            }
            else {
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
              lVar17 = *(long *)(unaff_x22 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar23 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              fVar25 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar12 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,0,uVar12);
              uVar12 = FUN_06bb2ea4(0,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb2f90(fVar22 * fVar24,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
              uVar12 = FUN_06bb2f90(fVar23 * fVar24 + fVar25,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,3,uVar12);
              uVar12 = FUN_06bb2ea4(0,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,4,uVar12);
              uVar12 = FUN_06bb2ea4(0,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,5,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
            }
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36348,0);
          if ((uVar15 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != 0.0)) goto LAB_06bf354c;
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf7678:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf7678;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(uVar4,0,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x000002b0;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar18 = *(undefined8 *)(lVar14 + 0x20);
            FUN_03154b74(lVar17,uVar18);
            FUN_03154bd8(lVar17,0,uVar18);
            uVar12 = FUN_06bb3098(uVar12,0);
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a36348,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != 0.0)) goto LAB_06bf354c;
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar12 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf7ab0:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf7ab0;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(uVar12,0,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x000002a8;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar18 = *(undefined8 *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            FUN_03154b74(lVar17,uVar18);
            FUN_03154bd8(lVar17,0,uVar18);
            uVar12 = FUN_06bb3098(uVar12,0);
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a30a70,0);
          if ((uVar15 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != unaff_s12)) goto LAB_06bf354c;
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf7cd0:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf7cd0;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,uVar4,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x000002a0;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar18 = *(undefined8 *)(lVar14 + 0x20);
            FUN_03154b74(lVar17,uVar18);
            FUN_03154bd8(lVar17,0,uVar18);
            uVar12 = FUN_06bb3098(uVar12,0);
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a30a70,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != unaff_s12)) goto LAB_06bf354c;
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf7f04:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf7f04;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,uVar4,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000298;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar18 = *(undefined8 *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            FUN_03154b74(lVar17,uVar18);
            FUN_03154bd8(lVar17,0,uVar18);
            uVar12 = FUN_06bb3098(uVar12,0);
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a36770,0);
          if ((uVar15 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != unaff_s12)) goto LAB_06bf354c;
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000003b4 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar19 == (long *)0x0) {
LAB_06bf812c:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf812c;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,-fVar22,in_stack_000004e8,plVar19,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000290;
              uVar12 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar18 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar18);
              FUN_03154bd8(lVar17,0,uVar18);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf8270:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf8270;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,-fVar22,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000288;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar12 = FUN_06bb3098(uVar12,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,0,uVar12);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar12 = *(undefined8 *)(lVar14 + 0x20);
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a36770,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != unaff_s12)) goto LAB_06bf354c;
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000003b0 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar19 == (long *)0x0) {
LAB_06bf84a8:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf84a8;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,-fVar22,in_stack_000004e8,plVar19,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000280;
              uVar12 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar18 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar18);
              FUN_03154bd8(lVar17,0,uVar18);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf85ec:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf85ec;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,fVar22,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000278;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar12 = FUN_06bb3098(uVar12,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,0,uVar12);
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
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a30a70,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != unaff_s12)) goto LAB_06bf354c;
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf8824:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf8824;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,uVar4,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000270;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar14 = *(long *)(unaff_x22 + 0x28);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar18 = *(undefined8 *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            FUN_03154b74(lVar17,uVar18);
            FUN_03154bd8(lVar17,0,uVar18);
            uVar12 = FUN_06bb3098(uVar12,0);
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0
                                   );
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)PTR_DAT_07a35338,0);
          if ((uVar15 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != 0.0)) goto LAB_06bf354c;
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf8a44:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf8a44;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(unaff_s12 / fVar22,0,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000268;
            uVar12 = FUN_06bfc538();
            uVar18 = *(undefined8 *)PTR_DAT_07a35338;
            if (in_stack_000003b4 == 0) {
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar20);
              FUN_03154bd8(lVar17,0,uVar20);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
            }
            else {
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              uVar12 = FUN_06bb3098(uVar12,0);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,0,uVar12);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar12 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
            }
            FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar18,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a35338,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar3 = FUN_06bb28d4(*(long *)(lVar17 + 0x28),0);
            if ((iVar3 != 0) || (fVar22 != 0.0)) goto LAB_06bf354c;
            plVar19 = (long *)FUN_06bfc93c();
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            if (in_stack_000003b0 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar19 == (long *)0x0) {
LAB_06bf8cf4:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf8cf4;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              FUN_06c896c8(unaff_s12 / fVar22,0,in_stack_000004e8,plVar19,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000260;
              uVar12 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar18 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar18);
              FUN_03154bd8(lVar17,0,uVar18);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar19 == (long *)0x0) {
LAB_06bf8e38:
              plVar19 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf8e38;
              if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar19 = (long *)0x0;
              }
            }
            FUN_06c896c8(fVar22,0,in_stack_000004e8,plVar19,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000258;
            uVar12 = FUN_06bfc538();
            lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar12 = FUN_06bb3098(uVar12,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,0,uVar12);
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
            FUN_03154b74(lVar17,uVar12);
            FUN_03154bd8(lVar17,1,uVar12);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar17,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
        if ((uVar15 & 1) == 0) {
LAB_06bf95fc:
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              lVar17 = *(long *)(unaff_x22 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar17 = FUN_06bb3114(*(undefined8 *)(lVar17 + 0x20),0);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(long *)(lVar17 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              memmove(&stack0x00000160,(void *)(*(long *)(lVar17 + 0x78) + 0x14),0x68);
              bVar2 = FUN_06cada30(&stack0x00000160,0);
              if ((bVar2 & in_stack_000001c0._4_4_ == 2) == 0) goto LAB_06bf354c;
              plVar19 = (long *)FUN_06bfc93c();
              if (plVar19 == (long *)0x0) {
LAB_06bf96cc:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf96cc;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bf9720:
                plVar9 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf9720;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              plVar10 = (long *)FUN_06bfc93c();
              if (plVar10 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization:
                plVar10 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar10 + 0x130) < bVar2)
                goto UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization;
                if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar10 = (long *)0x0;
                }
              }
              plVar11 = (long *)FUN_06bfc93c();
              if (plVar11 == (long *)0x0) {
LAB_06bf97c8:
                plVar11 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf97c8;
                if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar11 = (long *)0x0;
                }
              }
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_00000070 = 0;
              in_stack_00000058 = (undefined8 *)0x0;
              in_stack_00000050 = 0;
              in_stack_00000068 = 0;
              in_stack_00000060 = 0;
              FUN_06ae496c(&stack0x00000050,uVar4,1,0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              auVar28 = FUN_03e16e50(in_stack_000004e8,plVar19,&stack0x00000480,
                                     *(undefined8 *)
                                      System_Collections_Generic_List<IFDStructure>_TypeInfo);
              in_stack_00000158 = auVar28._0_8_;
              in_stack_00000058 = &stack0x00000158;
              in_stack_00000050 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,auVar28._8_8_,in_stack_00000158);
              }
              in_stack_00000150 = FUN_06c8a3b8(in_stack_000004e8,plVar10,in_stack_00000158,0);
              in_stack_000000c8 = &stack0x00000150;
              in_stack_000000c0 = 0;
              uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              FUN_06ae496c(&stack0x00000480,1,uVar4,0);
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
              auVar28 = FUN_06c89998(in_stack_000004e8,in_stack_00000148,plVar10,0,0,0);
              in_stack_00000140 = auVar28._0_8_;
              in_stack_00000488 = &stack0x00000140;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(0,auVar28._8_8_,in_stack_00000140);
              }
              in_stack_00000138 = FUN_06c89dd8(in_stack_000004e8,plVar11,in_stack_00000140,0);
              in_stack_000000b8 = &stack0x00000138;
              in_stack_000000b0 = 0;
              uVar12 = FUN_06bfc538();
              uVar18 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar20);
              FUN_03154bd8(lVar17,0,uVar20);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb3098(uVar18,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
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
              uVar12 = *(undefined8 *)(lVar14 + 0x38);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,3,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x000000b0);
              FUN_03154064(&stack0x00000480);
              FUN_03154064(&stack0x000004b0);
              FUN_03154064(&stack0x000000c0);
              FUN_03154064(&stack0x00000050);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              plVar19 = (long *)FUN_06bfc93c();
              if (plVar19 == (long *)0x0) {
LAB_06bf9d14:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf9d14;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bf9d68:
                plVar9 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf9d68;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000130 = FUN_06c896c8(uVar4,0,in_stack_000004e8,plVar19,0);
              in_stack_00000488 = &stack0x00000130;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000128 = FUN_06c896c8(uVar4,uVar21,in_stack_000004e8,plVar9,0);
              in_stack_00000058 = &stack0x00000128;
              in_stack_00000050 = 0;
              uVar12 = FUN_06bfc538();
              uVar18 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar20);
              FUN_03154bd8(lVar17,0,uVar20);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb3098(uVar18,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar12 = *(undefined8 *)(lVar14 + 0x38);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,3,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000050);
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              lVar17 = *(long *)(unaff_x22 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
              lVar17 = *(long *)(unaff_x22 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
              plVar19 = (long *)FUN_06bfc93c();
              if (plVar19 == (long *)0x0) {
LAB_06bfa058:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bfa058;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bfa0ac:
                plVar9 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bfa0ac;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000120 = FUN_06c896c8(uVar4,0,in_stack_000004e8,plVar19,0);
              in_stack_00000058 = &stack0x00000120;
              in_stack_00000050 = 0;
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar4 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_000004a0 = 0;
              in_stack_00000498 = 0;
              in_stack_00000490 = 0;
              FUN_06ae496c(&stack0x00000480,1,uVar4,0);
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
              in_stack_00000488 = &stack0x00000118;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              auVar28 = FUN_06c89998(in_stack_000004e8,in_stack_00000118,plVar19,0,0,0);
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
              uVar12 = FUN_06bfc538();
              uVar18 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar20);
              FUN_03154bd8(lVar17,0,uVar20);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb3098(uVar18,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
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
              uVar12 = *(undefined8 *)(lVar14 + 0x38);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,3,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x000000b0);
              FUN_03154064(&stack0x000000c0);
              FUN_03154064(&stack0x00000480);
              FUN_03154064(&stack0x00000050);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)
                                         System_Func<Type,_SerializationEvents>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              plVar19 = (long *)FUN_06bfc93c();
              if (plVar19 == (long *)0x0) {
LAB_06bfa694:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bfa694;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bfa6e8:
                plVar9 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bfa6e8;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000100 = FUN_06c896c8(uVar4,0,in_stack_000004e8,plVar19,0);
              in_stack_00000488 = &stack0x00000100;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_000000f8 = FUN_06c896c8(uVar4,uVar21,in_stack_000004e8,plVar9,0);
              in_stack_00000058 = &stack0x000000f8;
              in_stack_00000050 = 0;
              uVar12 = FUN_06bfc538();
              uVar18 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar20);
              FUN_03154bd8(lVar17,0,uVar20);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb3098(uVar18,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000050);
              FUN_03154064(&stack0x00000480);
              goto LAB_06bf354c;
            }
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                      *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo
                                      ,0);
          if ((uVar15 & 1) != 0) {
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                        *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
            if ((uVar15 & 1) != 0) {
              lVar17 = *(long *)(unaff_x22 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar4 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
              lVar17 = *(long *)(unaff_x22 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar21 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
              plVar19 = (long *)FUN_06bfc93c();
              if (plVar19 == (long *)0x0) {
LAB_06bfa9a4:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bfa9a4;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bfa9f8:
                plVar9 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bfa9f8;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_000000f0 = FUN_06c896c8(uVar4,0,in_stack_000004e8,plVar19,0);
              in_stack_00000488 = &stack0x000000f0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              auVar28 = FUN_06c896c8(uVar21,0,in_stack_000004e8,plVar19,0);
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
              uVar12 = FUN_06bfc538();
              uVar18 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar20);
              FUN_03154bd8(lVar17,0,uVar20);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb3098(uVar18,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x000000c0);
              FUN_03154064(&stack0x00000050);
              FUN_03154064(&stack0x00000480);
            }
          }
        }
        else {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                      *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar15 & 1) == 0) goto LAB_06bf95fc;
          if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
          uVar15 = FUN_06cada30(&stack0x000001d0,0);
          if ((uVar15 & 1) != 0) {
            if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
            if (in_stack_00000234 == 2) {
              plVar19 = (long *)FUN_06bfc93c();
              if (plVar19 == (long *)0x0) {
LAB_06bf9018:
                plVar19 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar19 + 0x130) < bVar2) goto LAB_06bf9018;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar19 = (long *)0x0;
                }
              }
              plVar9 = (long *)FUN_06bfc93c();
              if (plVar9 == (long *)0x0) {
LAB_06bf906c:
                plVar9 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar9 + 0x130) < bVar2) goto LAB_06bf906c;
                if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar9 = (long *)0x0;
                }
              }
              plVar10 = (long *)FUN_06bfc93c();
              if (plVar10 == (long *)0x0) {
LAB_06bf90c0:
                plVar10 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar10 + 0x130) < bVar2) goto LAB_06bf90c0;
                if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar10 = (long *)0x0;
                }
              }
              plVar11 = (long *)FUN_06bfc93c();
              if (plVar11 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__get_remoting:
                plVar11 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar11 + 0x130) < bVar2)
                goto UnityEngine_InputSystem_InputSystem__get_remoting;
                if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar11 = (long *)0x0;
                }
              }
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c8a3b8(in_stack_000004e8,plVar19,plVar10,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000250;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar12 = FUN_06c8a3b8(in_stack_000004e8,plVar9,plVar10,0);
              in_stack_00000058 = (undefined8 *)&stack0x00000248;
              in_stack_00000050 = 0;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c89dd8(in_stack_000004e8,uVar12,plVar11,0);
              in_stack_000000c8 = (undefined8 *)&stack0x00000240;
              in_stack_000000c0 = 0;
              uVar12 = FUN_06bfc538();
              uVar18 = FUN_06bfc538();
              lVar17 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar20 = *(undefined8 *)(lVar14 + 0x20);
              FUN_03154b74(lVar17,uVar20);
              FUN_03154bd8(lVar17,0,uVar20);
              uVar12 = FUN_06bb3098(uVar12,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,1,uVar12);
              uVar12 = FUN_06bb3098(uVar18,0);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,2,uVar12);
              lVar14 = *(long *)(unaff_x22 + 0x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar12 = *(undefined8 *)(lVar14 + 0x38);
              FUN_03154b74(lVar17,uVar12);
              FUN_03154bd8(lVar17,3,uVar12);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar17,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x000000c0);
              FUN_03154064(&stack0x00000050);
              FUN_03154064(&stack0x00000480);
            }
          }
        }
LAB_06bf354c:
        do {
          do {
            do {
              do {
                do {
                  uVar15 = FUN_04ee7c30();
                  if ((uVar15 & 1) == 0) {
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
                uVar15 = FUN_06bfbf98(in_stack_000003b8,&stack0x000003b4);
              } while ((uVar15 & 1) == 0);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar17 + 0x18) <= in_stack_000003b4) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              unaff_x22 = FUN_06bb3114(*(undefined8 *)
                                        (lVar17 + (long)(int)in_stack_000003b4 * 8 + 0x20),0);
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar15 = FUN_06bfbf98(unaff_x22,&stack0x000003b0);
            } while ((uVar15 & 1) == 0);
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
                                  System_Collections_Generic_KeyValuePair<string,_string>_TypeInfo);
          } while (iVar3 != 1);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar15 = FUN_06bfc160(unaff_x22);
        } while ((uVar15 & 1) != 0);
        uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                    *(undefined8 *)PTR_DAT_07a30a70,0);
      } while ((uVar15 & 1) == 0);
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar15 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                  *(undefined8 *)PTR_DAT_07a36770,0);
    } while ((uVar15 & 1) == 0);
    plVar9 = (long *)FUN_06bfc93c();
    plVar19 = (long *)FUN_06bfc93c();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((int)plVar9[9] == 0) {
      if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar17 = *(long *)PTR_DAT_07a33940;
      if (plVar19 == (long *)0x0) {
        uVar15 = (ulong)*(byte *)(lVar17 + 0x130);
LAB_06bf3774:
        plVar19 = (long *)0x0;
      }
      else {
        uVar15 = (ulong)*(byte *)(lVar17 + 0x130);
        if (*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3774;
        if (*(long *)(*(long *)(*plVar19 + 200) + uVar15 * 8 + -8) != lVar17) {
          plVar19 = (long *)0x0;
        }
      }
      if ((uint)*(byte *)(*plVar9 + 0x130) < (uint)uVar15) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + uVar15 * 8 + -8) != lVar17) {
        plVar9 = (long *)0x0;
      }
      FUN_06c8a0c8(in_stack_000004e8,plVar19,plVar9,0);
    }
    else {
      if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar17 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
      if (plVar19 == (long *)0x0) {
        uVar15 = (ulong)*(byte *)(lVar17 + 0x130);
LAB_06bf3734:
        plVar19 = (long *)0x0;
      }
      else {
        uVar15 = (ulong)*(byte *)(lVar17 + 0x130);
        if (*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3734;
        if (*(long *)(*(long *)(*plVar19 + 200) + uVar15 * 8 + -8) != lVar17) {
          plVar19 = (long *)0x0;
        }
      }
      if ((uint)*(byte *)(*plVar9 + 0x130) < (uint)uVar15) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + uVar15 * 8 + -8) != lVar17) {
        plVar9 = (long *)0x0;
      }
      FUN_06c8a240(in_stack_000004e8,plVar19,plVar9,0);
    }
    in_stack_00000488 = (undefined8 *)&stack0x000003a8;
    lVar17 = 0;
    uVar12 = FUN_06bfc538();
    uVar18 = *(undefined8 *)PTR_DAT_07a36770;
    if (in_stack_000003b4 == 1) {
      plVar19 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
      lVar14 = FUN_06bb3098(uVar12,0);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0)) {
        uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar12,0);
      }
      if ((int)plVar19[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar19[4] = lVar14;
      thunk_FUN_036b7ad0(plVar19 + 4,lVar14);
      lVar14 = *(long *)(unaff_x22 + 0x28);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
LAB_06bf4858:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0)) {
        uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar12,0);
      }
      if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_06bf4858;
      plVar19[5] = lVar14;
      thunk_FUN_036b7ad0(plVar19 + 5,lVar14);
    }
    else {
      plVar19 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
      lVar14 = *(long *)(unaff_x22 + 0x28);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar14 + 0x18) <= in_stack_000003b0) {
LAB_06bf4850:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000003b0 * 8 + 0x20);
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0)) {
        uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar12,0);
      }
      if ((int)plVar19[3] == 0) goto LAB_06bf4850;
      plVar19[4] = lVar14;
      thunk_FUN_036b7ad0(plVar19 + 4,lVar14);
      lVar14 = FUN_06bb3098(uVar12,0);
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_0367fd24(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0)) {
        uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar12,0);
      }
      if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar19[5] = lVar14;
      thunk_FUN_036b7ad0(plVar19 + 5,lVar14);
    }
    FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar18,plVar19,0);
    FUN_04ee7cc8();
    bVar1 = false;
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_06bf5ee4:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar8 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_06bf5f18;
    }
  }
LAB_06bf5efc:
  puVar8 = (undefined8 *)FUN_0367cd30(plVar9,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5f18:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_06bf5f54:
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar4 = FUN_06ae539c(&stack0x00000360,0);
  in_stack_00000070 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  FUN_06ae4cb4(&stack0x00000050,uVar4,0);
  (**(code **)(*plVar19 + 0x188))(plVar19,&stack0x000003f0,*(undefined8 *)(*plVar19 + 400));
  FUN_06bfc538();
  FUN_06bfc538();
  FUN_0753c580(&System_Func<UniqueIdentifier_Decorator>_TypeInfo);
  return;
}


