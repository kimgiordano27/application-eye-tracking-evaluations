/*
FUNCTION_NAME: UnityEngine.AudioSettings.Mobile$$InvokeIsStopAudioOutputOnMuteEnabled
ENTRY_POINT: 07444a70
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_2
*/


bool UnityEngine_AudioSettings_Mobile__InvokeIsStopAudioOutputOnMuteEnabled
               (long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  
  if ((DAT_08269b35 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8a368);
    FUN_0373b518(Unity_Netcode_NetworkManager_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_08269b35 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Unity_Netcode_NetworkManager_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_07444b20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(param_1,*(long *)Unity_Netcode_NetworkManager_TypeInfo,4);
LAB_07444b20:
    lVar6 = (*(code *)*puVar4)(param_1,puVar4[1]);
    puVar2 = OVRFaceExpressions_TypeInfo;
    puVar1 = PTR_DAT_07d8a368;
    if (lVar6 != 0) {
      bVar11 = 0 < *(int *)(lVar6 + 0x18);
      if (0 < *(int *)(lVar6 + 0x18)) {
        iVar10 = 0;
        do {
          plVar5 = (long *)FUN_049cec24(lVar6,iVar10,*(undefined8 *)puVar2);
          if (plVar5 == (long *)0x0) goto LAB_07444c04;
          lVar7 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                goto LAB_07444bc4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,5);
LAB_07444bc4:
          iVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (iVar3 == param_2) {
            return bVar11;
          }
          iVar10 = iVar10 + 1;
          bVar11 = iVar10 < *(int *)(lVar6 + 0x18);
        } while (iVar10 < *(int *)(lVar6 + 0x18));
      }
      return bVar11;
    }
  }
LAB_07444c04:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


