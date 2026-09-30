/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 06ac7194
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState4(ulong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong in_x9;
  ulong in_x10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar4;
  long lVar5;
  long lVar6;
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
  
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = in_x10 | in_x9;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
    in_x10 = *param_1;
  }
  lVar6 = *unaff_x20;
  if (lVar6 != 0) {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar4) {
        if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_07a1747c(&stack0x00000020,0);
        *(undefined4 *)(unaff_x19 + 0x3c) = 0x3f800000;
        *(undefined8 *)(unaff_x19 + 0x34) = uStack0000000000000034;
        *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(unaff_x19 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000020;
        *(undefined8 *)(unaff_x19 + 0x40) = 0;
        return;
      }
      if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_07a1747c(&stack0x00000040,0);
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_06ac729c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar1 = (undefined8 *)(lVar6 + lVar5);
      *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000054;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      puVar1[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *puVar1 = in_stack_00000040;
      lVar6 = *unaff_x21;
      FUN_07a1747c(&stack0x00000020,0);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_06ac729c;
      puVar1 = (undefined8 *)(lVar6 + lVar5);
      lVar5 = lVar5 + 0x1c;
      *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *puVar1 = in_stack_00000020;
      lVar6 = *unaff_x20;
      uVar4 = uVar4 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


