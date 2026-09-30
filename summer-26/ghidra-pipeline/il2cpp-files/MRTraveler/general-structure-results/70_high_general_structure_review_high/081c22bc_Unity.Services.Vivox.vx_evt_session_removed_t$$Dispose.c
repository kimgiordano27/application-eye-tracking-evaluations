/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_removed_t$$Dispose
ENTRY_POINT: 081c22bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x081c272c) */
/* WARNING: Removing unreachable block (ram,0x081c2674) */
/* WARNING: Removing unreachable block (ram,0x081c2684) */
/* WARNING: Removing unreachable block (ram,0x081c2738) */

long Unity_Services_Vivox_vx_evt_session_removed_t__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long *unaff_x21;
  uint uVar11;
  float fVar12;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar4 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar7 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f07a78) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_081c232c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c232c:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar3 = PTR_DAT_08f07a90;
  puVar2 = PTR_DAT_08f07a88;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar8 = *plVar6;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_081c23b4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar7,0);
LAB_081c23b4:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
LAB_081c25fc:
      puVar1 = PTR_DAT_08e6a288;
      if (plVar6 == (long *)0x0) goto LAB_081c2668;
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_081c2640;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_081c2410;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_081c2410:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_081c2478;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar4,lVar7,0);
LAB_081c2478:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_081c24d0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar4,lVar7,0);
LAB_081c24d0:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) goto LAB_081c25fc;
    if (uStack0000000000000004 == 0) {
      uVar11 = 0x7fffffff;
    }
    else {
      uVar11 = 0;
      if (uStack0000000000000004 != 0) {
        uVar11 = in_stack_00000018._4_4_ / uStack0000000000000004;
      }
      if ((int)uVar11 < 0) {
        uVar11 = 0x7fffffff;
      }
    }
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_081c2548;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar4,lVar7,0);
LAB_081c2548:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000020 = *(undefined8 *)(lVar7 + 0x18);
    thunk_FUN_03d233cc(&stack0x00000020);
    fVar12 = 3.4028235e+38;
    if ((uStack0000000000000000 != 0) && (uStack0000000000000004 <= uStack0000000000000000)) {
      fVar12 = 1.0 - (float)uStack0000000000000004 / (float)(_uStack0000000000000000 & 0xffffffff);
    }
    in_stack_00000028 = CONCAT44(fVar12,uVar11);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = *(uint *)(unaff_x20 + 0x18);
    if (uVar11 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar11 * 0x10;
      *(uint *)(unaff_x20 + 0x18) = uVar11 + 1;
      puVar5 = (undefined8 *)(lVar7 + 0x20);
      *puVar5 = in_stack_00000020;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_00000028;
      thunk_FUN_03d233cc(puVar5,0);
    }
    else {
      FUN_0523abd4();
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_081c265c;
    }
  }
LAB_081c2640:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a288,0);
LAB_081c265c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_081c2668:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_081c26dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar1,0);
LAB_081c26dc:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return unaff_x20;
}


