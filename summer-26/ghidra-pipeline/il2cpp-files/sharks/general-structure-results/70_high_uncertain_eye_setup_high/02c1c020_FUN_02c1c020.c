/*
FUNCTION_NAME: FUN_02c1c020
ENTRY_POINT: 02c1c020
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c1cd70) */
/* WARNING: Removing unreachable block (ram,0x02c1ce70) */
/* WARNING: Removing unreachable block (ram,0x02c1cc30) */
/* WARNING: Removing unreachable block (ram,0x02c1c43c) */
/* WARNING: Removing unreachable block (ram,0x02c1c684) */
/* WARNING: Removing unreachable block (ram,0x02c1ce78) */

undefined8 FUN_02c1c020(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long in_x9;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int iVar19;
  long unaff_x27;
  long lVar20;
  long in_stack_00000008;
  
  if (in_x9 != 0) {
    piVar18 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == param_3) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_02c1c060;
      }
      in_x9 = in_x9 + -1;
      piVar18 = piVar18 + 4;
    } while (in_x9 != 0);
  }
  puVar7 = (undefined8 *)FUN_0185dba8();
LAB_02c1c060:
  uVar6 = (*(code *)*puVar7)();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x22);
  }
  uVar6 = FUN_02bd01a8(uVar6,0x10,0);
  if ((unaff_x20 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar16 = FUN_02be66d0();
    if ((uVar16 & 1) == 0) {
      lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b8e0);
      FUN_02709c80(lVar9,uVar6,*(undefined8 *)PTR_DAT_0380b8d8);
      lVar8 = *unaff_x21;
      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_038043d8) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_02c1c8f0;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_0185dba8();
LAB_02c1c8f0:
      plVar10 = (long *)(*(code *)*puVar7)();
      puVar5 = PTR_DAT_0380b8c8;
      puVar3 = PTR_DAT_038043e0;
      puVar2 = PTR_DAT_037f3298;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      do {
        lVar8 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02c1c968;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar2,0);
LAB_02c1c968:
        uVar16 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto joined_r0x02c1cd2c;
          lVar8 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 == 0) goto LAB_02c1caa8;
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_02c1ca90;
        }
        lVar8 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02c1c9c4;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar3,0);
LAB_02c1c9c4:
        lVar8 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        if (lVar8 == 0) {
          thunk_FUN_01851c08(PTR_DAT_0380b860);
          uVar11 = thunk_FUN_01861bbc();
          uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
          FUN_02b0d540(uVar11,uVar13,0);
          uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar11,uVar13);
        }
        uVar11 = FUN_02b188e0(lVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8(uVar11,uVar11);
        }
        uVar16 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar16 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar14 = *(long *)(lVar9 + 0x10);
          lVar20 = *(long *)puVar5;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar8;
            thunk_FUN_0188fd20(plVar12,lVar8);
          }
          else {
            FUN_0270a444(lVar9,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
    lVar9 = *unaff_x21;
    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_038043d8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_02c1c76c;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_0185dba8();
LAB_02c1c76c:
    plVar10 = (long *)(*(code *)*puVar7)();
    puVar3 = PTR_DAT_038043e0;
    puVar2 = PTR_DAT_037f3298;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    do {
      lVar9 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_02c1c7dc;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar2,0);
LAB_02c1c7dc:
      uVar16 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_02c1cc24;
        lVar9 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 == 0) goto LAB_02c1c8d4;
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_02c1c8bc;
      }
      lVar9 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
            goto OVRPlugin__GetNodePoseStateAtTime;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar3,0);
OVRPlugin__GetNodePoseStateAtTime:
      lVar9 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      if (lVar9 == 0) {
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar11 = thunk_FUN_01861bbc();
        uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
        FUN_02b0d540(uVar11,uVar13,0);
        uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar11,uVar13);
      }
    } while( true );
  }
  lVar8 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b838);
  FUN_021ffd80(lVar8,uVar6,*(undefined8 *)PTR_DAT_0380b830);
  lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b8e0);
  FUN_02709c80(lVar9,uVar6,*(undefined8 *)PTR_DAT_0380b8d8);
  puVar5 = PTR_DAT_0380b828;
  puVar3 = PTR_DAT_038043e0;
  puVar2 = PTR_DAT_037f3298;
  iVar19 = 0;
  do {
    lVar14 = *unaff_x21;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_038043d8) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_02c1c160;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_0185dba8(unaff_x21,*(long *)PTR_DAT_038043d8,0);
LAB_02c1c160:
    plVar10 = (long *)(*(code *)*puVar7)(unaff_x21,puVar7[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
LAB_02c1c174:
    lVar14 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_02c1c1c0;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar2,0);
LAB_02c1c1c0:
    uVar16 = (*(code *)*puVar7)(plVar10,puVar7[1]);
    if ((uVar16 & 1) != 0) {
      lVar14 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_02c1c21c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)puVar3,0);
LAB_02c1c21c:
      lVar14 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      if (lVar14 == 0) {
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar11 = thunk_FUN_01861bbc();
        uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
        FUN_02b0d540(uVar11,uVar13,0);
        uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar11,uVar13);
      }
      uVar11 = FUN_02b188e0(lVar14,0);
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar16 = FUN_02be74a8();
      if ((uVar16 & 1) != 0) goto code_r0x02c1c26c;
      goto LAB_02c1c28c;
    }
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_037f3288) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_02c1c424;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)PTR_DAT_037f3288,0);
LAB_02c1c424:
      (*(code *)*puVar7)(plVar10,puVar7[1]);
    }
    puVar4 = PTR_DAT_03804428;
    if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    unaff_x27 = FUN_02c1b2f0(unaff_x27);
    if (unaff_x27 == 0) goto joined_r0x02c1cd2c;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    iVar19 = iVar19 + 1;
    unaff_x21 = (long *)FUN_02c1bb08(unaff_x27);
  } while (unaff_x21 != (long *)0x0);
LAB_02c1cd6c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_02c1ca90:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_02c1cd1c;
    }
  }
LAB_02c1caa8:
  puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)PTR_DAT_037f3288,0);
LAB_02c1cd1c:
  (*(code *)*puVar7)(plVar10,puVar7[1]);
joined_r0x02c1cd2c:
  if (lVar9 != 0) {
    uVar11 = FUN_0270bdd0(lVar9,*(undefined8 *)PTR_DAT_0380b8d0);
    return uVar11;
  }
  goto LAB_02c1cd6c;
code_r0x02c1c26c:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar16 = (**(code **)(*unaff_x19 + 0x288))();
  if ((uVar16 & 1) == 0) goto LAB_02c1c174;
LAB_02c1c28c:
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar16 = FUN_0220216c(lVar8,uVar11,&stack0x00000008,*(undefined8 *)puVar5);
  if ((uVar16 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_03804428 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar20 = FUN_02c1b6b4(uVar11);
    if (iVar19 != 0) goto LAB_02c1c2b8;
LAB_02c1c2f0:
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar20 = *(long *)(in_stack_00000008 + 0x10);
    if (iVar19 == 0) goto LAB_02c1c2f0;
LAB_02c1c2b8:
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(char *)(lVar20 + 0x15) == '\0') goto LAB_02c1c378;
  }
  if (((*(char *)(lVar20 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == iVar19)) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar15 = *(long *)(lVar9 + 0x10);
    lVar17 = *(long *)PTR_DAT_0380b8c8;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
      *plVar12 = lVar14;
      thunk_FUN_0188fd20(plVar12,lVar14);
    }
    else {
      FUN_0270a444(lVar9,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
  }
LAB_02c1c378:
  if (in_stack_00000008 == 0) {
    lVar14 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b818);
    *(long *)(lVar14 + 0x10) = lVar20;
    thunk_FUN_0188fd20((long *)(lVar14 + 0x10),lVar20);
    *(int *)(lVar14 + 0x18) = iVar19;
    FUN_02200638(lVar8,uVar11,lVar14,*(undefined8 *)PTR_DAT_0380b820);
  }
  goto LAB_02c1c174;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_02c1c8bc:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_02c1cc18;
    }
  }
LAB_02c1c8d4:
  puVar7 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)PTR_DAT_037f3288,0);
LAB_02c1cc18:
  (*(code *)*puVar7)(plVar10,puVar7[1]);
LAB_02c1cc24:
  lVar9 = *unaff_x21;
  uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x23) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_02c1cc80;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_0185dba8();
LAB_02c1cc80:
  uVar6 = (*(code *)*puVar7)();
  uVar11 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,uVar6);
  lVar9 = *unaff_x21;
  uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x23) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar18 + 5) * 0x10 + 0x138);
        goto LAB_02c1ccf8;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_0185dba8();
LAB_02c1ccf8:
  (*(code *)*puVar7)();
  return uVar11;
}


