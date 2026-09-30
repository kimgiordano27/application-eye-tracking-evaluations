/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 027c311c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  
  FUN_01ab69ac(PTR_DAT_03cf2d18);
  FUN_01ab69ac(PTR_DAT_03cbe5e8);
  FUN_01ab69ac(PTR_DAT_03cfc648);
  *(undefined1 *)(unaff_x21 + 0xf3c) = 1;
  puVar2 = PTR_DAT_03cfc640;
  puVar1 = PTR_DAT_03cbe5e8;
  if (unaff_x19 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cd9db0);
    FUN_026a44fc(uVar4,uVar6,0);
  }
  else {
    if (*unaff_x20 != 0) {
      plVar3 = (long *)FUN_0267e2d0(*unaff_x20,0);
      uVar6 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar1);
      }
      FUN_0277b678(uVar6,0);
      if (plVar3 != (long *)0x0) {
        lVar5 = *(long *)PTR_DAT_03cf2d18;
        if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar3,lVar5);
        }
      }
      FUN_026561d4();
      return;
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cd9db8);
    uVar4 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfc628);
    FUN_0264cdac(uVar4,uVar6,0);
  }
  uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfc658);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar6);
}


