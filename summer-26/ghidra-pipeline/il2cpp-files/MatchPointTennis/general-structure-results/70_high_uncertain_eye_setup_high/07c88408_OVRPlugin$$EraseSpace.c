/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 07c88408
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpace(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  do {
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* try { // try from 07c88420 to 07d8843f has its CatchHandler @ 07c884f0 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
                    /* try { // try from 07c88450 to 07d88453 has its CatchHandler @ 07c884e0 */
                    /* try { // try from 07c88458 to 07d8846b has its CatchHandler @ 07c884dc */
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_07c88460;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 07c88440 to 07d8844b has its CatchHandler @ 07c884e4 */
    puVar1 = (undefined8 *)FUN_044822ac(plVar6,*unaff_x22,8);
LAB_07c88460:
    uVar4 = (*(code *)*puVar1)(plVar6,unaff_w20,&stack0x00000020,puVar1[1]);
                    /* try { // try from 07c88474 to 07d88477 has its CatchHandler @ 07c884d4 */
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x48);
                    /* try { // try from 07c8847c to 07d8848f has its CatchHandler @ 07c884d0 */
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      uVar2 = *unaff_x26;
      in_stack_00000080 = in_stack_00000020;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000034;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      FUN_0737a2c8(lVar3,unaff_w20,&stack0x00000080,uVar2);
    }
    uVar4 = FUN_0767900c(&stack0x00000060,*unaff_x25);
    unaff_w20 = in_stack_00000070;
    if ((uVar4 & 1) == 0) {
      FUN_07679008(&stack0x00000060,*unaff_x23);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_07c883b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(plVar6,*unaff_x22,7);
LAB_07c883b8:
    uVar4 = (*(code *)*puVar1)(plVar6,unaff_w20,&stack0x00000040,puVar1[1]);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar2 = *unaff_x26;
      in_stack_00000080 = in_stack_00000040;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      FUN_0737a2c8(lVar3,unaff_w20,&stack0x00000080,uVar2);
    }
  } while( true );
}


