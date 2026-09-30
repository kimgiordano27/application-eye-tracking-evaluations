/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_edit_message_t$$Dispose
ENTRY_POINT: 090a38b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x090a3d5c) */
/* WARNING: Removing unreachable block (ram,0x090a3a9c) */
/* WARNING: Removing unreachable block (ram,0x090a3be4) */
/* WARNING: Removing unreachable block (ram,0x090a3d70) */
/* WARNING: Removing unreachable block (ram,0x090a3cf4) */
/* WARNING: Removing unreachable block (ram,0x090a3d1c) */
/* WARNING: Removing unreachable block (ram,0x090a3d20) */

void Unity_Services_Vivox_vx_evt_session_edit_message_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  int unaff_w24;
  long unaff_x25;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000018;
  
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* try { // try from 090a38dc to 091a38ff has its CatchHandler @ 090a3c20 */
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2bbb0) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_090a3924;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_090a3924:
                    /* try { // try from 090a392c to 091a395f has its CatchHandler @ 090a3c40 */
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_09f2bbb8;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 090a3968 to 091a3973 has its CatchHandler @ 090a3c0c */
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_090a3994;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
                    /* try { // try from 090a3974 to 091a397f has its CatchHandler @ 090a3c08 */
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_090a3994:
                    /* try { // try from 090a3998 to 091a399f has its CatchHandler @ 090a3bfc */
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if ((-1 < unaff_w24) || (plVar4 == (long *)0x0)) goto LAB_090a3a90;
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_090a3a68;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
                    /* try { // try from 090a39ac to 091a39b3 has its CatchHandler @ 090a3bf4 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 090a39c4 to 091a39cf has its CatchHandler @ 090a3bec */
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_090a39f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_090a39f0:
    auVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0984a658(*unaff_x20,auVar10._0_8_,auVar10._8_8_,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_090a3a84;
    }
  }
LAB_090a3a68:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_090a3a84:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_090a3a90:
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0984afbc(*unaff_x20,*(undefined4 *)(unaff_x25 + 0x28),0);
  if ((*(long *)(unaff_x25 + 0x30) != 0) &&
     (((uVar7 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f20c90
                                   ,0), (uVar7 & 1) != 0 ||
       (uVar7 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f20d78
                                   ,0), (uVar7 & 1) != 0)) ||
      (uVar7 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f22ec0,
                                  0), (uVar7 & 1) != 0)))) {
    lVar6 = *unaff_x20;
    uVar9 = *(undefined8 *)(unaff_x25 + 0x30);
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20e00);
    FUN_0984b468(uVar5,uVar9,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_098488b8(lVar6,uVar5,0);
  }
  lVar6 = *unaff_x20;
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20db0);
  FUN_0984792c(uVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_098487f0(lVar6,uVar5,0);
  if (*(long *)(unaff_x25 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar5 = FUN_09848d40(*unaff_x20,0);
  in_stack_00000018 = FUN_090a8948(uVar5,0);
  uVar7 = FUN_067804ac(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc3d60);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)PTR_DAT_09fc3d00 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0491257c(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar5 = FUN_067804f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc3d58);
    if ((unaff_w24 < 0) && (plVar4 = *(long **)(unaff_x19 + 10), plVar4 != (long *)0x0)) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_090a3c9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_090a3c9c:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_09fc3d00 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_09fc3d50);
  }
  return;
}


