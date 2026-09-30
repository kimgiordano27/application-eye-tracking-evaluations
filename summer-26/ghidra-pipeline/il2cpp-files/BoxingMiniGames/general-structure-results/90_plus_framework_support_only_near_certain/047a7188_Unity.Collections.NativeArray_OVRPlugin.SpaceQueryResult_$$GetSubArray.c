/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 047a7188
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
              (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03643084();
  }
  puVar2 = (undefined8 *)thunk_FUN_0367ff68();
  uVar4 = puVar2[2];
  uVar6 = puVar2[1];
  uVar5 = *puVar2;
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      thunk_FUN_036b7ad0(lVar3 + 0x20,0);
    }
    else {
      FUN_047a70a8();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


