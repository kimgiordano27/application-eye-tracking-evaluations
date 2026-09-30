/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 062f079c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan
               (ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_04481fb8();
  }
  if (unaff_x20 != 0) {
    FUN_09694a70();
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98))();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8(lVar2);
    }
    if (lVar1 != 0) {
      FUN_09694a70(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xa0),0);
      lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))();
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8(lVar2);
      }
      if (lVar1 != 0) {
        FUN_09694a70(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xa8),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


