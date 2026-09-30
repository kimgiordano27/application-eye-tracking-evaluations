/*
FUNCTION_NAME: UnityEngine.Rendering.RasterCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 05b4158c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_3;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000128;
  
  puVar4 = *(undefined8 **)(param_1 + 0xf80);
  *(undefined8 *)(unaff_x28 + 0x38) = unaff_x27;
  uVar2 = FUN_04f700a0(*puVar4,param_3,0);
  if (*(int *)(*(long *)PTR_DAT_067ca648 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca648);
  }
  puVar1 = Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
  in_stack_000000b8 =
       FUN_0344c36c(&stack0x00000108,
                    *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,
                    in_stack_00000018._4_4_,
                    *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
  in_stack_00000108 =
       FUN_0344c36c(&stack0x000000b8,
                    *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,
                    unaff_w23,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)PTR_DAT_067ca648 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  in_stack_000000b8 =
       FUN_0344c36c(&stack0x00000108,
                    *(undefined8 *)Method_System_Text_Base64Encoding_GetMaxCharCount__,unaff_w21,
                    *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
  in_stack_00000108 =
       FUN_0344c424(&stack0x000000b8,
                    *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,
                    unaff_w22,
                    *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
  lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_UnityEngine_Rendering_CommandBuffer_SetGlobalVectorArray__);
  FUN_05116b38(lVar3,0);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined4 *)(lVar3 + 0x20) = unaff_w21;
    *(undefined4 *)(lVar3 + 0x24) = unaff_w22;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000118;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000110;
    *(undefined4 *)(lVar3 + 0x18) = unaff_w23;
    *(undefined4 *)(lVar3 + 0x1c) = in_stack_00000018._4_4_;
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    *(undefined8 *)(lVar3 + 0x40) = in_stack_00000028;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000020;
    *(undefined8 *)(lVar3 + 0x48) = unaff_x25;
    if (unaff_x26 == 0) {
      uVar5 = *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      unaff_x26 = FUN_050e4454(uVar5,0);
    }
    *(long *)(lVar3 + 0x50) = unaff_x26;
    puVar1 = 
    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<GeometryChangedEvent>__;
    if (unaff_x20 != 0) {
      *(long *)(unaff_x20 + 0x10) = lVar3;
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_04df840c();
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_03e1a994(&stack0x00000070,in_stack_00000108,
                   *(undefined8 *)Method_System_Text_RegularExpressions_CaptureCollection_CopyTo__);
      if (*(int *)(*(long *)PTR_DAT_067ca4e8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05ab6060(uVar5,uVar2);
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000128) {
        return uVar2;
      }
      goto LAB_05b41878;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000128) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05b41878:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


