/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_removed_t$$Dispose
ENTRY_POINT: 081c23c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x081c272c) */
/* WARNING: Removing unreachable block (ram,0x081c2674) */
/* WARNING: Removing unreachable block (ram,0x081c2684) */
/* WARNING: Removing unreachable block (ram,0x081c2738) */

long Unity_Services_Vivox_vx_evt_session_removed_t__Dispose(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar6;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w27;
  float fVar7;
  float unaff_s8;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081c2410;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_081c2410:
    (*(code *)*puVar2)();
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081c2478;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_081c2478:
    (*(code *)*puVar2)();
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081c24d0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_081c24d0:
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) break;
    if (uStack0000000000000004 == 0) {
      uVar6 = 0x7fffffff;
    }
    else {
      uVar6 = 0;
      if (uStack0000000000000004 != 0) {
        uVar6 = in_stack_00000018._4_4_ / uStack0000000000000004;
      }
      if ((int)uVar6 < 0) {
        uVar6 = unaff_w27;
      }
    }
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081c2548;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_081c2548:
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000020 = *(undefined8 *)(lVar3 + 0x18);
    thunk_FUN_03d233cc(&stack0x00000020);
    fVar7 = 3.4028235e+38;
    if ((uStack0000000000000000 != 0) && (uStack0000000000000004 <= uStack0000000000000000)) {
      fVar7 = unaff_s8 -
              (float)uStack0000000000000004 / (float)(_uStack0000000000000000 & 0xffffffff);
    }
    in_stack_00000028 = CONCAT44(fVar7,uVar6);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = *(uint *)(unaff_x20 + 0x18);
    if (uVar6 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar6 * 0x10;
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
      puVar2 = (undefined8 *)(lVar3 + 0x20);
      *puVar2 = in_stack_00000020;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
      thunk_FUN_03d233cc(puVar2,0);
    }
    else {
      FUN_0523abd4();
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081c23b4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_081c23b4:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) break;
    param_1 = *unaff_x21;
  } while( true );
  puVar1 = PTR_DAT_08e6a288;
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081c265c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_081c265c:
    (*(code *)*puVar2)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081c26dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_081c26dc:
    (*(code *)*puVar2)();
  }
  return unaff_x20;
}


