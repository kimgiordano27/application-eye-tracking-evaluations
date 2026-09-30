/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$.cctor
ENTRY_POINT: 056a7464
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0___cctor(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  long lVar4;
  undefined4 unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  uint uVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  long in_stack_00000088;
  
  lVar1 = FUN_055339fc();
  if (unaff_x28 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 == 0) goto LAB_056a75d0;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_056a75dc:
        if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        goto LAB_056a7610;
      }
      uVar3 = *(undefined8 *)(lVar2 + lVar4 * 8 + 0x20);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = FUN_0540cd70(uVar3,0);
      uVar3 = FUN_055339fc(uVar3,0);
      lVar2 = *(long *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x22 + lVar4 * 8) = uVar3;
      if (lVar2 == 0) goto LAB_056a75d0;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_056a75dc;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar1 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar4 * 4 + 0x20);
      lVar4 = (long)(int)uVar5;
    } while ((int)uVar5 < unaff_x28);
  }
  if (*(long *)(unaff_x20 + 0x38) == 0) {
LAB_056a75d0:
    if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    FUN_056a6864(&stack0x00000010);
    uStack000000000000005c = (undefined4)in_stack_00000018;
    uStack0000000000000060 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
    uStack0000000000000054 = (undefined4)in_stack_00000010;
    uStack0000000000000058 = (undefined4)((ulong)in_stack_00000010 >> 0x20);
    uStack000000000000006c = (undefined4)in_stack_00000028;
    uStack0000000000000070 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
    uStack0000000000000064 = (undefined4)in_stack_00000020;
    uStack0000000000000068 = (undefined4)((ulong)in_stack_00000020 >> 0x20);
    uStack000000000000007c = (undefined4)in_stack_00000038;
    in_stack_00000080 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
    uStack0000000000000074 = (undefined4)in_stack_00000030;
    uStack0000000000000078 = (undefined4)((ulong)in_stack_00000030 >> 0x20);
    if (DAT_06db4c73 == '\0') {
      FUN_02d965b8(PTR_DAT_069fb978);
      DAT_06db4c73 = '\x01';
    }
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    lVar4 = *(long *)(*(long *)PTR_DAT_069fb978 + 0xb8);
    FUN_05641fa0(*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                 -*(float *)(lVar4 + 0x50),&stack0x00000040,0);
    *unaff_x19 = unaff_x28;
    unaff_x19[1] = unaff_x22;
    unaff_x19[5] = in_stack_00000040;
    *(undefined4 *)(unaff_x19 + 6) = in_stack_00000048;
    unaff_x19[2] = lVar1;
    *(undefined4 *)(unaff_x19 + 3) = unaff_w26;
    *(undefined4 *)((long)unaff_x19 + 0x1c) = 0;
    *(ulong *)((long)unaff_x19 + 0x3c) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    *(ulong *)((long)unaff_x19 + 0x34) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    unaff_x19[4] = unaff_x21;
    *(ulong *)((long)unaff_x19 + 0x4c) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(ulong *)((long)unaff_x19 + 0x44) = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    *(ulong *)((long)unaff_x19 + 0x5c) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    *(ulong *)((long)unaff_x19 + 0x54) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    *(undefined4 *)((long)unaff_x19 + 100) = in_stack_00000080;
    if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000088) {
      return;
    }
  }
LAB_056a7610:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


