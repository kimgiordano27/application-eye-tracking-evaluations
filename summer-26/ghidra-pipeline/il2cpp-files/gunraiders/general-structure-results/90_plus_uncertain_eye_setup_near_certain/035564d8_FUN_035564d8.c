/*
FUNCTION_NAME: FUN_035564d8
ENTRY_POINT: 035564d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_035564d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = Method_OVRPlugin_PinnedArray<Guid>_Dispose__;
  if ((DAT_04537834 & 1) == 0) {
    FUN_01c5d288(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    FUN_01c5d288(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    DAT_04537834 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x170);
  lVar2 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03313b6c(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined1 *)(lVar2 + 0x18) = 1;
  if (lVar3 != 0) {
    FUN_02fca078(lVar3,lVar2,*(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


