/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_sessiongroup_added_t$$Dispose
ENTRY_POINT: 0909e4cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0909eab0) */
/* WARNING: Removing unreachable block (ram,0x0909e9f0) */
/* WARNING: Removing unreachable block (ram,0x0909ea00) */
/* WARNING: Removing unreachable block (ram,0x0909eabc) */

long Unity_Services_Vivox_vx_evt_sessiongroup_added_t__Dispose(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  uint uVar17;
  float fVar18;
  uint uStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xa08));
                    /* try { // try from 0909e4d8 to 0919e543 has its CatchHandler @ 0909de88 */
  FUN_04447ba8(PTR_DAT_09f1f018);
  FUN_04447ba8(PTR_DAT_09fc3a38);
  FUN_04447ba8(PTR_DAT_09fc3a20);
  FUN_04447ba8(PTR_DAT_09fc3a18);
  *(undefined1 *)(unaff_x23 + 0xa41) = 1;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  lVar8 = thunk_FUN_0448520c(*unaff_x22);
  FUN_05bfa280(lVar8,*unaff_x20);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar12 = *unaff_x19;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09fc3a28) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_0909e580;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0909e580:
  plVar10 = (long *)(*(code *)*puVar9)();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar12 = *unaff_x21;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09fc39f0) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_0909e5f0;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0909e5f0:
  plVar11 = (long *)(*(code *)*puVar9)();
  puVar5 = PTR_DAT_09fc3a38;
  puVar4 = PTR_DAT_09fc3a30;
  puVar3 = PTR_DAT_09fc3a08;
  puVar2 = PTR_DAT_09f1f018;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar13 = *plVar11;
    lVar12 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0909e67c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar11,lVar12,0);
LAB_0909e67c:
    uVar14 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar14 & 1) == 0) {
LAB_0909e978:
      puVar2 = PTR_DAT_09f1f008;
      if (plVar11 == (long *)0x0) goto LAB_0909e9e4;
      lVar12 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 == 0) goto LAB_0909e9bc;
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0909e6d8;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar11,*(long *)puVar3,0);
LAB_0909e6d8:
    (*(code *)*puVar9)(&stack0x00000020,plVar11,puVar9[1]);
    uVar1 = in_stack_00000038._4_4_;
    uVar14 = _uStack0000000000000020;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar13 = *plVar10;
    uVar6 = uStack0000000000000020;
    uVar7 = uStack0000000000000024;
    lVar12 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0909e740;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar10,lVar12,0);
LAB_0909e740:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
    lVar12 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0909e798;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar10,*(long *)puVar4,0);
LAB_0909e798:
    lVar12 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar12 == 0) goto LAB_0909e978;
    if (uVar7 == 0) {
      uVar17 = 0x7fffffff;
    }
    else {
      uVar17 = 0;
      if (uVar7 != 0) {
        uVar17 = uVar1 / uVar7;
      }
      if ((int)uVar17 < 0) {
        uVar17 = 0x7fffffff;
      }
    }
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    lVar12 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0909e818;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar10,*(long *)puVar4,0);
LAB_0909e818:
    lVar12 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000048 = *(ulong *)(lVar12 + 0x18);
    thunk_FUN_044bb4b4(&stack0x00000048);
    fVar18 = 3.4028235e+38;
    if ((uVar6 != 0) && (uVar7 <= uVar6)) {
      fVar18 = 1.0 - (float)uVar7 / (float)(uVar14 & 0xffffffff);
    }
    in_stack_00000050 = CONCAT44(fVar18,uVar17);
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0909e8b0;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar10,*(long *)puVar4,0);
LAB_0909e8b0:
    lVar12 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000058 = *(undefined8 *)(lVar12 + 0x20);
    thunk_FUN_044bb4b4(&stack0x00000058);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar13 = *(long *)puVar5;
    in_stack_00000068 = in_stack_00000050;
    in_stack_00000060 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000058;
    lVar12 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar12 + 0x30) = in_stack_00000058;
      *(undefined8 *)(lVar12 + 0x28) = in_stack_00000050;
      *(ulong *)(lVar12 + 0x20) = in_stack_00000048;
      thunk_FUN_044bb4b4(lVar12 + 0x20,0);
    }
    else {
      in_stack_00000028 = in_stack_00000050;
      _uStack0000000000000020 = in_stack_00000048;
      in_stack_00000030 = in_stack_00000058;
      FUN_05bfaba0(lVar8,&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0909e9d8;
    }
  }
LAB_0909e9bc:
  puVar9 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f1f008,0);
LAB_0909e9d8:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
LAB_0909e9e4:
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0909ea58;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar10,*(long *)puVar2,0);
LAB_0909ea58:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
  }
  return lVar8;
}


