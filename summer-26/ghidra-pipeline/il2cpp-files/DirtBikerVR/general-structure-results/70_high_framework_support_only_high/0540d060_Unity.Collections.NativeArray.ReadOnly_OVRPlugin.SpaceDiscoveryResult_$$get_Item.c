/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Item
ENTRY_POINT: 0540d060
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Item(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x21 + 0x760);
  lVar3 = *(long *)(lVar5 + 0xe0);
  uVar4 = **(undefined8 **)(param_1 + 0xc0);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar3);
  }
  uVar4 = FUN_0675ff58(uVar4,0);
  uVar1 = FUN_07d456b4(uVar4,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar3 = FUN_0351a760(*(undefined8 *)(unaff_x19 + 0x20));
  uVar4 = **(undefined8 **)(lVar3 + 0xc0);
  FUN_0350b93c(*(undefined8 *)(lVar5 + 0xe0));
  uVar4 = FUN_0675ff58(uVar4,0);
  uVar2 = thunk_FUN_03af1434(PTR_DAT_08494b70);
  uVar4 = FUN_065c412c(uVar2,uVar4,0);
  thunk_FUN_03af1434(PTR_DAT_08486870);
  uVar2 = thunk_FUN_03ac74bc();
  FUN_06750b44(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar2);
}


