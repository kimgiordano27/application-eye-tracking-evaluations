/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 05cfb090
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_chromatic(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x1c0));
  *(undefined1 *)(unaff_x20 + 0x75d) = 1;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x78) + 0x20) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_05cf4c7c(&stack0x00000080,*(long *)(unaff_x19 + 0x20),0);
      puVar1 = PTR_DAT_06fb81b8;
      uStack00000000000000c4 = CONCAT44(in_stack_00000098,uStack0000000000000094);
      lVar2 = *(long *)(unaff_x19 + 0x78);
      in_stack_000000b0 = in_stack_00000080;
      in_stack_000000b8 = in_stack_00000088;
      uStack00000000000000c0 = uStack0000000000000090;
      while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 1) {
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uVar3 = FUN_05cf4c7c(*(long *)(unaff_x19 + 0x20),0);
            in_stack_00000058 = in_stack_00000008;
            in_stack_00000050 = in_stack_00000000;
            uStack0000000000000064 = uStack0000000000000010._4_4_;
            in_stack_00000068 = uStack0000000000000010._8_4_;
            in_stack_00000060 = uStack0000000000000010;
            FUN_05cfaf0c(uVar3,unaff_x19 + 0x50,&stack0x000000b0,&stack0x00000050);
            return;
          }
          break;
        }
        FUN_04999a3c(&stack0x00000050,lVar2,*(undefined8 *)puVar1);
        in_stack_000000a0 = in_stack_00000070;
        in_stack_00000088 = in_stack_00000058;
        in_stack_00000080 = in_stack_00000050;
        in_stack_00000098 = in_stack_00000068;
        uStack0000000000000090 = in_stack_00000060;
        FUN_05cfb688();
        lVar2 = *(long *)(unaff_x19 + 0x78);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


