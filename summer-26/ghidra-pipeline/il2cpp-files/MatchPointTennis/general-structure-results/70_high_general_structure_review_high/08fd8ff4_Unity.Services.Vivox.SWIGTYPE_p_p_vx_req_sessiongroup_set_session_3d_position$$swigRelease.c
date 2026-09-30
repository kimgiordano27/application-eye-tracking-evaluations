/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_sessiongroup_set_session_3d_position$$swigRelease
ENTRY_POINT: 08fd8ff4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x08fd94c4) */
/* WARNING: Removing unreachable block (ram,0x08fd92e4) */
/* WARNING: Removing unreachable block (ram,0x08fd9550) */
/* WARNING: Removing unreachable block (ram,0x08fd9544) */

long Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_set_session_3d_position__swigRelease
               (ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar14;
  undefined1 auVar15 [16];
  ulong in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fbe390);
    FUN_04447ba8(PTR_DAT_09f20708);
    FUN_04447ba8(PTR_DAT_09f20670);
    FUN_04447ba8(PTR_DAT_09f20710);
    FUN_04447ba8(PTR_DAT_09f1f008);
    FUN_04447ba8(PTR_DAT_09f2bbb0);
    FUN_04447ba8(PTR_DAT_09f2bbb8);
    FUN_04447ba8(PTR_DAT_09f1f018);
    FUN_04447ba8(PTR_DAT_09f20dd0);
    FUN_04447ba8(PTR_DAT_09f20dd8);
    FUN_04447ba8(PTR_DAT_09f20de8);
    *(undefined1 *)(unaff_x21 + 0x3f4) = 1;
  }
  in_stack_00000018 = 0;
  if ((unaff_x20 == 0) || (unaff_x19 == 0)) {
    if (unaff_x20 == 0) {
      return unaff_x19;
    }
    return unaff_x20;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbe390);
  FUN_08fc80f4(lVar8,uVar1,uVar3,uVar2,uVar4);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
    *(long *)(lVar8 + 0x10) = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_044bb4b4();
  }
  lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20710);
  FUN_07441bc0(lVar9,*(undefined8 *)PTR_DAT_09f20708);
  plVar14 = *(long **)(unaff_x19 + 0x28);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f2bbb0) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_08fd9168;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2bbb0,0);
LAB_08fd9168:
    plVar14 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
    puVar7 = PTR_DAT_09f2bbb8;
    puVar6 = PTR_DAT_09f20670;
    puVar5 = PTR_DAT_09f1f018;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_08fd91e0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)puVar5,0);
LAB_08fd91e0:
      uVar12 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar14 == (long *)0x0) break;
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_08fd92b0;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_08fd9298;
      }
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_set_tx_no_session__swigRelease;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)puVar7,0);
Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_set_tx_no_session__swigRelease:
      auVar15 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07442978(lVar9,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar6);
    } while( true );
  }
  goto LAB_08fd92e8;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_08fd9478:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_08fd94ac;
    }
  }
LAB_08fd9490:
  puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f1f008,0);
LAB_08fd94ac:
  (*(code *)*puVar10)(plVar14,puVar10[1]);
  goto LAB_08fd94c8;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_08fd9298:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_08fd92cc;
    }
  }
LAB_08fd92b0:
  puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f1f008,0);
LAB_08fd92cc:
  (*(code *)*puVar10)(plVar14,puVar10[1]);
LAB_08fd92e8:
  plVar14 = *(long **)(lVar8 + 0x28);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f2bbb0) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_08fd9348;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f2bbb0,0);
LAB_08fd9348:
    plVar14 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
    puVar7 = PTR_DAT_09f2bbb8;
    puVar6 = PTR_DAT_09f20670;
    puVar5 = PTR_DAT_09f1f018;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_08fd93c0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)puVar5,0);
LAB_08fd93c0:
      uVar12 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar14 == (long *)0x0) break;
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_08fd9490;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_08fd9478;
      }
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar7) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_08fd941c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)puVar7,0);
LAB_08fd941c:
      auVar15 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07442978(lVar9,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar6);
    } while( true );
  }
LAB_08fd94c8:
  *(long *)(lVar8 + 0x28) = lVar9;
  thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28),lVar9);
  in_stack_00000018 = *(ulong *)(lVar8 + 0x18);
  puVar10 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(lVar8 + 0x18) & 0xff) != 0) {
    puVar10 = &stack0x00000018;
  }
  *(undefined8 *)(lVar8 + 0x18) = *puVar10;
  in_stack_00000018 = *(ulong *)(lVar8 + 0x20);
  puVar10 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(lVar8 + 0x20) & 0xff) != 0) {
    puVar10 = &stack0x00000018;
  }
  *(undefined8 *)(lVar8 + 0x20) = *puVar10;
  return lVar8;
}


