/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 03666550
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x121) == '\0') {
    return;
  }
  (**(code **)(*unaff_x20 + 0x2c8))();
  (**(code **)(*unaff_x20 + 0x2d8))();
  lVar2 = FUN_04070398();
  if ((lVar2 != 0) &&
     (lVar2 = FUN_0407d2c4(lVar2,0),
     puVar1 = Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__, lVar2 != 0)) {
    uVar3 = FUN_040703d4(lVar2,0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar2);
    }
    if (DAT_04833e10 == '\0') {
      thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
      DAT_04833e10 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_023107ac(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


