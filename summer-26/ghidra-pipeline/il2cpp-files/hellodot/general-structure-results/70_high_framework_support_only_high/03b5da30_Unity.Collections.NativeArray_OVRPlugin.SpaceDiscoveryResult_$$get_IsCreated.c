/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 03b5da30
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated
          (long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02ce0978(lVar4);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar4);
  }
  uVar1 = FUN_03b5cbc0(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8));
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978(lVar4);
    }
    if (param_2 != (long *)0x0) {
      if (*(long *)(*param_2 + 0x40) == *(long *)(lVar4 + 0x40)) {
        puVar2 = (undefined4 *)thunk_FUN_02cea9e8();
        uVar3 = FUN_035c51b0(*puVar2,puVar2[1],puVar2[2],puVar2[3],*(undefined8 *)(param_1 + 0x10),0
                             ,*(undefined4 *)(param_1 + 0x18),
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                      0xc0) + 0xd0) + 0x20) + 0xc0)
                              + 0x150));
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  return 0xffffffff;
}


