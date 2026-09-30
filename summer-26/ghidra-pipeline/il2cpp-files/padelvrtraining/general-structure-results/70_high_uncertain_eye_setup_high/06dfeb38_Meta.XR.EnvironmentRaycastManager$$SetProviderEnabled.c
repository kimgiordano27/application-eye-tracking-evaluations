/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$SetProviderEnabled
ENTRY_POINT: 06dfeb38
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__SetProviderEnabled(long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  int in_w8;
  
  if (in_w8 != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (in_w8 != *(int *)(*param_1 + 0x18) + 1) goto LAB_06dfeb64;
  }
  FUN_07199c28(0);
LAB_06dfeb64:
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
  return;
}


