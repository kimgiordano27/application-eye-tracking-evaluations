/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 040256e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__MoveNext
               (void *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *__src;
  int in_w9;
  long lVar3;
  
  if (in_w9 <= param_3) {
    thunk_FUN_03037804(PTR_DAT_06f7a510);
    uVar1 = thunk_FUN_0301080c();
    uVar2 = thunk_FUN_03037804(PTR_DAT_06f6e3c0);
    FUN_05a662f0(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar1,param_4);
  }
  if (param_3 == 0) {
    __src = (void *)(param_2 + 8);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x228);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar3 + 0x18) <= param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    __src = (void *)(lVar3 + (ulong)(param_3 - 1U) * 0x220 + 0x20);
  }
  memcpy(param_1,__src,0x220);
  return;
}


