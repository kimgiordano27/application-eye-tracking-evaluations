/*
FUNCTION_NAME: FUN_081c28d0
ENTRY_POINT: 081c28d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x081c2f2c) */
/* WARNING: Removing unreachable block (ram,0x081c2e6c) */
/* WARNING: Removing unreachable block (ram,0x081c2e7c) */
/* WARNING: Removing unreachable block (ram,0x081c2f38) */

long FUN_081c28d0(long *param_1,long *param_2)

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
  uint uVar17;
  float fVar18;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  uint local_b4;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar3 = PTR_DAT_08f07aa8;
  puVar2 = PTR_DAT_08f07aa0;
  if ((DAT_094292fe & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08f07a78);
    FUN_03c8f898(PTR_DAT_08f07ab0);
    FUN_03c8f898(PTR_DAT_08f07ab8);
    FUN_03c8f898(PTR_DAT_08f07a90);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08f07ac0);
    FUN_03c8f898(PTR_DAT_08f07aa8);
    FUN_03c8f898(PTR_DAT_08f07aa0);
    DAT_094292fe = 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_05237518(lVar8,*(undefined8 *)puVar3);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar12 = *param_2;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08f07ab0) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto Unity_Services_Vivox_vx_evt_session_updated_t__Dispose;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_03cf1348(param_2,*(long *)PTR_DAT_08f07ab0,0);
Unity_Services_Vivox_vx_evt_session_updated_t__Dispose:
  plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar12 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08f07a78) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_081c2a6c;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_03cf1348(param_1,*(long *)PTR_DAT_08f07a78,0);
LAB_081c2a6c:
  plVar11 = (long *)(*(code *)*puVar9)(param_1,puVar9[1]);
  puVar5 = PTR_DAT_08f07ac0;
  puVar4 = PTR_DAT_08f07ab8;
  puVar3 = PTR_DAT_08f07a90;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
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
          goto LAB_081c2af8;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar11,lVar12,0);
LAB_081c2af8:
    uVar14 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar14 & 1) == 0) {
LAB_081c2df4:
      puVar2 = PTR_DAT_08e6a288;
      if (plVar11 == (long *)0x0)
      goto Unity_Services_Vivox_vx_evt_session_updated_t__set_session_handle;
      lVar12 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 == 0) goto LAB_081c2e38;
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
          goto LAB_081c2b54;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,0);
LAB_081c2b54:
    (*(code *)*puVar9)(&local_d0,plVar11,puVar9[1]);
    uVar1 = local_b4;
    uVar14 = local_d0;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar13 = *plVar10;
    uVar6 = (uint)local_d0;
    uVar7 = local_d0._4_4_;
    lVar12 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_081c2bbc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar10,lVar12,0);
LAB_081c2bbc:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
    lVar12 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_081c2c14;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar4,0);
LAB_081c2c14:
    lVar12 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar12 == 0) goto LAB_081c2df4;
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
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    lVar12 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_081c2c94;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar4,0);
LAB_081c2c94:
    lVar12 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    local_a8 = *(ulong *)(lVar12 + 0x18);
    thunk_FUN_03d233cc(&local_a8);
    fVar18 = 3.4028235e+38;
    if ((uVar6 != 0) && (uVar7 <= uVar6)) {
      fVar18 = 1.0 - (float)uVar7 / (float)(uVar14 & 0xffffffff);
    }
    uStack_a0 = CONCAT44(fVar18,uVar17);
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_081c2d2c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar4,0);
LAB_081c2d2c:
    lVar12 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    local_98 = *(undefined8 *)(lVar12 + 0x20);
    thunk_FUN_03d233cc(&local_98);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar13 = *(long *)puVar5;
    uStack_88 = uStack_a0;
    local_90 = local_a8;
    local_80 = local_98;
    lVar12 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar12 + 0x30) = local_98;
      *(undefined8 *)(lVar12 + 0x28) = uStack_a0;
      *(ulong *)(lVar12 + 0x20) = local_a8;
      thunk_FUN_03d233cc(lVar12 + 0x20,0);
    }
    else {
      uStack_c8 = uStack_a0;
      local_d0 = local_a8;
      local_c0 = local_98;
      FUN_05237e38(lVar8,&local_d0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_081c2e54;
    }
  }
LAB_081c2e38:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e6a288,0);
LAB_081c2e54:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
Unity_Services_Vivox_vx_evt_session_updated_t__set_session_handle:
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_081c2ed4;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar2,0);
LAB_081c2ed4:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
  }
  return lVar8;
}


