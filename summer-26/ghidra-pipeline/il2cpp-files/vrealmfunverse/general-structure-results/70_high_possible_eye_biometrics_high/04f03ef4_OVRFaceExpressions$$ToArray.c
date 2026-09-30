/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 04f03ef4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(ulong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322e08);
    *(undefined1 *)(unaff_x20 + 0x77f) = 1;
  }
  if ((*(char *)(unaff_x19 + 0x40) != '\0') && (*(char *)(unaff_x19 + 0x41) == '\0')) {
    FUN_04f03fc8();
    *(undefined1 *)(unaff_x19 + 0x41) = 1;
  }
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06322e08) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04f03f88;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322e08,0);
LAB_04f03f88:
  bVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (*(byte *)(unaff_x19 + 0x42) == (bVar1 & 1)) {
    return;
  }
  *(byte *)(unaff_x19 + 0x42) = bVar1 & 1;
  FUN_04f03fc8();
  return;
}


