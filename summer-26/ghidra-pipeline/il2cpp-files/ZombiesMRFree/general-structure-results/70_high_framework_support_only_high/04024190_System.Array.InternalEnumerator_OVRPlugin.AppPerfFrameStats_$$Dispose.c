/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 04024190
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose
               (undefined8 param_1,int param_2,long param_3)

{
  int in_w8;
  long lVar1;
  int *unaff_x19;
  int unaff_w21;
  int iVar2;
  
  iVar2 = unaff_w21;
  if (param_2 < in_w8) {
    do {
      if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      FUN_04023fac();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *unaff_x19);
  }
  *unaff_x19 = unaff_w21;
  if (1 < unaff_w21) {
    lVar1 = *(long *)(unaff_x19 + 4);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < unaff_w21 + -1)) {
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      FUN_03b11190(unaff_x19 + 4,unaff_w21 + -1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
      return;
    }
  }
  return;
}


