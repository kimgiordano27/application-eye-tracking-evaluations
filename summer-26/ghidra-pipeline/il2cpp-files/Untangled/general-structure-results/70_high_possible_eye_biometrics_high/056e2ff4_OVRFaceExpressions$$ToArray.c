/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 056e2ff4
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 OVRFaceExpressions__ToArray(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02eea768();
  }
  puVar1 = PTR_DAT_06d56bb8;
  if (unaff_x20 != (long *)0x0) {
    lVar2 = (**(code **)(*unaff_x20 + 0x1a8))();
    plVar3 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_05ae60f0(plVar3,0);
    puVar1 = PTR_DAT_06d3b7a0;
    if ((lVar2 != 0) && (plVar3 != (long *)0x0)) {
      uVar4 = (**(code **)(*plVar3 + 0x178))
                        (plVar3,*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(*plVar3 + 0x180));
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_05b2f164(uVar5,uVar4,uVar6,0);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


