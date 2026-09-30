/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$UnsafeElementAt
ENTRY_POINT: 04d020a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__UnsafeElementAt
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  cVar2 = *(char *)(param_1 + 0x30);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  uVar3 = thunk_FUN_0322f148();
  FUN_059be730(uVar3,uVar5,uVar1,cVar2 != '\0',param_2,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60));
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04d02130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x1b0));
    return uVar5;
  }
  return uVar3;
}


