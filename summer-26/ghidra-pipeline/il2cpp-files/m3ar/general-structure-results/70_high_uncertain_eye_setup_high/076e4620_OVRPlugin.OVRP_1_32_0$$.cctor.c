/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$.cctor
ENTRY_POINT: 076e4620
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_32_0___cctor(undefined1 param_1 [16])

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined4 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  
  uStack0000000000000108 = param_1._8_8_;
  uStack0000000000000100 = param_1._0_8_;
  uStack0000000000000150 = 0;
  uStack0000000000000120 = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000ec = 0;
  uStack00000000000000f8 = 0;
                    /* try { // try from 076e463c to 077e466b has its CatchHandler @ 076e49d0 */
  uStack00000000000000f0 = 0;
  uStack00000000000000f4 = 0;
  uStack00000000000000c0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000cc = 0;
  uStack00000000000000d8 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000d4 = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000ac = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  uStack00000000000000b4 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000078 = 0;
                    /* try { // try from 076e466c to 077e48df has its CatchHandler @ 076e44ac */
  uStack0000000000000070 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000110 = uStack0000000000000100;
  uStack0000000000000118 = uStack0000000000000108;
  uStack0000000000000130 = uStack0000000000000100;
  uStack0000000000000138 = uStack0000000000000108;
  uStack0000000000000140 = uStack0000000000000100;
  uStack0000000000000148 = uStack0000000000000108;
  FUN_054b53a4();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar2 = FUN_08589e5c();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) goto LAB_076e4808;
    if (*(char *)(unaff_x20 + 0xb0) != '\0') {
      uVar1 = FUN_054b53e4();
      FUN_076e3dec(&stack0x00000160);
      if (*(char *)(unaff_x20 + 0xe1) == '\0') {
        puVar3 = &stack0x000000c0;
        uStack00000000000000c8 = uStack0000000000000168;
        uStack00000000000000c0 = in_stack_00000160;
        uStack00000000000000d4 = uStack0000000000000174;
        uStack00000000000000d8 = in_stack_00000178;
        uStack00000000000000cc = uStack000000000000016c;
        uStack00000000000000d0 = uStack0000000000000170;
      }
      else {
        puVar3 = &stack0x000000e0;
        uStack00000000000000e8 = uStack0000000000000168;
        uStack00000000000000e0 = in_stack_00000160;
        uStack00000000000000f4 = uStack0000000000000174;
        uStack00000000000000f8 = in_stack_00000178;
        uStack00000000000000ec = uStack000000000000016c;
        uStack00000000000000f0 = uStack0000000000000170;
      }
      uStack0000000000000040 = *puVar3;
      uVar7 = *(undefined8 *)((long)puVar3 + 0x14);
      uVar5 = *(undefined8 *)((long)puVar3 + 0xc);
      uStack00000000000000a8 = (undefined4)puVar3[1];
      uStack00000000000000b4 = (undefined4)uVar7;
      uStack00000000000000b8 = (undefined4)((ulong)uVar7 >> 0x20);
      uStack00000000000000ac = (undefined4)uVar5;
      uStack000000000000004c = uStack00000000000000ac;
      uStack00000000000000b0 = (undefined4)((ulong)uVar5 >> 0x20);
      uStack0000000000000050 = uStack00000000000000b0;
      puVar3 = &stack0x00000060;
      if (*(char *)(unaff_x20 + 0xe0) != '\0') {
        puVar3 = &stack0x00000080;
      }
      uStack0000000000000048 = uStack00000000000000a8;
      uStack00000000000000a0 = uStack0000000000000040;
      puVar3[1] = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      *puVar3 = uStack0000000000000040;
      *(undefined8 *)((long)puVar3 + 0x14) = uVar7;
      *(undefined8 *)((long)puVar3 + 0xc) = uVar5;
      uStack0000000000000054 = uStack00000000000000b4;
      uStack0000000000000058 = uStack00000000000000b8;
      FUN_076deebc(&stack0x00000130,uVar1);
      lVar4 = *(long *)(unaff_x19 + 0x170);
      uVar5 = uStack0000000000000150;
      uVar7 = uStack0000000000000140;
      uStack0000000000000118 = uStack0000000000000148;
      uVar6 = uStack0000000000000130;
      uStack0000000000000108 = uStack0000000000000138;
      if (lVar4 == 0) goto LAB_076e4808;
      goto LAB_076e47d4;
    }
  }
  uVar1 = FUN_054b53e4();
  FUN_076e3dec(&stack0x00000024);
  FUN_076deebc(&stack0x00000100,uVar1,&stack0x00000024,0,0,0);
  lVar4 = *(long *)(unaff_x19 + 0x170);
  uVar5 = uStack0000000000000120;
  uVar7 = uStack0000000000000110;
  uVar6 = uStack0000000000000100;
  if (lVar4 != 0) {
LAB_076e47d4:
    uStack0000000000000168 = (undefined4)uStack0000000000000108;
    uStack000000000000016c = (undefined4)((ulong)uStack0000000000000108 >> 0x20);
    in_stack_00000178 = (undefined4)uStack0000000000000118;
    uStack000000000000017c = (undefined4)((ulong)uStack0000000000000118 >> 0x20);
    uStack0000000000000170 = (undefined4)uVar7;
    uStack0000000000000174 = (undefined4)((ulong)uVar7 >> 0x20);
    in_stack_00000160 = uVar6;
    in_stack_00000180 = uVar5;
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),&stack0x00000160,*(undefined8 *)(lVar4 + 0x28));
    return;
  }
LAB_076e4808:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


