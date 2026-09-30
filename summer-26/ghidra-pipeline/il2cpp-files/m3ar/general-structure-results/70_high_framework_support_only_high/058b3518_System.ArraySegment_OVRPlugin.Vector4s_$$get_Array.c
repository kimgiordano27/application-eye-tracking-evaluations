/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector4s>$$get_Array
ENTRY_POINT: 058b3518
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_ArraySegment<OVRPlugin_Vector4s>__get_Array(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((DAT_095402da & 1) == 0) {
    FUN_0403162c(&DAT_09151778);
    DAT_095402da = 1;
  }
  if (*param_1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[1];
    if (*(int *)(DAT_09151778 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar4 = FUN_07431b44(0x1505,(int)lVar1,0);
    uVar2 = FUN_07431b44(uVar4,*(undefined4 *)((long)param_1 + 0xc),0);
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar3 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    uVar3 = uVar3 ^ uVar2;
  }
  return uVar3;
}


