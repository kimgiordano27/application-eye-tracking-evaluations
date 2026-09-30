/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.MacOSMicrophonePermissionRequester.<RequestPermission>d__2$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 036a4a6c
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_MacOSMicrophonePermissionRequester_<RequestPermission>d__2__System_Collections_IEnumerator_get_Current
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  
  if (DAT_086ef190 == (code *)0x0) {
    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
  }
  lVar4 = (*DAT_086ef190)();
  if (lVar4 == 0) goto LAB_036a4d00;
  lVar4 = FUN_03fa1bc8(lVar4,DAT_0840ca38);
  *unaff_x23 = lVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x23 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x23 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = *unaff_x23;
  }
  if (lVar4 == 0) goto LAB_036a4d00;
  lVar4 = *(long *)(lVar4 + 0x100);
  uVar5 = FUN_03398a84(DAT_083d2738);
  FUN_07a222a8();
  if (lVar4 == 0) goto LAB_036a4d00;
  FUN_07a223cc(lVar4,uVar5,0);
  if (*(char *)(unaff_x19 + 0x29) == '\0') {
    lVar4 = *(long *)(unaff_x19 + 0x40);
    if (lVar4 == 0) goto LAB_036a4d00;
    if (*(char *)(unaff_x19 + 0x28) != '\0') goto Estrada_Microphone__get_devices;
LAB_036a4c48:
    FUN_079b2acc(0xff800000,lVar4,DAT_08446db8,0xffffffff);
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  else {
    uVar5 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
    uVar5 = FUN_07a0670c(uVar5,0);
    uVar6 = FUN_0666e380(uVar5,DAT_0842d1f0);
    if ((uVar6 & 1) == 0) {
      uVar5 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
      uVar5 = FUN_07a0670c(uVar5,0);
      uVar6 = FUN_0666e380(uVar5,DAT_08459648);
      if ((uVar6 & 1) == 0) {
        uVar5 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar5 = FUN_07a0670c(uVar5,0);
        uVar6 = FUN_0666e380(uVar5,DAT_08452820);
        if ((uVar6 & 1) != 0) {
          lVar4 = *unaff_x22;
          if (lVar4 == 0) goto LAB_036a4d00;
          goto LAB_036a4c48;
        }
      }
      else {
        lVar4 = *unaff_x22;
        if (lVar4 == 0) goto LAB_036a4d00;
Estrada_Microphone__get_devices:
        FUN_079b2acc(0xff800000,lVar4,DAT_08446dc0,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0x40);
      if (lVar4 == 0) goto LAB_036a4d00;
      if (*(char *)(unaff_x19 + 0x28) == '\0') {
        FUN_079b2acc(0xff800000,lVar4,DAT_08446db8,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 0;
        uVar7 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar5 = DAT_08452820;
      }
      else {
        FUN_079b2acc(0xff800000,lVar4,DAT_08446dc0,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
        uVar7 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar5 = DAT_08459648;
      }
      FUN_07a06638(uVar7,uVar5,0);
    }
  }
  if (*(char *)(unaff_x19 + 0x2a) == '\0') {
    return;
  }
  if (*(char *)(unaff_x19 + 0x28) != '\0') {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_036a4d00;
    FUN_07a22574(*(long *)(unaff_x19 + 0x30),0);
    if (*(char *)(unaff_x19 + 0x2a) == '\0') {
      return;
    }
    if (*(char *)(unaff_x19 + 0x28) != '\0') {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_07a22574(*(long *)(unaff_x19 + 0x38),0);
    return;
  }
LAB_036a4d00:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


