/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 03cb5290
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
          (long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar3);
  }
  uVar2 = FUN_03cb4190(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8));
  if ((uVar2 & 1) == 0) {
    uVar4 = 0xffffffff;
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
    memcpy(&stack0x00000000,__src,0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0) +
                                 0x20) + 0xc0) + 0x148);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    uVar4 = FUN_0361bf00(uVar4,&stack0x00000048,0,uVar1,uVar5);
  }
  return uVar4;
}


