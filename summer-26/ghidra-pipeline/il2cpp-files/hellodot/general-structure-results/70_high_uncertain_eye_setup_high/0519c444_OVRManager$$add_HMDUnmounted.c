/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 0519c444
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDUnmounted(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 uStack000000000000012c;
  undefined4 in_stack_00000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x20 + 0x1fa) = 1;
  lVar3 = FUN_02ce7ad4(*unaff_x22,2);
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uStack000000000000012c = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  uStack0000000000000134 = 0;
  FUN_05eab7d4(0,0x40a00000,&stack0x00000120,0);
  if (lVar3 != 0) {
    uStack0000000000000114 = CONCAT44(in_stack_00000138,uStack0000000000000134);
    uStack0000000000000108 = in_stack_00000128;
    in_stack_00000100 = in_stack_00000120;
    uStack000000000000010c = uStack000000000000012c;
    uStack0000000000000110 = in_stack_00000130;
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000114;
      *(ulong *)(lVar3 + 0x2c) = CONCAT44(in_stack_00000130,uStack000000000000012c);
      *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack000000000000012c,in_stack_00000128);
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000120;
      in_stack_000000e0 = 0;
      uStack00000000000000e8 = 0;
      uStack00000000000000ec = 0;
      in_stack_000000f8 = 0;
      uStack00000000000000f0 = 0;
      uStack00000000000000f4 = 0;
      FUN_05eab7d4(0x3f800000,0x41a00000,&stack0x000000e0,0);
      puVar2 = PTR_DAT_065d83c8;
      uStack00000000000000d4 = CONCAT44(in_stack_000000f8,uStack00000000000000f4);
      uStack00000000000000d0 = uStack00000000000000f0;
      uStack00000000000000c8 = uStack00000000000000e8;
      uStack00000000000000cc = uStack00000000000000ec;
      in_stack_000000c0 = in_stack_000000e0;
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x50) = uStack00000000000000d4;
        *(ulong *)(lVar3 + 0x48) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
        *(ulong *)(lVar3 + 0x44) = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        *(undefined8 *)(lVar3 + 0x3c) = in_stack_000000e0;
        uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
        FUN_05eac15c(uVar4,lVar3,0);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
        uVar4 = FUN_05eac010(0,0x3f800000,0x3f800000,0);
        *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
        lVar3 = FUN_02ce7ad4(*unaff_x22,2);
        in_stack_000000a0 = 0;
        uStack00000000000000a8 = 0;
        uStack00000000000000ac = 0;
        in_stack_000000b8 = 0;
        uStack00000000000000b0 = 0;
        uStack00000000000000b4 = 0;
        FUN_05eab7d4(0xc2b40000,0xc2b40000,&stack0x000000a0,0);
        if (lVar3 == 0) goto LAB_0519c67c;
        uStack0000000000000094 = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
        uStack0000000000000088 = uStack00000000000000a8;
        in_stack_00000080 = in_stack_000000a0;
        uStack000000000000008c = uStack00000000000000ac;
        uStack0000000000000090 = uStack00000000000000b0;
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000094;
          *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
          *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          *(undefined8 *)(lVar3 + 0x20) = in_stack_000000a0;
          in_stack_00000060 = 0;
          uStack0000000000000068 = 0;
          uStack000000000000006c = 0;
          in_stack_00000078 = 0;
          uStack0000000000000070 = 0;
          uStack0000000000000074 = 0;
          FUN_05eab7d4(0x42b40000,0x42b40000,&stack0x00000060,0);
          if (1 < *(uint *)(lVar3 + 0x18)) {
            *(ulong *)(lVar3 + 0x50) = CONCAT44(in_stack_00000078,uStack0000000000000074);
            *(ulong *)(lVar3 + 0x48) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
            *(ulong *)(lVar3 + 0x44) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
            *(undefined8 *)(lVar3 + 0x3c) = in_stack_00000060;
            puVar1 = PTR_DAT_065d62a0;
            uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
            FUN_05eac15c(uVar4,lVar3,0);
            *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
            *(undefined8 *)(unaff_x19 + 0x48) = 0x1e40133333;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            FUN_05f002ac(0);
            *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000008;
            *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000000;
            *(undefined8 *)(unaff_x19 + 100) = uStack0000000000000014;
            *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
            thunk_FUN_05ef22b8();
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_0519c67c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


