/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 087ea73c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
LAB_087ea794:
  while( true ) {
    thunk_FUN_040ec700(param_1,unaff_x21);
    lVar1 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 8;
    if (unaff_x22 + lVar1 == 4) {
      return *(undefined8 *)(unaff_x19 + 0x128);
    }
    plVar4 = *(long **)(unaff_x19 + 0x128);
    if (unaff_x23 != 0x20) break;
    if (plVar4 == (long *)0x0) goto LAB_087ea7c8;
    unaff_x21 = *(long *)(unaff_x19 + 0x110);
    if ((unaff_x21 != 0) &&
       (lVar2 = thunk_FUN_040b4e00(unaff_x21,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_087ea7d0:
      uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,0);
    }
    if ((int)plVar4[3] == 0) goto LAB_087ea7cc;
    param_1 = plVar4 + 4;
    *param_1 = unaff_x21;
    unaff_x24 = lVar1;
  }
  lVar2 = *(long *)(unaff_x19 + 0x720);
  if (lVar2 == 0) {
LAB_087ea7c8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (unaff_x24 - 3U < (ulong)*(uint *)(lVar2 + 0x18)) {
    if ((*(long *)(lVar2 + unaff_x23) == 0) || (plVar4 == (long *)0x0)) goto LAB_087ea7c8;
    unaff_x21 = *(long *)(*(long *)(lVar2 + unaff_x23) + 0xf0);
    if ((unaff_x21 != 0) &&
       (lVar2 = thunk_FUN_040b4e00(unaff_x21,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
    goto LAB_087ea7d0;
    if (unaff_x24 - 3U < (ulong)*(uint *)(plVar4 + 3)) {
      param_1 = (long *)((long)plVar4 + unaff_x23);
      *(long *)((long)plVar4 + unaff_x23) = unaff_x21;
      unaff_x24 = lVar1;
      goto LAB_087ea794;
    }
  }
LAB_087ea7cc:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


