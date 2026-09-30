/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 044ecef4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  long unaff_x19;
  
  if (param_1 != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_03189058();
  }
  puVar4 = (undefined8 *)thunk_FUN_031c3ef0();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  lVar5 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar5 + 0x20) = uVar1;
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
    }
    else {
      FUN_044ece24();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


