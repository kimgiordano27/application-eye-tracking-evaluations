/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 03136324
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation(ulong param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f7c8);
    thunk_FUN_01ad9084(StringLiteral_362);
    *(undefined1 *)(unaff_x21 + 0xec6) = 1;
  }
  if (*(char *)((long)param_2 + 0x121) != '\0') {
    (**(code **)(*param_2 + 0x2c8))(param_2,*(undefined8 *)(*param_2 + 0x2d0));
    (**(code **)(*param_2 + 0x2d8))(param_2,0,1,*(undefined8 *)(*param_2 + 0x2e0));
    lVar2 = FUN_0391c27c(param_2,0);
    if ((lVar2 != 0) && (lVar2 = FUN_03928c2c(lVar2,0), puVar1 = StringLiteral_362, lVar2 != 0)) {
      uVar3 = FUN_0391c2b8(lVar2,0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar2);
      }
      if (DAT_03fed7c6 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c6 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ed03b4(uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


