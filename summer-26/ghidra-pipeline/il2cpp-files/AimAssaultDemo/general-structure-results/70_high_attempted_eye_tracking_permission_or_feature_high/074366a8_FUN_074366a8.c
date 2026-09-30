/*
FUNCTION_NAME: FUN_074366a8
ENTRY_POINT: 074366a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool FUN_074366a8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  
  if ((DAT_08269ac2 & 1) == 0) {
    FUN_0373b518(Unity_Netcode_NetworkManager_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    DAT_08269ac2 = 1;
  }
  uVar1 = FUN_0741ee1c(param_1,param_2,0);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_07418bf0(param_1,0);
    if ((uVar1 & 1) == 0) {
      if (param_2 == (long *)0x0) goto LAB_0743681c;
      lVar3 = *param_2;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)Unity_Netcode_NetworkManager_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 6) * 0x10 + 0x138);
            goto LAB_07436764;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_0377596c(param_2,*(long *)Unity_Netcode_NetworkManager_TypeInfo,6);
LAB_07436764:
      uVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
      if ((uVar1 & 1) == 0) {
        return true;
      }
    }
    uVar1 = FUN_0741ee7c(param_1,param_2,0);
    if ((uVar1 & 1) != 0) {
      if (param_2 != (long *)0x0) {
        lVar3 = *param_2;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)Unity_Netcode_NetworkManager_TypeInfo) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 4) * 0x10 + 0x138);
              goto LAB_074367f4;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_0377596c(param_2,*(long *)Unity_Netcode_NetworkManager_TypeInfo,4);
LAB_074367f4:
        lVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
        if (lVar3 != 0) {
          return *(int *)(lVar3 + 0x18) == 1;
        }
      }
LAB_0743681c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  return false;
}


