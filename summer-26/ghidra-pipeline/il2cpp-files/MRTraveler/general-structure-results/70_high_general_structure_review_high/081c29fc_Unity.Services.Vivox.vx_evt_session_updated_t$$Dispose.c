/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$Dispose
ENTRY_POINT: 081c29fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x081c2f2c) */
/* WARNING: Removing unreachable block (ram,0x081c2e6c) */
/* WARNING: Removing unreachable block (ram,0x081c2e7c) */
/* WARNING: Removing unreachable block (ram,0x081c2f38) */

long Unity_Services_Vivox_vx_evt_session_updated_t__Dispose(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  long *unaff_x21;
  uint uVar15;
  float fVar16;
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
  
  plVar7 = (long *)(*(code *)*param_1)();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar10 = *unaff_x21;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f07a78) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_081c2a6c;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348();
LAB_081c2a6c:
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar4 = PTR_DAT_08f07ab8;
  puVar3 = PTR_DAT_08f07a90;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar11 = *plVar9;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_081c2af8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,lVar10,0);
LAB_081c2af8:
    uVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar12 & 1) == 0) {
LAB_081c2df4:
      puVar2 = PTR_DAT_08e6a288;
      if (plVar9 == (long *)0x0)
      goto Unity_Services_Vivox_vx_evt_session_updated_t__set_session_handle;
      lVar10 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_081c2e38;
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_081c2b54;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar3,0);
LAB_081c2b54:
    (*(code *)*puVar8)(&stack0x00000020,plVar9,puVar8[1]);
    uVar1 = in_stack_00000038._4_4_;
    uVar12 = _uStack0000000000000020;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar11 = *plVar7;
    uVar5 = uStack0000000000000020;
    uVar6 = uStack0000000000000024;
    lVar10 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_081c2bbc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar7,lVar10,0);
LAB_081c2bbc:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar10 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_081c2c14;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,0);
LAB_081c2c14:
    lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (lVar10 == 0) goto LAB_081c2df4;
    if (uVar6 == 0) {
      uVar15 = 0x7fffffff;
    }
    else {
      uVar15 = 0;
      if (uVar6 != 0) {
        uVar15 = uVar1 / uVar6;
      }
      if ((int)uVar15 < 0) {
        uVar15 = 0x7fffffff;
      }
    }
    in_stack_00000048 = 0;
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    lVar10 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_081c2c94;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,0);
LAB_081c2c94:
    lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000048 = *(ulong *)(lVar10 + 0x18);
    thunk_FUN_03d233cc(&stack0x00000048);
    fVar16 = 3.4028235e+38;
    if ((uVar5 != 0) && (uVar6 <= uVar5)) {
      fVar16 = 1.0 - (float)uVar6 / (float)(uVar12 & 0xffffffff);
    }
    in_stack_00000050 = CONCAT44(fVar16,uVar15);
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_081c2d2c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,0);
LAB_081c2d2c:
    lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000058 = *(undefined8 *)(lVar10 + 0x20);
    thunk_FUN_03d233cc(&stack0x00000058);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000068 = in_stack_00000050;
    in_stack_00000060 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000058;
    lVar10 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar10 + 0x30) = in_stack_00000058;
      *(undefined8 *)(lVar10 + 0x28) = in_stack_00000050;
      *(ulong *)(lVar10 + 0x20) = in_stack_00000048;
      thunk_FUN_03d233cc(lVar10 + 0x20,0);
    }
    else {
      in_stack_00000028 = in_stack_00000050;
      _uStack0000000000000020 = in_stack_00000048;
      in_stack_00000030 = in_stack_00000058;
      FUN_05237e38();
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_081c2e54;
    }
  }
LAB_081c2e38:
  puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e6a288,0);
LAB_081c2e54:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
Unity_Services_Vivox_vx_evt_session_updated_t__set_session_handle:
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_081c2ed4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_081c2ed4:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return unaff_x20;
}


