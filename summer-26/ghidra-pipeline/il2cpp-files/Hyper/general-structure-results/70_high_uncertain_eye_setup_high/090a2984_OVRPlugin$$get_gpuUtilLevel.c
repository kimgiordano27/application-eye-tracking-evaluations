/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilLevel
ENTRY_POINT: 090a2984
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_gpuUtilLevel(long param_1)

{
  uint uVar1;
  ulong uVar2;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w25;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
code_r0x090a2984:
  thunk_FUN_049ee3d8(param_1,0);
  do {
    uVar2 = FUN_05fefd38(&stack0x00000088,*unaff_x23);
    if ((uVar2 & 1) == 0) {
      FUN_05fefd34(&stack0x00000088,*unaff_x22);
      uStack0000000000000084 = 0;
      uStack000000000000005c = 0;
      uStack0000000000000054 = 0;
      uStack000000000000006c = 0;
      uStack0000000000000064 = 0;
      uStack000000000000007c = 0;
      uStack0000000000000074 = 0;
      thunk_FUN_049ee3d8(&stack0x00000040);
      uStack000000000000005c = (undefined4)*(undefined8 *)(unaff_x20 + 0xf0);
      uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x20 + 0xe8);
      uStack0000000000000064 = (undefined4)*(undefined8 *)(unaff_x20 + 0xf8);
      uStack0000000000000074 = (undefined4)*(undefined8 *)(unaff_x20 + 0x108);
      uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x20 + 0x100);
      uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x20 + 0x110);
      memcpy(unaff_x19,&stack0x00000040,0x48);
      return;
    }
    FUN_090a2448(&stack0x000000a0,in_stack_00000098);
    if (unaff_x21 == 0) {
LAB_090a2a48:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090a2a48;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) break;
    FUN_06cae3e8();
  } while( true );
  param_1 = param_1 + (long)(int)uVar1 * (long)unaff_w25;
  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
  *(undefined8 *)(param_1 + 0x28) = in_stack_000000a8;
  *(undefined8 *)(param_1 + 0x20) = in_stack_000000a0;
  *(undefined8 *)(param_1 + 0x38) = in_stack_000000b8;
  *(undefined8 *)(param_1 + 0x30) = in_stack_000000b0;
  *(undefined8 *)(param_1 + 0x48) = in_stack_000000c8;
  *(undefined8 *)(param_1 + 0x40) = in_stack_000000c0;
  param_1 = param_1 + 0x40;
  goto code_r0x090a2984;
}


