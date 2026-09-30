/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03b5e328
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar3);
  }
  uVar1 = FUN_03b5cbc0();
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978(lVar3);
    }
    if (unaff_x21 != (long *)0x0) {
      if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
        puVar2 = (undefined4 *)thunk_FUN_02cea9e8();
        FUN_03b5e2b0(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  return;
}


