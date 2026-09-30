/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_notification_t$$Dispose
ENTRY_POINT: 090a42d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x090a44a8) */
/* WARNING: Removing unreachable block (ram,0x090a45f0) */

void Unity_Services_Vivox_vx_evt_session_notification_t__Dispose(void)

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
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 090a42d8 to 091a42df has its CatchHandler @ 090a4348 */
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar6 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 090a42ec to 091a430b has its CatchHandler @ 090a434c */
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2bbb0) {
                    /* try { // try from 090a4324 to 091a4327 has its CatchHandler @ 090a43b4 */
                    /* try { // try from 090a4328 to 091a432b has its CatchHandler @ 090a4380 */
                    /* try { // try from 090a432c to 091a432f has its CatchHandler @ 090a4374 */
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_090a4330;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_090a4330:
                    /* try { // try from 090a4330 to 091a4333 has its CatchHandler @ 090a4370 */
                    /* try { // try from 090a4334 to 091a4337 has its CatchHandler @ 090a4368 */
                    /* try { // try from 090a4338 to 091a433b has its CatchHandler @ 090a4360 */
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_09f2bbb8;
  puVar1 = PTR_DAT_09f1f018;
                    /* try { // try from 090a433c to 091a433f has its CatchHandler @ 090a4358 */
                    /* try { // try from 090a4340 to 091a4343 has its CatchHandler @ 090a43ac */
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
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_090a43a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_090a43a0:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if ((-1 < unaff_w27) || (plVar4 == (long *)0x0)) goto LAB_090a449c;
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_090a4474;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_090a43fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_090a43fc:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0984a658();
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_090a4490;
    }
  }
LAB_090a4474:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_090a4490:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_090a449c:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0984afbc();
  FUN_090a34ec();
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20db0);
  FUN_0984792c(uVar5,0);
  FUN_098487f0();
  if (*(long *)(unaff_x26 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar5 = FUN_09848d40();
  in_stack_00000008 = FUN_090a8948(uVar5,0);
  uVar7 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc3d60);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
    thunk_FUN_044bb4b4(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04912798(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    uVar5 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc3d58);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_09fc3d50;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  }
  return;
}


