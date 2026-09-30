/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 0250fe60
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02510494) */
/* WARNING: Removing unreachable block (ram,0x025101c0) */
/* WARNING: Removing unreachable block (ram,0x0251051c) */
/* WARNING: Removing unreachable block (ram,0x025101a8) */

void System_Array__InternalArray__ICollection_Add<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (code *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_00000178;
  
  iVar2 = (*param_1)();
  if (unaff_w24 < iVar2) {
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02091334(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_025101d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02091668();
LAB_025101d4:
    (*(code *)*puVar3)();
    FUN_04155b40(&stack0x00000150,0);
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02091334(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_02510260;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02091668();
LAB_02510260:
    (*(code *)*puVar3)();
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02091334(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_025102dc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02091668();
LAB_025102dc:
    plVar5 = (long *)(*(code *)*puVar3)();
    puVar1 = StringLiteral_10719;
    plVar6 = (long *)thunk_FUN_02094664(plVar5,*(undefined8 *)StringLiteral_10719);
    if (plVar6 != (long *)0x0) {
      lVar9 = *(long *)puVar1;
      uVar7 = thunk_FUN_02094664(*(undefined8 *)(unaff_x19 + 0xa8),lVar9);
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_02510374;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02091668(plVar6,lVar9,4);
LAB_02510374:
      (*(code *)*puVar3)(plVar6,uVar7,puVar3[1]);
      FUN_027a6cc0();
    }
    in_stack_000000b0 = 0;
    in_stack_000000a8 = 0;
    _cStack00000000000000a0 = 0;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02091334(lVar8);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0251044c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02091668(plVar5,lVar8,0);
LAB_0251044c:
    (*(code *)*puVar3)(plVar5);
    if (cStack00000000000000a0 != '\0') {
      in_stack_00000098 = in_stack_000000b0;
      in_stack_00000090 = in_stack_000000a8;
      FUN_04155a1c(&stack0x00000090,0);
    }
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02091334(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_02510504;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02091668();
LAB_02510504:
    (*(code *)*puVar3)();
  }
  else {
    FUN_04155b40(&stack0x00000150,0);
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02091334(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0250ff44;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02091668();
LAB_0250ff44:
    uVar10 = (*(code *)*puVar3)();
    if ((uVar10 & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 0xb4) = 4;
    }
    else {
      lVar8 = thunk_FUN_02094664(in_stack_00000178,DAT_04748e80);
      uVar7 = DAT_04748e80;
      if (lVar8 != 0) {
        uVar4 = thunk_FUN_02094664(*(undefined8 *)(unaff_x19 + 0xa8),DAT_04748e80);
        FUN_01d30868(4,uVar7,lVar8,uVar4);
        FUN_027a6cc0();
      }
      plVar5 = in_stack_00000178;
      if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02091334(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02510184;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02091668(plVar5,lVar8,0);
LAB_02510184:
      (*(code *)*puVar3)(plVar5);
    }
  }
  return;
}


