/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 054dda5c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe
               (long param_1,uint param_2,uint param_3)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (in_ZR) {
    return;
  }
  if (param_1 != 0) {
    if (param_2 < *(uint *)(param_1 + 0x18)) {
      lVar1 = param_1 + (long)(int)param_2 * 0x18;
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
      uVar6 = *(undefined8 *)(lVar1 + 0x28);
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        puVar3 = (undefined8 *)(param_1 + 0x20 + (long)(int)param_3 * 0x18);
        uVar7 = puVar3[1];
        uVar5 = *puVar3;
        *(undefined8 *)(lVar1 + 0x30) = puVar3[2];
        *(undefined8 *)(lVar1 + 0x28) = uVar7;
        *(undefined8 *)(lVar1 + 0x20) = uVar5;
        thunk_FUN_03d233cc(param_1 + 0x20 + (long)(int)param_2 * 0x18,0);
        if (param_3 < *(uint *)(param_1 + 0x18)) {
          puVar3[2] = uVar2;
          puVar3[1] = uVar6;
          *puVar3 = uVar4;
          thunk_FUN_03d233cc(param_1 + (long)(int)param_3 * 0x18 + 0x20,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 054ddb20 to 055ddb6b has its CatchHandler @ 054ddb20
                       catch() { ... } // from try @ 054ddb20 with catch @ 054ddb20
                       catch() { ... } // from try @ 054ddbd8 with catch @ 054ddb20
                       catch() { ... } // from try @ 054ddc08 with catch @ 054ddb20
                       catch() { ... } // from try @ 054ddc88 with catch @ 054ddb20 */
    FUN_03c8fb38();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


