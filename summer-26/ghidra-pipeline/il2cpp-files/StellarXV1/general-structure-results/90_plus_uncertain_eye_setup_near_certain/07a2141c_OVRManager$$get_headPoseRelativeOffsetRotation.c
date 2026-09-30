/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 07a2141c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation(void)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x21;
  long lVar5;
  long unaff_x22;
  undefined4 uVar6;
  
  uVar6 = FUN_07a20788();
  if (unaff_x22 != 0) {
    lVar2 = *unaff_x21;
    lVar5 = *(long *)(unaff_x19 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x22 + 0xac) = uVar6;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_089cc398(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07a214b0;
      bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
    }
    else {
      bVar1 = true;
    }
    if (lVar5 != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      *(bool *)(lVar5 + 0xb4) = bVar1;
      if ((lVar2 != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
        *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) = *(int *)(lVar2 + 0x84) == 2;
        FUN_07a1e94c();
        return;
      }
    }
  }
LAB_07a214b0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


