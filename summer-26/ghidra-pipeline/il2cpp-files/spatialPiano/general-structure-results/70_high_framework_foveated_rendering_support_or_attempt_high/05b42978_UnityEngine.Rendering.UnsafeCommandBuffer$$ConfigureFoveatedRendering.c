/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 05b42978
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x05b42b8c) */
/* WARNING: Removing unreachable block (ram,0x05b42b88) */
/* WARNING: Removing unreachable block (ram,0x05b42c48) */

void UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering(undefined1 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w27;
  undefined4 unaff_w28;
  undefined4 unaff_w29;
  undefined4 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  long in_stack_000000a8;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  while( true ) {
    FUN_05aac008(param_1);
    FUN_05aabdf0(&stack0x000000d4);
    uVar2 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    uVar3 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    uVar4 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    if (in_stack_000000a8 == 0) break;
    lVar7 = *(long *)(in_stack_000000a8 + 0x10);
    lVar8 = *(long *)Method_System_Net_CommandStream_ReceiveCommandResponseCallback__;
    *(int *)(in_stack_000000a8 + 0x1c) = *(int *)(in_stack_000000a8 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(in_stack_000000a8 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x48;
      *(uint *)(in_stack_000000a8 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar7 + 0x38) = unaff_w28;
      *(undefined4 *)(lVar7 + 0x3c) = unaff_w29;
      *(undefined4 *)(lVar7 + 0x40) = unaff_w20;
      *(undefined4 *)(lVar7 + 0x44) = unaff_w19;
      *(undefined4 *)(lVar7 + 0x20) = uStack0000000000000054;
      *(undefined4 *)(lVar7 + 0x24) = uStack0000000000000050;
      *(undefined4 *)(lVar7 + 0x48) = unaff_w21;
      *(undefined4 *)(lVar7 + 0x4c) = uVar2;
      *(undefined4 *)(lVar7 + 0x50) = uVar3;
      *(undefined4 *)(lVar7 + 0x54) = uVar4;
      *(undefined4 *)(lVar7 + 0x28) = uStack000000000000004c;
      *(undefined4 *)(lVar7 + 0x2c) = uStack0000000000000048;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      *(undefined8 *)(lVar7 + 0x60) = 0;
      *(undefined4 *)(lVar7 + 0x30) = in_stack_00000040._4_4_;
      *(undefined4 *)(lVar7 + 0x34) = unaff_w27;
    }
    else {
      uStack00000000000000d8 = uStack0000000000000054;
      uStack00000000000000dc = uStack0000000000000050;
      uStack00000000000000e0 = uStack000000000000004c;
      uStack00000000000000e4 = uStack0000000000000048;
      uStack00000000000000e8 = in_stack_00000040._4_4_;
      in_stack_00000110 = 0;
      in_stack_00000118 = 0;
      uStack00000000000000ec = unaff_w27;
      uStack00000000000000f0 = unaff_w28;
      uStack00000000000000f4 = unaff_w29;
      uStack00000000000000f8 = unaff_w20;
      uStack00000000000000fc = unaff_w19;
      uStack0000000000000100 = unaff_w21;
      uStack0000000000000104 = uVar2;
      uStack0000000000000108 = uVar3;
      uStack000000000000010c = uVar4;
      FUN_03bc3c2c(in_stack_000000a8,&stack0x000000d8,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = FUN_05aac210(&stack0x000000d4);
    if ((uVar5 & 1) != 0) {
      if (in_stack_000000a8 != 0) {
        uVar6 = FUN_03bc5988(in_stack_000000a8,
                             *(undefined8 *)Method_System_Net_CommandStream_WriteCallback__);
        FUN_03f5cf0c(&stack0x000000b0,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_CommonTouch_GetEnhancedTouch__);
        *in_stack_00000010 = uStack0000000000000034;
        *(undefined8 *)(in_stack_00000010 + 8) = uVar6;
        *(undefined8 *)(in_stack_00000010 + 10) = 0;
        in_stack_00000010[1] = uStack0000000000000030;
        in_stack_00000010[2] = uStack000000000000002c;
        in_stack_00000010[3] = uStack0000000000000028;
        in_stack_00000010[4] = uStack0000000000000024;
        in_stack_00000010[5] = uStack0000000000000020;
        in_stack_00000010[6] = in_stack_00000018._4_4_;
        in_stack_00000010[7] = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05aac210(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    uStack0000000000000054 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    uStack0000000000000050 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    uStack000000000000004c = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    uStack0000000000000048 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    in_stack_00000040._4_4_ = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    unaff_w27 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    unaff_w28 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    unaff_w29 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    unaff_w19 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    unaff_w20 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    unaff_w21 = FUN_05aabee8(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    FUN_05aac008(&stack0x000000d4);
    FUN_05aabdf0(&stack0x000000d4);
    FUN_05aac368(&stack0x000000d4);
    FUN_05aac210(&stack0x000000d4);
    param_1 = &stack0x000000d4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


