/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 047a59f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals
               (long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 != 0) {
    if ((param_2 < *(uint *)(param_1 + 0x18)) && (param_3 < *(uint *)(param_1 + 0x18))) {
      puVar1 = (undefined8 *)(param_1 + 0x20 + (long)(int)param_3 * 0x10);
      lVar2 = param_1 + (long)(int)param_2 * 0x10;
      uVar3 = *puVar1;
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = puVar1[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_036b7ad0(param_1 + 0x20 + (long)(int)param_2 * 0x10,0);
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        puVar1[1] = uVar5;
        *puVar1 = uVar4;
        thunk_FUN_036b7ad0(puVar1,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 047a5a8c to 048a5ad7 has its CatchHandler @ 047a5a8c
                       catch() { ... } // from try @ 047a5a8c with catch @ 047a5a8c
                       catch() { ... } // from try @ 047a5b40 with catch @ 047a5a8c
                       catch() { ... } // from try @ 047a5b70 with catch @ 047a5a8c
                       catch() { ... } // from try @ 047a5bec with catch @ 047a5a8c */
  FUN_03642c18();
}


