/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 060d07cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRawPose(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 uVar4;
  long *unaff_x21;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0xa93) = 1;
  puVar1 = PTR_DAT_07a24380;
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_07a24380 + 0xb8);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_071c0684(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(unaff_x23 + 0xa93) == '\0') {
      FUN_03642964(PTR_DAT_07a24380);
      *(undefined1 *)(unaff_x23 + 0xa93) = 1;
    }
    uVar4 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_071c0684(uVar4);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_071bd1a0();
      if (lVar3 != 0) {
        uVar4 = thunk_FUN_071c6398(lVar3,0);
        uVar4 = FUN_05c981c8(*(undefined8 *)PTR_DAT_07a24388,uVar4,*(undefined8 *)PTR_DAT_07a24390,0
                            );
        if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
        }
        FUN_07179da0(uVar4);
        uVar4 = FUN_071bd1a0();
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_036a1978(*unaff_x21);
        }
        FUN_071c7290(uVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  if (DAT_07ee0a94 == '\0') {
    FUN_03642964(PTR_DAT_07a24380);
    DAT_07ee0a94 = '\x01';
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
  thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  return;
}


