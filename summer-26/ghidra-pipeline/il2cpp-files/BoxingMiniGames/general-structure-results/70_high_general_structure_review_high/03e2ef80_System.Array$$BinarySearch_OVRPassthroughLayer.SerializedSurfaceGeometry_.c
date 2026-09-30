/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03e2ef80
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03e2f81c) */
/* WARNING: Removing unreachable block (ram,0x03e2f548) */
/* WARNING: Removing unreachable block (ram,0x03e2f8a4) */
/* WARNING: Removing unreachable block (ram,0x03e2f530) */

void System_Array__BinarySearch<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_00000178;
  
  plVar5 = (long *)thunk_FUN_0367fd24();
  if (plVar5 != (long *)0x0) {
    iVar2 = FUN_072533bc(&stack0x00000150,0);
                    /* try { // try from 03e2efa4 to 03f2efb3 has its CatchHandler @ 03e2f024 */
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
                    /* try { // try from 03e2efb4 to 03f2f047 has its CatchHandler @ 03e2ee90 */
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc(lVar11);
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03e2f1e0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e2f1e0:
    iVar3 = (*(code *)*puVar6)(plVar5);
    if (iVar2 < iVar3) {
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
                    /* try { // try from 03e2f54c to 03f2f573 has its CatchHandler @ 03e2f45c */
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_03e2f55c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,2);
LAB_03e2f55c:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 03e2f574 to 03f2f583 has its CatchHandler @ 03e2f5f4 */
      uVar4 = FUN_072533bc(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
                    /* try { // try from 03e2f584 to 03f2f617 has its CatchHandler @ 03e2f45c */
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_03e2f5e8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,3);
LAB_03e2f5e8:
      (*(code *)*puVar6)(plVar5,uVar4,puVar6[1]);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03e2f664;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,1);
LAB_03e2f664:
      plVar8 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar1 = PTR_DAT_079fead0;
      plVar9 = (long *)thunk_FUN_0367fd24(plVar8,*(undefined8 *)PTR_DAT_079fead0);
      if (plVar9 != (long *)0x0) {
        lVar12 = *(long *)puVar1;
        uVar10 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),lVar12);
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar12) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_03e2f6fc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar9,lVar12,4);
LAB_03e2f6fc:
        (*(code *)*puVar6)(plVar9,uVar10,puVar6[1]);
        FUN_04930ea8();
      }
      in_stack_000000b0 = 0;
      in_stack_000000a8 = 0;
      _cStack00000000000000a0 = 0;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e2f7d4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar8,lVar11,0);
LAB_03e2f7d4:
      (*(code *)*puVar6)(plVar8);
      if (cStack00000000000000a0 != '\0') {
        in_stack_00000098 = in_stack_000000b0;
        in_stack_00000090 = in_stack_000000a8;
        FUN_07253298(&stack0x00000090,0);
      }
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_03e2f88c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,3);
LAB_03e2f88c:
      (*(code *)*puVar6)(plVar5,uVar7,puVar6[1]);
      return;
    }
  }
  FUN_072533bc(&stack0x00000150,0);
  lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0367c9fc(lVar11);
  }
  lVar12 = *unaff_x23;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar11) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03e2f2cc;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0367cd30();
LAB_03e2f2cc:
  uVar13 = (*(code *)*puVar6)();
  if ((uVar13 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  }
  else {
    lVar11 = thunk_FUN_0367fd24(in_stack_00000178,DAT_07b68d08);
    uVar7 = DAT_07b68d08;
    if (lVar11 != 0) {
      uVar10 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),DAT_07b68d08);
      FUN_0315f2c4(4,uVar7,lVar11,uVar10);
      FUN_04930ea8();
    }
    plVar5 = in_stack_00000178;
    if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc(lVar11);
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03e2f50c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e2f50c:
                    /* try { // try from 03e2f518 to 03f2f51f has its CatchHandler @ 03e2f5fc */
    (*(code *)*puVar6)(plVar5);
  }
  return;
}


