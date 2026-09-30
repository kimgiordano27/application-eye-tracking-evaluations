/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 05ff0308
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceListSaveComplete(void)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  FUN_0445a280();
  FUN_05fef784(&stack0x000000a0);
  uVar3 = FUN_05ff0190();
  uVar2 = FUN_0445a2c8();
  uStack0000000000000008 = (undefined4)in_stack_000000a8;
  if ((uVar3 & 1) == 0) {
    lVar8 = *(long *)(unaff_x19 + 0x170);
    uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x22 + 0x2c);
    if (lVar8 != 0) {
      pcVar9 = *(code **)(lVar8 + 0x18);
      uVar4 = *(undefined8 *)(lVar8 + 0x40);
      in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar2);
      *(ulong *)(unaff_x22 + 0x4c) = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      *(undefined8 *)(unaff_x22 + 0x44) = in_stack_000000a0;
      in_stack_000000e0 = 0;
      in_stack_000000d0 = *(undefined8 *)(unaff_x22 + 0x2c);
      in_stack_000000d8 = *(undefined8 *)(unaff_x22 + 0x34);
      (*pcVar9)(uVar4,&stack0x000000c0,*(undefined8 *)(lVar8 + 0x28));
      return;
    }
  }
  else {
    in_stack_000000c8 = in_stack_000000a8;
    in_stack_000000c0 = in_stack_000000a0;
    *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x34);
    *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x2c);
    if (unaff_x20 != 0) {
      if (*(char *)(unaff_x20 + 0xe1) == '\0') {
        puVar5 = &stack0x00000060;
        uVar7 = 2;
        in_stack_00000060 = in_stack_000000a0;
        uStack0000000000000074 = *(undefined8 *)(unaff_x22 + 0x54);
        uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x22 + 0x4c);
        uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0x4c) >> 0x20);
        uStack0000000000000068 = uStack0000000000000008;
      }
      else {
        puVar5 = &stack0x00000080;
        uVar7 = 3;
        in_stack_00000088 = in_stack_000000a8;
        in_stack_00000080 = in_stack_000000a0;
        *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x54);
        *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x4c);
      }
      uVar4 = *(undefined8 *)((long)puVar5 + 0x14);
      uVar10 = puVar5[1];
      uStack0000000000000020 = *puVar5;
      uStack0000000000000054 = (undefined4)uVar4;
      uStack0000000000000058 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20);
      uStack000000000000004c = (undefined4)((ulong)uVar10 >> 0x20);
      cVar1 = *(char *)(unaff_x20 + 0xe0);
      uStack0000000000000028 = (undefined4)uVar10;
      uStack000000000000002c = uStack000000000000004c;
      uStack0000000000000030 = uStack0000000000000050;
      lVar8 = *(long *)(unaff_x19 + 0x170);
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000038 = uStack0000000000000058;
      if (lVar8 != 0) {
        in_stack_000000d0 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        pcVar9 = *(code **)(lVar8 + 0x18);
        uVar6 = *(undefined8 *)(lVar8 + 0x40);
        in_stack_000000c0._4_4_ = (undefined4)((ulong)in_stack_000000a0 >> 0x20);
        in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar2);
        *(undefined8 *)(unaff_x22 + 0x4c) = uVar10;
        *(undefined8 *)(unaff_x22 + 0x44) = uStack0000000000000020;
        in_stack_000000e0 = CONCAT44((uint)(cVar1 != '\0') << 1,uVar7);
        in_stack_000000d8 = uVar4;
        (*pcVar9)(uVar6,&stack0x000000c0,*(undefined8 *)(lVar8 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


