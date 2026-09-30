/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 07077554
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__Dispose
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               int param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  iVar1 = (param_5 - param_6) + 1;
  if (iVar1 <= (int)param_5) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    do {
      if ((*(uint *)(param_2 + 0x18) <= param_5) ||
         (uVar2 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(param_7 + 0x20) + 0xc0)),
         *(uint *)(param_2 + 0x18) <= param_5)) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      uVar3 = FUN_07a98ccc(param_2 + 0x20 + (long)(int)param_5 * 0xc,uVar2,
                           *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 8));
      if ((uVar3 & 1) != 0) {
        return param_5;
      }
      param_5 = param_5 - 1;
    } while (iVar1 <= (int)param_5);
  }
  return 0xffffffff;
}


