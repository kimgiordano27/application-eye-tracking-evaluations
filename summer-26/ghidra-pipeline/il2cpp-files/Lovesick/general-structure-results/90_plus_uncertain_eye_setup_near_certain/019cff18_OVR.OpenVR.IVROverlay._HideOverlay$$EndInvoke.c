/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._HideOverlay$$EndInvoke
ENTRY_POINT: 019cff18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined1  [16] OVR_OpenVR_IVROverlay__HideOverlay__EndInvoke(ulong param_1)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong unaff_d8;
  undefined8 in_register_00005108;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  long in_stack_000000e8;
  
  puVar1 = PTR_DAT_033ee740;
  if (in_NG == in_OV) {
    uVar3 = 0;
    unaff_d8 = 0;
    lVar2 = 0x200000000;
    do {
      if ((param_1 & 0xffffffff) <= uVar3) {
LAB_019d0074:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (in_stack_000000e8 == 0) {
LAB_019d0078:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      OVRPlugin__EraseSpace
                (&stack0x000000a0,in_stack_000000e8,*(undefined4 *)(unaff_x19 + uVar3 * 4 + 0x20),0)
      ;
      in_stack_000000c8 = in_stack_000000a8;
      in_stack_000000c0 = in_stack_000000a0;
      uStack00000000000000d4 = uStack00000000000000b4;
      uStack00000000000000d0 = uStack00000000000000b0;
      if ((ulong)*(uint *)(unaff_x19 + 0x18) <= uVar3 + 1) goto LAB_019d0074;
      if (in_stack_000000e8 == 0) goto LAB_019d0078;
      OVRPlugin__EraseSpace
                (&stack0x00000080,in_stack_000000e8,*(undefined4 *)(unaff_x19 + uVar3 * 4 + 0x24),0)
      ;
      in_stack_000000a8 = in_stack_00000088;
      in_stack_000000a0 = in_stack_00000080;
      uStack00000000000000b4 = uStack0000000000000094;
      uStack00000000000000b0 = uStack0000000000000090;
      if ((ulong)*(uint *)(unaff_x19 + 0x18) <= uVar3 + 2) goto LAB_019d0074;
      if (in_stack_000000e8 == 0) goto LAB_019d0078;
      OVRPlugin__EraseSpace
                (&stack0x00000060,in_stack_000000e8,
                 *(undefined4 *)(unaff_x19 + (lVar2 >> 0x1e) + 0x20),0);
      in_stack_00000088 = in_stack_00000068;
      in_stack_00000080 = in_stack_00000060;
      uStack0000000000000094 = uStack0000000000000074;
      uStack0000000000000090 = uStack0000000000000070;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00000048 = in_stack_000000c8;
      in_stack_00000040 = in_stack_000000c0;
      uStack0000000000000054 = uStack00000000000000d4;
      uStack0000000000000050 = uStack00000000000000d0;
      in_stack_00000028 = in_stack_000000a8;
      in_stack_00000020 = in_stack_000000a0;
      uStack0000000000000034 = uStack00000000000000b4;
      uStack0000000000000030 = uStack00000000000000b0;
      fVar4 = (float)FUN_019cfa08(&stack0x00000040,&stack0x00000020);
      param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
      uVar3 = uVar3 + 1;
      unaff_d8 = (ulong)(uint)((float)unaff_d8 + fVar4);
      in_register_00005108 = 0;
      lVar2 = lVar2 + 0x100000000;
    } while ((long)uVar3 < (long)(unaff_x20 + (param_1 << 0x20)) >> 0x20);
  }
  auVar5._8_8_ = in_register_00005108;
  auVar5._0_8_ = unaff_d8;
  return auVar5;
}


