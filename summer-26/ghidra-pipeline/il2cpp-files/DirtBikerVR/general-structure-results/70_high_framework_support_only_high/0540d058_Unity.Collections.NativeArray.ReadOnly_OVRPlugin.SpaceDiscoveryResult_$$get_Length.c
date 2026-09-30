/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 0540d058
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Length(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  lVar2 = FUN_03ac4090();
  puVar1 = PTR_DAT_08486760;
  uVar5 = **(undefined8 **)(lVar2 + 0xc0);
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
  }
  uVar5 = FUN_0675ff58(uVar5,0);
  uVar3 = FUN_07d456b4(uVar5,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar2 = FUN_0351a760(*(undefined8 *)(unaff_x19 + 0x20));
  uVar5 = **(undefined8 **)(lVar2 + 0xc0);
  FUN_0350b93c(*(undefined8 *)(puVar1 + 0xe0));
  uVar5 = FUN_0675ff58(uVar5,0);
  uVar4 = thunk_FUN_03af1434(PTR_DAT_08494b70);
  uVar5 = FUN_065c412c(uVar4,uVar5,0);
  thunk_FUN_03af1434(PTR_DAT_08486870);
  uVar4 = thunk_FUN_03ac74bc();
  FUN_06750b44(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4);
}


