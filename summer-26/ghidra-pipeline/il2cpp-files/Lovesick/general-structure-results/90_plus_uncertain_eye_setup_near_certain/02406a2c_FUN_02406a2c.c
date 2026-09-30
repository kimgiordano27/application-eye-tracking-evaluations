/*
FUNCTION_NAME: FUN_02406a2c
ENTRY_POINT: 02406a2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02406a2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_28;
  
  if ((DAT_03782283 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var);
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
    DAT_03782283 = 1;
  }
  puVar1 = UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_012ddc8c(*(long *)(param_1 + 0x10),
                 *(undefined8 *)
                  Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = StringLiteral_5207;
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_u16__;
    if (lVar3 != 0) {
      FUN_017b46ec(lVar3,0);
      FUN_010cb3ac(param_1,lVar3,&local_28,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x18) = local_28;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = StringLiteral_5169;
      puVar1 = Method_Newtonsoft_Json_Linq_JsonPath_JPath_EnsureLength__;
      if (lVar3 != 0) {
        FUN_02406c1c();
        FUN_010cb3ac(param_1,lVar3,&local_28,*(undefined8 *)puVar1);
        *(undefined8 *)(param_1 + 0x20) = local_28;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_129__;
        puVar1 = 
        Method_UnityEngine_XR_ARFoundation_ARPointCloudParticleVisualizer_OnPointCloudChanged__;
        if (lVar3 != 0) {
          FUN_017b46ec(lVar3,0);
          FUN_010cb3ac(param_1,lVar3,&local_28,*(undefined8 *)puVar1);
          *(undefined8 *)(param_1 + 0x30) = local_28;
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar1 = Method_MicCheckPuzzle_<>c_<FlickerOn>b__14_1__;
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x1c) = 0x32;
            *(undefined4 *)(lVar3 + 0x28) = 1;
            *(undefined2 *)(lVar3 + 0x2c) = 0x101;
            *(undefined4 *)(lVar3 + 0x3c) = 0x3f800000;
            FUN_017b46ec(lVar3,0);
            FUN_010cb3ac(param_1,lVar3,&local_28,*(undefined8 *)puVar1);
            *(undefined8 *)(param_1 + 0x28) = local_28;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


