/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 052c7a4c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__Dispose
              (long param_1,long *param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_031c09d4(param_1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if ((*(ushort *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  lVar4 = *param_2;
  if (lVar4 == 0) {
    FUN_05950954(0x32,0);
    lVar4 = *param_2;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  lVar2 = param_2[1];
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  iVar3 = FUN_03ce917c(lVar4,param_3,(int)lVar2,uVar1,
                       *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x50));
  if (iVar3 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar3 - (int)param_2[1];
  }
  return iVar3;
}


