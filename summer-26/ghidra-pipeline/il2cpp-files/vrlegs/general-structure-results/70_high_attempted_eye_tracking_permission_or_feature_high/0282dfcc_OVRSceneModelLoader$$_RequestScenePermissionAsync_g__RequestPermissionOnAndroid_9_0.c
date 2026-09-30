/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 0282dfcc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8
OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0(long param_1)

{
  short sVar1;
  int iVar2;
  long unaff_x20;
  int iVar3;
  int iStack000000000000000c;
  
  if ((*(byte *)(unaff_x20 + 0x426) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc1828);
    *(undefined1 *)(unaff_x20 + 0x426) = 1;
  }
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        sVar1 = FUN_025b8a2c(param_1,iVar2,0);
        if (sVar1 == 0x2c) {
          if (iVar3 == 0) {
            iStack000000000000000c = iVar2;
            FUN_02241190();
            return 0;
          }
        }
        else if (sVar1 == 0x5d) {
          iVar3 = iVar3 + -1;
        }
        else if (sVar1 == 0x5b) {
          iVar3 = iVar3 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x10));
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


