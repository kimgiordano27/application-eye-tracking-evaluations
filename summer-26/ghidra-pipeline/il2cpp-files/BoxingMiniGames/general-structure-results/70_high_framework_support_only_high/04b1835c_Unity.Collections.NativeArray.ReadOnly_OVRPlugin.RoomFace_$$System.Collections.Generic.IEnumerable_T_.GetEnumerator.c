/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.RoomFace>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04b1835c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_RoomFace>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_052979d4(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x90));
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60) + 0x135) & 1) ==
      0) {
    FUN_0367c9fc();
  }
  FUN_0732523c();
  lVar2 = *(long *)(unaff_x20 + 0x318);
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (lVar2 != 0) {
    FUN_0732523c(lVar2,*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0xa0),0);
    lVar1 = FUN_0513e244();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    if (lVar1 != 0) {
      FUN_0732523c(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xa8),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


