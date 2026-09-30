/*
FUNCTION_NAME: FUN_039cb5ec
ENTRY_POINT: 039cb5ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_039cb5ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_4 + 0x38);
  local_30 = param_1;
  local_28 = param_2;
  if (lVar1 == 0) {
    FUN_03293514(param_4);
    lVar1 = *(long *)(param_4 + 0x38);
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  FUN_0456e808(&local_30,*(undefined8 *)(lVar1 + 8));
  if (param_3 != 0) {
    FUN_0456ec48(&local_30,*(undefined4 *)(param_3 + 0x18),0,
                 *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
    local_40 = FUN_0456e870(&local_30,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x28));
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
              (local_40,param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


