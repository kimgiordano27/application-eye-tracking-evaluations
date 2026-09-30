/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 0399814c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray
               (long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x21;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  iVar1 = (uint)unaff_x21 + 1;
  FUN_0399871c(param_2,iVar1,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x78));
  lVar2 = *(long *)(param_2 + 0x10);
  *(int *)(param_2 + 0x18) = iVar1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((uint)unaff_x21 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + unaff_x21 * 0x10;
    *(undefined4 *)(lVar2 + 0x28) = unaff_s9;
    *(undefined4 *)(lVar2 + 0x2c) = unaff_s8;
    *(undefined4 *)(lVar2 + 0x20) = unaff_s11;
    *(undefined4 *)(lVar2 + 0x24) = unaff_s10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


