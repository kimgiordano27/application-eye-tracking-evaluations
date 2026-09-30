/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 037a4c88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current
               (int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(ushort *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(param_4 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x18) + 1;
  }
  iVar3 = (int)param_2;
  iVar4 = (int)((ulong)param_2 >> 0x20);
  if ((iVar3 + -1 == 0 || iVar3 < 1) || (iVar3 <= iVar2)) {
    *param_1 = iVar3;
    if ((iVar3 < 1) || (param_1[1] = iVar4, iVar3 < 2)) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    lVar1 = FUN_02f0880c(lVar1,iVar3 + -1);
    *param_1 = iVar3;
    param_1[1] = iVar4;
    *(long *)(param_1 + 2) = lVar1;
  }
  FUN_050f8cdc(param_3,lVar1,iVar3 + -1,0);
  return;
}


