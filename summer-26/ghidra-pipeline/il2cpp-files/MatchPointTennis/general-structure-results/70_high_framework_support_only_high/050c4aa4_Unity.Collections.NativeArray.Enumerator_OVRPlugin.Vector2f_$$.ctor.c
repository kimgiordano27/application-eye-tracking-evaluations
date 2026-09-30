/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 050c4aa4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector2f>___ctor(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_094bbcfc(0);
  if (((uVar2 & 1) != 0) && (lVar3 = *unaff_x20, lVar3 != 0)) {
    if (unaff_x21 != 0) {
      FUN_05baf38c();
      lVar3 = *unaff_x20;
    }
    if (lVar3 == 0) goto LAB_050c4bf8;
    FUN_0945fc10(lVar3,0);
  }
  *unaff_x20 = unaff_x22;
  thunk_FUN_044bb4b4();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_094bbcfc(0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (unaff_x21 != 0) {
    lVar3 = *unaff_x20;
    lVar4 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_050c4bf8;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44();
    }
  }
  if (unaff_x19 != 0) {
    uVar2 = FUN_09525150();
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*unaff_x20 != 0) {
      FUN_0945fbe0(*unaff_x20,0);
      return;
    }
  }
LAB_050c4bf8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


