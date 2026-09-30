/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 03be1ac4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose
               (undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  undefined1 auStack_c8 [168];
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar3);
  }
  uVar2 = FUN_03be1358(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8));
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    __src = (void *)thunk_FUN_02f453b8();
    memcpy(auStack_c8,__src,0xa8);
    uVar1 = FUN_03be1a50(param_1,auStack_c8,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0));
  }
  return uVar1 & 1;
}


