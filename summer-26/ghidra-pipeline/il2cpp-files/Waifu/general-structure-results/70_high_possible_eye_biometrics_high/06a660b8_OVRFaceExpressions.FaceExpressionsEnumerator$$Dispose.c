/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 06a660b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context
*/


undefined8 OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_086e1f13 & 1) == 0) {
    FUN_0335b6c8(&DAT_083e19e0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e19f0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cc010,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cca30,1);
    DataMemoryBarrier(2,3);
    DAT_086e1f13 = 1;
  }
  if ((**(long **)(DAT_083cc010 + 0xb8) == 0) ||
     (iVar2 = FUN_05cb6324(**(long **)(DAT_083cc010 + 0xb8),param_1,
                           *(undefined8 *)(*(long *)(*(long *)(DAT_083e19e0 + 0x20) + 0xc0) + 0x108)
                          ), iVar2 < 0)) {
    uVar5 = 0;
    bVar1 = 1;
  }
  else {
    if ((**(long **)(DAT_083cc010 + 0xb8) == 0) ||
       ((lVar3 = FUN_05cb5ba0(**(long **)(DAT_083cc010 + 0xb8),param_1,DAT_083e19f0), lVar3 == 0 ||
        (plVar8 = *(long **)(lVar3 + 0x38), plVar8 == (long *)0x0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cca30) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_06a661f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cca30,2);
LAB_06a661f0:
    bVar1 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    bVar1 = bVar1 & 1;
    uVar5 = 1;
  }
  *param_2 = bVar1;
  return uVar5;
}


