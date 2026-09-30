/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$Dispose
ENTRY_POINT: 085ea86c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_session_updated_t__Dispose(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 in_stack_00000028;
  
  FUN_04077588(PTR_DAT_09332360);
  FUN_04077588(PTR_DAT_09332368);
  *(undefined1 *)(unaff_x20 + 0xf78) = 1;
  puVar3 = PTR_DAT_09285b48;
  lVar12 = *(long *)(unaff_x19 + 8);
  in_stack_00000028 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = *(uint *)(lVar12 + 0x88);
    if ((uVar1 & 0xfffffffe) != 2) {
      lVar12 = *(long *)(lVar12 + 0xa8);
      if (lVar12 != 0) {
        uVar11 = thunk_FUN_040dedf8(PTR_DAT_09332040);
        uVar11 = FUN_03b0b768(0,uVar11,lVar12,uVar1);
        uVar6 = thunk_FUN_040dedf8(PTR_DAT_09332370);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar11,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar10 = *(long **)(lVar12 + 0xa0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09332340) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_085ea930;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_09332340,0);
LAB_085ea930:
    plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
    if (*(long *)(lVar12 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *plVar10;
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x60) + 0x10);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09332348) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_085ea9a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_09332348,1);
LAB_085ea9a8:
    (*(code *)*puVar5)(plVar10,uVar11,puVar5[1]);
    if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar10 = *(long **)(lVar12 + 0xa0);
    uVar11 = FUN_085f00bc();
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09332350) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_085eaa24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_09332350,0);
LAB_085eaa24:
    lVar7 = (*(code *)*puVar5)(plVar10,uVar11,0,0,0,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000028 = FUN_06649f2c(lVar7,*(undefined8 *)PTR_DAT_09332368);
    uVar8 = FUN_065f12f0(&stack0x00000028,*(undefined8 *)PTR_DAT_09332360);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_049bf540(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  lVar7 = FUN_065f1330(&stack0x00000028,*(undefined8 *)PTR_DAT_09332358);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar12 + 0x78) != 0) {
    FUN_085f04b0(*(long *)(lVar12 + 0x78),*(undefined8 *)(lVar7 + 0x18));
    puVar4 = PTR_DAT_09285b70;
    uVar11 = *(undefined8 *)(lVar7 + 0x18);
    iVar2 = *(int *)(*(long *)puVar3 + 0xe4);
    *unaff_x19 = -2;
    if (iVar2 == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_067119b4(unaff_x19 + 2,uVar11,*(undefined8 *)puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


