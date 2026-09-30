/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._IsOverlayVisible$$BeginInvoke
ENTRY_POINT: 019d0018
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


float OVR_OpenVR_IVROverlay__IsOverlayVisible__BeginInvoke
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
                undefined1 *param_7,undefined1 *param_8)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float unaff_s8;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000e8;
  
  uStack0000000000000014 = param_6._8_8_;
  uVar9 = param_6._0_8_;
  uVar8 = param_5._8_8_;
  uStack0000000000000000 = param_5._0_8_;
  uStack0000000000000034 = param_4._8_8_;
  uVar7 = param_4._0_8_;
  uVar6 = param_3._8_8_;
  uStack0000000000000020 = param_3._0_8_;
  uStack0000000000000054 = param_2._8_8_;
  uVar5 = param_2._0_8_;
  uVar4 = param_1._8_8_;
  uStack0000000000000040 = param_1._0_8_;
  while( true ) {
    uStack0000000000000048 = (undefined4)uVar4;
    uStack000000000000004c = (undefined4)uVar5;
    uStack0000000000000050 = (undefined4)((ulong)uVar5 >> 0x20);
    uStack0000000000000028 = (undefined4)uVar6;
    uStack000000000000002c = (undefined4)uVar7;
    uStack0000000000000030 = (undefined4)((ulong)uVar7 >> 0x20);
    uStack0000000000000008 = (undefined4)uVar8;
    uStack000000000000000c = (undefined4)uVar9;
    uStack0000000000000010 = (undefined4)((ulong)uVar9 >> 0x20);
    fVar3 = (float)FUN_019cfa08(param_7,param_8);
    uVar2 = unaff_x25 - 1;
    unaff_s8 = unaff_s8 + fVar3;
    unaff_x23 = unaff_x23 + unaff_x24;
    if ((long)(unaff_x20 + ((ulong)*(uint *)(unaff_x19 + 0x18) << 0x20)) >> 0x20 <= (long)uVar2) {
      return unaff_s8;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar2) break;
    if (in_stack_000000e8 == 0) {
LAB_019d0078:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    OVRPlugin__EraseSpace
              (&stack0x000000a0,in_stack_000000e8,*(undefined4 *)(unaff_x19 + uVar2 * 4 + 0x20),0);
    in_stack_000000c8 = in_stack_000000a8;
    in_stack_000000c0 = in_stack_000000a0;
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x2c);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x25) break;
    if (in_stack_000000e8 == 0) goto LAB_019d0078;
    OVRPlugin__EraseSpace
              (&stack0x00000080,in_stack_000000e8,*(undefined4 *)(unaff_x19 + uVar2 * 4 + 0x24),0);
    unaff_x25 = unaff_x25 + 1;
    in_stack_000000a8 = in_stack_00000088;
    in_stack_000000a0 = in_stack_00000080;
    *(undefined8 *)(unaff_x21 + 0x34) = *(undefined8 *)(unaff_x21 + 0x14);
    *(undefined8 *)(unaff_x21 + 0x2c) = *(undefined8 *)(unaff_x21 + 0xc);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x25) break;
    if (in_stack_000000e8 == 0) goto LAB_019d0078;
    OVRPlugin__EraseSpace
              (&stack0x00000060,in_stack_000000e8,
               *(undefined4 *)(unaff_x19 + (unaff_x23 >> 0x1e) + 0x20),0);
    in_stack_00000088 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    lVar1 = *unaff_x22;
    in_stack_00000080 = in_stack_00000060;
    *(undefined8 *)(unaff_x21 + 0x14) = uStack0000000000000074;
    *(ulong *)(unaff_x21 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack0000000000000054 = *(undefined8 *)(unaff_x21 + 0x54);
    uVar5 = *(undefined8 *)(unaff_x21 + 0x4c);
    uStack0000000000000034 = *(undefined8 *)(unaff_x21 + 0x34);
    uVar7 = *(undefined8 *)(unaff_x21 + 0x2c);
    uStack0000000000000014 = *(undefined8 *)(unaff_x21 + 0x14);
    uVar9 = *(undefined8 *)(unaff_x21 + 0xc);
    param_7 = (undefined1 *)&stack0x00000040;
    param_8 = (undefined1 *)&stack0x00000020;
    uStack0000000000000040 = in_stack_000000c0;
    uVar4 = in_stack_000000c8;
    uStack0000000000000020 = in_stack_000000a0;
    uVar6 = in_stack_000000a8;
    uStack0000000000000000 = in_stack_00000080;
    uVar8 = in_stack_00000088;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


