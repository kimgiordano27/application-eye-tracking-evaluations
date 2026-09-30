/*
FUNCTION_NAME: FUN_059ca150
ENTRY_POINT: 059ca150
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_059ca150(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((DAT_06bc1d1d & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cd898);
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    DAT_06bc1d1d = 1;
  }
  FUN_05954320(param_1,param_2,0);
  puVar2 = PTR_DAT_067cd898;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  bVar1 = *(byte *)(param_1 + 0xcd);
  if (*(int *)(*(long *)PTR_DAT_067cd898 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_059ca32c;
    FUN_059c9348(param_2,*(undefined4 *)(param_1 + 0xc0));
    lVar3 = *(long *)puVar2;
  }
  bVar1 = *(byte *)(param_1 + 0xce);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_059ca32c;
    FUN_059c9614(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),param_2);
    lVar3 = *(long *)puVar2;
  }
  bVar1 = *(byte *)(param_1 + 0xcf);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb678f == '\0') {
    FUN_02f08768(PTR_DAT_067cd898);
    DAT_06bb678f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if ((**(byte **)(lVar3 + 0xb8) & bVar1) == 0) {
    return;
  }
  if (param_2 != (long *)0x0) {
    FUN_059c9578(param_2,*(undefined1 *)(param_1 + 0xcc));
    return;
  }
LAB_059ca32c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


