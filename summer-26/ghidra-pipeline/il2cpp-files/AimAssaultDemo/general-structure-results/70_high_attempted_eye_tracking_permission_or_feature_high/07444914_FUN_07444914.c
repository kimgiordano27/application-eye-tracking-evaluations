/*
FUNCTION_NAME: FUN_07444914
ENTRY_POINT: 07444914
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


undefined8 FUN_07444914(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_08269b34 & 1) == 0) {
    FUN_0373b518(Unity_Netcode_NetworkManager_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_08269b34 = 1;
  }
  puVar1 = Unity_Netcode_NetworkManager_TypeInfo;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar4 = *param_1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Unity_Netcode_NetworkManager_TypeInfo) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_074449b4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(param_1,*(long *)Unity_Netcode_NetworkManager_TypeInfo,4);
LAB_074449b4:
  lVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) < 1) {
      return 0;
    }
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 074449e4 to 075449f3 has its CatchHandler @ 074449f4 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_07444a30;
        }
                    /* catch() { ... } // from try @ 074447d8 with catch @ 074449f4
                       catch() { ... } // from try @ 074449e4 with catch @ 074449f4 */
        uVar5 = uVar5 - 1;
                    /* try { // try from 074449f8 to 075449fb has its CatchHandler @ 07444a04 */
        piVar6 = piVar6 + 4;
                    /* try { // try from 074449fc to 07544a07 has its CatchHandler @ 07443ed0 */
      } while (uVar5 != 0);
    }
                    /* catch() { ... } // from try @ 074449f8 with catch @ 07444a04 */
                    /* try { // try from 07444a08 to 07544b7b has its CatchHandler @ 07444a08
                       catch() { ... } // from try @ 07444a08 with catch @ 07444a08
                       catch() { ... } // from try @ 07445828 with catch @ 07444a08
                       catch() { ... } // from try @ 07445930 with catch @ 07444a08
                       catch() { ... } // from try @ 07445b3c with catch @ 07444a08 */
    puVar2 = (undefined8 *)FUN_0377596c(param_1,*(long *)puVar1,4);
LAB_07444a30:
    lVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (lVar4 != 0) {
      uVar3 = FUN_049cec24(lVar4,0,*(undefined8 *)OVRFaceExpressions_TypeInfo);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


