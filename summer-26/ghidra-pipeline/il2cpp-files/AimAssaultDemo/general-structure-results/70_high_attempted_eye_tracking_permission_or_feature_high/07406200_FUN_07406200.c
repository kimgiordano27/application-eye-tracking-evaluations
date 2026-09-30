/*
FUNCTION_NAME: FUN_07406200
ENTRY_POINT: 07406200
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


bool FUN_07406200(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  if ((DAT_08269913 & 1) == 0) {
    FUN_0373b518(Unity_Netcode_NetworkLog_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_08269913 = 1;
  }
  puVar3 = OVRFaceExpressions_TypeInfo;
  puVar2 = Unity_Netcode_NetworkLog_TypeInfo;
  lVar4 = *(long *)(param_1 + 0xd8);
  if (lVar4 != 0) {
    iVar9 = 0;
    do {
      iVar1 = *(int *)(lVar4 + 0x18);
      if (iVar1 <= iVar9) {
LAB_074062f8:
        return iVar9 < iVar1;
      }
      plVar5 = (long *)FUN_049cec24(lVar4,iVar9,*(undefined8 *)puVar3);
      if (plVar5 == (long *)0x0) break;
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_074062d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,4);
LAB_074062d8:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar7 & 1) != 0) goto LAB_074062f8;
      lVar4 = *(long *)(param_1 + 0xd8);
      iVar9 = iVar9 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


