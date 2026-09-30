/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 076e469c
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  
  uVar2 = FUN_08589e5c(param_1,param_2,0);
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) goto LAB_076e4808;
    if (*(char *)(unaff_x20 + 0xb0) != '\0') {
      uVar1 = FUN_054b53e4();
      FUN_076e3dec(&stack0x00000160);
      if (*(char *)(unaff_x20 + 0xe1) == '\0') {
        puVar3 = &stack0x000000c0;
        in_stack_000000c8 = in_stack_00000168;
        in_stack_000000c0 = in_stack_00000160;
        uStack00000000000000d4 = CONCAT44(in_stack_00000178,uStack0000000000000174);
        uStack00000000000000d0 = uStack0000000000000170;
      }
      else {
        puVar3 = &stack0x000000e0;
        in_stack_000000e8 = in_stack_00000168;
        in_stack_000000e0 = in_stack_00000160;
        uStack00000000000000f4 = CONCAT44(in_stack_00000178,uStack0000000000000174);
        uStack00000000000000f0 = uStack0000000000000170;
      }
      in_stack_00000040 = *puVar3;
      uStack0000000000000054 = *(undefined8 *)((long)puVar3 + 0x14);
      uVar7 = *(undefined8 *)((long)puVar3 + 0xc);
      uStack00000000000000a8 = (undefined4)puVar3[1];
      uStack00000000000000ac = (undefined4)uVar7;
      uStack000000000000004c = uStack00000000000000ac;
      uStack00000000000000b0 = (undefined4)((ulong)uVar7 >> 0x20);
      uStack0000000000000050 = uStack00000000000000b0;
      puVar3 = (undefined8 *)&stack0x00000060;
      if (*(char *)(unaff_x20 + 0xe0) != '\0') {
        puVar3 = (undefined8 *)&stack0x00000080;
      }
      uStack0000000000000048 = uStack00000000000000a8;
      in_stack_000000a0 = in_stack_00000040;
      puVar3[1] = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      *puVar3 = in_stack_00000040;
      *(undefined8 *)((long)puVar3 + 0x14) = uStack0000000000000054;
      *(undefined8 *)((long)puVar3 + 0xc) = uVar7;
      uStack00000000000000b4 = uStack0000000000000054;
      FUN_076deebc(&stack0x00000130,uVar1);
      lVar4 = *(long *)(unaff_x19 + 0x170);
      uVar7 = in_stack_00000150;
      uVar5 = in_stack_00000140;
      uVar6 = in_stack_00000148;
      uVar8 = in_stack_00000130;
      uVar9 = in_stack_00000138;
      if (lVar4 == 0) goto LAB_076e4808;
      goto LAB_076e47d4;
    }
  }
  uVar1 = FUN_054b53e4();
  FUN_076e3dec(&stack0x00000024);
  FUN_076deebc(&stack0x00000100,uVar1,&stack0x00000024,0,0,0);
  lVar4 = *(long *)(unaff_x19 + 0x170);
  uVar7 = in_stack_00000120;
  uVar5 = in_stack_00000110;
  uVar6 = in_stack_00000118;
  uVar8 = in_stack_00000100;
  uVar9 = in_stack_00000108;
  if (lVar4 != 0) {
LAB_076e47d4:
    in_stack_00000168 = (undefined4)uVar9;
    uStack000000000000016c = (undefined4)((ulong)uVar9 >> 0x20);
    in_stack_00000178 = (undefined4)uVar6;
    uStack000000000000017c = (undefined4)((ulong)uVar6 >> 0x20);
    uStack0000000000000170 = (undefined4)uVar5;
    uStack0000000000000174 = (undefined4)((ulong)uVar5 >> 0x20);
    in_stack_00000160 = uVar8;
    in_stack_00000180 = uVar7;
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),&stack0x00000160,*(undefined8 *)(lVar4 + 0x28));
    return;
  }
LAB_076e4808:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


