/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04851b74
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__get_NumberOfDisplayStrings(long *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x23;
  long lVar2;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uStack0000000000000078 = unaff_x23[5];
  uStack0000000000000070 = unaff_x23[4];
  uStack0000000000000088 = unaff_x23[7];
  uStack0000000000000080 = unaff_x23[6];
  uStack0000000000000058 = unaff_x23[1];
  uStack0000000000000050 = *unaff_x23;
  uStack0000000000000068 = unaff_x23[3];
  uStack0000000000000060 = unaff_x23[2];
  lVar2 = *param_1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  in_stack_00000098 = uStack0000000000000058;
  in_stack_00000090 = uStack0000000000000050;
  in_stack_000000a8 = uStack0000000000000068;
  in_stack_000000a0 = uStack0000000000000060;
  in_stack_000000b8 = uStack0000000000000078;
  in_stack_000000b0 = uStack0000000000000070;
  in_stack_000000c8 = uStack0000000000000088;
  in_stack_000000c0 = uStack0000000000000080;
  thunk_FUN_02f411dc(&stack0x000000b0,0);
  thunk_FUN_02f411dc(&stack0x000000d0);
  if (lVar2 != 0) {
    memcpy(&stack0x00000008,&stack0x00000090,0x48);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    memcpy(&stack0x000000d8,&stack0x00000008,0x48);
    FUN_04b5e7e8(lVar2);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768(lVar1);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    if (lVar2 != 0) {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_02eea768(*(long *)(unaff_x19 + 0x20));
      }
      FUN_04b87184(lVar2);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02eea768(lVar1);
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
        FUN_02eea768();
      }
      if (lVar2 != 0) {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_02eea768(*(long *)(unaff_x19 + 0x20));
        }
        FUN_04b87184(lVar2);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02eea768();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02eea768();
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02eea768(lVar1);
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02eea768();
        }
        if (lVar2 != 0) {
          FUN_05242864(lVar2,*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18),
                       *(undefined8 *)PTR_DAT_06d39178);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


