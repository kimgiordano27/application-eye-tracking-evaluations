/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_sessiongroup_updated_t$$Dispose
ENTRY_POINT: 0909fb2c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_sessiongroup_updated_t__Dispose(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
                    /* catch() { ... } // from try @ 0909fa9c with catch @ 0909fb30
                       catch() { ... } // from try @ 0909fb20 with catch @ 0909fb30 */
  thunk_FUN_0448520c(*param_1);
                    /* try { // try from 0909fb34 to 0919fb37 has its CatchHandler @ 0909fb40 */
                    /* try { // try from 0909fb38 to 0919fb43 has its CatchHandler @ 0909f49c */
                    /* catch() { ... } // from try @ 0909fb34 with catch @ 0909fb40 */
  FUN_05563fa4();
  uVar5 = FUN_04d033a4();
  if (*(int *)(*(long *)PTR_DAT_09f1e590 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar6 = FUN_04feda88(uVar5,*(undefined8 *)PTR_DAT_09fc3b18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000028 = FUN_068a4fb0(lVar6,*(undefined8 *)PTR_DAT_09fc3b10);
                    /* try { // try from 0909fbc0 to 0919fd47 has its CatchHandler @ 0909fbc0
                       catch() { ... } // from try @ 0909fbc0 with catch @ 0909fbc0
                       catch() { ... } // from try @ 090a0078 with catch @ 0909fbc0
                       catch() { ... } // from try @ 090a013c with catch @ 0909fbc0
                       catch() { ... } // from try @ 090a01d8 with catch @ 0909fbc0
                       catch() { ... } // from try @ 090a025c with catch @ 0909fbc0 */
  uVar7 = FUN_067804ac(&stack0x00000028,*(undefined8 *)PTR_DAT_09fc3af8);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
    thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0465d7a0(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    uVar5 = FUN_067804f0(&stack0x00000028,*(undefined8 *)PTR_DAT_09fc3af0);
    puVar1 = PTR_DAT_09fc3030;
    lVar6 = *(long *)PTR_DAT_09fc3030;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar11 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar12 = **(undefined8 **)(lVar6 + 0xb8);
      lVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc3ac8);
      FUN_05553ff0(lVar11,uVar12,*(undefined8 *)PTR_DAT_09fc3b78,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar8 = lVar11;
      thunk_FUN_044bb4b4(plVar8,lVar11);
    }
    uVar5 = FUN_04d15cb0(uVar5,lVar11,*(undefined8 *)PTR_DAT_09fc3ab0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar11 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar12 = **(undefined8 **)(lVar6 + 0xb8);
      lVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc3ac0);
      FUN_055540d0(lVar11,uVar12,*(undefined8 *)PTR_DAT_09fc3b80,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *plVar8 = lVar11;
      thunk_FUN_044bb4b4(plVar8,lVar11);
    }
    uVar5 = FUN_04cfe308(uVar5,lVar11,*(undefined8 *)PTR_DAT_09fc3a98);
    FUN_04d1482c(uVar5,*(undefined8 *)PTR_DAT_09fc3aa8);
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc3a18);
    FUN_05bfa280(uVar5,*(undefined8 *)PTR_DAT_09fc3a20);
    *(undefined8 *)(unaff_x19 + 0xc) = uVar5;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,uVar5);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar6 = FUN_0909d86c();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000020 = FUN_068a4fb0(lVar6,*(undefined8 *)PTR_DAT_09fc3b08);
    uVar7 = FUN_067804ac(&stack0x00000020,*(undefined8 *)PTR_DAT_09fc3b00);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_0465d7a0(unaff_x19 + 2,&stack0x00000020);
    }
    else {
      plVar8 = (long *)FUN_067804f0(&stack0x00000020,*(undefined8 *)PTR_DAT_09fc3ae8);
      iVar3 = FUN_04ce737c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_09fc3b60);
      puVar1 = PTR_DAT_09fc3ad0;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar6 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09fc3ad0) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0909fe7c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09fc3ad0,2);
LAB_0909fe7c:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar2 = PTR_DAT_09fc3ae0;
      uVar5 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09fc3ae0);
      iVar4 = FUN_04ce6be4(uVar5,*(undefined8 *)PTR_DAT_09fc3a88);
      if (iVar3 == iVar4) {
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_0909ff54;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,2);
LAB_0909ff54:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
        uVar5 = thunk_FUN_04484e3c(*(undefined8 *)puVar2);
        uVar5 = FUN_0909e454(uVar5,*(undefined8 *)(unaff_x19 + 8));
        *(undefined8 *)(unaff_x19 + 0xc) = uVar5;
        thunk_FUN_044bb4b4();
      }
      lVar6 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0909ffdc;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,1);
LAB_0909ffdc:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar6 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_090a0038;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,2);
LAB_090a0038:
      _in_stack_00000010 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      FUN_05f9ceb4(&stack0x00000010,*(undefined8 *)PTR_DAT_09fc3ad8);
      puVar1 = PTR_DAT_09fc3b50;
      puVar9 = (undefined8 *)(unaff_x19 + 0xc);
      uVar5 = *puVar9;
      *unaff_x19 = 0xfffffffe;
      *puVar9 = 0;
      thunk_FUN_044bb4b4(puVar9,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    }
  }
  return;
}


