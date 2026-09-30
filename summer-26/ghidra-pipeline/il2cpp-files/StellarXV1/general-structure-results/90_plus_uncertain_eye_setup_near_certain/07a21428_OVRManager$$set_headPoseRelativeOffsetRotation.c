/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 07a21428
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(undefined4 param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x19 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x22 + 0xac) = param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_089cc398(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07a214b0;
    bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
  }
  else {
    bVar1 = true;
  }
  if (lVar5 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    *(bool *)(lVar5 + 0xb4) = bVar1;
    if ((lVar3 != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
      *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) = *(int *)(lVar3 + 0x84) == 2;
      FUN_07a1e94c();
      return;
    }
  }
LAB_07a214b0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


