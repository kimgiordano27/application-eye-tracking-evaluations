/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05f17c14
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 < *(uint *)(unaff_x20 + 0x18)) {
    puVar3 = (undefined8 *)(unaff_x20 + (long)(int)param_3 * 8 + 0x20);
    uVar4 = *puVar3;
    if (param_4 < *(uint *)(unaff_x20 + 0x18)) {
      puVar2 = (undefined8 *)(unaff_x20 + (long)(int)param_4 * 8 + 0x20);
      uVar5 = *puVar2;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      iVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),uVar4,uVar5,*(undefined8 *)(param_2 + 0x28)
                        );
      if (iVar1 < 1) {
        return;
      }
      if ((param_3 < *(uint *)(unaff_x20 + 0x18)) && (param_4 < *(uint *)(unaff_x20 + 0x18))) {
        uVar4 = *puVar3;
        *puVar3 = *puVar2;
        thunk_FUN_044bb4b4(puVar3,0);
        if (param_4 < *(uint *)(unaff_x20 + 0x18)) {
          *puVar2 = uVar4;
          thunk_FUN_044bb4b4(puVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


