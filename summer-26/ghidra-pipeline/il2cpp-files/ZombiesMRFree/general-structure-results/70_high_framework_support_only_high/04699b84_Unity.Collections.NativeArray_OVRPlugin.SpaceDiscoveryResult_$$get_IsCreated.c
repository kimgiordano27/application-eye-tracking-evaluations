/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 04699b84
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_02feb2c4(param_1);
  }
  lVar2 = FUN_05b3c260();
  lVar3 = *(long *)(unaff_x23 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar3);
    lVar3 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar3);
  }
  FUN_068b42bc(unaff_x20 + unaff_w22 * 0xc,lVar2 + unaff_w21 * 0xc,(long)(unaff_w19 * 0xc),0);
  FUN_05a11888(&stack0x00000008,0);
  return;
}


