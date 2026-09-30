/*
FUNCTION_NAME: FUN_074615b0
ENTRY_POINT: 074615b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1 FUN_074615b0(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
                    /* try { // try from 074615b8 to 075615c3 has its CatchHandler @ 07461698 */
  if ((DAT_08269c36 & 1) == 0) {
    FUN_0373b518(Unity_Netcode_NetworkManager_TypeInfo);
                    /* try { // try from 074615d4 to 075615db has its CatchHandler @ 07461680 */
    FUN_0373b518(Unity_Netcode_NetworkLog_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRExternalComposition_TypeInfo);
    DAT_08269c36 = 1;
  }
  puVar1 = Unity_Netcode_NetworkLog_TypeInfo;
  if (*(char *)(param_1 + 0x9d) == '\0') {
    return 0;
  }
  plVar7 = *(long **)(param_1 + 0xa0);
  if (plVar7 == (long *)0x0) goto LAB_074617a4;
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Unity_Netcode_NetworkLog_TypeInfo) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_07461670;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c(plVar7,*(long *)Unity_Netcode_NetworkLog_TypeInfo,4);
LAB_07461670:
  uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  if ((uVar5 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0xa0);
    if (plVar7 == (long *)0x0) {
LAB_074617a4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_074616d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,2);
LAB_074616d8:
    lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (lVar4 == 0) goto LAB_074617a4;
    plVar7 = (long *)FUN_049cec24(lVar4,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
    uVar2 = 0;
    if (plVar7 == (long *)0x0) goto LAB_07461794;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Unity_Netcode_NetworkManager_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0746175c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar7,*(long *)Unity_Netcode_NetworkManager_TypeInfo,4);
LAB_0746175c:
    lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (lVar4 == 0) goto LAB_074617a4;
    if (1 < *(int *)(lVar4 + 0x18)) {
      if (*(char *)(param_1 + 0x9c) == '\0') {
        FUN_07460b38(param_1);
      }
      uVar2 = 1;
      goto LAB_07461794;
    }
  }
  uVar2 = 0;
LAB_07461794:
  *(undefined1 *)(param_1 + 0x9c) = uVar2;
  return uVar2;
}


