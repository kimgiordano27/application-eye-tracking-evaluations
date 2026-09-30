/*
FUNCTION_NAME: FUN_04a053b4
ENTRY_POINT: 04a053b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04a053b4(undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  
  if (1 < param_3) {
    iVar1 = FUN_05dc24f0(param_3,0);
    lVar2 = *(long *)(param_5 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar2 = *(long *)(param_5 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    OVRPlugin_PinnedArray<Guid>__Dispose
              (param_1,param_2,param_2 + param_3 + -1,iVar1 << 1,param_4,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
    return;
  }
  return;
}


