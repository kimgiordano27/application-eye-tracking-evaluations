/*
FUNCTION_NAME: Meta.XR.PassthroughCameraAccess$$GetCameraPose
ENTRY_POINT: 05ae7524
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_PassthroughCameraAccess__GetCameraPose
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
               uint param_6)

{
  ulong uVar1;
  int in_w9;
  long unaff_x22;
  undefined4 *puVar2;
  
  param_1 = param_1 - (int)param_6;
  puVar2 = (undefined4 *)(unaff_x22 + (long)(int)param_6 * (long)in_w9 + 0x28);
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar1 = (**(code **)(*param_2 + 0x1b8))
                      (param_2,*(undefined8 *)(puVar2 + -2),*puVar2,param_4,param_5,
                       *(undefined8 *)(*param_2 + 0x1c0));
    if ((uVar1 & 1) != 0) break;
    param_1 = param_1 + -1;
    puVar2 = puVar2 + 3;
    param_6 = param_6 + 1;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
  return param_6;
}


