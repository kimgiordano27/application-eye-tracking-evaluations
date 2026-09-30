/*
FUNCTION_NAME: FUN_073c8888
ENTRY_POINT: 073c8888
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


void FUN_073c8888(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_082696b0 & 1) == 0) {
    FUN_0373b518(Unity_Netcode_NetworkManager_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_082696b0 = 1;
  }
  puVar2 = Unity_Netcode_NetworkManager_TypeInfo;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Unity_Netcode_NetworkManager_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_073c8930;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(param_2,*(long *)Unity_Netcode_NetworkManager_TypeInfo,4);
LAB_073c8930:
    lVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
    puVar3 = OVRFaceExpressions_TypeInfo;
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      do {
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          return;
        }
        lVar6 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_073c89a4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(param_2,*(long *)puVar2,4);
LAB_073c89a4:
        lVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (lVar6 == 0) break;
        uVar5 = FUN_049cec24(lVar6,iVar1,*(undefined8 *)puVar3);
        (**(code **)(*param_1 + 1000))(param_1,uVar5,param_2,*(undefined8 *)(*param_1 + 0x3f0));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


