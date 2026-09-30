/*
FUNCTION_NAME: UnityEngine.InputSystem.InputSystem$$DisableAllEnabledActions
ENTRY_POINT: 06bf8f84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06bf48c8) */
/* WARNING: Removing unreachable block (ram,0x06bf6a28) */
/* WARNING: Removing unreachable block (ram,0x06bfb22c) */
/* WARNING: Removing unreachable block (ram,0x06bf6c24) */
/* WARNING: Removing unreachable block (ram,0x06bfa32c) */
/* WARNING: Removing unreachable block (ram,0x06bf5bec) */
/* WARNING: Removing unreachable block (ram,0x06bf9adc) */
/* WARNING: Removing unreachable block (ram,0x06bf92f8) */
/* WARNING: Removing unreachable block (ram,0x06bf9f88) */
/* WARNING: Removing unreachable block (ram,0x06bf46e8) */
/* WARNING: Removing unreachable block (ram,0x06bfa8d4) */
/* WARNING: Removing unreachable block (ram,0x06bfb0e8) */
/* WARNING: Removing unreachable block (ram,0x06bfa5f4) */
/* WARNING: Removing unreachable block (ram,0x06bf9c6c) */
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
/* WARNING: Removing unreachable block (ram,0x06bf4a48) */
/* WARNING: Removing unreachable block (ram,0x06bf9c5c) */
/* WARNING: Removing unreachable block (ram,0x06bf95ec) */
/* WARNING: Removing unreachable block (ram,0x06bf50c8) */
/* WARNING: Removing unreachable block (ram,0x06bfabb0) */
/* WARNING: Removing unreachable block (ram,0x06bf9c84) */
/* WARNING: Removing unreachable block (ram,0x06bfa604) */
/* WARNING: Removing unreachable block (ram,0x06bf6cc8) */
/* WARNING: Removing unreachable block (ram,0x06bf68e4) */
/* WARNING: Removing unreachable block (ram,0x06bfad4c) */
/* WARNING: Removing unreachable block (ram,0x06bf6c0c) */
/* WARNING: Removing unreachable block (ram,0x06bf7280) */
/* WARNING: Removing unreachable block (ram,0x06bfad5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_InputSystem_InputSystem__DisableAllEnabledActions
               (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long unaff_x22;
  undefined8 uVar19;
  long *unaff_x28;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
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
  uint in_stack_000003b0;
  uint in_stack_000003b4;
  long in_stack_000003b8;
  long in_stack_00000480;
  undefined8 *in_stack_00000488;
  long in_stack_00000490;
  long in_stack_00000498;
  long in_stack_000004a0;
  long in_stack_000004e8;
  
  do {
    uVar9 = thunk_FUN_05c963c0(param_2,*param_1,0);
    if ((uVar9 & 1) == 0) goto LAB_06bf95fc;
    if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
    uVar9 = FUN_06cada30(&stack0x000001d0,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      memmove(&stack0x000001d0,(void *)(*(long *)(unaff_x22 + 0x78) + 0x14),0x68);
      if (in_stack_00000234 == 2) {
        plVar10 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
LAB_06bf9018:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf9018;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar10 = (long *)0x0;
          }
        }
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar11 == (long *)0x0) {
LAB_06bf906c:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf906c;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar11 = (long *)0x0;
          }
        }
        plVar12 = (long *)FUN_06bfc93c();
        if (plVar12 == (long *)0x0) {
LAB_06bf90c0:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf90c0;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar12 = (long *)0x0;
          }
        }
        plVar13 = (long *)FUN_06bfc93c();
        if (plVar13 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__get_remoting:
          plVar13 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar1)
          goto UnityEngine_InputSystem_InputSystem__get_remoting;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar13 = (long *)0x0;
          }
        }
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06c8a3b8(in_stack_000004e8,plVar10,plVar12,0);
        in_stack_00000488 = (undefined8 *)&stack0x00000250;
        in_stack_00000480 = 0;
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar14 = FUN_06c8a3b8(in_stack_000004e8,plVar11,plVar12,0);
        in_stack_00000058 = (undefined8 *)&stack0x00000248;
        in_stack_00000050 = 0;
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06c89dd8(in_stack_000004e8,uVar14,plVar13,0);
        in_stack_000000c8 = (undefined8 *)&stack0x00000240;
        in_stack_000000c0 = 0;
        uVar14 = FUN_06bfc538();
        uVar15 = FUN_06bfc538();
        lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
        lVar17 = *(long *)(unaff_x22 + 0x28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar19 = *(undefined8 *)(lVar17 + 0x20);
        FUN_03154b74(lVar16,uVar19);
        FUN_03154bd8(lVar16,0,uVar19);
        uVar14 = FUN_06bb3098(uVar14,0);
        FUN_03154b74(lVar16,uVar14);
        FUN_03154bd8(lVar16,1,uVar14);
        uVar14 = FUN_06bb3098(uVar15,0);
        FUN_03154b74(lVar16,uVar14);
        FUN_03154bd8(lVar16,2,uVar14);
        lVar17 = *(long *)(unaff_x22 + 0x28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        uVar14 = *(undefined8 *)(lVar17 + 0x38);
        FUN_03154b74(lVar16,uVar14);
        FUN_03154bd8(lVar16,3,uVar14);
        FUN_06bfc890(unaff_x22,in_stack_000003b8,
                     *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar16,0);
        FUN_04ee7cc8();
        FUN_03154064(&stack0x000000c0);
        FUN_03154064(&stack0x00000050);
        FUN_03154064(&stack0x00000480);
      }
    }
LAB_06bf354c:
    do {
      do {
        do {
          do {
            do {
              uVar9 = FUN_04ee7c30();
              if ((uVar9 & 1) == 0) {
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
            uVar9 = FUN_06bfbf98(in_stack_000003b8,&stack0x000003b4);
          } while ((uVar9 & 1) == 0);
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
          unaff_x22 = FUN_06bb3114(*(undefined8 *)(lVar16 + (long)(int)in_stack_000003b4 * 8 + 0x20)
                                   ,0);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar9 = FUN_06bfbf98(unaff_x22,&stack0x000003b0);
        } while ((uVar9 & 1) == 0);
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
      uVar9 = FUN_06bfc160(unaff_x22);
    } while ((uVar9 & 1) != 0);
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a36770,0);
      if ((uVar9 & 1) != 0) {
        plVar11 = (long *)FUN_06bfc93c();
        plVar10 = (long *)FUN_06bfc93c();
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((int)plVar11[9] == 0) {
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)PTR_DAT_07a33940;
          if (plVar10 == (long *)0x0) {
            uVar9 = (ulong)*(byte *)(lVar16 + 0x130);
LAB_06bf3774:
            plVar10 = (long *)0x0;
          }
          else {
            uVar9 = (ulong)*(byte *)(lVar16 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3774;
            if (*(long *)(*(long *)(*plVar10 + 200) + uVar9 * 8 + -8) != lVar16) {
              plVar10 = (long *)0x0;
            }
          }
          if ((uint)*(byte *)(*plVar11 + 0x130) < (uint)uVar9) {
            plVar11 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar16) {
            plVar11 = (long *)0x0;
          }
          plVar10 = (long *)FUN_06c8a0c8(in_stack_000004e8,plVar10,plVar11,0);
        }
        else {
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
          if (plVar10 == (long *)0x0) {
            uVar9 = (ulong)*(byte *)(lVar16 + 0x130);
LAB_06bf3734:
            plVar10 = (long *)0x0;
          }
          else {
            uVar9 = (ulong)*(byte *)(lVar16 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3734;
            if (*(long *)(*(long *)(*plVar10 + 200) + uVar9 * 8 + -8) != lVar16) {
              plVar10 = (long *)0x0;
            }
          }
          if ((uint)*(byte *)(*plVar11 + 0x130) < (uint)uVar9) {
            plVar11 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar16) {
            plVar11 = (long *)0x0;
          }
          plVar10 = (long *)FUN_06c8a240(in_stack_000004e8,plVar10,plVar11,0);
        }
        in_stack_00000488 = (undefined8 *)&stack0x000003a8;
        in_stack_00000480 = 0;
        uVar14 = FUN_06bfc538();
        uVar15 = *(undefined8 *)PTR_DAT_07a36770;
        if (in_stack_000003b4 == 1) {
          plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2
                                        );
          lVar16 = FUN_06bb3098(uVar14,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar11[4] = lVar16;
          thunk_FUN_036b7ad0(plVar11 + 4,lVar16);
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
             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_06bf4858;
          plVar11[5] = lVar16;
          thunk_FUN_036b7ad0(plVar11 + 5,lVar16);
        }
        else {
          plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2
                                        );
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
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((int)plVar11[3] == 0) goto LAB_06bf4850;
          plVar11[4] = lVar16;
          thunk_FUN_036b7ad0(plVar11 + 4,lVar16);
          lVar16 = FUN_06bb3098(uVar14,0);
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar11[5] = lVar16;
          thunk_FUN_036b7ad0(plVar11 + 5,lVar16);
        }
        FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar15,plVar11,0);
        FUN_04ee7cc8();
        if (plVar10 != (long *)0x0) {
          lVar16 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_06bf39d4;
              }
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0);
LAB_06bf39d4:
          (*(code *)*puVar7)(plVar10,puVar7[1]);
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36770,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a30a70,0);
      if ((uVar9 & 1) == 0) goto LAB_06bf3ad4;
      plVar10 = (long *)FUN_06bfc93c();
      plVar11 = (long *)FUN_06bfc93c();
      if (plVar10 == (long *)0x0) {
LAB_06bf3a98:
        if (in_stack_000003b0 == 0) {
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)PTR_DAT_07a33940;
          if (plVar11 == (long *)0x0) {
LAB_06bf3d50:
            plVar11 = (long *)0x0;
            if (plVar10 == (long *)0x0) goto LAB_06bf448c;
LAB_06bf4478:
            if (*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf448c;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar10 = (long *)0x0;
            }
          }
          else {
            if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3d50;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar11 = (long *)0x0;
            }
            if (plVar10 != (long *)0x0) goto LAB_06bf4478;
LAB_06bf448c:
            plVar10 = (long *)0x0;
          }
          lVar16 = FUN_06c8a0c8(in_stack_000004e8,plVar11,plVar10,0);
        }
        else {
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)PTR_DAT_07a33940;
          if (plVar10 == (long *)0x0) {
LAB_06bf3ac8:
            plVar10 = (long *)0x0;
            if (plVar11 == (long *)0x0)
            goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
LAB_06bf3f1c:
            if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar16 + 0x130))
            goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar11 = (long *)0x0;
            }
          }
          else {
            if (*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3ac8;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar10 = (long *)0x0;
            }
            if (plVar11 != (long *)0x0) goto LAB_06bf3f1c;
UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson:
            plVar11 = (long *)0x0;
          }
          lVar16 = FUN_06c89dd8(in_stack_000004e8,plVar10,plVar11,0);
        }
      }
      else {
        lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
        bVar1 = *(byte *)(lVar16 + 0x130);
        uVar9 = (ulong)bVar1;
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + uVar9 * 8 + -8) != lVar16)) goto LAB_06bf3a98;
        if (in_stack_000003b0 == 0) {
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar1)) {
            plVar11 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar16) {
            plVar11 = (long *)0x0;
          }
          lVar16 = FUN_06c8a240(in_stack_000004e8,plVar11,plVar10,0);
        }
        else {
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar1)) {
            plVar11 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar16) {
            plVar11 = (long *)0x0;
          }
          lVar16 = FUN_06c89f50(in_stack_000004e8,plVar10,plVar11,0);
        }
      }
      uVar14 = FUN_06bfc538();
      if (in_stack_000003b0 == 0) {
        plVar10 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
        lVar17 = *(long *)(unaff_x22 + 0x28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar17 + 0x18) == 0) {
LAB_06bfb104:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar17 = *(long *)(lVar17 + 0x20);
        if ((lVar17 != 0) &&
           (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
          uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar14,0);
        }
        if ((int)plVar10[3] == 0) goto LAB_06bfb104;
        plVar10[4] = lVar17;
        thunk_FUN_036b7ad0(plVar10 + 4,lVar17);
        lVar17 = FUN_06bb3098(uVar14,0);
        if ((lVar17 != 0) &&
           (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
          uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar14,0);
        }
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar10[5] = lVar17;
        thunk_FUN_036b7ad0(plVar10 + 5,lVar17);
        FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar10,0);
        FUN_04ee7cc8();
      }
      else {
        plVar10 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
        lVar17 = FUN_06bb3098(uVar14,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((lVar17 != 0) &&
           (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
          uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar14,0);
        }
        if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar10[4] = lVar17;
        thunk_FUN_036b7ad0(plVar10 + 4,lVar17);
        lVar17 = *(long *)(unaff_x22 + 0x28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar17 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0e0:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar17 = *(long *)(lVar17 + (long)(int)in_stack_000003b0 * 8 + 0x20);
        if ((lVar17 != 0) &&
           (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
          uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar14,0);
        }
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_06bfb0e0;
        plVar10[5] = lVar17;
        thunk_FUN_036b7ad0(plVar10 + 5,lVar17);
        FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,plVar10,0);
        FUN_04ee7cc8();
      }
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_06ae5f08(lVar16,0);
      goto LAB_06bf354c;
    }
LAB_06bf3ad4:
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a30a70,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_06bfc93c();
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
          if (in_stack_000004e8 == 0) {
LAB_06bfb11c:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)PTR_DAT_07a33940;
LAB_06bf3d70:
          plVar10 = (long *)0x0;
          if (plVar11 == (long *)0x0) {
LAB_06bf3d8c:
            plVar11 = (long *)0x0;
          }
          else {
LAB_06bf3d78:
            if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3d8c;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar11 = (long *)0x0;
            }
          }
          lVar16 = FUN_06c89dd8(in_stack_000004e8,plVar10,plVar11,0);
        }
        else {
          lVar17 = *plVar10;
          lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
          bVar1 = *(byte *)(lVar16 + 0x130);
          if ((*(byte *)(lVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar16)) {
            if (in_stack_000004e8 == 0) goto LAB_06bfb11c;
            lVar16 = *(long *)PTR_DAT_07a33940;
            if (*(byte *)(lVar17 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3d70;
            if (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar10 = (long *)0x0;
            }
            if (plVar11 != (long *)0x0) goto LAB_06bf3d78;
            goto LAB_06bf3d8c;
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar1)) {
            plVar11 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
            plVar11 = (long *)0x0;
          }
          lVar16 = FUN_06c89f50(in_stack_000004e8,plVar10,plVar11,0);
        }
        uVar14 = FUN_06bfc538();
        plVar10 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
        lVar17 = *(long *)(unaff_x22 + 0x28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (in_stack_000003b0 < *(uint *)(lVar17 + 0x18)) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar17 = *(long *)(lVar17 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          if ((lVar17 != 0) &&
             (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((int)plVar10[3] != 0) {
            plVar10[4] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 4,lVar17);
            lVar17 = FUN_06bb3098(uVar14,0);
            if ((lVar17 != 0) &&
               (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar10[5] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 5,lVar17);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar10,0);
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
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36348,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a36348,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_06bfc93c();
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
          if (in_stack_000004e8 == 0) {
LAB_06bfb148:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)PTR_DAT_07a33940;
LAB_06bf3da8:
          plVar10 = (long *)0x0;
LAB_06bf3dac:
          if (plVar11 == (long *)0x0) {
LAB_06bf3dc4:
            plVar11 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3dc4;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar11 = (long *)0x0;
            }
          }
          lVar16 = FUN_06c8a3b8(in_stack_000004e8,plVar10,plVar11,0);
        }
        else {
          lVar17 = *plVar10;
          lVar16 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
          bVar1 = *(byte *)(lVar16 + 0x130);
          if ((*(byte *)(lVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar16)) {
            if (in_stack_000004e8 == 0) goto LAB_06bfb148;
            lVar16 = *(long *)PTR_DAT_07a33940;
            if (*(byte *)(lVar17 + 0x130) < *(byte *)(lVar16 + 0x130)) goto LAB_06bf3da8;
            if (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16) {
              plVar10 = (long *)0x0;
            }
            goto LAB_06bf3dac;
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar1)) {
            plVar11 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
            plVar11 = (long *)0x0;
          }
          lVar16 = FUN_06c8a530(in_stack_000004e8,plVar10,plVar11,0);
        }
        uVar14 = FUN_06bfc538();
        plVar10 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
        lVar17 = *(long *)(unaff_x22 + 0x28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (in_stack_000003b0 < *(uint *)(lVar17 + 0x18)) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar17 = *(long *)(lVar17 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          if ((lVar17 != 0) &&
             (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((int)plVar10[3] != 0) {
            plVar10[4] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 4,lVar17);
            lVar17 = FUN_06bb3098(uVar14,0);
            if ((lVar17 != 0) &&
               (lVar8 = thunk_FUN_0367fd24(lVar17,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar10[5] = lVar17;
            thunk_FUN_036b7ad0(plVar10 + 5,lVar17);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,plVar10,0);
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
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
LAB_06bf3d20:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf3d20;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar10 = (long *)0x0;
          }
        }
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar11 == (long *)0x0) {
LAB_06bf40e0:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf40e0;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar11 = (long *)0x0;
          }
        }
        plVar12 = (long *)FUN_06bfc93c();
        if (plVar12 == (long *)0x0) {
UnityEngine_InputSystem_InputInteractionContext__get_control:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1)
          goto UnityEngine_InputSystem_InputInteractionContext__get_control;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar12 = (long *)0x0;
          }
        }
        plVar13 = (long *)FUN_06bfc93c();
        if (plVar13 == (long *)0x0) {
LAB_06bf4188:
          plVar13 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf4188;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar13 = (long *)0x0;
          }
        }
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06c8a3b8(in_stack_000004e8,plVar10,plVar12,0);
        in_stack_00000058 = (undefined8 *)&stack0x000003a0;
        in_stack_00000050 = 0;
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar14 = FUN_06c8a3b8(in_stack_000004e8,plVar11,plVar12,0);
        in_stack_000000c8 = (undefined8 *)&stack0x00000398;
        in_stack_000000c0 = 0;
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        plVar10 = (long *)FUN_06c89dd8(in_stack_000004e8,uVar14,plVar13,0);
        in_stack_000000b8 = (undefined8 *)&stack0x00000390;
        in_stack_000000b0 = 0;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar6 = FUN_06ae539c(&stack0x00000360,0);
        in_stack_000004a0 = 0;
        in_stack_00000498 = 0;
        in_stack_00000490 = 0;
        in_stack_00000488 = (undefined8 *)0x0;
        in_stack_00000480 = 0;
        FUN_06ae4cb4(&stack0x00000480,uVar6,0);
        (**(code **)(*plVar10 + 0x188))(plVar10,&stack0x000003c0,*(undefined8 *)(*plVar10 + 400));
        uVar14 = FUN_06bfc538();
        uVar15 = FUN_06bfc538();
        plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar16 + 0x18) != 0) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)(lVar16 + 0x20);
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((int)plVar11[3] != 0) {
            plVar11[4] = lVar16;
            thunk_FUN_036b7ad0(plVar11 + 4,lVar16);
            lVar16 = FUN_06bb3098(uVar14,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
            {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar11[5] = lVar16;
            thunk_FUN_036b7ad0(plVar11 + 5,lVar16);
            lVar16 = FUN_06bb3098(uVar15,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
            {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar11[6] = lVar16;
            thunk_FUN_036b7ad0(plVar11 + 6,lVar16);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,plVar11,0);
            FUN_04ee7cc8();
            if (plVar10 != (long *)0x0) {
              lVar16 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar9 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_06bf46d4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0);
LAB_06bf46d4:
              (*(code *)*puVar7)(plVar10,puVar7[1]);
            }
            plVar10 = (long *)*in_stack_000000c8;
            if (plVar10 != (long *)0x0) {
              lVar16 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar9 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_06bf474c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0);
LAB_06bf474c:
              (*(code *)*puVar7)(plVar10,puVar7[1]);
            }
            if (in_stack_000000c0 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00();
            }
            plVar10 = (long *)*in_stack_00000058;
            if (plVar10 != (long *)0x0) {
              lVar16 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar9 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_06bf4aac;
                  }
                  uVar9 = uVar9 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0);
LAB_06bf4aac:
              (*(code *)*puVar7)(plVar10,puVar7[1]);
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
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
LAB_06bf4b3c:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf4b3c;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar10 = (long *)0x0;
          }
        }
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar11 == (long *)0x0) {
LAB_06bf4b90:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf4b90;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar11 = (long *)0x0;
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
        uVar6 = FUN_06bb2960(*(long *)(lVar16 + 0x30),0);
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
        uVar24 = FUN_06bb2960(*(long *)(lVar16 + 0x38),0);
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06c896c8(uVar6,0,in_stack_000004e8,plVar10,0);
        in_stack_00000058 = (undefined8 *)&stack0x00000358;
        in_stack_00000050 = 0;
        if (plVar11 == (long *)0x0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
          in_stack_000004a0 = 0;
          in_stack_00000498 = 0;
          in_stack_00000490 = 0;
          FUN_06ae4cb4(&stack0x00000480,uVar6,0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_00000088 = 0;
          in_stack_00000080 = 0;
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          in_stack_000000a0 = 0;
          plVar10 = (long *)FUN_06c8aaf0(uVar24,in_stack_000004e8,&stack0x00000080,0);
        }
        else {
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar10 = (long *)FUN_06c896c8(uVar6,uVar24,in_stack_000004e8,plVar11,0);
        }
        in_stack_00000488 = (undefined8 *)&stack0x00000350;
        in_stack_00000480 = 0;
        uVar14 = FUN_06bfc538();
        uVar15 = FUN_06bfc538();
        plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,10)
        ;
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar16 + 0x18) != 0) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)(lVar16 + 0x20);
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((int)plVar11[3] != 0) {
            plVar11[4] = lVar16;
            thunk_FUN_036b7ad0(plVar11 + 4,lVar16);
            lVar16 = FUN_06bb3098(uVar14,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
            {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar11[5] = lVar16;
            thunk_FUN_036b7ad0(plVar11 + 5,lVar16);
            lVar16 = FUN_06bb3098(uVar15,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
            {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar11[6] = lVar16;
            thunk_FUN_036b7ad0(plVar11 + 6,lVar16);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) != 0) {
              lVar16 = *(long *)(lVar16 + 0x38);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)
                 ) {
                uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar14,0);
              }
              if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                plVar11[7] = lVar16;
                thunk_FUN_036b7ad0(plVar11 + 7,lVar16);
                lVar16 = *(long *)(unaff_x22 + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (4 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = *(long *)(lVar16 + 0x40);
                  if ((lVar16 != 0) &&
                     (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar17 == 0)) {
                    uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar14,0);
                  }
                  if (4 < *(uint *)(plVar11 + 3)) {
                    plVar11[8] = lVar16;
                    thunk_FUN_036b7ad0(plVar11 + 8,lVar16);
                    lVar16 = *(long *)(unaff_x22 + 0x28);
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    if (5 < *(uint *)(lVar16 + 0x18)) {
                      lVar16 = *(long *)(lVar16 + 0x48);
                      if ((lVar16 != 0) &&
                         (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar17 == 0)) {
                        uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                        FUN_03642acc(uVar14,0);
                      }
                      if (5 < *(uint *)(plVar11 + 3)) {
                        plVar11[9] = lVar16;
                        thunk_FUN_036b7ad0(plVar11 + 9,lVar16);
                        lVar16 = *(long *)(unaff_x22 + 0x28);
                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        if (6 < *(uint *)(lVar16 + 0x18)) {
                          lVar16 = *(long *)(lVar16 + 0x50);
                          if ((lVar16 != 0) &&
                             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)),
                             lVar17 == 0)) {
                            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                            FUN_03642acc(uVar14,0);
                          }
                          if (6 < *(uint *)(plVar11 + 3)) {
                            plVar11[10] = lVar16;
                            thunk_FUN_036b7ad0(plVar11 + 10,lVar16);
                            lVar16 = *(long *)(unaff_x22 + 0x28);
                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03642c18();
                            }
                            if ((*(uint *)(lVar16 + 0x18) & 0xfffffff8) != 0) {
                              lVar16 = *(long *)(lVar16 + 0x58);
                              if ((lVar16 != 0) &&
                                 (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                      (*plVar11 + 0x40)),
                                 lVar17 == 0)) {
                                uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                FUN_03642acc(uVar14,0);
                              }
                              if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                                plVar11[0xb] = lVar16;
                                thunk_FUN_036b7ad0(plVar11 + 0xb,lVar16);
                                lVar16 = *(long *)(unaff_x22 + 0x28);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03642c18();
                                }
                                if (8 < *(uint *)(lVar16 + 0x18)) {
                                  lVar16 = *(long *)(lVar16 + 0x60);
                                  if ((lVar16 != 0) &&
                                     (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                          (*plVar11 + 0x40)),
                                     lVar17 == 0)) {
                                    uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                    FUN_03642acc(uVar14,0);
                                  }
                                  if (8 < *(uint *)(plVar11 + 3)) {
                                    plVar11[0xc] = lVar16;
                                    thunk_FUN_036b7ad0(plVar11 + 0xc,lVar16);
                                    lVar16 = *(long *)(unaff_x22 + 0x28);
                                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c18();
                                    }
                                    if (9 < *(uint *)(lVar16 + 0x18)) {
                                      lVar16 = *(long *)(lVar16 + 0x68);
                                      if ((lVar16 != 0) &&
                                         (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                              (*plVar11 + 0x40)),
                                         lVar17 == 0)) {
                                        uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                        FUN_03642acc(uVar14,0);
                                      }
                                      if (9 < *(uint *)(plVar11 + 3)) {
                                        plVar11[0xd] = lVar16;
                                        thunk_FUN_036b7ad0(plVar11 + 0xd,lVar16);
                                        FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                     *(undefined8 *)
                                                                                                            
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar11,0);
                                        FUN_04ee7cc8();
                                        if (plVar10 != (long *)0x0) {
                                          lVar16 = *plVar10;
                                          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                          if (uVar9 != 0) {
                                            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar18 + -2) ==
                                                  *(long *)PTR_DAT_079f4598) {
                                                puVar7 = (undefined8 *)
                                                         (lVar16 + (long)*piVar18 * 0x10 + 0x138);
                                                goto LAB_06bf50b4;
                                              }
                                              uVar9 = uVar9 - 1;
                                              piVar18 = piVar18 + 4;
                                            } while (uVar9 != 0);
                                          }
                                          puVar7 = (undefined8 *)
                                                   FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0)
                                          ;
LAB_06bf50b4:
                                          (*(code *)*puVar7)(plVar10,puVar7[1]);
                                        }
                                        plVar10 = (long *)*in_stack_00000058;
                                        if (plVar10 != (long *)0x0) {
                                          lVar16 = *plVar10;
                                          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                          if (uVar9 != 0) {
                                            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar18 + -2) ==
                                                  *(long *)PTR_DAT_079f4598) {
                                                puVar7 = (undefined8 *)
                                                         (lVar16 + (long)*piVar18 * 0x10 + 0x138);
                                                goto LAB_06bf512c;
                                              }
                                              uVar9 = uVar9 - 1;
                                              piVar18 = piVar18 + 4;
                                            } while (uVar9 != 0);
                                          }
                                          puVar7 = (undefined8 *)
                                                   FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0)
                                          ;
LAB_06bf512c:
                                          (*(code *)*puVar7)(plVar10,puVar7[1]);
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
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
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
        fVar20 = (float)FUN_06bb2960(*(long *)(lVar16 + 0x38),0);
        if (fVar20 == 0.0) {
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
          uVar6 = FUN_06bb2960(*(long *)(lVar16 + 0x30),0);
          plVar10 = (long *)FUN_06bfc93c();
          if (plVar10 == (long *)0x0) {
LAB_06bf5210:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf5210;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18(0,plVar10);
          }
          plVar10 = (long *)FUN_06c896c8(uVar6,0,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000348;
          in_stack_00000480 = 0;
          uVar14 = FUN_06bfc538();
          plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                         10);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar16 + 0x18) != 0) {
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar16 = *(long *)(lVar16 + 0x20);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
            {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar16;
              thunk_FUN_036b7ad0(plVar11 + 4,lVar16);
              lVar16 = FUN_06bb3098(uVar14,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)
                 ) {
                uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar14,0);
              }
              if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar11[5] = lVar16;
              thunk_FUN_036b7ad0(plVar11 + 5,lVar16);
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
                   (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar17 == 0)) {
                  uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar14,0);
                }
                if (2 < *(uint *)(plVar11 + 3)) {
                  plVar11[6] = lVar16;
                  thunk_FUN_036b7ad0(plVar11 + 6,lVar16);
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
                       (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar17 == 0)) {
                      uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                      FUN_03642acc(uVar14,0);
                    }
                    if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                      plVar11[7] = lVar16;
                      thunk_FUN_036b7ad0(plVar11 + 7,lVar16);
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
                           (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar17 == 0)) {
                          uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                          FUN_03642acc(uVar14,0);
                        }
                        if (4 < *(uint *)(plVar11 + 3)) {
                          plVar11[8] = lVar16;
                          thunk_FUN_036b7ad0(plVar11 + 8,lVar16);
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
                               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar11 + 0x40))
                               , lVar17 == 0)) {
                              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                              FUN_03642acc(uVar14,0);
                            }
                            if (5 < *(uint *)(plVar11 + 3)) {
                              plVar11[9] = lVar16;
                              thunk_FUN_036b7ad0(plVar11 + 9,lVar16);
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
                                   (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                        (*plVar11 + 0x40)),
                                   lVar17 == 0)) {
                                  uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                  FUN_03642acc(uVar14,0);
                                }
                                if (6 < *(uint *)(plVar11 + 3)) {
                                  plVar11[10] = lVar16;
                                  thunk_FUN_036b7ad0(plVar11 + 10,lVar16);
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
                                       (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                            (*plVar11 + 0x40)),
                                       lVar17 == 0)) {
                                      uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                      FUN_03642acc(uVar14,0);
                                    }
                                    if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                                      plVar11[0xb] = lVar16;
                                      thunk_FUN_036b7ad0(plVar11 + 0xb,lVar16);
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
                                           (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                                (*plVar11 + 0x40)),
                                           lVar17 == 0)) {
                                          uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                          FUN_03642acc(uVar14,0);
                                        }
                                        if (8 < *(uint *)(plVar11 + 3)) {
                                          plVar11[0xc] = lVar16;
                                          thunk_FUN_036b7ad0(plVar11 + 0xc,lVar16);
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
                                               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)
                                                                                    (*plVar11 + 0x40
                                                                                    )), lVar17 == 0)
                                               ) {
                                              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                              FUN_03642acc(uVar14,0);
                                            }
                                            if (9 < *(uint *)(plVar11 + 3)) {
                                              plVar11[0xd] = lVar16;
                                              thunk_FUN_036b7ad0(plVar11 + 0xd,lVar16);
                                              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar11,0);
                                              FUN_04ee7cc8();
                                              if (plVar10 != (long *)0x0) {
                                                lVar16 = *plVar10;
                                                uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                if (uVar9 != 0) {
                                                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar18 + -2) ==
                                                        *(long *)PTR_DAT_079f4598) {
                                                      puVar7 = (undefined8 *)
                                                               (lVar16 + (long)*piVar18 * 0x10 +
                                                               0x138);
                                                      goto LAB_06bf5654;
                                                    }
                                                    uVar9 = uVar9 - 1;
                                                    piVar18 = piVar18 + 4;
                                                  } while (uVar9 != 0);
                                                }
                                                puVar7 = (undefined8 *)
                                                         FUN_0367cd30(plVar10,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf5654:
                                                (*(code *)*puVar7)(plVar10,puVar7[1]);
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
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a30a70,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
LAB_06bf56e0:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf56e0;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar10 = (long *)0x0;
          }
        }
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar11 == (long *)0x0) {
LAB_06bf5734:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf5734;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar11 = (long *)0x0;
          }
        }
        plVar12 = (long *)FUN_06bfc93c();
        if (plVar12 == (long *)0x0) {
LAB_06bf5790:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf5790;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar12 = (long *)0x0;
          }
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar16 = plVar10[7];
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        iVar2 = FUN_06ae539c(&stack0x00000360,0);
        iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
        if (((iVar2 == iVar3) && ((int)plVar12[7] <= (int)plVar10[7])) &&
           ((int)lVar16 + -1 <= (int)plVar12[7])) {
          iVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,1 - (int)lVar16,0);
          iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
          if (iVar2 == iVar3) {
            uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_00000070 = 0;
            in_stack_00000058 = (undefined8 *)0x0;
            in_stack_00000050 = 0;
            in_stack_00000068 = 0;
            in_stack_00000060 = 0;
            FUN_06ae4cb4(&stack0x00000050,uVar6,0);
            in_stack_000004a0 = in_stack_00000070;
            in_stack_00000498 = in_stack_00000068;
            in_stack_00000490 = in_stack_00000060;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar14 = FUN_03e16e50(in_stack_000004e8,plVar12,&stack0x00000480,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<IFDStructure>_TypeInfo);
            in_stack_00000488 = (undefined8 *)&stack0x00000340;
            in_stack_00000480 = 0;
            if (plVar11 != (long *)0x0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06c89dd8(in_stack_000004e8,plVar11,uVar14,0);
            }
            in_stack_00000058 = (undefined8 *)&stack0x00000338;
            in_stack_00000050 = 0;
            uVar14 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,10);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar15);
            FUN_03154bd8(lVar16,0,uVar15);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar15 = *(undefined8 *)(lVar17 + 0x28);
            FUN_03154b74(lVar16,uVar15);
            FUN_03154bd8(lVar16,1,uVar15);
            uVar14 = FUN_06bb3098(uVar14,0);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,2,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x38);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,3,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x40);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,4,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x48);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,5,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x50);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,6,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x58);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,7,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x60);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,8,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x68);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,9,uVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,lVar16,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000050);
            FUN_03154064(&stack0x00000480);
          }
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
LAB_06bf5c78:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf5c78;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar10 = (long *)0x0;
          }
        }
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar11 == (long *)0x0) {
LAB_06bf5ccc:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf5ccc;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar11 = (long *)0x0;
          }
        }
        plVar12 = (long *)FUN_06bfc93c();
        if (plVar12 == (long *)0x0) {
LAB_06bf5d20:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf5d20;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar12 = (long *)0x0;
          }
        }
        plVar13 = (long *)FUN_06bfc93c();
        if (plVar13 == (long *)0x0) {
LAB_06bf5d74:
          plVar13 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf5d74;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar13 = (long *)0x0;
          }
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar8 = plVar12[4];
        lVar17 = plVar12[3];
        lVar26 = plVar12[6];
        lVar25 = plVar12[5];
        lVar16 = plVar12[7];
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06adfe8c(&stack0x00000480,plVar10[7],0);
        uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
        FUN_06adff70(&stack0x000002e0,0,uVar6,0);
        plVar12[7] = in_stack_000004a0;
        plVar12[4] = (long)in_stack_00000488;
        plVar12[3] = in_stack_00000480;
        plVar12[6] = in_stack_00000498;
        plVar12[5] = in_stack_00000490;
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06c8a3b8(in_stack_000004e8,plVar12,plVar10,0);
        in_stack_000000c8 = (undefined8 *)&stack0x000002d8;
        in_stack_000000c0 = 0;
        plVar12[4] = lVar8;
        plVar12[3] = lVar17;
        plVar12[6] = lVar26;
        plVar12[5] = lVar25;
        plVar12[7] = lVar16;
        if (plVar11 == (long *)0x0) {
          in_stack_000000c0 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar10 = (long *)FUN_03e16a04(in_stack_000004e8,plVar13,
                                         *(undefined8 *)
                                          System_Collections_Generic_List<IFDDirectory>_TypeInfo);
          goto LAB_06bf5f54;
        }
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        plVar11 = (long *)FUN_06c8a3b8(in_stack_000004e8,plVar11,plVar12,0);
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        plVar10 = (long *)FUN_06c89dd8(in_stack_000004e8,plVar11,plVar13,0);
        if (plVar11 == (long *)0x0) goto LAB_06bf5f54;
        lVar16 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 == 0) goto LAB_06bf5efc;
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        break;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_06bfc93c();
        if (plVar10 == (long *)0x0) {
LAB_06bf643c:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf643c;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar10 = (long *)0x0;
          }
        }
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar11 == (long *)0x0) {
LAB_06bf6490:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf6490;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar11 = (long *)0x0;
          }
        }
        plVar12 = (long *)FUN_06bfc93c();
        if (plVar12 == (long *)0x0) {
LAB_06bf64e4:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_06bf64e4;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar12 = (long *)0x0;
          }
        }
        plVar13 = (long *)FUN_06bfc93c();
        if (plVar13 == (long *)0x0) {
LAB_06bf6538:
          plVar13 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf6538;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07a33940) {
            plVar13 = (long *)0x0;
          }
        }
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06c89998(in_stack_000004e8,plVar10,plVar12,0,0,0);
        in_stack_00000058 = (undefined8 *)&stack0x000002c8;
        in_stack_00000050 = 0;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
        FUN_06ae496c(&stack0x00000480,1,uVar6,0);
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        plVar10 = (long *)FUN_03e16e50(in_stack_000004e8,plVar11,&stack0x00000420,
                                       *(undefined8 *)
                                        System_Collections_Generic_List<IFDStructure>_TypeInfo);
        if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        plVar11 = (long *)FUN_06c89c20(in_stack_000004e8,plVar10,plVar12,plVar13,0);
        in_stack_000000c8 = (undefined8 *)&stack0x000002b8;
        in_stack_000000c0 = 0;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,1,0);
        in_stack_000004a0 = 0;
        in_stack_00000498 = 0;
        in_stack_00000490 = 0;
        in_stack_00000488 = (undefined8 *)0x0;
        in_stack_00000480 = 0;
        FUN_06ae4cb4(&stack0x00000480,uVar6,0);
        (**(code **)(*plVar11 + 0x188))(plVar11,&stack0x00000450,*(undefined8 *)(*plVar11 + 400));
        uVar14 = FUN_06bfc538();
        uVar15 = FUN_06bfc538();
        plVar12 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar16 + 0x18) != 0) {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)(lVar16 + 0x20);
          if ((lVar16 != 0) &&
             (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
            uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar14,0);
          }
          if ((int)plVar12[3] != 0) {
            plVar12[4] = lVar16;
            thunk_FUN_036b7ad0(plVar12 + 4,lVar16);
            lVar16 = FUN_06bb3098(uVar14,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
            {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar12[5] = lVar16;
            thunk_FUN_036b7ad0(plVar12 + 5,lVar16);
            lVar16 = FUN_06bb3098(uVar15,0);
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
            {
              uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,0);
            }
            if (*(uint *)(plVar12 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar12[6] = lVar16;
            thunk_FUN_036b7ad0(plVar12 + 6,lVar16);
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
                 (lVar17 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)
                 ) {
                uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar14,0);
              }
              if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
                plVar12[7] = lVar16;
                thunk_FUN_036b7ad0(plVar12 + 7,lVar16);
                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                             *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,plVar12,0);
                FUN_04ee7cc8();
                if (plVar11 != (long *)0x0) {
                  lVar16 = *plVar11;
                  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar9 != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                        puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                        goto FUN_06bf68d0;
                      }
                      uVar9 = uVar9 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)PTR_DAT_079f4598,0);
FUN_06bf68d0:
                  (*(code *)*puVar7)(plVar11,puVar7[1]);
                }
                if (plVar10 != (long *)0x0) {
                  lVar16 = *plVar10;
                  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar9 != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                        puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06bf6948;
                      }
                      uVar9 = uVar9 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0);
LAB_06bf6948:
                  (*(code *)*puVar7)(plVar10,puVar7[1]);
                }
                plVar10 = (long *)*in_stack_00000058;
                if (plVar10 != (long *)0x0) {
                  lVar16 = *plVar10;
                  uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar9 != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                        puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_06bf72e4;
                      }
                      uVar9 = uVar9 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0);
LAB_06bf72e4:
                  (*(code *)*puVar7)(plVar10,puVar7[1]);
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
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (iVar2 == 1) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          iVar2 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x40),0);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          iVar3 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x48),0);
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
          iVar4 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x40),0);
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
          iVar5 = FUN_06bb2f08(*(undefined8 *)(lVar16 + 0x48),0);
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar14 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,0,uVar14);
          uVar14 = FUN_06bb2ea4(1,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          uVar14 = FUN_06bb2f90(0,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,2,uVar14);
          uVar14 = FUN_06bb2f90(0,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,3,uVar14);
          uVar14 = FUN_06bb2ea4(iVar4 * iVar2,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,4,uVar14);
          uVar14 = FUN_06bb2ea4(iVar5 + iVar4 * iVar3,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,5,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,
                       *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar16,0);
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
          fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
          fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
          fVar23 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar14 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,0,uVar14);
          uVar14 = FUN_06bb2ea4(0,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          uVar14 = FUN_06bb2f90(fVar20 * fVar22,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,2,uVar14);
          uVar14 = FUN_06bb2f90(fVar21 * fVar22 + fVar23,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,3,uVar14);
          uVar14 = FUN_06bb2ea4(0,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,4,uVar14);
          uVar14 = FUN_06bb2ea4(0,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,5,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,
                       *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar16,0);
          FUN_04ee7cc8();
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a36348,0);
      if ((uVar9 & 1) != 0) {
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == 0.0)) {
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
          plVar10 = (long *)FUN_06bfc93c();
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar10 == (long *)0x0) {
LAB_06bf7678:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf7678;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          FUN_06c896c8(uVar6,0,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = (undefined8 *)&stack0x000002b0;
          in_stack_00000480 = 0;
          uVar14 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar15);
          FUN_03154bd8(lVar16,0,uVar15);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36348,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
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
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == 0.0)) {
          plVar10 = (long *)FUN_06bfc93c();
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
          uVar14 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar10 == (long *)0x0) {
LAB_06bf7ab0:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf7ab0;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          FUN_06c896c8(uVar14,0,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = (undefined8 *)&stack0x000002a8;
          in_stack_00000480 = 0;
          uVar14 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar17 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = *(undefined8 *)(lVar17 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          FUN_03154b74(lVar16,uVar15);
          FUN_03154bd8(lVar16,0,uVar15);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a30a70,0);
      if ((uVar9 & 1) != 0) {
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == unaff_s12)) {
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          plVar10 = (long *)FUN_06bfc93c();
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar10 == (long *)0x0) {
LAB_06bf7cd0:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf7cd0;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          FUN_06c896c8(0x3f800000,uVar6,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = (undefined8 *)&stack0x000002a0;
          in_stack_00000480 = 0;
          uVar14 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar15);
          FUN_03154bd8(lVar16,0,uVar15);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
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
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == unaff_s12)) {
          plVar10 = (long *)FUN_06bfc93c();
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
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar10 == (long *)0x0) {
LAB_06bf7f04:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf7f04;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          FUN_06c896c8(0x3f800000,uVar6,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000298;
          in_stack_00000480 = 0;
          uVar14 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar17 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = *(undefined8 *)(lVar17 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          FUN_03154b74(lVar16,uVar15);
          FUN_03154bd8(lVar16,0,uVar15);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a36770,0);
      if ((uVar9 & 1) != 0) {
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == unaff_s12)) {
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          plVar10 = (long *)FUN_06bfc93c();
          if (in_stack_000003b4 == 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar10 == (long *)0x0) {
LAB_06bf812c:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf812c;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,-fVar20,in_stack_000004e8,plVar10,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000290;
            in_stack_00000480 = 0;
            uVar14 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar15);
            FUN_03154bd8(lVar16,0,uVar15);
            uVar14 = FUN_06bb3098(uVar14,0);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
          else {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar10 == (long *)0x0) {
LAB_06bf8270:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf8270;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,-fVar20,in_stack_000004e8,plVar10,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000288;
            in_stack_00000480 = 0;
            uVar14 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar14 = FUN_06bb3098(uVar14,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,0,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36770,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
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
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == unaff_s12)) {
          plVar10 = (long *)FUN_06bfc93c();
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
          fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          if (in_stack_000003b0 == 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar10 == (long *)0x0) {
LAB_06bf84a8:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf84a8;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,-fVar20,in_stack_000004e8,plVar10,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000280;
            in_stack_00000480 = 0;
            uVar14 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar15);
            FUN_03154bd8(lVar16,0,uVar15);
            uVar14 = FUN_06bb3098(uVar14,0);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
          else {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar10 == (long *)0x0) {
LAB_06bf85ec:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf85ec;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,fVar20,in_stack_000004e8,plVar10,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000278;
            in_stack_00000480 = 0;
            uVar14 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar14 = FUN_06bb3098(uVar14,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,0,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x28);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar16,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
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
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == unaff_s12)) {
          plVar10 = (long *)FUN_06bfc93c();
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
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar10 == (long *)0x0) {
LAB_06bf8824:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf8824;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          FUN_06c896c8(0x3f800000,uVar6,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000270;
          in_stack_00000480 = 0;
          uVar14 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar17 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar15 = *(undefined8 *)(lVar17 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          FUN_03154b74(lVar16,uVar15);
          FUN_03154bd8(lVar16,0,uVar15);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)PTR_DAT_07a35338,0);
      if ((uVar9 & 1) != 0) {
        lVar16 = *(long *)(unaff_x22 + 0x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == 0.0)) {
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
          plVar10 = (long *)FUN_06bfc93c();
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar10 == (long *)0x0) {
LAB_06bf8a44:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf8a44;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          FUN_06c896c8(unaff_s12 / fVar20,0,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000268;
          in_stack_00000480 = 0;
          uVar14 = FUN_06bfc538();
          uVar15 = *(undefined8 *)PTR_DAT_07a35338;
          if (in_stack_000003b4 == 0) {
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar19);
            FUN_03154bd8(lVar16,0,uVar19);
            uVar14 = FUN_06bb3098(uVar14,0);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
          }
          else {
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar14 = FUN_06bb3098(uVar14,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,0,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
          }
          FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar15,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a35338,0);
    if ((uVar9 & 1) != 0) {
      if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
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
        fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
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
        iVar2 = FUN_06bb28d4(*(long *)(lVar16 + 0x28),0);
        if ((iVar2 == 0) && (fVar20 == 0.0)) {
          plVar10 = (long *)FUN_06bfc93c();
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
          fVar20 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
          if (in_stack_000003b0 == 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar10 == (long *)0x0) {
LAB_06bf8cf4:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf8cf4;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_06c896c8(unaff_s12 / fVar20,0,in_stack_000004e8,plVar10,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000260;
            in_stack_00000480 = 0;
            uVar14 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar15 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar15);
            FUN_03154bd8(lVar16,0,uVar15);
            uVar14 = FUN_06bb3098(uVar14,0);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar16,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
          else {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar10 == (long *)0x0) {
LAB_06bf8e38:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf8e38;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_06c896c8(fVar20,0,in_stack_000004e8,plVar10,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000258;
            in_stack_00000480 = 0;
            uVar14 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar14 = FUN_06bb3098(uVar14,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,0,uVar14);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar14 = *(undefined8 *)(lVar17 + 0x28);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar16,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
        }
        goto LAB_06bf354c;
      }
    }
    uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                               *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
    if ((uVar9 & 1) == 0) {
LAB_06bf95fc:
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                 *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
        if ((uVar9 & 1) != 0) {
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
            plVar10 = (long *)FUN_06bfc93c();
            if (plVar10 == (long *)0x0) {
LAB_06bf96cc:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf96cc;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar10 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bf9720:
              plVar11 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf9720;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
              }
            }
            plVar12 = (long *)FUN_06bfc93c();
            if (plVar12 == (long *)0x0) {
UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization:
              plVar12 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar1)
              goto UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar12 = (long *)0x0;
              }
            }
            plVar13 = (long *)FUN_06bfc93c();
            if (plVar13 == (long *)0x0) {
LAB_06bf97c8:
              plVar13 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_06bf97c8;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar13 = (long *)0x0;
              }
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_00000070 = 0;
            in_stack_00000058 = (undefined8 *)0x0;
            in_stack_00000050 = 0;
            in_stack_00000068 = 0;
            in_stack_00000060 = 0;
            FUN_06ae496c(&stack0x00000050,uVar6,1,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            auVar27 = FUN_03e16e50(in_stack_000004e8,plVar10,&stack0x00000480,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<IFDStructure>_TypeInfo);
            in_stack_00000158 = auVar27._0_8_;
            in_stack_00000058 = &stack0x00000158;
            in_stack_00000050 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar27._8_8_,in_stack_00000158);
            }
            in_stack_00000150 = FUN_06c8a3b8(in_stack_000004e8,plVar12,in_stack_00000158,0);
            in_stack_000000c8 = &stack0x00000150;
            in_stack_000000c0 = 0;
            uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            FUN_06ae496c(&stack0x00000480,1,uVar6,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000148 =
                 FUN_03e16e50(in_stack_000004e8,plVar11,&stack0x000004b0,
                              *(undefined8 *)System_Collections_Generic_List<IFDStructure>_TypeInfo)
            ;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            auVar27 = FUN_06c89998(in_stack_000004e8,in_stack_00000148,plVar12,0,0,0);
            in_stack_00000140 = auVar27._0_8_;
            in_stack_00000488 = &stack0x00000140;
            in_stack_00000480 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar27._8_8_,in_stack_00000140);
            }
            in_stack_00000138 = FUN_06c89dd8(in_stack_000004e8,plVar13,in_stack_00000140,0);
            in_stack_000000b8 = &stack0x00000138;
            in_stack_000000b0 = 0;
            uVar14 = FUN_06bfc538();
            uVar15 = FUN_06bfc538();
            lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = *(undefined8 *)(lVar17 + 0x20);
            FUN_03154b74(lVar16,uVar19);
            FUN_03154bd8(lVar16,0,uVar19);
            uVar14 = FUN_06bb3098(uVar14,0);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,1,uVar14);
            uVar14 = FUN_06bb3098(uVar15,0);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,2,uVar14);
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
            uVar14 = *(undefined8 *)(lVar17 + 0x38);
            FUN_03154b74(lVar16,uVar14);
            FUN_03154bd8(lVar16,3,uVar14);
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
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                 *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          plVar10 = (long *)FUN_06bfc93c();
          if (plVar10 == (long *)0x0) {
LAB_06bf9d14:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bf9d14;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bf9d68:
            plVar11 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bf9d68;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar11 = (long *)0x0;
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
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
          uVar24 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_00000130 = FUN_06c896c8(uVar6,0,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = &stack0x00000130;
          in_stack_00000480 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_00000128 = FUN_06c896c8(uVar6,uVar24,in_stack_000004e8,plVar11,0);
          in_stack_00000058 = &stack0x00000128;
          in_stack_00000050 = 0;
          uVar14 = FUN_06bfc538();
          uVar15 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar19 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar19);
          FUN_03154bd8(lVar16,0,uVar19);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          uVar14 = FUN_06bb3098(uVar15,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,2,uVar14);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar14 = *(undefined8 *)(lVar17 + 0x38);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,3,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,
                       *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000050);
          FUN_03154064(&stack0x00000480);
          goto LAB_06bf354c;
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
        if ((uVar9 & 1) != 0) {
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar24 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          plVar10 = (long *)FUN_06bfc93c();
          if (plVar10 == (long *)0x0) {
LAB_06bfa058:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bfa058;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bfa0ac:
            plVar11 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bfa0ac;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar11 = (long *)0x0;
            }
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_00000120 = FUN_06c896c8(uVar6,0,in_stack_000004e8,plVar10,0);
          in_stack_00000058 = &stack0x00000120;
          in_stack_00000050 = 0;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
          in_stack_000004a0 = 0;
          in_stack_00000498 = 0;
          in_stack_00000490 = 0;
          FUN_06ae496c(&stack0x00000480,1,uVar6,0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_00000028 = 0;
          in_stack_00000020 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          in_stack_00000040 = 0;
          in_stack_00000118 = FUN_06c8aaf0(uVar24,in_stack_000004e8,&stack0x00000020,0);
          in_stack_00000488 = &stack0x00000118;
          in_stack_00000480 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          auVar27 = FUN_06c89998(in_stack_000004e8,in_stack_00000118,plVar10,0,0,0);
          in_stack_00000110 = auVar27._0_8_;
          in_stack_000000c8 = &stack0x00000110;
          in_stack_000000c0 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18(0,auVar27._8_8_,in_stack_00000110);
          }
          in_stack_00000108 = FUN_06c89dd8(in_stack_000004e8,plVar11,in_stack_00000110,0);
          in_stack_000000b8 = &stack0x00000108;
          in_stack_000000b0 = 0;
          uVar14 = FUN_06bfc538();
          uVar15 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar19 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar19);
          FUN_03154bd8(lVar16,0,uVar19);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          uVar14 = FUN_06bb3098(uVar15,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,2,uVar14);
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
          uVar14 = *(undefined8 *)(lVar17 + 0x38);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,3,uVar14);
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
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                 *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          plVar10 = (long *)FUN_06bfc93c();
          if (plVar10 == (long *)0x0) {
LAB_06bfa694:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bfa694;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bfa6e8:
            plVar11 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bfa6e8;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar11 = (long *)0x0;
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
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
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
          uVar24 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_00000100 = FUN_06c896c8(uVar6,0,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = &stack0x00000100;
          in_stack_00000480 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_000000f8 = FUN_06c896c8(uVar6,uVar24,in_stack_000004e8,plVar11,0);
          in_stack_00000058 = &stack0x000000f8;
          in_stack_00000050 = 0;
          uVar14 = FUN_06bfc538();
          uVar15 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar19 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar19);
          FUN_03154bd8(lVar16,0,uVar19);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          uVar14 = FUN_06bb3098(uVar15,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,2,uVar14);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,
                       *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar16,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000050);
          FUN_03154064(&stack0x00000480);
          goto LAB_06bf354c;
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                 *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0);
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
        if ((uVar9 & 1) != 0) {
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar6 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x30),0);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar24 = FUN_06bb2ffc(*(undefined8 *)(lVar16 + 0x38),0);
          plVar10 = (long *)FUN_06bfc93c();
          if (plVar10 == (long *)0x0) {
LAB_06bfa9a4:
            plVar10 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_06bfa9a4;
            if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar10 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bfa9f8:
            plVar11 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06bfa9f8;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar11 = (long *)0x0;
            }
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          in_stack_000000f0 = FUN_06c896c8(uVar6,0,in_stack_000004e8,plVar10,0);
          in_stack_00000488 = &stack0x000000f0;
          in_stack_00000480 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          auVar27 = FUN_06c896c8(uVar24,0,in_stack_000004e8,plVar10,0);
          in_stack_000000e8 = auVar27._0_8_;
          in_stack_00000058 = &stack0x000000e8;
          in_stack_00000050 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18(0,auVar27._8_8_,in_stack_000000e8);
          }
          in_stack_000000e0 = FUN_06c89dd8(in_stack_000004e8,plVar11,in_stack_000000e8,0);
          in_stack_000000c8 = &stack0x000000e0;
          in_stack_000000c0 = 0;
          uVar14 = FUN_06bfc538();
          uVar15 = FUN_06bfc538();
          lVar16 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar19 = *(undefined8 *)(lVar17 + 0x20);
          FUN_03154b74(lVar16,uVar19);
          FUN_03154bd8(lVar16,0,uVar19);
          uVar14 = FUN_06bb3098(uVar14,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,1,uVar14);
          uVar14 = FUN_06bb3098(uVar15,0);
          FUN_03154b74(lVar16,uVar14);
          FUN_03154bd8(lVar16,2,uVar14);
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
    if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    param_2 = *(undefined8 *)(in_stack_000003b8 + 0x48);
    param_1 = (undefined8 *)System_Func<float,_float,_float>_TypeInfo;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar7 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_06bf5f18;
    }
  }
LAB_06bf5efc:
  puVar7 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5f18:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
LAB_06bf5f54:
  if (plVar10 != (long *)0x0) {
    uVar6 = FUN_06ae539c(&stack0x00000360,0);
    in_stack_00000070 = 0;
    in_stack_00000058 = (undefined8 *)0x0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06ae4cb4(&stack0x00000050,uVar6,0);
    (**(code **)(*plVar10 + 0x188))(plVar10,&stack0x000003f0,*(undefined8 *)(*plVar10 + 400));
    FUN_06bfc538();
    FUN_06bfc538();
    FUN_0753c580(&System_Func<UniqueIdentifier_Decorator>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


