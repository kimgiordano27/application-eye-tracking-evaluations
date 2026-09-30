/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$CreateClipOfType
ENTRY_POINT: 02406a54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Timeline_TrackAsset__CreateClipOfType(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d48444(StringLiteral_5169);
  thunk_FUN_00d48444(StringLiteral_5207);
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_129__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_u16__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_ARFoundation_ARPointCloudParticleVisualizer_OnPointCloudChanged__
                    );
  thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JsonPath_JPath_EnsureLength__);
  thunk_FUN_00d48444(Method_MicCheckPuzzle_<>c_<FlickerOn>b__14_1__);
  thunk_FUN_00d48444(Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__);
  *(undefined1 *)(unaff_x20 + 0x283) = 1;
  puVar1 = UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_012ddc8c(*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)
                  Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_5207;
    if (lVar2 != 0) {
      FUN_017b46ec(lVar2,0);
      FUN_010cb3ac();
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = StringLiteral_5169;
      if (lVar2 != 0) {
        FUN_02406c1c();
        FUN_010cb3ac();
        *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000008;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_129__;
        if (lVar2 != 0) {
          FUN_017b46ec(lVar2,0);
          FUN_010cb3ac();
          *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000008;
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            *(undefined4 *)(lVar2 + 0x1c) = 0x32;
            *(undefined4 *)(lVar2 + 0x28) = 1;
            *(undefined2 *)(lVar2 + 0x2c) = 0x101;
            *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
            FUN_017b46ec(lVar2,0);
            FUN_010cb3ac();
            *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000008;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


