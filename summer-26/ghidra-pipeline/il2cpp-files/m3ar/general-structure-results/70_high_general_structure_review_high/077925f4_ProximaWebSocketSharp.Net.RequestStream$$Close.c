/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.RequestStream$$Close
ENTRY_POINT: 077925f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void ProximaWebSocketSharp_Net_RequestStream__Close(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_x10;
  long in_x11;
  long in_x12;
  code *in_x13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int iVar4;
  ulong unaff_x23;
  long lVar5;
  long lVar6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  
  (*in_x13)(param_1,in_x11 + in_x10 + in_x12);
  if ((long *)*unaff_x22 != (long *)0x0) {
    uVar3 = (**(code **)(*(long *)*unaff_x22 + 0x358))();
    FUN_07791370(uVar3,*(undefined4 *)(unaff_x20 + 0x2c));
    FUN_08573818(&stack0x000001d0,unaff_s10,unaff_s9,unaff_s8,0);
    if (0 < *(int *)(unaff_x20 + 0x30)) {
      lVar5 = 0;
      do {
        iVar4 = 0;
        uVar1 = lVar5 + (unaff_x23 & 0xffffffff);
        do {
          lVar6 = *unaff_x19;
          if (lVar6 == 0) goto LAB_07792834;
          FUN_0744ce50();
          if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_07792830;
          FUN_08572e3c(lVar6 + (long)(int)uVar1 * 0x40 + 0x20,iVar4,0);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0x10);
        lVar6 = *unaff_x19;
        if (lVar6 == 0) goto LAB_07792834;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_07792830:
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        lVar2 = lVar6 + (long)(int)uVar1 * 0x40;
        in_stack_000000d8 = *(undefined8 *)(lVar2 + 0x28);
        in_stack_000000d0 = *(undefined8 *)(lVar2 + 0x20);
        in_stack_000000e8 = *(undefined8 *)(lVar2 + 0x38);
        in_stack_000000e0 = *(undefined8 *)(lVar2 + 0x30);
        in_stack_000000f8 = *(undefined8 *)(lVar2 + 0x48);
        in_stack_000000f0 = *(undefined8 *)(lVar2 + 0x40);
        in_stack_00000108 = *(undefined8 *)(lVar2 + 0x58);
        in_stack_00000100 = *(undefined8 *)(lVar2 + 0x50);
        in_stack_00000118 = in_stack_000001d8;
        in_stack_00000110 = in_stack_000001d0;
        in_stack_00000128 = in_stack_000001e8;
        in_stack_00000120 = in_stack_000001e0;
        in_stack_00000130 = in_stack_000001f0;
        in_stack_00000138 = in_stack_000001f8;
        in_stack_00000140 = in_stack_00000200;
        in_stack_00000148 = in_stack_00000208;
        in_stack_00000190 = in_stack_000000d0;
        in_stack_00000198 = in_stack_000000d8;
        in_stack_000001a0 = in_stack_000000e0;
        in_stack_000001a8 = in_stack_000000e8;
        in_stack_000001b0 = in_stack_000000f0;
        in_stack_000001b8 = in_stack_000000f8;
        in_stack_000001c0 = in_stack_00000100;
        in_stack_000001c8 = in_stack_00000108;
        FUN_0857332c(&stack0x00000150,&stack0x00000110,&stack0x000000d0,0);
        in_stack_00000018 = in_stack_000001d8;
        in_stack_00000010 = in_stack_000001d0;
        in_stack_00000028 = in_stack_000001e8;
        in_stack_00000020 = in_stack_000001e0;
        in_stack_00000058 = in_stack_00000158;
        in_stack_00000050 = in_stack_00000150;
        in_stack_00000068 = in_stack_00000168;
        in_stack_00000060 = in_stack_00000160;
        in_stack_00000078 = in_stack_00000178;
        in_stack_00000070 = in_stack_00000170;
        in_stack_00000088 = in_stack_00000188;
        in_stack_00000080 = in_stack_00000180;
        in_stack_00000030 = in_stack_000001f0;
        in_stack_00000038 = in_stack_000001f8;
        in_stack_00000040 = in_stack_00000200;
        in_stack_00000048 = in_stack_00000208;
        FUN_0857332c(&stack0x00000090,&stack0x00000050,&stack0x00000010,0);
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_07792830;
        lVar5 = lVar5 + 1;
        *(undefined8 *)(lVar2 + 0x48) = in_stack_000000b8;
        *(undefined8 *)(lVar2 + 0x40) = in_stack_000000b0;
        *(undefined8 *)(lVar2 + 0x58) = in_stack_000000c8;
        *(undefined8 *)(lVar2 + 0x50) = in_stack_000000c0;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000098;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000090;
        *(undefined8 *)(lVar2 + 0x38) = in_stack_000000a8;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_000000a0;
      } while (lVar5 < *(int *)(unaff_x20 + 0x30));
    }
    return;
  }
LAB_07792834:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


