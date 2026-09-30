/*
FUNCTION_NAME: FUN_04b18238
ENTRY_POINT: 04b18238
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04b18238(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  if (*(int *)((long)param_1 + 0x39c) == iVar3) {
    return;
  }
  *(int *)((long)param_1 + 0x39c) = iVar3;
  if (-1 < iVar3) {
    lVar1 = param_1[0x6b];
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (iVar3 < *(int *)(lVar1 + 0x18)) {
      uVar2 = FUN_0459ed6c(lVar1,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
      goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_RoomFace>__UnsafeElementAt;
    }
  }
  uVar2 = 0;
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_RoomFace>__UnsafeElementAt:
  (**(code **)(*param_1 + 0xa38))(param_1,uVar2,*(undefined8 *)(*param_1 + 0xa40));
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  FUN_0744f048(param_1,*(undefined8 *)(lVar1 + 0xb8),0);
  return;
}


