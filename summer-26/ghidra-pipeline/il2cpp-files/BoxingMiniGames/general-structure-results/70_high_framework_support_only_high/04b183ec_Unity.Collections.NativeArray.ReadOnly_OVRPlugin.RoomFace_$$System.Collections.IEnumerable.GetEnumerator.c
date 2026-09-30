/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.RoomFace>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04b183ec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_RoomFace>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  FUN_0732523c(param_2,*(undefined8 *)(param_1 + 0xa0),0);
  lVar1 = FUN_0513e244();
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (lVar1 != 0) {
    FUN_0732523c(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xa8),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


