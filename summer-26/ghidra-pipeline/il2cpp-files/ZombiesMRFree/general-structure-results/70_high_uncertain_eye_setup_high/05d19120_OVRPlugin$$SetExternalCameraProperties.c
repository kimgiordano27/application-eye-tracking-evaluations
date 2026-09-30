/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 05d19120
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


void OVRPlugin__SetExternalCameraProperties(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int in_w9;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000090;
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
  
  while( true ) {
    lVar3 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = in_w9 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      lVar3 = lVar3 + (int)uVar1 * unaff_x25;
      *(undefined8 *)(lVar3 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(lVar3 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar3 + 0x48) = in_stack_000000c8;
      *(undefined8 *)(lVar3 + 0x40) = in_stack_000000c0;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar3 + 0x20) = in_stack_000000a0;
      thunk_FUN_03048534(lVar3 + 0x40,0);
    }
    else {
      in_stack_000000d8 = in_stack_000000a8;
      in_stack_000000d0 = in_stack_000000a0;
      in_stack_000000e8 = in_stack_000000b8;
      in_stack_000000e0 = in_stack_000000b0;
      in_stack_000000f8 = in_stack_000000c8;
      in_stack_000000f0 = in_stack_000000c0;
      FUN_0457230c();
    }
    uVar2 = FUN_05506d10(&stack0x00000080,*unaff_x23);
    if ((uVar2 & 1) == 0) break;
    FUN_05d18c0c(&stack0x000000d0,in_stack_00000090);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    in_stack_000000a8 = in_stack_000000d8;
    in_stack_000000a0 = in_stack_000000d0;
    in_stack_000000b8 = in_stack_000000e8;
    in_stack_000000b0 = in_stack_000000e0;
    in_stack_000000c8 = in_stack_000000f8;
    in_stack_000000c0 = in_stack_000000f0;
    in_w9 = *(int *)(unaff_x21 + 0x1c);
  }
  FUN_05506d0c(&stack0x00000080,*unaff_x22);
  uStack0000000000000074 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000064 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000054 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000044 = 0;
  thunk_FUN_03048534(&stack0x00000030);
  uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x20 + 0xf8);
  uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x20 + 0xf0);
  uStack0000000000000044 = (undefined4)*(undefined8 *)(unaff_x20 + 0xe8);
  uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x20 + 0x110);
  uStack0000000000000064 = (undefined4)*(undefined8 *)(unaff_x20 + 0x108);
  uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x20 + 0x100);
  memcpy(unaff_x19,&stack0x00000030,0x48);
  return;
}


