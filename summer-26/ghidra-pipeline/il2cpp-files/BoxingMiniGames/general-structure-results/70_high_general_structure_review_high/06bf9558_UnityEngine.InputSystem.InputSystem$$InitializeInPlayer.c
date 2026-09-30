/*
FUNCTION_NAME: UnityEngine.InputSystem.InputSystem$$InitializeInPlayer
ENTRY_POINT: 06bf9558
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06bf6a28) */
/* WARNING: Removing unreachable block (ram,0x06bfb22c) */
/* WARNING: Removing unreachable block (ram,0x06bf6c24) */
/* WARNING: Removing unreachable block (ram,0x06bf9adc) */
/* WARNING: Removing unreachable block (ram,0x06bfa32c) */
/* WARNING: Removing unreachable block (ram,0x06bf5bec) */
/* WARNING: Removing unreachable block (ram,0x06bf92f8) */
/* WARNING: Removing unreachable block (ram,0x06bf46e8) */
/* WARNING: Removing unreachable block (ram,0x06bf68e4) */
/* WARNING: Removing unreachable block (ram,0x06bf9f88) */
/* WARNING: Removing unreachable block (ram,0x06bf6cc8) */
/* WARNING: Removing unreachable block (ram,0x06bf48c8) */
/* WARNING: Removing unreachable block (ram,0x06bf9c84) */
/* WARNING: Removing unreachable block (ram,0x06bfa8d4) */
/* WARNING: Removing unreachable block (ram,0x06bf50c8) */
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
/* WARNING: Removing unreachable block (ram,0x06bf95ec) */
/* WARNING: Removing unreachable block (ram,0x06bf9c5c) */
/* WARNING: Removing unreachable block (ram,0x06bf9c6c) */
/* WARNING: Removing unreachable block (ram,0x06bf6c0c) */
/* WARNING: Removing unreachable block (ram,0x06bf7280) */
/* WARNING: Removing unreachable block (ram,0x06bfa5f4) */
/* WARNING: Removing unreachable block (ram,0x06bfa604) */
/* WARNING: Removing unreachable block (ram,0x06bfabb0) */
/* WARNING: Removing unreachable block (ram,0x06bfad4c) */
/* WARNING: Removing unreachable block (ram,0x06bfb0e8) */
/* WARNING: Removing unreachable block (ram,0x06bfad5c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_InputSystem_InputSystem__InitializeInPlayer(undefined8 param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x28;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  long lVar27;
  long lVar28;
  float unaff_s12;
  undefined1 auVar29 [16];
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
  long in_stack_000000d0;
  undefined8 *in_stack_000000d8;
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
  
  if (param_2 == 1) {
    plVar14 = (long *)__cxa_begin_catch(param_1);
    lVar17 = *plVar14;
    __cxa_end_catch();
    bVar1 = true;
code_r0x06bf86fc:
    FUN_03154064(&stack0x00000480);
    if (!bVar1) goto LAB_06bf354c;
LAB_06bf8708:
    do {
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) == 0) goto LAB_06bf8940;
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar15 = *(long *)(in_stack_000003b8 + 0x28);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x30),0);
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar15 = *(long *)(in_stack_000003b8 + 0x28);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
        if ((iVar6 == 0) && (fVar24 == unaff_s12)) {
          plVar14 = (long *)FUN_06bfc93c();
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
          uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar14 == (long *)0x0) {
LAB_06bf8824:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf8824;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          FUN_06c896c8(0x3f800000,uVar25,in_stack_000004e8,plVar14,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000270;
          lVar17 = 0;
          uVar10 = FUN_06bfc538();
          lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar19 = *(undefined8 *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          FUN_03154b74(lVar15,uVar19);
          FUN_03154bd8(lVar15,0,uVar19);
          uVar10 = FUN_06bb3098(uVar10,0);
          FUN_03154b74(lVar15,uVar10);
          FUN_03154bd8(lVar15,1,uVar10);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar15,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
LAB_06bf8940:
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
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x38),0);
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          if ((iVar6 != 0) || (fVar24 != 0.0)) goto LAB_06bf354c;
          lVar17 = *(long *)(unaff_x22 + 0x28);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
          plVar14 = (long *)FUN_06bfc93c();
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar14 == (long *)0x0) {
LAB_06bf8a44:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf8a44;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          FUN_06c896c8(unaff_s12 / fVar24,0,in_stack_000004e8,plVar14,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000268;
          lVar17 = 0;
          uVar10 = FUN_06bfc538();
          uVar19 = *(undefined8 *)PTR_DAT_07a35338;
          if (in_stack_000003b4 == 0) {
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar20);
            FUN_03154bd8(lVar15,0,uVar20);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
          }
          else {
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar10 = FUN_06bb3098(uVar10,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,0,uVar10);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar10 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
          }
          FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar19,lVar15,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
          goto LAB_06bf354c;
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a35338,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = *(long *)(in_stack_000003b8 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x38),0);
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = *(long *)(in_stack_000003b8 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          if ((iVar6 != 0) || (fVar24 != 0.0)) goto LAB_06bf354c;
          plVar14 = (long *)FUN_06bfc93c();
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
          if (in_stack_000003b0 == 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar14 == (long *)0x0) {
LAB_06bf8cf4:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf8cf4;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            FUN_06c896c8(unaff_s12 / fVar24,0,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000260;
            lVar17 = 0;
            uVar10 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar19);
            FUN_03154bd8(lVar15,0,uVar19);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar15,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar14 == (long *)0x0) {
LAB_06bf8e38:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf8e38;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          FUN_06c896c8(fVar24,0,in_stack_000004e8,plVar14,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000258;
          lVar17 = 0;
          uVar10 = FUN_06bfc538();
          lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          uVar10 = FUN_06bb3098(uVar10,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_03154b74(lVar15,uVar10);
          FUN_03154bd8(lVar15,0,uVar10);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x28);
          FUN_03154b74(lVar15,uVar10);
          FUN_03154bd8(lVar15,1,uVar10);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a35338,lVar15,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
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
            lVar15 = *(long *)(unaff_x22 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar15 = FUN_06bb3114(*(undefined8 *)(lVar15 + 0x20),0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(long *)(lVar15 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            memmove(&stack0x00000160,(void *)(*(long *)(lVar15 + 0x78) + 0x14),0x68);
            bVar2 = FUN_06cada30(&stack0x00000160,0);
            if ((bVar2 & in_stack_000001c0._4_4_ == 2) == 0) goto LAB_06bf354c;
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bf96cc:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf96cc;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bf9720:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf9720;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
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
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar2)
              goto UnityEngine_InputSystem_InputSystem__PerformDefaultPluginInitialization;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
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
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_06bf97c8;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar13 = (long *)0x0;
              }
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_00000070 = 0;
            in_stack_00000058 = (undefined8 *)0x0;
            in_stack_00000050 = 0;
            in_stack_00000068 = 0;
            in_stack_00000060 = 0;
            FUN_06ae496c(&stack0x00000050,uVar25,1,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            auVar29 = FUN_03e16e50(in_stack_000004e8,plVar14,&stack0x00000480,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<IFDStructure>_TypeInfo);
            in_stack_00000158 = auVar29._0_8_;
            in_stack_00000058 = &stack0x00000158;
            in_stack_00000050 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar29._8_8_,in_stack_00000158);
            }
            in_stack_00000150 = FUN_06c8a3b8(in_stack_000004e8,plVar12,in_stack_00000158,0);
            in_stack_000000c8 = &stack0x00000150;
            in_stack_000000c0 = 0;
            uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            FUN_06ae496c(&stack0x00000480,1,uVar25,0);
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
            auVar29 = FUN_06c89998(in_stack_000004e8,in_stack_00000148,plVar12,0,0,0);
            in_stack_00000140 = auVar29._0_8_;
            in_stack_00000488 = &stack0x00000140;
            lVar17 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar29._8_8_,in_stack_00000140);
            }
            in_stack_00000138 = FUN_06c89dd8(in_stack_000004e8,plVar13,in_stack_00000140,0);
            in_stack_000000b8 = &stack0x00000138;
            in_stack_000000b0 = 0;
            uVar10 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar20);
            FUN_03154bd8(lVar15,0,uVar20);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
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
            uVar10 = *(undefined8 *)(lVar16 + 0x38);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,3,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar15,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x000000b0);
            FUN_03154064(&stack0x00000480);
            FUN_03154064(&stack0x000004b0);
            FUN_03154064(&stack0x000000c0);
            FUN_03154064(&stack0x00000050);
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
                                     *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,
                                     0);
          if ((uVar9 & 1) != 0) {
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bf9d14:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf9d14;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bf9d68:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf9d68;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
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
            uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
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
            uVar26 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000130 = FUN_06c896c8(uVar25,0,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = &stack0x00000130;
            lVar17 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000128 = FUN_06c896c8(uVar25,uVar26,in_stack_000004e8,plVar11,0);
            in_stack_00000058 = &stack0x00000128;
            in_stack_00000050 = 0;
            uVar10 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar20);
            FUN_03154bd8(lVar15,0,uVar20);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar10 = *(undefined8 *)(lVar16 + 0x38);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,3,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar15,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000050);
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                     *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,0);
          if ((uVar9 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar26 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bfa058:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bfa058;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bfa0ac:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bfa0ac;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000120 = FUN_06c896c8(uVar25,0,in_stack_000004e8,plVar14,0);
            in_stack_00000058 = &stack0x00000120;
            in_stack_00000050 = 0;
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            FUN_06ae496c(&stack0x00000480,1,uVar25,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000040 = 0;
            in_stack_00000118 = FUN_06c8aaf0(uVar26,in_stack_000004e8,&stack0x00000020,0);
            in_stack_00000488 = &stack0x00000118;
            lVar17 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            auVar29 = FUN_06c89998(in_stack_000004e8,in_stack_00000118,plVar14,0,0,0);
            in_stack_00000110 = auVar29._0_8_;
            in_stack_000000c8 = &stack0x00000110;
            in_stack_000000c0 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar29._8_8_,in_stack_00000110);
            }
            in_stack_00000108 = FUN_06c89dd8(in_stack_000004e8,plVar11,in_stack_00000110,0);
            in_stack_000000b8 = &stack0x00000108;
            in_stack_000000b0 = 0;
            uVar10 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar20);
            FUN_03154bd8(lVar15,0,uVar20);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
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
            uVar10 = *(undefined8 *)(lVar16 + 0x38);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,3,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar15,0);
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
                                     *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,
                                     0);
          if ((uVar9 & 1) != 0) {
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bfa694:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bfa694;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bfa6e8:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bfa6e8;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
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
            uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
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
            uVar26 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000100 = FUN_06c896c8(uVar25,0,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = &stack0x00000100;
            lVar17 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_000000f8 = FUN_06c896c8(uVar25,uVar26,in_stack_000004e8,plVar11,0);
            in_stack_00000058 = &stack0x000000f8;
            in_stack_00000050 = 0;
            uVar10 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar20);
            FUN_03154bd8(lVar15,0,uVar20);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar15,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000050);
            FUN_03154064(&stack0x00000480);
            goto LAB_06bf354c;
          }
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                     *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
          if ((uVar9 & 1) != 0) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar26 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bfa9a4:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bfa9a4;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bfa9f8:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bfa9f8;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar11 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_000000f0 = FUN_06c896c8(uVar25,0,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = &stack0x000000f0;
            lVar17 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            auVar29 = FUN_06c896c8(uVar26,0,in_stack_000004e8,plVar14,0);
            in_stack_000000e8 = auVar29._0_8_;
            in_stack_00000058 = &stack0x000000e8;
            in_stack_00000050 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,auVar29._8_8_,in_stack_000000e8);
            }
            in_stack_000000e0 = FUN_06c89dd8(in_stack_000004e8,plVar11,in_stack_000000e8,0);
            in_stack_000000c8 = &stack0x000000e0;
            in_stack_000000c0 = 0;
            uVar10 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar20);
            FUN_03154bd8(lVar15,0,uVar20);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,lVar15,0);
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
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,0);
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
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bf9018:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf9018;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            plVar11 = (long *)FUN_06bfc93c();
            if (plVar11 == (long *)0x0) {
LAB_06bf906c:
              plVar11 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf906c;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
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
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_06bf90c0;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
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
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar2)
              goto UnityEngine_InputSystem_InputSystem__get_remoting;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar13 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c8a3b8(in_stack_000004e8,plVar14,plVar12,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000250;
            lVar17 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar10 = FUN_06c8a3b8(in_stack_000004e8,plVar11,plVar12,0);
            in_stack_00000058 = (undefined8 *)&stack0x00000248;
            in_stack_00000050 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_06c89dd8(in_stack_000004e8,uVar10,plVar13,0);
            in_stack_000000c8 = (undefined8 *)&stack0x00000240;
            in_stack_000000c0 = 0;
            uVar10 = FUN_06bfc538();
            uVar19 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar20 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar20);
            FUN_03154bd8(lVar15,0,uVar20);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb3098(uVar19,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar10 = *(undefined8 *)(lVar16 + 0x38);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,3,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,lVar15,0);
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
            lVar15 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) <= in_stack_000003b4) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            unaff_x22 = FUN_06bb3114(*(undefined8 *)
                                      (lVar15 + (long)(int)in_stack_000003b4 * 8 + 0x20),0);
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
          iVar6 = FUN_053a3a50(*(long *)(unaff_x22 + 0x58),
                               *(undefined8 *)
                                System_Collections_Generic_KeyValuePair<string,_string>_TypeInfo);
        } while (iVar6 != 1);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar9 = FUN_06bfc160(unaff_x22);
      } while ((uVar9 & 1) != 0);
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)PTR_DAT_07a36770,0);
        if ((uVar9 & 1) != 0) {
          plVar11 = (long *)FUN_06bfc93c();
          plVar14 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((int)plVar11[9] == 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)PTR_DAT_07a33940;
            if (plVar14 == (long *)0x0) {
              uVar9 = (ulong)*(byte *)(lVar17 + 0x130);
LAB_06bf3774:
              plVar14 = (long *)0x0;
            }
            else {
              uVar9 = (ulong)*(byte *)(lVar17 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3774;
              if (*(long *)(*(long *)(*plVar14 + 200) + uVar9 * 8 + -8) != lVar17) {
                plVar14 = (long *)0x0;
              }
            }
            if ((uint)*(byte *)(*plVar11 + 0x130) < (uint)uVar9) {
              plVar11 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar17) {
              plVar11 = (long *)0x0;
            }
            plVar14 = (long *)FUN_06c8a0c8(in_stack_000004e8,plVar14,plVar11,0);
          }
          else {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar17 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
            if (plVar14 == (long *)0x0) {
              uVar9 = (ulong)*(byte *)(lVar17 + 0x130);
LAB_06bf3734:
              plVar14 = (long *)0x0;
            }
            else {
              uVar9 = (ulong)*(byte *)(lVar17 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar17 + 0x130)) goto LAB_06bf3734;
              if (*(long *)(*(long *)(*plVar14 + 200) + uVar9 * 8 + -8) != lVar17) {
                plVar14 = (long *)0x0;
              }
            }
            if ((uint)*(byte *)(*plVar11 + 0x130) < (uint)uVar9) {
              plVar11 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar17) {
              plVar11 = (long *)0x0;
            }
            plVar14 = (long *)FUN_06c8a240(in_stack_000004e8,plVar14,plVar11,0);
          }
          in_stack_00000488 = (undefined8 *)&stack0x000003a8;
          lVar17 = 0;
          uVar10 = FUN_06bfc538();
          uVar19 = *(undefined8 *)PTR_DAT_07a36770;
          if (in_stack_000003b4 == 1) {
            plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,2);
            lVar15 = FUN_06bb3098(uVar10,0);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0))
            {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar11[4] = lVar15;
            thunk_FUN_036b7ad0(plVar11 + 4,lVar15);
            lVar15 = *(long *)(unaff_x22 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) <= in_stack_000003b0) {
LAB_06bf4858:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar15 = *(long *)(lVar15 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0))
            {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_06bf4858;
            plVar11[5] = lVar15;
            thunk_FUN_036b7ad0(plVar11 + 5,lVar15);
          }
          else {
            plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,2);
            lVar15 = *(long *)(unaff_x22 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) <= in_stack_000003b0) {
LAB_06bf4850:
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(lVar15 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0))
            {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((int)plVar11[3] == 0) goto LAB_06bf4850;
            plVar11[4] = lVar15;
            thunk_FUN_036b7ad0(plVar11 + 4,lVar15);
            lVar15 = FUN_06bb3098(uVar10,0);
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0))
            {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            plVar11[5] = lVar15;
            thunk_FUN_036b7ad0(plVar11 + 5,lVar15);
          }
          FUN_06bfc890(unaff_x22,in_stack_000003b8,uVar19,plVar11,0);
          FUN_04ee7cc8();
          if (plVar14 != (long *)0x0) {
            lVar15 = *plVar14;
            uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar9 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                  puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_06bf39d4;
                }
                uVar9 = uVar9 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,0);
LAB_06bf39d4:
            (*(code *)*puVar7)(plVar14,puVar7[1]);
          }
          goto LAB_06bf354c;
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36770,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)PTR_DAT_07a30a70,0);
        if ((uVar9 & 1) == 0) goto LAB_06bf3ad4;
        plVar14 = (long *)FUN_06bfc93c();
        plVar11 = (long *)FUN_06bfc93c();
        if (plVar14 == (long *)0x0) {
LAB_06bf3a98:
          if (in_stack_000003b0 == 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)PTR_DAT_07a33940;
            if (plVar11 == (long *)0x0) {
LAB_06bf3d50:
              plVar11 = (long *)0x0;
              if (plVar14 == (long *)0x0) goto LAB_06bf448c;
LAB_06bf4478:
              if (*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar15 + 0x130)) goto LAB_06bf448c;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                  != lVar15) {
                plVar14 = (long *)0x0;
              }
            }
            else {
              if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar15 + 0x130)) goto LAB_06bf3d50;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                  != lVar15) {
                plVar11 = (long *)0x0;
              }
              if (plVar14 != (long *)0x0) goto LAB_06bf4478;
LAB_06bf448c:
              plVar14 = (long *)0x0;
            }
            lVar15 = FUN_06c8a0c8(in_stack_000004e8,plVar11,plVar14,0);
          }
          else {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)PTR_DAT_07a33940;
            if (plVar14 == (long *)0x0) {
LAB_06bf3ac8:
              plVar14 = (long *)0x0;
              if (plVar11 == (long *)0x0)
              goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
LAB_06bf3f1c:
              if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar15 + 0x130))
              goto UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                  != lVar15) {
                plVar11 = (long *)0x0;
              }
            }
            else {
              if (*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar15 + 0x130)) goto LAB_06bf3ac8;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                  != lVar15) {
                plVar14 = (long *)0x0;
              }
              if (plVar11 != (long *)0x0) goto LAB_06bf3f1c;
UnityEngine_InputSystem_InputControlScheme_SchemeJson__ToJson:
              plVar11 = (long *)0x0;
            }
            lVar15 = FUN_06c89dd8(in_stack_000004e8,plVar14,plVar11,0);
          }
        }
        else {
          lVar15 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
          bVar2 = *(byte *)(lVar15 + 0x130);
          uVar9 = (ulong)bVar2;
          if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar14 + 200) + uVar9 * 8 + -8) != lVar15)) goto LAB_06bf3a98;
          if (in_stack_000003b0 == 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar2)) {
              plVar11 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar15) {
              plVar11 = (long *)0x0;
            }
            lVar15 = FUN_06c8a240(in_stack_000004e8,plVar11,plVar14,0);
          }
          else {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar2)) {
              plVar11 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar11 + 200) + uVar9 * 8 + -8) != lVar15) {
              plVar11 = (long *)0x0;
            }
            lVar15 = FUN_06c89f50(in_stack_000004e8,plVar14,plVar11,0);
          }
        }
        uVar10 = FUN_06bfc538();
        if (in_stack_000003b0 == 0) {
          plVar14 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2
                                        );
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar16 + 0x18) == 0) {
LAB_06bfb104:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar16 = *(long *)(lVar16 + 0x20);
          if ((lVar16 != 0) &&
             (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar10,0);
          }
          if ((int)plVar14[3] == 0) goto LAB_06bfb104;
          plVar14[4] = lVar16;
          thunk_FUN_036b7ad0(plVar14 + 4,lVar16);
          lVar16 = FUN_06bb3098(uVar10,0);
          if ((lVar16 != 0) &&
             (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar10,0);
          }
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar14[5] = lVar16;
          thunk_FUN_036b7ad0(plVar14 + 5,lVar16);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar14,0);
          FUN_04ee7cc8();
        }
        else {
          plVar14 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2
                                        );
          lVar16 = FUN_06bb3098(uVar10,0);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((lVar16 != 0) &&
             (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar10,0);
          }
          if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar14[4] = lVar16;
          thunk_FUN_036b7ad0(plVar14 + 4,lVar16);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar16 + 0x18) <= in_stack_000003b0) {
LAB_06bfb0e0:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          lVar16 = *(long *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
          if ((lVar16 != 0) &&
             (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar10,0);
          }
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) goto LAB_06bfb0e0;
          plVar14[5] = lVar16;
          thunk_FUN_036b7ad0(plVar14 + 5,lVar16);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,plVar14,0);
          FUN_04ee7cc8();
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_06ae5f08(lVar15,0);
        goto LAB_06bf354c;
      }
LAB_06bf3ad4:
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)PTR_DAT_07a30a70,0);
        if ((uVar9 & 1) != 0) {
          plVar14 = (long *)FUN_06bfc93c();
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar14 == (long *)0x0) {
            if (in_stack_000004e8 == 0) {
LAB_06bfb11c:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)PTR_DAT_07a33940;
LAB_06bf3d70:
            plVar14 = (long *)0x0;
            if (plVar11 == (long *)0x0) {
LAB_06bf3d8c:
              plVar11 = (long *)0x0;
            }
            else {
LAB_06bf3d78:
              if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar15 + 0x130)) goto LAB_06bf3d8c;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                  != lVar15) {
                plVar11 = (long *)0x0;
              }
            }
            lVar15 = FUN_06c89dd8(in_stack_000004e8,plVar14,plVar11,0);
          }
          else {
            lVar16 = *plVar14;
            lVar15 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
            bVar2 = *(byte *)(lVar15 + 0x130);
            if ((*(byte *)(lVar16 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar15)) {
              if (in_stack_000004e8 == 0) goto LAB_06bfb11c;
              lVar15 = *(long *)PTR_DAT_07a33940;
              if (*(byte *)(lVar16 + 0x130) < *(byte *)(lVar15 + 0x130)) goto LAB_06bf3d70;
              if (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
                  lVar15) {
                plVar14 = (long *)0x0;
              }
              if (plVar11 != (long *)0x0) goto LAB_06bf3d78;
              goto LAB_06bf3d8c;
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar2)) {
              plVar11 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar15) {
              plVar11 = (long *)0x0;
            }
            lVar15 = FUN_06c89f50(in_stack_000004e8,plVar14,plVar11,0);
          }
          uVar10 = FUN_06bfc538();
          plVar14 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2
                                        );
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (in_stack_000003b0 < *(uint *)(lVar16 + 0x18)) {
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar16 = *(long *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            if ((lVar16 != 0) &&
               (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((int)plVar14[3] != 0) {
              plVar14[4] = lVar16;
              thunk_FUN_036b7ad0(plVar14 + 4,lVar16);
              lVar16 = FUN_06bb3098(uVar10,0);
              if ((lVar16 != 0) &&
                 (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
              {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar14[5] = lVar16;
              thunk_FUN_036b7ad0(plVar14 + 5,lVar16);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,plVar14,0);
              FUN_04ee7cc8();
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06ae5f08(lVar15,0);
              goto LAB_06bf354c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36348,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)PTR_DAT_07a36348,0);
        if ((uVar9 & 1) != 0) {
          plVar14 = (long *)FUN_06bfc93c();
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar14 == (long *)0x0) {
            if (in_stack_000004e8 == 0) {
LAB_06bfb148:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)PTR_DAT_07a33940;
LAB_06bf3da8:
            plVar14 = (long *)0x0;
LAB_06bf3dac:
            if (plVar11 == (long *)0x0) {
LAB_06bf3dc4:
              plVar11 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar15 + 0x130)) goto LAB_06bf3dc4;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                  != lVar15) {
                plVar11 = (long *)0x0;
              }
            }
            lVar15 = FUN_06c8a3b8(in_stack_000004e8,plVar14,plVar11,0);
          }
          else {
            lVar16 = *plVar14;
            lVar15 = *(long *)UnityEngine_Rendering_DebugUI_EnumField<uint>_TypeInfo;
            bVar2 = *(byte *)(lVar15 + 0x130);
            if ((*(byte *)(lVar16 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar15)) {
              if (in_stack_000004e8 == 0) goto LAB_06bfb148;
              lVar15 = *(long *)PTR_DAT_07a33940;
              if (*(byte *)(lVar16 + 0x130) < *(byte *)(lVar15 + 0x130)) goto LAB_06bf3da8;
              if (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
                  lVar15) {
                plVar14 = (long *)0x0;
              }
              goto LAB_06bf3dac;
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((plVar11 == (long *)0x0) || (*(byte *)(*plVar11 + 0x130) < bVar2)) {
              plVar11 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar15) {
              plVar11 = (long *)0x0;
            }
            lVar15 = FUN_06c8a530(in_stack_000004e8,plVar14,plVar11,0);
          }
          uVar10 = FUN_06bfc538();
          plVar14 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2
                                        );
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (in_stack_000003b0 < *(uint *)(lVar16 + 0x18)) {
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar16 = *(long *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            if ((lVar16 != 0) &&
               (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((int)plVar14[3] != 0) {
              plVar14[4] = lVar16;
              thunk_FUN_036b7ad0(plVar14 + 4,lVar16);
              lVar16 = FUN_06bb3098(uVar10,0);
              if ((lVar16 != 0) &&
                 (lVar8 = thunk_FUN_0367fd24(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
              {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar14[5] = lVar16;
              thunk_FUN_036b7ad0(plVar14 + 5,lVar16);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,plVar14,0);
              FUN_04ee7cc8();
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_06ae5f08(lVar15,0);
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
          plVar14 = (long *)FUN_06bfc93c();
          if (plVar14 == (long *)0x0) {
LAB_06bf3d20:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf3d20;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bf40e0:
            plVar11 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf40e0;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
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
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar12 + 0x130) < bVar2)
            goto UnityEngine_InputSystem_InputInteractionContext__get_control;
            if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
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
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_06bf4188;
            if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar13 = (long *)0x0;
            }
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_06c8a3b8(in_stack_000004e8,plVar14,plVar12,0);
          in_stack_00000058 = (undefined8 *)&stack0x000003a0;
          in_stack_00000050 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar10 = FUN_06c8a3b8(in_stack_000004e8,plVar11,plVar12,0);
          in_stack_000000c8 = (undefined8 *)&stack0x00000398;
          in_stack_000000c0 = 0;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar14 = (long *)FUN_06c89dd8(in_stack_000004e8,uVar10,plVar13,0);
          in_stack_000000b8 = (undefined8 *)&stack0x00000390;
          in_stack_000000b0 = 0;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar25 = FUN_06ae539c(&stack0x00000360,0);
          in_stack_000004a0 = 0;
          in_stack_00000498 = 0;
          in_stack_00000490 = 0;
          in_stack_00000488 = (undefined8 *)0x0;
          lVar17 = 0;
          FUN_06ae4cb4(&stack0x00000480,uVar25,0);
          (**(code **)(*plVar14 + 0x188))(plVar14,&stack0x000003c0,*(undefined8 *)(*plVar14 + 400));
          uVar10 = FUN_06bfc538();
          uVar19 = FUN_06bfc538();
          plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,3
                                        );
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar15 + 0x18) != 0) {
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(lVar15 + 0x20);
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0))
            {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar15;
              thunk_FUN_036b7ad0(plVar11 + 4,lVar15);
              lVar15 = FUN_06bb3098(uVar10,0);
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)
                 ) {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar11[5] = lVar15;
              thunk_FUN_036b7ad0(plVar11 + 5,lVar15);
              lVar15 = FUN_06bb3098(uVar19,0);
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)
                 ) {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar11[6] = lVar15;
              thunk_FUN_036b7ad0(plVar11 + 6,lVar15);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<float,_float,_float>_TypeInfo,plVar11,0);
              FUN_04ee7cc8();
              if (plVar14 != (long *)0x0) {
                lVar15 = *plVar14;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar9 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_06bf46d4;
                    }
                    uVar9 = uVar9 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,0);
LAB_06bf46d4:
                (*(code *)*puVar7)(plVar14,puVar7[1]);
              }
              plVar14 = (long *)*in_stack_000000c8;
              if (plVar14 != (long *)0x0) {
                lVar15 = *plVar14;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar9 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_06bf474c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,0);
LAB_06bf474c:
                (*(code *)*puVar7)(plVar14,puVar7[1]);
              }
              if (in_stack_000000c0 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c00();
              }
              plVar14 = (long *)*in_stack_00000058;
              if (plVar14 != (long *)0x0) {
                lVar15 = *plVar14;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar9 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                      puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_06bf4aac;
                    }
                    uVar9 = uVar9 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,0);
LAB_06bf4aac:
                (*(code *)*puVar7)(plVar14,puVar7[1]);
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
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          plVar14 = (long *)FUN_06bfc93c();
          if (plVar14 == (long *)0x0) {
LAB_06bf4b3c:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf4b3c;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bf4b90:
            plVar11 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf4b90;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar11 = (long *)0x0;
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
          uVar25 = FUN_06bb2960(*(long *)(lVar17 + 0x30),0);
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
          uVar26 = FUN_06bb2960(*(long *)(lVar17 + 0x38),0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_06c896c8(uVar25,0,in_stack_000004e8,plVar14,0);
          in_stack_00000058 = (undefined8 *)&stack0x00000358;
          in_stack_00000050 = 0;
          if (plVar11 == (long *)0x0) {
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            in_stack_000004a0 = 0;
            in_stack_00000498 = 0;
            in_stack_00000490 = 0;
            FUN_06ae4cb4(&stack0x00000480,uVar25,0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            in_stack_00000088 = 0;
            in_stack_00000080 = 0;
            in_stack_00000098 = 0;
            in_stack_00000090 = 0;
            in_stack_000000a0 = 0;
            plVar14 = (long *)FUN_06c8aaf0(uVar26,in_stack_000004e8,&stack0x00000080,0);
          }
          else {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar14 = (long *)FUN_06c896c8(uVar25,uVar26,in_stack_000004e8,plVar11,0);
          }
          in_stack_00000488 = (undefined8 *)&stack0x00000350;
          lVar17 = 0;
          uVar10 = FUN_06bfc538();
          uVar19 = FUN_06bfc538();
          plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,
                                         10);
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar15 + 0x18) != 0) {
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(lVar15 + 0x20);
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0))
            {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar15;
              thunk_FUN_036b7ad0(plVar11 + 4,lVar15);
              lVar15 = FUN_06bb3098(uVar10,0);
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)
                 ) {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar11[5] = lVar15;
              thunk_FUN_036b7ad0(plVar11 + 5,lVar15);
              lVar15 = FUN_06bb3098(uVar19,0);
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)
                 ) {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar11[6] = lVar15;
              thunk_FUN_036b7ad0(plVar11 + 6,lVar15);
              lVar15 = *(long *)(unaff_x22 + 0x28);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
                lVar15 = *(long *)(lVar15 + 0x38);
                if ((lVar15 != 0) &&
                   (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar16 == 0)) {
                  uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar10,0);
                }
                if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                  plVar11[7] = lVar15;
                  thunk_FUN_036b7ad0(plVar11 + 7,lVar15);
                  lVar15 = *(long *)(unaff_x22 + 0x28);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (4 < *(uint *)(lVar15 + 0x18)) {
                    lVar15 = *(long *)(lVar15 + 0x40);
                    if ((lVar15 != 0) &&
                       (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar16 == 0)) {
                      uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                      FUN_03642acc(uVar10,0);
                    }
                    if (4 < *(uint *)(plVar11 + 3)) {
                      plVar11[8] = lVar15;
                      thunk_FUN_036b7ad0(plVar11 + 8,lVar15);
                      lVar15 = *(long *)(unaff_x22 + 0x28);
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
                      }
                      if (5 < *(uint *)(lVar15 + 0x18)) {
                        lVar15 = *(long *)(lVar15 + 0x48);
                        if ((lVar15 != 0) &&
                           (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar16 == 0)) {
                          uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                          FUN_03642acc(uVar10,0);
                        }
                        if (5 < *(uint *)(plVar11 + 3)) {
                          plVar11[9] = lVar15;
                          thunk_FUN_036b7ad0(plVar11 + 9,lVar15);
                          lVar15 = *(long *)(unaff_x22 + 0x28);
                          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03642c18();
                          }
                          if (6 < *(uint *)(lVar15 + 0x18)) {
                            lVar15 = *(long *)(lVar15 + 0x50);
                            if ((lVar15 != 0) &&
                               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40))
                               , lVar16 == 0)) {
                              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                              FUN_03642acc(uVar10,0);
                            }
                            if (6 < *(uint *)(plVar11 + 3)) {
                              plVar11[10] = lVar15;
                              thunk_FUN_036b7ad0(plVar11 + 10,lVar15);
                              lVar15 = *(long *)(unaff_x22 + 0x28);
                              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_03642c18();
                              }
                              if ((*(uint *)(lVar15 + 0x18) & 0xfffffff8) != 0) {
                                lVar15 = *(long *)(lVar15 + 0x58);
                                if ((lVar15 != 0) &&
                                   (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                        (*plVar11 + 0x40)),
                                   lVar16 == 0)) {
                                  uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                  FUN_03642acc(uVar10,0);
                                }
                                if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                                  plVar11[0xb] = lVar15;
                                  thunk_FUN_036b7ad0(plVar11 + 0xb,lVar15);
                                  lVar15 = *(long *)(unaff_x22 + 0x28);
                                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03642c18();
                                  }
                                  if (8 < *(uint *)(lVar15 + 0x18)) {
                                    lVar15 = *(long *)(lVar15 + 0x60);
                                    if ((lVar15 != 0) &&
                                       (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                            (*plVar11 + 0x40)),
                                       lVar16 == 0)) {
                                      uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                      FUN_03642acc(uVar10,0);
                                    }
                                    if (8 < *(uint *)(plVar11 + 3)) {
                                      plVar11[0xc] = lVar15;
                                      thunk_FUN_036b7ad0(plVar11 + 0xc,lVar15);
                                      lVar15 = *(long *)(unaff_x22 + 0x28);
                                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03642c18();
                                      }
                                      if (9 < *(uint *)(lVar15 + 0x18)) {
                                        lVar15 = *(long *)(lVar15 + 0x68);
                                        if ((lVar15 != 0) &&
                                           (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                                (*plVar11 + 0x40)),
                                           lVar16 == 0)) {
                                          uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                          FUN_03642acc(uVar10,0);
                                        }
                                        if (9 < *(uint *)(plVar11 + 3)) {
                                          plVar11[0xd] = lVar15;
                                          thunk_FUN_036b7ad0(plVar11 + 0xd,lVar15);
                                          FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar11,0);
                                          FUN_04ee7cc8();
                                          if (plVar14 != (long *)0x0) {
                                            lVar15 = *plVar14;
                                            uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                            if (uVar9 != 0) {
                                              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar18 + -2) ==
                                                    *(long *)PTR_DAT_079f4598) {
                                                  puVar7 = (undefined8 *)
                                                           (lVar15 + (long)*piVar18 * 0x10 + 0x138);
                                                  goto LAB_06bf50b4;
                                                }
                                                uVar9 = uVar9 - 1;
                                                piVar18 = piVar18 + 4;
                                              } while (uVar9 != 0);
                                            }
                                            puVar7 = (undefined8 *)
                                                     FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,
                                                                  0);
LAB_06bf50b4:
                                            (*(code *)*puVar7)(plVar14,puVar7[1]);
                                          }
                                          plVar14 = (long *)*in_stack_00000058;
                                          if (plVar14 != (long *)0x0) {
                                            lVar15 = *plVar14;
                                            uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                            if (uVar9 != 0) {
                                              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar18 + -2) ==
                                                    *(long *)PTR_DAT_079f4598) {
                                                  puVar7 = (undefined8 *)
                                                           (lVar15 + (long)*piVar18 * 0x10 + 0x138);
                                                  goto LAB_06bf512c;
                                                }
                                                uVar9 = uVar9 - 1;
                                                piVar18 = piVar18 + 4;
                                              } while (uVar9 != 0);
                                            }
                                            puVar7 = (undefined8 *)
                                                     FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,
                                                                  0);
LAB_06bf512c:
                                            (*(code *)*puVar7)(plVar14,puVar7[1]);
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
                                   *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,0
                                  );
        if ((uVar9 & 1) != 0) {
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          fVar24 = (float)FUN_06bb2960(*(long *)(lVar15 + 0x38),0);
          if (fVar24 == 0.0) {
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
            uVar25 = FUN_06bb2960(*(long *)(lVar17 + 0x30),0);
            plVar14 = (long *)FUN_06bfc93c();
            if (plVar14 == (long *)0x0) {
LAB_06bf5210:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf5210;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18(0,plVar14);
            }
            plVar14 = (long *)FUN_06c896c8(uVar25,0,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000348;
            lVar17 = 0;
            uVar10 = FUN_06bfc538();
            plVar11 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo
                                           ,10);
            lVar15 = *(long *)(unaff_x22 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar15 + 0x18) != 0) {
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar15 = *(long *)(lVar15 + 0x20);
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)
                 ) {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if ((int)plVar11[3] != 0) {
                plVar11[4] = lVar15;
                thunk_FUN_036b7ad0(plVar11 + 4,lVar15);
                lVar15 = FUN_06bb3098(uVar10,0);
                if ((lVar15 != 0) &&
                   (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar16 == 0)) {
                  uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar10,0);
                }
                if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar11[5] = lVar15;
                thunk_FUN_036b7ad0(plVar11 + 5,lVar15);
                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (2 < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = *(long *)(lVar15 + 0x30);
                  if ((lVar15 != 0) &&
                     (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar16 == 0)) {
                    uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                    FUN_03642acc(uVar10,0);
                  }
                  if (2 < *(uint *)(plVar11 + 3)) {
                    plVar11[6] = lVar15;
                    thunk_FUN_036b7ad0(plVar11 + 6,lVar15);
                    if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
                      lVar15 = *(long *)(lVar15 + 0x38);
                      if ((lVar15 != 0) &&
                         (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar16 == 0)) {
                        uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                        FUN_03642acc(uVar10,0);
                      }
                      if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                        plVar11[7] = lVar15;
                        thunk_FUN_036b7ad0(plVar11 + 7,lVar15);
                        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03642c18();
                        }
                        if (4 < *(uint *)(lVar15 + 0x18)) {
                          lVar15 = *(long *)(lVar15 + 0x40);
                          if ((lVar15 != 0) &&
                             (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                             lVar16 == 0)) {
                            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                            FUN_03642acc(uVar10,0);
                          }
                          if (4 < *(uint *)(plVar11 + 3)) {
                            plVar11[8] = lVar15;
                            thunk_FUN_036b7ad0(plVar11 + 8,lVar15);
                            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03642c18();
                            }
                            lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03642c18();
                            }
                            if (5 < *(uint *)(lVar15 + 0x18)) {
                              lVar15 = *(long *)(lVar15 + 0x48);
                              if ((lVar15 != 0) &&
                                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                      (*plVar11 + 0x40)),
                                 lVar16 == 0)) {
                                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                FUN_03642acc(uVar10,0);
                              }
                              if (5 < *(uint *)(plVar11 + 3)) {
                                plVar11[9] = lVar15;
                                thunk_FUN_036b7ad0(plVar11 + 9,lVar15);
                                if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03642c18();
                                }
                                lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_03642c18();
                                }
                                if (6 < *(uint *)(lVar15 + 0x18)) {
                                  lVar15 = *(long *)(lVar15 + 0x50);
                                  if ((lVar15 != 0) &&
                                     (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                          (*plVar11 + 0x40)),
                                     lVar16 == 0)) {
                                    uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                    FUN_03642acc(uVar10,0);
                                  }
                                  if (6 < *(uint *)(plVar11 + 3)) {
                                    plVar11[10] = lVar15;
                                    thunk_FUN_036b7ad0(plVar11 + 10,lVar15);
                                    if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c18();
                                    }
                                    lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03642c18();
                                    }
                                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffff8) != 0) {
                                      lVar15 = *(long *)(lVar15 + 0x58);
                                      if ((lVar15 != 0) &&
                                         (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                              (*plVar11 + 0x40)),
                                         lVar16 == 0)) {
                                        uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                        FUN_03642acc(uVar10,0);
                                      }
                                      if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                                        plVar11[0xb] = lVar15;
                                        thunk_FUN_036b7ad0(plVar11 + 0xb,lVar15);
                                        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03642c18();
                                        }
                                        lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03642c18();
                                        }
                                        if (8 < *(uint *)(lVar15 + 0x18)) {
                                          lVar15 = *(long *)(lVar15 + 0x60);
                                          if ((lVar15 != 0) &&
                                             (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                                  (*plVar11 + 0x40))
                                             , lVar16 == 0)) {
                                            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                            FUN_03642acc(uVar10,0);
                                          }
                                          if (8 < *(uint *)(plVar11 + 3)) {
                                            plVar11[0xc] = lVar15;
                                            thunk_FUN_036b7ad0(plVar11 + 0xc,lVar15);
                                            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_03642c18();
                                            }
                                            lVar15 = *(long *)(in_stack_000003b8 + 0x28);
                                            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_03642c18();
                                            }
                                            if (9 < *(uint *)(lVar15 + 0x18)) {
                                              lVar15 = *(long *)(lVar15 + 0x68);
                                              if ((lVar15 != 0) &&
                                                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)
                                                                                      (*plVar11 +
                                                                                      0x40)),
                                                 lVar16 == 0)) {
                                                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                                FUN_03642acc(uVar10,0);
                                              }
                                              if (9 < *(uint *)(plVar11 + 3)) {
                                                plVar11[0xd] = lVar15;
                                                thunk_FUN_036b7ad0(plVar11 + 0xd,lVar15);
                                                FUN_06bfc890(unaff_x22,in_stack_000003b8,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Func<Model_Output,_Model_Output>_TypeInfo,
                                                  plVar11,0);
                                                FUN_04ee7cc8();
                                                if (plVar14 != (long *)0x0) {
                                                  lVar15 = *plVar14;
                                                  uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                                                  if (uVar9 != 0) {
                                                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar18 + -2) ==
                                                          *(long *)PTR_DAT_079f4598) {
                                                        puVar7 = (undefined8 *)
                                                                 (lVar15 + (long)*piVar18 * 0x10 +
                                                                 0x138);
                                                        goto LAB_06bf5654;
                                                      }
                                                      uVar9 = uVar9 - 1;
                                                      piVar18 = piVar18 + 4;
                                                    } while (uVar9 != 0);
                                                  }
                                                  puVar7 = (undefined8 *)
                                                           FUN_0367cd30(plVar14,*(long *)
                                                  PTR_DAT_079f4598,0);
LAB_06bf5654:
                                                  (*(code *)*puVar7)(plVar14,puVar7[1]);
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
          plVar14 = (long *)FUN_06bfc93c();
          if (plVar14 == (long *)0x0) {
LAB_06bf56e0:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf56e0;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bf5734:
            plVar11 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf5734;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
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
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_06bf5790;
            if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar12 = (long *)0x0;
            }
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = plVar14[7];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06ae539c(&stack0x00000360,0);
          iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
          if (((iVar6 == iVar3) && ((int)plVar12[7] <= (int)plVar14[7])) &&
             ((int)lVar15 + -1 <= (int)plVar12[7])) {
            iVar6 = Unity_InferenceEngine_Graph_SortKey__set_Item
                              (&stack0x00000360,1 - (int)lVar15,0);
            iVar3 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
            if (iVar6 == iVar3) {
              uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
              in_stack_00000070 = 0;
              in_stack_00000058 = (undefined8 *)0x0;
              in_stack_00000050 = 0;
              in_stack_00000068 = 0;
              in_stack_00000060 = 0;
              FUN_06ae4cb4(&stack0x00000050,uVar25,0);
              in_stack_000004a0 = in_stack_00000070;
              in_stack_00000498 = in_stack_00000068;
              in_stack_00000490 = in_stack_00000060;
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar10 = FUN_03e16e50(in_stack_000004e8,plVar12,&stack0x00000480,
                                    *(undefined8 *)
                                     System_Collections_Generic_List<IFDStructure>_TypeInfo);
              in_stack_00000488 = (undefined8 *)&stack0x00000340;
              lVar17 = 0;
              if (plVar11 != (long *)0x0) {
                if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                FUN_06c89dd8(in_stack_000004e8,plVar11,uVar10,0);
              }
              in_stack_00000058 = (undefined8 *)&stack0x00000338;
              in_stack_00000050 = 0;
              uVar10 = FUN_06bfc538();
              lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar16 + 0x20);
              FUN_03154b74(lVar15,uVar19);
              FUN_03154bd8(lVar15,0,uVar19);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar19 = *(undefined8 *)(lVar16 + 0x28);
              FUN_03154b74(lVar15,uVar19);
              FUN_03154bd8(lVar15,1,uVar19);
              uVar10 = FUN_06bb3098(uVar10,0);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,2,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x38);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,3,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x40);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,4,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x48);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,5,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x50);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,6,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar16 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x58);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,7,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x60);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,8,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(uint *)(lVar16 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x68);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,9,uVar10);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,
                           *(undefined8 *)System_Func<Model_Output,_Model_Output>_TypeInfo,lVar15,0)
              ;
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
          plVar14 = (long *)FUN_06bfc93c();
          if (plVar14 == (long *)0x0) {
LAB_06bf5c78:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf5c78;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bf5ccc:
            plVar11 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf5ccc;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
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
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_06bf5d20;
            if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
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
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_06bf5d74;
            if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar13 = (long *)0x0;
            }
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar8 = plVar12[4];
          lVar16 = plVar12[3];
          lVar28 = plVar12[6];
          lVar27 = plVar12[5];
          lVar15 = plVar12[7];
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_06adfe8c(&stack0x00000480,plVar14[7],0);
          uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
          FUN_06adff70(&stack0x000002e0,0,uVar25,0);
          plVar12[7] = in_stack_000004a0;
          plVar12[4] = (long)in_stack_00000488;
          plVar12[3] = lVar17;
          plVar12[6] = in_stack_00000498;
          plVar12[5] = in_stack_00000490;
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_06c8a3b8(in_stack_000004e8,plVar12,plVar14,0);
          in_stack_000000c8 = (undefined8 *)&stack0x000002d8;
          in_stack_000000c0 = 0;
          plVar12[4] = lVar8;
          plVar12[3] = lVar16;
          plVar12[6] = lVar28;
          plVar12[5] = lVar27;
          plVar12[7] = lVar15;
          if (plVar11 == (long *)0x0) {
            in_stack_000000c0 = 0;
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar14 = (long *)FUN_03e16a04(in_stack_000004e8,plVar13,
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
          plVar14 = (long *)FUN_06c89dd8(in_stack_000004e8,plVar11,plVar13,0);
          if (plVar11 == (long *)0x0) goto LAB_06bf5f54;
          lVar17 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 == 0) goto LAB_06bf5efc;
          piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_06bf5ee4;
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
          plVar14 = (long *)FUN_06bfc93c();
          if (plVar14 == (long *)0x0) {
LAB_06bf643c:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf643c;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          plVar11 = (long *)FUN_06bfc93c();
          if (plVar11 == (long *)0x0) {
LAB_06bf6490:
            plVar11 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar2) goto LAB_06bf6490;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
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
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_06bf64e4;
            if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
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
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_06bf6538;
            if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar13 = (long *)0x0;
            }
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_06c89998(in_stack_000004e8,plVar14,plVar12,0,0,0);
          in_stack_00000058 = (undefined8 *)&stack0x000002c8;
          in_stack_00000050 = 0;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,0,0);
          FUN_06ae496c(&stack0x00000480,1,uVar25,0);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar14 = (long *)FUN_03e16e50(in_stack_000004e8,plVar11,&stack0x00000420,
                                         *(undefined8 *)
                                          System_Collections_Generic_List<IFDStructure>_TypeInfo);
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar11 = (long *)FUN_06c89c20(in_stack_000004e8,plVar14,plVar12,plVar13,0);
          in_stack_000000c8 = (undefined8 *)&stack0x000002b8;
          in_stack_000000c0 = 0;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar25 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000360,1,0);
          in_stack_000004a0 = 0;
          in_stack_00000498 = 0;
          in_stack_00000490 = 0;
          in_stack_00000488 = (undefined8 *)0x0;
          lVar17 = 0;
          FUN_06ae4cb4(&stack0x00000480,uVar25,0);
          (**(code **)(*plVar11 + 0x188))(plVar11,&stack0x00000450,*(undefined8 *)(*plVar11 + 400));
          uVar10 = FUN_06bfc538();
          uVar19 = FUN_06bfc538();
          plVar12 = (long *)FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,4
                                        );
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar15 + 0x18) != 0) {
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(lVar15 + 0x20);
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar12 + 0x40)), lVar16 == 0))
            {
              uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar10,0);
            }
            if ((int)plVar12[3] != 0) {
              plVar12[4] = lVar15;
              thunk_FUN_036b7ad0(plVar12 + 4,lVar15);
              lVar15 = FUN_06bb3098(uVar10,0);
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar12 + 0x40)), lVar16 == 0)
                 ) {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar12[5] = lVar15;
              thunk_FUN_036b7ad0(plVar12 + 5,lVar15);
              lVar15 = FUN_06bb3098(uVar19,0);
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar12 + 0x40)), lVar16 == 0)
                 ) {
                uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar10,0);
              }
              if (*(uint *)(plVar12 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar12[6] = lVar15;
              thunk_FUN_036b7ad0(plVar12 + 6,lVar15);
              if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar15 = *(long *)(in_stack_000003b8 + 0x28);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
                lVar15 = *(long *)(lVar15 + 0x38);
                if ((lVar15 != 0) &&
                   (lVar16 = thunk_FUN_0367fd24(lVar15,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar16 == 0)) {
                  uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar10,0);
                }
                if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
                  plVar12[7] = lVar15;
                  thunk_FUN_036b7ad0(plVar12 + 7,lVar15);
                  FUN_06bfc890(unaff_x22,in_stack_000003b8,
                               *(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo,plVar12,0);
                  FUN_04ee7cc8();
                  if (plVar11 != (long *)0x0) {
                    lVar15 = *plVar11;
                    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar9 != 0) {
                      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                          puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
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
                  if (plVar14 != (long *)0x0) {
                    lVar15 = *plVar14;
                    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar9 != 0) {
                      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                          puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_06bf6948;
                        }
                        uVar9 = uVar9 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,0);
LAB_06bf6948:
                    (*(code *)*puVar7)(plVar14,puVar7[1]);
                  }
                  plVar14 = (long *)*in_stack_00000058;
                  if (plVar14 != (long *)0x0) {
                    lVar15 = *plVar14;
                    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar9 != 0) {
                      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                          puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_06bf72e4;
                        }
                        uVar9 = uVar9 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,0);
LAB_06bf72e4:
                    (*(code *)*puVar7)(plVar14,puVar7[1]);
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
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (iVar6 == 1) {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            iVar6 = FUN_06bb2f08(*(undefined8 *)(lVar15 + 0x40),0);
            lVar15 = *(long *)(unaff_x22 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            iVar3 = FUN_06bb2f08(*(undefined8 *)(lVar15 + 0x48),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            iVar4 = FUN_06bb2f08(*(undefined8 *)(lVar15 + 0x40),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            iVar5 = FUN_06bb2f08(*(undefined8 *)(lVar15 + 0x48),0);
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar10 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,0,uVar10);
            uVar10 = FUN_06bb2ea4(1,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb2f90(0,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
            uVar10 = FUN_06bb2f90(0,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,3,uVar10);
            uVar10 = FUN_06bb2ea4(iVar4 * iVar6,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,4,uVar10);
            uVar10 = FUN_06bb2ea4(iVar5 + iVar4 * iVar3,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,5,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar15,0);
            FUN_04ee7cc8();
          }
          else {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x30),0);
            lVar15 = *(long *)(unaff_x22 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar21 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x38),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar22 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x30),0);
            if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(in_stack_000003b8 + 0x28);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar23 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x38),0);
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,6);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar10 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,0,uVar10);
            uVar10 = FUN_06bb2ea4(0,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            uVar10 = FUN_06bb2f90(fVar24 * fVar22,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,2,uVar10);
            uVar10 = FUN_06bb2f90(fVar21 * fVar22 + fVar23,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,3,uVar10);
            uVar10 = FUN_06bb2ea4(0,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,4,uVar10);
            uVar10 = FUN_06bb2ea4(0,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,5,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,
                         *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,lVar15,0);
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
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x38),0);
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          if ((iVar6 == 0) && (fVar24 == 0.0)) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            plVar14 = (long *)FUN_06bfc93c();
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar14 == (long *)0x0) {
LAB_06bf7678:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf7678;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            FUN_06c896c8(uVar25,0,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = (undefined8 *)&stack0x000002b0;
            lVar17 = 0;
            uVar10 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar19);
            FUN_03154bd8(lVar15,0,uVar19);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar15,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
          goto LAB_06bf354c;
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36348,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = *(long *)(in_stack_000003b8 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x38),0);
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = *(long *)(in_stack_000003b8 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          if ((iVar6 == 0) && (fVar24 == 0.0)) {
            plVar14 = (long *)FUN_06bfc93c();
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
            uVar10 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x30),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar14 == (long *)0x0) {
LAB_06bf7ab0:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf7ab0;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            FUN_06c896c8(uVar10,0,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = (undefined8 *)&stack0x000002a8;
            lVar17 = 0;
            uVar10 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar16 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = *(undefined8 *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            FUN_03154b74(lVar15,uVar19);
            FUN_03154bd8(lVar15,0,uVar19);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36348,lVar15,0);
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
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x30),0);
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          if ((iVar6 == 0) && (fVar24 == unaff_s12)) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            plVar14 = (long *)FUN_06bfc93c();
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar14 == (long *)0x0) {
LAB_06bf7cd0:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf7cd0;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,uVar25,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = (undefined8 *)&stack0x000002a0;
            lVar17 = 0;
            uVar10 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = *(undefined8 *)(lVar16 + 0x20);
            FUN_03154b74(lVar15,uVar19);
            FUN_03154bd8(lVar15,0,uVar19);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar15,0);
            FUN_04ee7cc8();
            FUN_03154064(&stack0x00000480);
          }
          goto LAB_06bf354c;
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a30a70,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) != 0) {
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = *(long *)(in_stack_000003b8 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x30),0);
          if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = *(long *)(in_stack_000003b8 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          if ((iVar6 == 0) && (fVar24 == unaff_s12)) {
            plVar14 = (long *)FUN_06bfc93c();
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
            uVar25 = FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar14 == (long *)0x0) {
LAB_06bf7f04:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf7f04;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,uVar25,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000298;
            lVar17 = 0;
            uVar10 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar16 + 0x18) <= in_stack_000003b0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar19 = *(undefined8 *)(lVar16 + (long)(int)in_stack_000003b0 * 8 + 0x20);
            FUN_03154b74(lVar15,uVar19);
            FUN_03154bd8(lVar15,0,uVar19);
            uVar10 = FUN_06bb3098(uVar10,0);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a30a70,lVar15,0);
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
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x30),0);
          lVar15 = *(long *)(unaff_x22 + 0x28);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
          if ((iVar6 == 0) && (fVar24 == unaff_s12)) {
            lVar17 = *(long *)(unaff_x22 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
            plVar14 = (long *)FUN_06bfc93c();
            if (in_stack_000003b4 == 0) {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar14 == (long *)0x0) {
LAB_06bf812c:
                plVar14 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf812c;
                if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar14 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,-fVar24,in_stack_000004e8,plVar14,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000290;
              lVar17 = 0;
              uVar10 = FUN_06bfc538();
              lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar19 = *(undefined8 *)(lVar16 + 0x20);
              FUN_03154b74(lVar15,uVar19);
              FUN_03154bd8(lVar15,0,uVar19);
              uVar10 = FUN_06bb3098(uVar10,0);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,1,uVar10);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar15,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
            }
            else {
              if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (plVar14 == (long *)0x0) {
LAB_06bf8270:
                plVar14 = (long *)0x0;
              }
              else {
                bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
                if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf8270;
                if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_07a33940) {
                  plVar14 = (long *)0x0;
                }
              }
              FUN_06c896c8(0x3f800000,-fVar24,in_stack_000004e8,plVar14,0);
              in_stack_00000488 = (undefined8 *)&stack0x00000288;
              lVar17 = 0;
              uVar10 = FUN_06bfc538();
              lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
              uVar10 = FUN_06bb3098(uVar10,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,0,uVar10);
              lVar16 = *(long *)(unaff_x22 + 0x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              uVar10 = *(undefined8 *)(lVar16 + 0x20);
              FUN_03154b74(lVar15,uVar10);
              FUN_03154bd8(lVar15,1,uVar10);
              FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar15,0);
              FUN_04ee7cc8();
              FUN_03154064(&stack0x00000480);
            }
          }
          goto LAB_06bf354c;
        }
      }
      uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)PTR_DAT_07a36770,0
                                );
      if ((uVar9 & 1) != 0) {
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar9 = thunk_FUN_05c963c0(*(undefined8 *)(in_stack_000003b8 + 0x48),
                                   *(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,0)
        ;
        if ((uVar9 & 1) == 0) goto LAB_06bf8708;
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar15 = *(long *)(in_stack_000003b8 + 0x28);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar15 + 0x30),0);
        if (in_stack_000003b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar15 = *(long *)(in_stack_000003b8 + 0x28);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        iVar6 = FUN_06bb28d4(*(long *)(lVar15 + 0x28),0);
        if ((iVar6 == 0) && (fVar24 == unaff_s12)) {
          plVar14 = (long *)FUN_06bfc93c();
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
          fVar24 = (float)FUN_06bb2ffc(*(undefined8 *)(lVar17 + 0x38),0);
          if (in_stack_000003b0 != 0) {
            if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (plVar14 == (long *)0x0) {
LAB_06bf85ec:
              plVar14 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf85ec;
              if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a33940) {
                plVar14 = (long *)0x0;
              }
            }
            FUN_06c896c8(0x3f800000,fVar24,in_stack_000004e8,plVar14,0);
            in_stack_00000488 = (undefined8 *)&stack0x00000278;
            lVar17 = 0;
            uVar10 = FUN_06bfc538();
            lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
            uVar10 = FUN_06bb3098(uVar10,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,0,uVar10);
            lVar16 = *(long *)(unaff_x22 + 0x28);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar10 = *(undefined8 *)(lVar16 + 0x28);
            FUN_03154b74(lVar15,uVar10);
            FUN_03154bd8(lVar15,1,uVar10);
            FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar15,0);
            FUN_04ee7cc8();
            bVar1 = false;
            goto code_r0x06bf86fc;
          }
          if (in_stack_000004e8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (plVar14 == (long *)0x0) {
LAB_06bf84a8:
            plVar14 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)PTR_DAT_07a33940 + 0x130);
            if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_06bf84a8;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_07a33940) {
              plVar14 = (long *)0x0;
            }
          }
          FUN_06c896c8(0x3f800000,-fVar24,in_stack_000004e8,plVar14,0);
          in_stack_00000488 = (undefined8 *)&stack0x00000280;
          lVar17 = 0;
          uVar10 = FUN_06bfc538();
          lVar15 = FUN_03642a4c(*(undefined8 *)System_Func<int,_int,_int,_float>_TypeInfo,2);
          lVar16 = *(long *)(unaff_x22 + 0x28);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar19 = *(undefined8 *)(lVar16 + 0x20);
          FUN_03154b74(lVar15,uVar19);
          FUN_03154bd8(lVar15,0,uVar19);
          uVar10 = FUN_06bb3098(uVar10,0);
          FUN_03154b74(lVar15,uVar10);
          FUN_03154bd8(lVar15,1,uVar10);
          FUN_06bfc890(unaff_x22,in_stack_000003b8,*(undefined8 *)PTR_DAT_07a36770,lVar15,0);
          FUN_04ee7cc8();
          FUN_03154064(&stack0x00000480);
        }
        goto LAB_06bf354c;
      }
    } while( true );
  }
  FUN_03154064(&stack0x00000480);
  if (param_2 != 1) {
    FUN_03154064(&stack0x000000d0);
                    /* WARNING: Subroutine does not return */
    FUN_03732a6c(param_1);
  }
  plVar14 = (long *)__cxa_begin_catch(param_1);
  in_stack_000000d0 = *plVar14;
  __cxa_end_catch();
  plVar14 = (long *)*in_stack_000000d8;
  if (plVar14 != (long *)0x0) {
    lVar17 = *plVar14;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06bfbf3c;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar14,*(long *)PTR_DAT_079f4598,0);
LAB_06bfbf3c:
    (*(code *)*puVar7)(plVar14,puVar7[1]);
  }
  if (in_stack_000000d0 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_06bf5ee4:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_06bf5f18;
    }
  }
LAB_06bf5efc:
  puVar7 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)PTR_DAT_079f4598,0);
LAB_06bf5f18:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
LAB_06bf5f54:
  if (plVar14 != (long *)0x0) {
    uVar25 = FUN_06ae539c(&stack0x00000360,0);
    in_stack_00000070 = 0;
    in_stack_00000058 = (undefined8 *)0x0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06ae4cb4(&stack0x00000050,uVar25,0);
    (**(code **)(*plVar14 + 0x188))(plVar14,&stack0x000003f0,*(undefined8 *)(*plVar14 + 400));
    FUN_06bfc538();
    FUN_06bfc538();
    FUN_0753c580(&System_Func<UniqueIdentifier_Decorator>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


