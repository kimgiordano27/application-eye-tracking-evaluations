/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 056e3270
PROGRAM: Untangled-libil2cpp.so
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
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  
  FUN_02f07e70();
  *(undefined1 *)(unaff_x21 + 0x692) = 1;
  if ((unaff_x19 != 0) && (plVar5 = (long *)FUN_05adf674(), plVar5 != (long *)0x0)) {
    iVar4 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    puVar3 = PTR_DAT_06d56bb8;
    if (iVar4 == 0x3c) {
      uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
      lVar6 = *(long *)PTR_DAT_06d56bb8;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar6 = *(long *)puVar3;
      }
      uVar7 = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_06d0f460 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d0f460);
      }
      uVar7 = FUN_05ad20ec(uVar7,0);
      FUN_05ac6ec8(uVar1,uVar2,uVar7,0);
      return;
    }
    FUN_05ae8a44();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


