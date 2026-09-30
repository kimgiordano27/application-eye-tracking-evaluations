/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 05ccd9d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x4e6) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091fcb68);
    *(undefined1 *)(unaff_x22 + 0x4e6) = 1;
  }
  iVar1 = FUN_06093590(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
  if (iVar1 == 1) {
    uVar2 = FUN_0609352c(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90)
                        );
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar3 = 1;
    lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_06fd2898(*(undefined8 *)PTR_DAT_091fcb68,*(undefined8 *)(param_1 + 0x118),
                         *(undefined8 *)(param_1 + 0x108),0);
    uVar2 = 0;
    lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    uVar3 = 0;
  }
  FUN_05fbbdc8(param_1,uVar2,uVar3,uVar4,*(undefined8 *)(lVar5 + 0x48));
  return;
}


