/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$Dispose
ENTRY_POINT: 081c2b08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x081c2f2c) */
/* WARNING: Removing unreachable block (ram,0x081c2e6c) */
/* WARNING: Removing unreachable block (ram,0x081c2e7c) */
/* WARNING: Removing unreachable block (ram,0x081c2f38) */

long Unity_Services_Vivox_vx_evt_session_updated_t__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  uint uVar10;
  float fVar11;
  float unaff_s8;
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
  
  do {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2b54;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2b54:
    (*(code *)*puVar5)(&stack0x00000020);
    uVar1 = in_stack_00000038._4_4_;
    uVar7 = _uStack0000000000000020;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *unaff_x19;
    uVar3 = uStack0000000000000020;
    uVar4 = uStack0000000000000024;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2bbc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2bbc:
    (*(code *)*puVar5)();
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2c14;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2c14:
    lVar6 = (*(code *)*puVar5)();
    if (lVar6 == 0) break;
    if (uVar4 == 0) {
      uVar10 = 0x7fffffff;
    }
    else {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar1 / uVar4;
      }
      if ((int)uVar10 < 0) {
        uVar10 = 0x7fffffff;
      }
    }
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2c94;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2c94:
    lVar6 = (*(code *)*puVar5)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000048 = *(ulong *)(lVar6 + 0x18);
    thunk_FUN_03d233cc(&stack0x00000048);
    fVar11 = 3.4028235e+38;
    if ((uVar3 != 0) && (uVar4 <= uVar3)) {
      fVar11 = unaff_s8 - (float)uVar4 / (float)(uVar7 & 0xffffffff);
    }
    in_stack_00000050 = CONCAT44(fVar11,uVar10);
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2d2c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2d2c:
    lVar6 = (*(code *)*puVar5)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000058 = *(undefined8 *)(lVar6 + 0x20);
    thunk_FUN_03d233cc();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000068 = in_stack_00000050;
    in_stack_00000060 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000058;
    lVar6 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_00000058;
      *(undefined8 *)(lVar6 + 0x28) = in_stack_00000050;
      *(ulong *)(lVar6 + 0x20) = in_stack_00000048;
      thunk_FUN_03d233cc(lVar6 + 0x20,0);
    }
    else {
      in_stack_00000028 = in_stack_00000050;
      _uStack0000000000000020 = in_stack_00000048;
      in_stack_00000030 = in_stack_00000058;
      FUN_05237e38();
    }
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2af8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2af8:
    uVar7 = (*(code *)*puVar5)();
  } while ((uVar7 & 1) != 0);
  puVar2 = PTR_DAT_08e6a288;
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2e54;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2e54:
    (*(code *)*puVar5)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_081c2ed4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_081c2ed4:
    (*(code *)*puVar5)();
  }
  return unaff_x20;
}


