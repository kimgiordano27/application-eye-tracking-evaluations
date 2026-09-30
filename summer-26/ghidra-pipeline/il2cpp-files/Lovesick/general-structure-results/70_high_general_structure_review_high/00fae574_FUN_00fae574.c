/*
FUNCTION_NAME: FUN_00fae574
ENTRY_POINT: 00fae574
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_00fae574(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_03775a18 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulxq_lane_f64__);
    thunk_FUN_00d48444(System_Action<IntPtr>_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000941_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    DAT_03775a18 = 1;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xf8);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    if ((lVar2 != 0) &&
       (FUN_026c8404(lVar2,param_1,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000941_PostfixBurstDelegate_var
                     ,0), lVar3 != 0)) {
      FUN_026c84dc(lVar3,lVar2,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xf8);
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar2 != 0) &&
           (FUN_026c8404(lVar2,param_1,*(undefined8 *)System_Action<IntPtr>_TypeInfo,0), lVar3 != 0)
           ) {
          FUN_026c84dc(lVar3,lVar2,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0xf8);
            lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if ((lVar2 != 0) &&
               (FUN_026c8404(lVar2,param_1,
                             *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulxq_lane_f64__
                             ,0), lVar3 != 0)) {
              FUN_026c84dc(lVar3,lVar2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


