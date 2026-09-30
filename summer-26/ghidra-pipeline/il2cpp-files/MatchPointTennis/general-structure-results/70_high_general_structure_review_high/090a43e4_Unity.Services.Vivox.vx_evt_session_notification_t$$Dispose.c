/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_notification_t$$Dispose
ENTRY_POINT: 090a43e4
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
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 in_stack_00000008;
  
code_r0x090a43e4:
                    /* try { // try from 090a43e4 to 091a444f has its CatchHandler @ 090a3d80 */
  puVar2 = (undefined8 *)FUN_044822ac();
  do {
    (*(code *)*puVar2)();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0984a658();
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_090a43a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_090a43a0:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if ((-1 < unaff_w27) || (unaff_x22 == (long *)0x0)) goto LAB_090a449c;
      lVar4 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 090a4450 to 091a445f has its CatchHandler @ 090a4460 */
      if (uVar5 == 0) goto LAB_090a4474;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 == 0) goto code_r0x090a43e4;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *unaff_x24) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto code_r0x090a43e4;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
                    /* try { // try from 090a4468 to 091a4473 has its CatchHandler @ 090a3d80 */
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 090a4464 with catch @ 090a4470 */
    if (uVar5 == 0) break;
                    /* catch() { ... } // from try @ 090a43cc with catch @ 090a4460
                       catch() { ... } // from try @ 090a4450 with catch @ 090a4460 */
                    /* try { // try from 090a4464 to 091a4467 has its CatchHandler @ 090a4470 */
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_090a4490;
    }
  }
LAB_090a4474:
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_090a4490:
  (*(code *)*puVar2)();
LAB_090a449c:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0984afbc();
  FUN_090a34ec();
  uVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20db0);
  FUN_0984792c(uVar3,0);
                    /* try { // try from 090a44f0 to 091a468f has its CatchHandler @ 090a44f0
                       catch() { ... } // from try @ 090a44f0 with catch @ 090a44f0
                       catch() { ... } // from try @ 090a49f0 with catch @ 090a44f0
                       catch() { ... } // from try @ 090a4ab4 with catch @ 090a44f0
                       catch() { ... } // from try @ 090a4b54 with catch @ 090a44f0
                       catch() { ... } // from try @ 090a4bd8 with catch @ 090a44f0 */
  FUN_098487f0();
  if (*(long *)(unaff_x26 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar3 = FUN_09848d40();
  in_stack_00000008 = FUN_090a8948(uVar3,0);
  uVar5 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc3d60);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
    thunk_FUN_044bb4b4(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04912798(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    uVar3 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fc3d58);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_09fc3d50;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_066f3a60(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
  }
  return;
}


