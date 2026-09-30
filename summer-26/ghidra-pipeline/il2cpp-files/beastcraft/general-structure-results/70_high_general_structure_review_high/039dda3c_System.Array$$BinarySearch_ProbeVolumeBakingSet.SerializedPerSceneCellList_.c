/*
FUNCTION_NAME: System.Array$$BinarySearch<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 039dda3c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039de4a8) */
/* WARNING: Removing unreachable block (ram,0x039de1d4) */
/* WARNING: Removing unreachable block (ram,0x039de530) */

void System_Array__BinarySearch<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char cStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  int iStack0000000000000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000178;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02e3ca1c(&DAT_06bc8f38);
                    /* try { // try from 039dda70 to 03adda77 has its CatchHandler @ 039ddcdc */
    FUN_02e3ca1c(&DAT_06bf30f8);
    FUN_02e3ca1c(&DAT_06bf30f0);
                    /* try { // try from 039dda88 to 03adda8b has its CatchHandler @ 039ddce4 */
    FUN_02e3ca1c(&DAT_06bf3100);
                    /* try { // try from 039dda94 to 03adda9b has its CatchHandler @ 039ddcd4 */
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 039ddaa0 to 03addaaf has its CatchHandler @ 039ddcc0 */
      FUN_02e756e8(param_4);
    }
  }
  in_stack_00000178 = (long *)0x0;
  _cStack00000000000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
                    /* try { // try from 039ddac0 to 03addadf has its CatchHandler @ 039ddce0 */
  in_stack_00000158 = 0;
  _iStack0000000000000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  _cStack0000000000000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  memcpy(&stack0x000000c0,(void *)(param_1 + 0x18),0x90);
  iVar2 = *(int *)(param_1 + 0x10);
                    /* try { // try from 039ddaec to 03addaef has its CatchHandler @ 039ddccc */
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  FUN_062f16a4(&stack0x000000c0,iVar2,0);
                    /* try { // try from 039ddb04 to 03addb17 has its CatchHandler @ 039ddcc8 */
  in_stack_00000158 = in_stack_00000008;
  _iStack0000000000000150 = in_stack_00000000;
  uVar6 = _iStack0000000000000150;
  in_stack_00000168 = in_stack_00000018;
  in_stack_00000160 = in_stack_00000010;
  iStack0000000000000150 = (int)in_stack_00000000;
  _iStack0000000000000150 = uVar6;
  if (iStack0000000000000150 == 2) {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x78);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02e7568c(lVar11);
    }
    plVar5 = (long *)thunk_FUN_02e789bc(param_2,lVar11);
    if (plVar5 != (long *)0x0) {
      uVar6 = FUN_062f1260(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x78);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02e7568c(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_039ddd34;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,0);
LAB_039ddd34:
      uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar6,&stack0x00000178,puVar7[1]);
      plVar5 = in_stack_00000178;
      if ((uVar13 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0xa8);
        lVar12 = thunk_FUN_02e789bc(in_stack_00000178,DAT_06bc8f38);
        lVar11 = DAT_06bc8f38;
        if (lVar12 != 0) {
          plVar5 = (long *)thunk_FUN_02e789bc(plVar5,DAT_06bc8f38);
          uVar6 = thunk_FUN_02e789bc(uVar6,DAT_06bc8f38);
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_039de02c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,4);
LAB_039de02c:
          _in_stack_00000060 = (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
          plVar5 = in_stack_00000178;
          if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02e7568c(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_039de0dc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,0);
LAB_039de0dc:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          FUN_062f10f0(&stack0x00000060,0);
          return;
        }
LAB_039de52c:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
    }
  }
  else {
                    /* try { // try from 039ddb18 to 03addb47 has its CatchHandler @ 039dd610 */
    if (iStack0000000000000150 == 1) {
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
                    /* try { // try from 039ddbc8 to 03addc97 has its CatchHandler @ 039dd610 */
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02e7568c(lVar11);
      }
      plVar5 = (long *)thunk_FUN_02e789bc(param_2,lVar11);
      if (plVar5 != (long *)0x0) {
        lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02e7568c(lVar11);
        }
        plVar8 = (long *)thunk_FUN_02e789bc(param_2,lVar11);
        if (plVar8 != (long *)0x0) {
          iVar2 = FUN_062f1214(&stack0x00000150,0);
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02e7568c(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_039dde6c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02e759c0(plVar8,lVar11,0);
LAB_039dde6c:
          iVar3 = (*(code *)*puVar7)(plVar8,param_3,puVar7[1]);
          if (iVar2 < iVar3) {
            lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c(lVar11);
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_039de1e8;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02e759c0(plVar8,lVar11,2);
LAB_039de1e8:
            uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
            uVar4 = FUN_062f1214(&stack0x00000150,0);
            lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c(lVar11);
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                  goto LAB_039de274;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02e759c0(plVar8,lVar11,3);
LAB_039de274:
            (*(code *)*puVar7)(plVar8,uVar4,puVar7[1]);
            lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c(lVar11);
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_039de2f0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02e759c0(plVar8,lVar11,1);
LAB_039de2f0:
            plVar5 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
            puVar1 = PTR_DAT_06a6dd88;
            plVar9 = (long *)thunk_FUN_02e789bc(plVar5,*(undefined8 *)PTR_DAT_06a6dd88);
            if (plVar9 != (long *)0x0) {
              lVar12 = *(long *)puVar1;
              uVar10 = thunk_FUN_02e789bc(*(undefined8 *)(param_1 + 0xa8),lVar12);
              lVar11 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar12) {
                    puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                    goto LAB_039de388;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_02e759c0(plVar9,lVar12,4);
LAB_039de388:
              (*(code *)*puVar7)(plVar9,uVar10,puVar7[1]);
              FUN_0424b04c();
            }
            in_stack_000000b0 = 0;
            in_stack_000000a8 = 0;
            _cStack00000000000000a0 = 0;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c(lVar11);
            }
            lVar12 = *plVar5;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_039de460;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,0);
LAB_039de460:
            (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
            if (cStack00000000000000a0 != '\0') {
              in_stack_00000098 = in_stack_000000b0;
              in_stack_00000090 = in_stack_000000a8;
              FUN_062f10f0(&stack0x00000090,0);
            }
            lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c(lVar11);
            }
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                  goto LAB_039de518;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02e759c0(plVar8,lVar11,3);
LAB_039de518:
            (*(code *)*puVar7)(plVar8,uVar6,puVar7[1]);
            return;
          }
        }
        uVar4 = FUN_062f1214(&stack0x00000150,0);
        lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02e7568c(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_039ddf58;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,0);
LAB_039ddf58:
        uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar4,&stack0x00000178,puVar7[1]);
        if ((uVar13 & 1) != 0) {
          lVar12 = thunk_FUN_02e789bc(in_stack_00000178,DAT_06bc8f38);
          lVar11 = DAT_06bc8f38;
          if (lVar12 != 0) {
            uVar6 = thunk_FUN_02e789bc(*(undefined8 *)(param_1 + 0xa8),DAT_06bc8f38);
            FUN_02a75218(4,lVar11,lVar12,uVar6);
            FUN_0424b04c();
          }
          plVar5 = in_stack_00000178;
          in_stack_00000080 = 0;
          in_stack_00000078 = 0;
          _cStack0000000000000070 = 0;
          if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02e7568c(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_039de198;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,0);
LAB_039de198:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          if (cStack0000000000000070 == '\0') {
            return;
          }
          in_stack_00000098 = in_stack_00000080;
          in_stack_00000090 = in_stack_00000078;
          FUN_062f10f0(&stack0x00000090,0);
          return;
        }
      }
    }
    else if (iStack0000000000000150 == 0) {
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02e7568c(lVar11);
      }
                    /* try { // try from 039ddb48 to 03addb67 has its CatchHandler @ 039ddcc4 */
      plVar5 = (long *)thunk_FUN_02e789bc(param_2,lVar11);
      if (plVar5 != (long *)0x0) {
        uVar6 = FUN_062f11cc(&stack0x00000150,0);
        lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
                    /* try { // try from 039ddb74 to 03addb77 has its CatchHandler @ 039ddcb8 */
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02e7568c(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_039ddde0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
                    /* try { // try from 039ddbb4 to 03addbc7 has its CatchHandler @ 039ddcb0 */
        puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,0);
LAB_039ddde0:
        uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar6,&stack0x00000178,puVar7[1]);
        plVar5 = in_stack_00000178;
        if ((uVar13 & 1) != 0) {
          if (in_stack_00000178 != (long *)0x0) {
            lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_02e7568c(lVar11);
            }
            lVar12 = *plVar5;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_039de0b8;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02e759c0(plVar5,lVar11,0);
LAB_039de0b8:
            (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
            return;
          }
          goto LAB_039de52c;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = 4;
  return;
}


