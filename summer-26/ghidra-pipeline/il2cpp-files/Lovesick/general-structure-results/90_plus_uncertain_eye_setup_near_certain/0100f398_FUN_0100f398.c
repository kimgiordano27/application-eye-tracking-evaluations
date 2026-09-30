/*
FUNCTION_NAME: FUN_0100f398
ENTRY_POINT: 0100f398
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0100f398(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsqadd_u32__;
  if ((DAT_03775dbb & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Threading_Tasks_TaskCompletionSource<bool>_get_Task__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsqadd_u32__);
    thunk_FUN_00d48444(StringLiteral_5240);
    thunk_FUN_00d48444(
                      Method_Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_<InnerRead>b__0__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_98__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
    DAT_03775dbb = 1;
  }
  FUN_010c2c5c(param_1,&local_38,*(undefined8 *)puVar2);
  *(long *)(param_1 + 0x28) = local_38;
  puVar2 = Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__;
  if (local_38 != 0) {
    lVar5 = *(long *)(local_38 + 0x148);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__
                              );
    if ((lVar3 != 0) &&
       (FUN_013df3d0(lVar3,param_1,*(undefined8 *)StringLiteral_5240,0),
       puVar1 = System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo,
       lVar5 != 0)) {
      FUN_013dfe38(lVar5,lVar3,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x150);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar3 != 0) &&
           (FUN_013df3d0(lVar3,param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_98__,0),
           puVar2 = Method_System_Threading_Tasks_TaskCompletionSource<bool>_get_Task__, lVar5 != 0)
           ) {
          FUN_013dfe38(lVar5,lVar3,*(undefined8 *)puVar1);
          FUN_010c2c5c(param_1,&local_38,*(undefined8 *)puVar2);
          puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
          if (local_38 != 0) {
            uVar6 = *(undefined8 *)(local_38 + 0x68);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
            if (lVar3 != 0) {
              FUN_026c8404(lVar3,param_1,
                           *(undefined8 *)
                            Method_Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_<InnerRead>b__0__
                           ,0);
              plVar4 = (long *)FUN_017b78c8(uVar6,lVar3,0);
              if (plVar4 == (long *)0x0) {
                *(undefined8 *)(local_38 + 0x68) = 0;
                return;
              }
              lVar3 = *(long *)puVar2;
              if ((*plVar4 == lVar3) && (*(long **)(local_38 + 0x68) = plVar4, *plVar4 == lVar3)) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00da544c();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


