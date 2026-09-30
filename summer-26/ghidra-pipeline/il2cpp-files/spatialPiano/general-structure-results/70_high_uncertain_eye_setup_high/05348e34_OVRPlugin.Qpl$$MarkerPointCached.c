/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPointCached
ENTRY_POINT: 05348e34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPointCached
               (undefined1 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 uVar5;
  undefined8 uStack0000000000000020;
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
  
  uStack0000000000000034 = param_3._8_8_;
  uVar5 = param_3._0_8_;
  uStack0000000000000028 = param_2._8_4_;
  uStack0000000000000020 = param_2._0_8_;
  do {
    uStack000000000000002c = (undefined4)uVar5;
    uStack0000000000000030 = (undefined4)((ulong)uVar5 >> 0x20);
    FUN_05344f5c(param_1,param_4);
    in_stack_00000088 = CONCAT44(uStack0000000000000050,in_stack_00000040._12_4_);
    in_stack_00000080 = in_stack_00000040._4_8_;
    *(undefined8 *)(unaff_x25 + 0x14) = in_stack_00000058;
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    do {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05348630();
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == 0x1a) {
                    /* try { // try from 05348e80 to 05448e87 has its CatchHandler @ 05348ef8 */
        return;
      }
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_05348dec;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05348dec:
      (*(code *)*puVar1)(&stack0x00000080);
    } while ((unaff_x19 & 1) == 0);
    uStack0000000000000074 = *(undefined8 *)(unaff_x25 + 0x14);
    uStack0000000000000068 = (undefined4)in_stack_00000088;
    in_stack_00000060 = in_stack_00000080;
    uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x25 + 0xc);
    uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x25 + 0xc) >> 0x20);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    param_1 = &stack0x00000040 + 4;
    param_4 = (undefined1 *)&stack0x00000020;
    uStack0000000000000020 = in_stack_00000060;
    uStack0000000000000034 = uStack0000000000000074;
    uStack0000000000000028 = uStack0000000000000068;
  } while( true );
}


