/*
FUNCTION_NAME: FUN_075b92c8
ENTRY_POINT: 075b92c8
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


void FUN_075b92c8(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  if ((DAT_0826e480 & 1) == 0) {
    FUN_0373b518(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0826e480 = 1;
  }
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_3,0);
    }
    if (DAT_0826e4c0 == (code *)0x0) {
      DAT_0826e4c0 = (code *)FUN_0373b4dc(
                                         "UnityEngine.RectTransform::set_anchoredPosition_Injected(System.IntPtr,UnityEngine.Vector2&)"
                                         );
    }
    (*DAT_0826e4c0)(lVar1,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


