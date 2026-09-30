/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_IsCreated
ENTRY_POINT: 041a2f44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated
               (long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_0552aca4(param_1,0);
  if (param_2 < 0) {
    FUN_05509450(0xc,4,0);
  }
  else if (param_2 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    uVar2 = **(undefined8 **)(lVar1 + 0xb8);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    goto LAB_041a2ff0;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  uVar2 = FUN_02d966a4(lVar1,param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
LAB_041a2ff0:
  LeanTween__value(param_1 + 0x10,uVar2);
  return;
}


