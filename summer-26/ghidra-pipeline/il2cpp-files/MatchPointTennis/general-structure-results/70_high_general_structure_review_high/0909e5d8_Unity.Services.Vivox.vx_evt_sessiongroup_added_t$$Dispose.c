/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_sessiongroup_added_t$$Dispose
ENTRY_POINT: 0909e5d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0909eab0) */
/* WARNING: Removing unreachable block (ram,0x0909e9f0) */
/* WARNING: Removing unreachable block (ram,0x0909ea00) */
/* WARNING: Removing unreachable block (ram,0x0909eabc) */

long Unity_Services_Vivox_vx_evt_sessiongroup_added_t__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  uint uVar14;
  float fVar15;
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
  
  puVar7 = (undefined8 *)FUN_044822ac(param_1,param_2,0);
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar4 = PTR_DAT_09fc3a30;
  puVar3 = PTR_DAT_09fc3a08;
  puVar2 = PTR_DAT_09f1f018;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar10 = *plVar8;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0909e67c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar8,lVar9,0);
LAB_0909e67c:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar11 & 1) == 0) {
LAB_0909e978:
      puVar2 = PTR_DAT_09f1f008;
      if (plVar8 == (long *)0x0) goto LAB_0909e9e4;
      lVar9 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_0909e9bc;
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0909e6d8;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar3,0);
LAB_0909e6d8:
    (*(code *)*puVar7)(&stack0x00000020,plVar8,puVar7[1]);
    uVar1 = in_stack_00000038._4_4_;
    uVar11 = _uStack0000000000000020;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = *unaff_x19;
    uVar5 = uStack0000000000000020;
    uVar6 = uStack0000000000000024;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0909e740;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0909e740:
    (*(code *)*puVar7)();
    lVar9 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0909e798;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0909e798:
    lVar9 = (*(code *)*puVar7)();
    if (lVar9 == 0) goto LAB_0909e978;
    if (uVar6 == 0) {
      uVar14 = 0x7fffffff;
    }
    else {
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = uVar1 / uVar6;
      }
      if ((int)uVar14 < 0) {
        uVar14 = 0x7fffffff;
      }
    }
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    lVar9 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0909e818;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0909e818:
    lVar9 = (*(code *)*puVar7)();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000048 = *(ulong *)(lVar9 + 0x18);
    thunk_FUN_044bb4b4(&stack0x00000048);
    fVar15 = 3.4028235e+38;
    if ((uVar5 != 0) && (uVar6 <= uVar5)) {
      fVar15 = 1.0 - (float)uVar6 / (float)(uVar11 & 0xffffffff);
    }
    in_stack_00000050 = CONCAT44(fVar15,uVar14);
    lVar9 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0909e8b0;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0909e8b0:
    lVar9 = (*(code *)*puVar7)();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000058 = *(undefined8 *)(lVar9 + 0x20);
    thunk_FUN_044bb4b4(&stack0x00000058);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000068 = in_stack_00000050;
    in_stack_00000060 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000058;
    lVar9 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar9 + 0x30) = in_stack_00000058;
      *(undefined8 *)(lVar9 + 0x28) = in_stack_00000050;
      *(ulong *)(lVar9 + 0x20) = in_stack_00000048;
      thunk_FUN_044bb4b4(lVar9 + 0x20,0);
    }
    else {
      in_stack_00000028 = in_stack_00000050;
      _uStack0000000000000020 = in_stack_00000048;
      in_stack_00000030 = in_stack_00000058;
      FUN_05bfaba0();
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0909e9d8;
    }
  }
LAB_0909e9bc:
  puVar7 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f1f008,0);
LAB_0909e9d8:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_0909e9e4:
  if (unaff_x19 != (long *)0x0) {
    lVar9 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0909ea58;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0909ea58:
    (*(code *)*puVar7)();
  }
  return unaff_x20;
}


