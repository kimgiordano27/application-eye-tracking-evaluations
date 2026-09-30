/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 06a65dc0
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined1 unaff_w21;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08449850,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xf11) = unaff_w21;
  if (*(char *)(unaff_x19 + 0x40) == '\0') {
    return;
  }
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083ccb38) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06a65e48;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083ccb38,0);
LAB_06a65e48:
    uVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (**(long **)(DAT_083cc010 + 0xb8) != 0) {
      iVar2 = FUN_05cb6324(**(long **)(DAT_083cc010 + 0xb8),uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(DAT_083e19e0 + 0x20) + 0xc0) + 0x108)
                          );
      if (iVar2 < 0) {
        if (**(long **)(DAT_083cc010 + 0xb8) != 0) {
          FUN_05cb6720(**(long **)(DAT_083cc010 + 0xb8),uVar1);
          return;
        }
        goto LAB_06a65ef8;
      }
    }
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079ca0b0(DAT_08449850,0);
    return;
  }
LAB_06a65ef8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


