/*
FUNCTION_NAME: OVRPlugin.OVRP_1_17_0$$.cctor
ENTRY_POINT: 051e63b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_17_0___cctor(void)

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 uStack000000000000012c;
  undefined4 in_stack_00000130;
  undefined8 uStack0000000000000134;
  undefined8 uStack0000000000000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc);
  *(undefined8 *)(unaff_x20 + 0x318) = *(undefined8 *)(unaff_x22 + 0x14);
  *(undefined8 *)(unaff_x20 + 0x310) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30c) = in_stack_00000168;
  *(undefined8 *)(unaff_x20 + 0x304) = in_stack_00000160;
  uStack0000000000000140 = 0;
  uStack0000000000000148 = 0;
  uStack000000000000014c = 0;
  uStack0000000000000158 = 0;
  uStack0000000000000150 = 0;
  uStack0000000000000154 = 0;
  FUN_05effcac(DAT_013de4f0,uStack0000000000000014,uStack0000000000000010,uStack000000000000000c,
               DAT_013de2ec,DAT_013ddf34,uStack0000000000000008,&stack0x00000140,0);
  uStack0000000000000134 = CONCAT44(uStack0000000000000158,uStack0000000000000154);
  in_stack_00000130 = uStack0000000000000150;
  in_stack_00000128 = uStack0000000000000148;
  uStack000000000000012c = uStack000000000000014c;
  in_stack_00000120 = uStack0000000000000140;
  if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 800) = 0x17;
    *(undefined8 *)(unaff_x20 + 0x338) = uStack0000000000000134;
    *(ulong *)(unaff_x20 + 0x330) = CONCAT44(uStack0000000000000150,uStack000000000000014c);
    *(ulong *)(unaff_x20 + 0x32c) = CONCAT44(uStack000000000000014c,uStack0000000000000148);
    *(undefined8 *)(unaff_x20 + 0x324) = uStack0000000000000140;
    in_stack_00000100 = 0;
    uStack0000000000000108 = 0;
    uStack000000000000010c = 0;
    in_stack_00000118 = 0;
    uStack0000000000000110 = 0;
    uStack0000000000000114 = 0;
    FUN_05effcac(DAT_013de14c,uStack0000000000000004,uStack0000000000000000,&stack0x00000100,0);
    if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
      *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114);
      *(ulong *)(unaff_x20 + 0x350) = CONCAT44(uStack0000000000000110,uStack000000000000010c);
      *(ulong *)(unaff_x20 + 0x34c) = CONCAT44(uStack000000000000010c,uStack0000000000000108);
      *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


