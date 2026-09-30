/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollViewport$$Setup
ENTRY_POINT: 0636b368
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollViewport__Setup
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  uint in_w8;
  long in_x9;
  long in_x10;
  undefined4 *puVar3;
  undefined4 in_w11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  uint in_stack_00000038;
  
  do {
    puVar3 = (undefined4 *)(*(long *)(in_x10 + 0x10) + in_x9 * unaff_x29);
    puVar3[2] = unaff_s15;
    *puVar3 = uStack0000000000000030;
    puVar3[1] = in_stack_00000028._4_4_;
    if (*(long *)(unaff_x24 + 0x58) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x58) + 0x10) + in_x9 * unaff_x29);
    *puVar3 = unaff_s12;
    puVar3[1] = unaff_s13;
    puVar3[2] = unaff_s14;
    if (*(long *)(unaff_x24 + 0x60) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x60) + 0x10) + in_x9 * 0x10);
    *puVar3 = unaff_s8;
    puVar3[1] = unaff_s9;
    puVar3[2] = unaff_s10;
    puVar3[3] = unaff_s11;
    if (*(long *)(unaff_x24 + 0x68) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x68) + 0x10) + in_x9 * unaff_x29);
    *puVar3 = unaff_s12;
    puVar3[1] = unaff_s13;
    puVar3[2] = unaff_s14;
    if (*(long *)(unaff_x24 + 0x70) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x70) + 0x10) + in_x9 * 0x10);
    *puVar3 = unaff_s8;
    puVar3[1] = unaff_s9;
    puVar3[2] = unaff_s10;
    puVar3[3] = unaff_s11;
    if (*(long *)(unaff_x24 + 0x78) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x78) + 0x10) + in_x9 * unaff_x29);
    *puVar3 = unaff_s12;
    puVar3[1] = unaff_s13;
    puVar3[2] = unaff_s14;
    if (*(long *)(unaff_x24 + 0x80) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x80) + 0x10) + in_x9 * 0x10);
    *puVar3 = unaff_s8;
    puVar3[1] = unaff_s9;
    puVar3[2] = unaff_s10;
    puVar3[3] = unaff_s11;
    if (*(long *)(unaff_x24 + 0x88) == 0) break;
    *(undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x88) + 0x10) + in_x9 * 4) =
         uStack0000000000000034;
    if (*(long *)(unaff_x24 + 0x90) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x90) + 0x10) + in_x9 * unaff_x29);
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    if (*(long *)(unaff_x24 + 0x98) == 0) break;
    *(undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x98) + 0x10) + in_x9 * 4) = in_w11;
    if (*(long *)(unaff_x24 + 0xa0) == 0) break;
    *(undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0xa0) + 0x10) + in_x9 * 4) = in_w11;
    if ((in_w8 >> 4 & 1) != 0) {
      *(int *)(unaff_x24 + 0xfc) = *(int *)(unaff_x24 + 0xfc) + 1;
    }
    unaff_x28 = unaff_x28 + 1;
    unaff_x26 = unaff_x26 + 0x100000000;
    if (in_stack_00000018 == unaff_x28) {
      return in_stack_00000010;
    }
    puVar3 = *(undefined4 **)(*(long *)(unaff_x19 + 0x540) + 0xb8);
    unaff_s8 = *puVar3;
    unaff_s9 = puVar3[1];
    unaff_s10 = puVar3[2];
    unaff_s11 = puVar3[3];
    if (unaff_x23 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),unaff_x28 & 0xffffffff,
                         *(undefined8 *)(unaff_x23 + 0x28));
      uVar1 = uVar1 | 1;
    }
    lVar2 = FUN_03398188(DAT_083c7df8,1);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(uint *)(lVar2 + 0x20) = uVar1;
    FUN_0636acb0(&stack0x00000038);
    if (unaff_x22 == 0) {
      unaff_s12 = 0;
      unaff_s13 = 0;
      unaff_s14 = 0;
    }
    else {
      unaff_s12 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),unaff_x28 & 0xffffffff,
                             *(undefined8 *)(unaff_x22 + 0x28));
      unaff_s13 = param_2;
      unaff_s14 = param_3;
    }
    if (unaff_x21 != 0) {
      unaff_s8 = (**(code **)(unaff_x21 + 0x18))
                           (*(undefined8 *)(unaff_x21 + 0x40),unaff_x28 & 0xffffffff,
                            *(undefined8 *)(unaff_x21 + 0x28));
      unaff_s9 = param_2;
      unaff_s10 = param_3;
      unaff_s11 = uStack0000000000000034;
    }
    uStack0000000000000034 = 0;
    if (unaff_x25 == 0) {
      uStack0000000000000030 = 0;
      in_stack_00000028._4_4_ = 0;
      unaff_s15 = 0;
    }
    else {
      uStack0000000000000030 =
           (**(code **)(unaff_x25 + 0x18))
                     (*(undefined8 *)(unaff_x25 + 0x40),unaff_x28 & 0xffffffff,
                      *(undefined8 *)(unaff_x25 + 0x28));
      unaff_s15 = param_3;
      in_stack_00000028._4_4_ = param_2;
    }
    if (unaff_x20 != 0) {
      uStack0000000000000034 =
           (**(code **)(unaff_x20 + 0x18))
                     (*(undefined8 *)(unaff_x20 + 0x40),unaff_x28 & 0xffffffff,
                      *(undefined8 *)(unaff_x20 + 0x28));
    }
    if (in_stack_00000020 == 0) {
      param_1 = 0;
      param_2 = 0;
      param_3 = 0;
    }
    else {
      param_1 = (**(code **)(in_stack_00000020 + 0x18))
                          (*(undefined8 *)(in_stack_00000020 + 0x40),unaff_x28 & 0xffffffff,
                           *(undefined8 *)(in_stack_00000020 + 0x28));
    }
    in_w11 = 0xffffffff;
    if (*(long *)(unaff_x24 + 0x18) == 0) break;
    *(uint *)(*(long *)(*(long *)(unaff_x24 + 0x18) + 0x10) + (unaff_x26 >> 0x1e)) =
         in_stack_00000038;
    if (*(long *)(unaff_x24 + 0x28) == 0) break;
    in_x9 = unaff_x26 >> 0x20;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x28) + 0x10) + in_x9 * unaff_x29);
    *puVar3 = unaff_s12;
    puVar3[1] = unaff_s13;
    puVar3[2] = unaff_s14;
    if (*(long *)(unaff_x24 + 0x30) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x30) + 0x10) + in_x9 * 0x10);
    *puVar3 = unaff_s8;
    puVar3[1] = unaff_s9;
    puVar3[2] = unaff_s10;
    puVar3[3] = unaff_s11;
    if (*(long *)(unaff_x24 + 0x38) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x38) + 0x10) + in_x9 * unaff_x29);
    *puVar3 = unaff_s12;
    puVar3[1] = unaff_s13;
    puVar3[2] = unaff_s14;
    if (*(long *)(unaff_x24 + 0x40) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x40) + 0x10) + in_x9 * 0x10);
    *puVar3 = unaff_s8;
    puVar3[1] = unaff_s9;
    puVar3[2] = unaff_s10;
    puVar3[3] = unaff_s11;
    if (*(long *)(unaff_x24 + 0x48) == 0) break;
    puVar3 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x48) + 0x10) + in_x9 * unaff_x29);
    *puVar3 = unaff_s12;
    puVar3[1] = unaff_s13;
    puVar3[2] = unaff_s14;
    in_x10 = *(long *)(unaff_x24 + 0x50);
    in_w8 = in_stack_00000038;
  } while (in_x10 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


