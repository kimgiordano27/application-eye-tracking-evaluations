/*
FUNCTION_NAME: OVRPlugin.OVRP_1_69_0$$.cctor
ENTRY_POINT: 090d25bc
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_69_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong in_x9;
  int *in_x10;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
code_r0x090d25bc:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_090d25b0;
  do {
    puVar1 = (undefined8 *)FUN_04980e68();
    while( true ) {
      (*(code *)*puVar1)(&stack0x00000080);
      if ((unaff_x19 & 1) != 0) {
        uStack0000000000000074 = *(undefined8 *)(unaff_x25 + 0x14);
        uStack0000000000000068 = (undefined4)in_stack_00000088;
        in_stack_00000060 = in_stack_00000080;
        uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x25 + 0xc);
        uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x25 + 0xc) >> 0x20);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uStack0000000000000028 = uStack0000000000000068;
        in_stack_00000020 = in_stack_00000060;
        uStack0000000000000034 = uStack0000000000000074;
        uStack000000000000002c = uStack000000000000006c;
        uStack0000000000000030 = uStack0000000000000070;
        FUN_090ce630(&stack0x00000040 + 4,&stack0x00000020,0);
        in_stack_00000088 = CONCAT44(uStack0000000000000050,in_stack_00000040._12_4_);
        in_stack_00000080 = in_stack_00000040._4_8_;
        *(undefined8 *)(unaff_x25 + 0x14) = in_stack_00000058;
        *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_090d1e28();
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == 0x1a) {
        return;
      }
      param_1 = *unaff_x20;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_090d25b0:
      if (*(long *)(in_x10 + -2) != param_3) goto code_r0x090d25bc;
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    }
  } while( true );
}


