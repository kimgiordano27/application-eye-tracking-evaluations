/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 047a6d20
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(uint *)(param_2 + 0x18) <= param_3) {
    FUN_05e39914(0);
  }
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if (param_3 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)param_3 * 0x18;
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
      param_1[1] = *(undefined8 *)(lVar1 + 0x28);
      *param_1 = uVar3;
      param_1[2] = uVar2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


