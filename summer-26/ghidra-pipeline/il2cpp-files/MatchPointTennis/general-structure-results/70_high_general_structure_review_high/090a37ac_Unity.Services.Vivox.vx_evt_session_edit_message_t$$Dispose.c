/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_edit_message_t$$Dispose
ENTRY_POINT: 090a37ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x090a3d5c) */
/* WARNING: Removing unreachable block (ram,0x090a3d70) */
/* WARNING: Removing unreachable block (ram,0x090a3a9c) */
/* WARNING: Removing unreachable block (ram,0x090a3cf4) */
/* WARNING: Removing unreachable block (ram,0x090a3d1c) */
/* WARNING: Removing unreachable block (ram,0x090a3d20) */

void Unity_Services_Vivox_vx_evt_session_edit_message_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000018;
  
                    /* try { // try from 090a37b0 to 091a37c7 has its CatchHandler @ 090a3c34 */
  FUN_04447ba8(PTR_DAT_09f20db0);
  FUN_04447ba8(PTR_DAT_09f1f008);
  FUN_04447ba8(PTR_DAT_09f2bbb0);
  FUN_04447ba8(PTR_DAT_09f2bbb8);
  FUN_04447ba8(PTR_DAT_09f1f018);
                    /* try { // try from 090a37e8 to 091a37eb has its CatchHandler @ 090a3bd4 */
                    /* try { // try from 090a37ec to 091a381f has its CatchHandler @ 090a3c44 */
  FUN_04447ba8(PTR_DAT_09f20dd0);
  FUN_04447ba8(PTR_DAT_09f20dd8);
  FUN_04447ba8(PTR_DAT_09fc3d58);
  FUN_04447ba8(PTR_DAT_09fc3d60);
  FUN_04447ba8(PTR_DAT_09f20c88);
  FUN_04447ba8(PTR_DAT_09f20e00);
  FUN_04447ba8(PTR_DAT_09f20d78);
  FUN_04447ba8(PTR_DAT_09f20c90);
  FUN_04447ba8(PTR_DAT_09f22ec0);
  *(undefined1 *)(unaff_x20 + 0xa72) = 1;
  in_stack_00000018 = 0;
  iVar11 = *unaff_x19;
  if (iVar11 != 0) {
    lVar12 = *(long *)(unaff_x19 + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar5 = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = *(undefined8 *)(lVar12 + 0x18);
    lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20c88);
    FUN_098484c8(lVar3,uVar5,uVar10,0);
    plVar9 = (long *)(unaff_x19 + 10);
    *plVar9 = lVar3;
    thunk_FUN_044bb4b4(plVar9,lVar3);
    plVar8 = *(long **)(lVar12 + 0x20);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2bbb0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_090a3924;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f2bbb0,0);
LAB_090a3924:
    plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
    puVar2 = PTR_DAT_09f2bbb8;
    puVar1 = PTR_DAT_09f1f018;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_090a3994;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,0);
LAB_090a3994:
      uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar6 & 1) == 0) {
        if ((-1 < iVar11) || (plVar8 == (long *)0x0)) goto LAB_090a3a90;
        lVar3 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 == 0) goto LAB_090a3a68;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_090a3a50;
      }
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_090a39f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar2,0);
LAB_090a39f0:
      auVar13 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_0984a658(*plVar9,auVar13._0_8_,auVar13._8_8_,0);
    } while( true );
  }
  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
  iVar11 = -1;
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  *unaff_x19 = -1;
  goto LAB_090a3bbc;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_090a3a50:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_090a3a84;
    }
  }
LAB_090a3a68:
  puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f1f008,0);
LAB_090a3a84:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_090a3a90:
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0984afbc(*plVar9,*(undefined4 *)(lVar12 + 0x28),0);
  if ((*(long *)(lVar12 + 0x30) != 0) &&
     (((uVar6 = thunk_FUN_078b3114(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_09f20c90,0)
       , (uVar6 & 1) != 0 ||
       (uVar6 = thunk_FUN_078b3114(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_09f20d78,0)
       , (uVar6 & 1) != 0)) ||
      (uVar6 = thunk_FUN_078b3114(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_09f22ec0,0),
      (uVar6 & 1) != 0)))) {
    lVar3 = *plVar9;
    uVar10 = *(undefined8 *)(lVar12 + 0x30);
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20e00);
    FUN_0984b468(uVar5,uVar10,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_098488b8(lVar3,uVar5,0);
  }
  lVar3 = *plVar9;
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20db0);
  FUN_0984792c(uVar5,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_098487f0(lVar3,uVar5,0);
  if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar5 = FUN_09848d40(*plVar9,0);
  in_stack_00000018 = FUN_090a8948(uVar5,0);
  uVar6 = FUN_067804ac(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc3d60);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)PTR_DAT_09fc3d00 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0491257c(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_090a3bbc:
  uVar5 = FUN_067804f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc3d58);
  if ((iVar11 < 0) && (plVar9 = *(long **)(unaff_x19 + 10), plVar9 != (long *)0x0)) {
    lVar12 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_090a3c9c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f1f008,0);
LAB_090a3c9c:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  *unaff_x19 = -2;
  if (*(int *)(*(long *)PTR_DAT_09fc3d00 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_09fc3d50);
  return;
}


