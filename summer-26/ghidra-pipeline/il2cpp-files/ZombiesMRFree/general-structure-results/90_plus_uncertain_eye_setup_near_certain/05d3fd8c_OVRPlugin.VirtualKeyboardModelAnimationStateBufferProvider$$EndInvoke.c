/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$EndInvoke
ENTRY_POINT: 05d3fd8c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke
               (ulong param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  ulong in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  while( true ) {
    uVar2 = uStack0000000000000008;
    uStack0000000000000018 = 0;
    uStack0000000000000010 = 0;
    uStack0000000000000014 = 0;
    FUN_06902890(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    uStack0000000000000034 = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    uStack0000000000000030 = uStack0000000000000010;
    uStack0000000000000028 = uStack0000000000000008;
    uStack000000000000002c = uStack000000000000000c;
    in_stack_00000020 = in_stack_00000000;
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 == 0) break;
    if ((*(uint *)(unaff_x27 + 0x18) <= (uint)unaff_x26) || (*(uint *)(lVar3 + 0x18) <= unaff_x22))
    {
LAB_05d3fe14:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    FUN_05cac094(unaff_x27 + unaff_x26 * unaff_x25 + 0x20,&stack0x00000020,lVar3 + unaff_x24,0);
    do {
      unaff_x21 = unaff_x21 + 4;
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x1c;
      if (unaff_x21 == 0x68) {
        return;
      }
      lVar3 = *unaff_x23;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar3 = *unaff_x23;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_05d3fe10;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_05d3fe14;
      uVar1 = *(uint *)(lVar3 + unaff_x21 + 0x20);
      unaff_x26 = (ulong)uVar1;
    } while ((int)uVar1 < 0);
    if ((*(long *)(unaff_x20 + 0xc0) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x20 + 0xc0) + 0x38), lVar3 == 0)) break;
    if (((uint)*(ulong *)(lVar3 + 0x18) <= uVar1) ||
       ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) <= unaff_x22)) goto LAB_05d3fe14;
    FUN_05cac024(lVar3 + unaff_x26 * unaff_x25 + 0x20,lVar3 + unaff_x24,0);
    if (((unaff_x19 == 0) || (unaff_x27 = *(long *)(unaff_x19 + 0x38), unaff_x27 == 0)) ||
       (lVar3 = *(long *)(unaff_x19 + 0x48), lVar3 == 0)) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_05d3fe14;
    lVar3 = lVar3 + unaff_x21 * 4;
    param_1 = in_stack_00000000 & 0xffffffff;
    param_2 = in_stack_00000000 >> 0x20;
    param_4 = *(undefined4 *)(lVar3 + 0x20);
    param_5 = *(undefined4 *)(lVar3 + 0x24);
    param_6 = *(undefined4 *)(lVar3 + 0x28);
    param_7 = *(undefined4 *)(lVar3 + 0x2c);
    in_stack_00000000 = 0;
    uStack0000000000000008 = 0;
    uStack000000000000000c = 0;
    param_3 = uVar2;
  }
LAB_05d3fe10:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


