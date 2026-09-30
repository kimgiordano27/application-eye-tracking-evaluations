/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 059ce220
PROGRAM: m3ar-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x40) != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
  puVar2 = (undefined8 *)thunk_FUN_0406e000();
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x20;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + 0x28) = uVar5;
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      *(undefined8 *)(lVar3 + 0x38) = uVar7;
      *(undefined8 *)(lVar3 + 0x30) = uVar6;
    }
    else {
      FUN_059ce150();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


