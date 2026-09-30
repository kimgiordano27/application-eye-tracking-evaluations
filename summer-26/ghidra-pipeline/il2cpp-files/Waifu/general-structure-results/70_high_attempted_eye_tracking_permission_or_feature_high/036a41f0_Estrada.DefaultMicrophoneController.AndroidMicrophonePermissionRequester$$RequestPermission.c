/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.AndroidMicrophonePermissionRequester$$RequestPermission
ENTRY_POINT: 036a41f0
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_AndroidMicrophonePermissionRequester__RequestPermission
               (void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar6;
  
  pcVar1 = (code *)FUN_033d1b68();
  *(code **)(unaff_x22 + 0x168) = pcVar1;
  (*pcVar1)();
  if (*(char *)(unaff_x19 + 0x28) == '\0') {
    return;
  }
  uVar2 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x30),DAT_084462e8,0);
  if (DAT_086ef068 == (code *)0x0) {
    DAT_086ef068 = (code *)FUN_033d1b68("UnityEngine.PlayerPrefs::HasKey(System.String)");
  }
  uVar3 = (*DAT_086ef068)(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar6 = *(undefined4 *)(unaff_x19 + 0x38);
  }
  else {
    uVar2 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x30),DAT_084462e8,0);
    if (DAT_086ef050 == (code *)0x0) {
      DAT_086ef050 = (code *)FUN_033d1b68(
                                         "UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)"
                                         );
    }
    uVar6 = (*DAT_086ef050)(0,uVar2);
  }
  plVar4 = *(long **)(unaff_x19 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x48) = uVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
    if (*unaff_x21 != 0) {
      lVar5 = *(long *)(*unaff_x21 + 0x128);
      uVar2 = FUN_03398a84(DAT_083c6dd0);
      FUN_05487264();
      if (lVar5 != 0) {
        FUN_0548ef58(lVar5,uVar2,DAT_083ff608);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


