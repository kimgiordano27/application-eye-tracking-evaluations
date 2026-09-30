/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnlySpan
ENTRY_POINT: 050a5fbc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnlySpan
               (long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((param_2 < *(uint *)(param_1 + 0x18)) && (param_3 < *(uint *)(param_1 + 0x18))) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a5f88 with catch @ 050a5fec
                       try { // try from 050a5fec to 051a6003 has its CatchHandler @ 050a5f3c */
    puVar1 = (undefined8 *)(param_1 + 0x20 + (long)(int)param_3 * 0x10);
    lVar2 = param_1 + (long)(int)param_2 * 0x10;
    uVar3 = *puVar1;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = puVar1[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)param_2 * 0x10,0);
    if (param_3 < *(uint *)(param_1 + 0x18)) {
      puVar1[1] = uVar5;
      *puVar1 = uVar4;
      thunk_FUN_03afed3c(puVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


