/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 04a4883c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>___ctor(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090(*(long *)(param_3 + 0x20));
  }
  plVar4 = (long *)(param_1 + 4);
  if (*plVar4 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(*plVar4 + 0x18) + 1;
  }
  iVar2 = *param_2;
  if ((iVar3 < iVar2) && (iVar2 + -1 != 0 && 0 < iVar2)) {
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    lVar1 = FUN_03a8a804(lVar1,iVar2 + -1);
    *plVar4 = lVar1;
    thunk_FUN_03afed3c(plVar4,lVar1);
    iVar2 = *param_2;
  }
  *param_1 = iVar2;
  if (0 < iVar2) {
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    if (iVar2 + -1 != 0) {
      FUN_06774b90(*(undefined8 *)(param_2 + 4),*plVar4,iVar2 + -1,0);
      return;
    }
  }
  return;
}


