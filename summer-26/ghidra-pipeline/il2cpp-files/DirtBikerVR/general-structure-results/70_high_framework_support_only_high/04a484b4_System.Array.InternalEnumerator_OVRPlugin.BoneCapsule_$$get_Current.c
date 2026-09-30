/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 04a484b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current
               (int *param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 < *param_1) {
    do {
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      FUN_04a4832c(param_1,iVar2,0,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x50));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = param_2;
  if (1 < param_2) {
    lVar1 = *(long *)(param_1 + 4);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < param_2 + -1)) {
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      FUN_0435a92c(param_1 + 4,param_2 + -1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
      return;
    }
  }
  return;
}


