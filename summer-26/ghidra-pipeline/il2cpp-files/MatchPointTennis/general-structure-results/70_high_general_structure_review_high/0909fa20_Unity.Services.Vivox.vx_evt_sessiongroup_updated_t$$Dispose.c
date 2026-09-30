/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_sessiongroup_updated_t$$Dispose
ENTRY_POINT: 0909fa20
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_sessiongroup_updated_t__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
                    /* catch() { ... } // from try @ 0909f9c0 with catch @ 0909fa20 */
                    /* catch() { ... } // from try @ 0909f8e8 with catch @ 0909fa24 */
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xa18));
                    /* catch() { ... } // from try @ 0909f8d4 with catch @ 0909fa28 */
                    /* catch() { ... } // from try @ 0909fa10 with catch @ 0909fa2c */
                    /* catch() { ... } // from try @ 0909f808 with catch @ 0909fa30 */
  FUN_04447ba8(PTR_DAT_09fc3ad8);
                    /* catch() { ... } // from try @ 0909fa0c with catch @ 0909fa34 */
                    /* catch() { ... } // from try @ 0909f7f0 with catch @ 0909fa38 */
                    /* catch() { ... } // from try @ 0909fa08 with catch @ 0909fa3c */
  FUN_04447ba8(PTR_DAT_09fc3ae0);
                    /* catch() { ... } // from try @ 0909f7dc with catch @ 0909fa40 */
                    /* catch() { ... } // from try @ 0909fa04 with catch @ 0909fa44 */
                    /* catch() { ... } // from try @ 0909fa00 with catch @ 0909fa48 */
  FUN_04447ba8(PTR_DAT_09fc3ae8);
                    /* catch() { ... } // from try @ 0909f7b8 with catch @ 0909fa4c */
                    /* catch() { ... } // from try @ 0909f7ac with catch @ 0909fa50 */
                    /* catch() { ... } // from try @ 0909f9fc with catch @ 0909fa54 */
  FUN_04447ba8(PTR_DAT_09fc3af0);
                    /* catch() { ... } // from try @ 0909f920 with catch @ 0909fa58 */
                    /* catch() { ... } // from try @ 0909f904 with catch @ 0909fa5c */
                    /* catch() { ... } // from try @ 0909f748 with catch @ 0909fa60 */
  FUN_04447ba8(PTR_DAT_09fc3af8);
                    /* catch() { ... } // from try @ 0909f720 with catch @ 0909fa64 */
                    /* catch() { ... } // from try @ 0909f6f8 with catch @ 0909fa68 */
                    /* catch() { ... } // from try @ 0909f6d0 with catch @ 0909fa6c */
  FUN_04447ba8(PTR_DAT_09fc3b00);
                    /* catch() { ... } // from try @ 0909f6a0 with catch @ 0909fa70 */
                    /* catch() { ... } // from try @ 0909f624 with catch @ 0909fa74 */
                    /* catch() { ... } // from try @ 0909f934 with catch @ 0909fa78 */
  FUN_04447ba8(PTR_DAT_09fc3b08);
                    /* catch() { ... } // from try @ 0909f870 with catch @ 0909fa7c
                       catch() { ... } // from try @ 0909fa14 with catch @ 0909fa7c */
                    /* catch() { ... } // from try @ 0909f770 with catch @ 0909fa80 */
                    /* catch() { ... } // from try @ 0909f660 with catch @ 0909fa84
                       catch() { ... } // from try @ 0909f9f8 with catch @ 0909fa84 */
  FUN_04447ba8(PTR_DAT_09fc3b10);
  FUN_04447ba8(PTR_DAT_09fc3b18);
  FUN_04447ba8(PTR_DAT_09f1e590);
  FUN_04447ba8(PTR_DAT_09fc3b78);
  FUN_04447ba8(PTR_DAT_09fc3b80);
  FUN_04447ba8(PTR_DAT_09fc3030);
  *(undefined1 *)(unaff_x20 + 0xa4b) = 1;
  puVar2 = PTR_DAT_09fc3960;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar12 = *(long *)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x10);
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
      goto LAB_0909fda4;
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 8);
    uVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc3b70);
    FUN_05563fa4(uVar9,lVar12,*(undefined8 *)PTR_DAT_09fc3b58,0);
    uVar9 = FUN_04d033a4(uVar13,uVar9,*(undefined8 *)PTR_DAT_09fc3b68);
    if (*(int *)(*(long *)PTR_DAT_09f1e590 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar6 = FUN_04feda88(uVar9,*(undefined8 *)PTR_DAT_09fc3b18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000028 = FUN_068a4fb0(lVar6,*(undefined8 *)PTR_DAT_09fc3b10);
    uVar10 = FUN_067804ac(&stack0x00000028,*(undefined8 *)PTR_DAT_09fc3af8);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_0465d7a0(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  uVar9 = FUN_067804f0(&stack0x00000028,*(undefined8 *)PTR_DAT_09fc3af0);
  puVar1 = PTR_DAT_09fc3030;
  lVar6 = *(long *)PTR_DAT_09fc3030;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar6);
    lVar6 = *(long *)puVar1;
  }
  lVar14 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
  if (lVar14 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar6);
      lVar6 = *(long *)puVar1;
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
    lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc3ac8);
    FUN_05553ff0(lVar14,uVar13,*(undefined8 *)PTR_DAT_09fc3b78,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    *plVar7 = lVar14;
    thunk_FUN_044bb4b4(plVar7,lVar14);
  }
  uVar9 = FUN_04d15cb0(uVar9,lVar14,*(undefined8 *)PTR_DAT_09fc3ab0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar6);
    lVar6 = *(long *)puVar1;
  }
  lVar14 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
  if (lVar14 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar6);
      lVar6 = *(long *)puVar1;
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
    lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc3ac0);
    FUN_055540d0(lVar14,uVar13,*(undefined8 *)PTR_DAT_09fc3b80,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    *plVar7 = lVar14;
    thunk_FUN_044bb4b4(plVar7,lVar14);
  }
  uVar9 = FUN_04cfe308(uVar9,lVar14,*(undefined8 *)PTR_DAT_09fc3a98);
  uVar9 = FUN_04d1482c(uVar9,*(undefined8 *)PTR_DAT_09fc3aa8);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fc3a18);
  FUN_05bfa280(uVar13,*(undefined8 *)PTR_DAT_09fc3a20);
  *(undefined8 *)(unaff_x19 + 0xc) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0xc,uVar13);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar12 = FUN_0909d86c(lVar12,uVar9);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000020 = FUN_068a4fb0(lVar12,*(undefined8 *)PTR_DAT_09fc3b08);
  uVar10 = FUN_067804ac(&stack0x00000020,*(undefined8 *)PTR_DAT_09fc3b00);
  if ((uVar10 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
    thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0465d7a0(unaff_x19 + 2,&stack0x00000020);
    return;
  }
LAB_0909fda4:
  plVar7 = (long *)FUN_067804f0(&stack0x00000020,*(undefined8 *)PTR_DAT_09fc3ae8);
  iVar4 = FUN_04ce737c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_09fc3b60);
  puVar1 = PTR_DAT_09fc3ad0;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar12 = *plVar7;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09fc3ad0) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_0909fe7c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09fc3ad0,2);
LAB_0909fe7c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar3 = PTR_DAT_09fc3ae0;
  uVar9 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09fc3ae0);
  iVar5 = FUN_04ce6be4(uVar9,*(undefined8 *)PTR_DAT_09fc3a88);
  if (iVar4 == iVar5) {
    lVar12 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0909ff54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar1,2);
LAB_0909ff54:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
    uVar9 = thunk_FUN_04484e3c(*(undefined8 *)puVar3);
    uVar9 = FUN_0909e454(uVar9,*(undefined8 *)(unaff_x19 + 8));
    *(undefined8 *)(unaff_x19 + 0xc) = uVar9;
    thunk_FUN_044bb4b4();
  }
  lVar12 = *plVar7;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0909ffdc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar1,1);
LAB_0909ffdc:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  lVar12 = *plVar7;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_090a0038;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar1,2);
LAB_090a0038:
  _in_stack_00000010 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  FUN_05f9ceb4(&stack0x00000010,*(undefined8 *)PTR_DAT_09fc3ad8);
  puVar1 = PTR_DAT_09fc3b50;
  piVar11 = unaff_x19 + 0xc;
  uVar9 = *(undefined8 *)piVar11;
  *unaff_x19 = -2;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_044bb4b4(piVar11,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f3a60(unaff_x19 + 2,uVar9,*(undefined8 *)puVar1);
  return;
}


