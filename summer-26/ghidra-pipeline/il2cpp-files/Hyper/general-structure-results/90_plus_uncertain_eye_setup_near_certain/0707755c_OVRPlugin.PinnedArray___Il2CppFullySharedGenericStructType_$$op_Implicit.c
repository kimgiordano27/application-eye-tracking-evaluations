/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 0707755c
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  int unaff_w24;
  
  if (unaff_w24 <= (int)param_5) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    do {
      if ((*(uint *)(param_2 + 0x18) <= param_5) ||
         (uVar1 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(param_7 + 0x20) + 0xc0)),
         *(uint *)(param_2 + 0x18) <= param_5)) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      uVar2 = FUN_07a98ccc(param_2 + 0x20 + (long)(int)param_5 * 0xc,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 8));
      if ((uVar2 & 1) != 0) {
        return param_5;
      }
      param_5 = param_5 - 1;
    } while (unaff_w24 <= (int)param_5);
  }
  return 0xffffffff;
}


