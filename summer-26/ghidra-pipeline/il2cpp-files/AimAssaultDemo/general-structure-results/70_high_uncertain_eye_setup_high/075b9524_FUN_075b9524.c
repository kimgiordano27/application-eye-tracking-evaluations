/*
FUNCTION_NAME: FUN_075b9524
ENTRY_POINT: 075b9524
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 FUN_075b9524(long param_1)

{
  long lVar1;
  undefined8 local_18;
  
  if ((DAT_0826e483 & 1) == 0) {
    FUN_0373b518(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0826e483 = 1;
  }
  local_18 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_1,0);
    }
    if (DAT_0826e4d8 == (code *)0x0) {
      DAT_0826e4d8 = (code *)FUN_0373b4dc(
                                         "UnityEngine.RectTransform::get_pivot_Injected(System.IntPtr,UnityEngine.Vector2&)"
                                         );
    }
    (*DAT_0826e4d8)(lVar1,&local_18);
    return (undefined4)local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


