/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.<RequestPermission>d__3$$MoveNext
ENTRY_POINT: 036a4a78
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_<RequestPermission>d__3__MoveNext(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
  pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
  *(code **)(unaff_x20 + 400) = pcVar4;
  lVar5 = (*pcVar4)();
  if (lVar5 == 0) goto LAB_036a4d00;
  lVar5 = FUN_03fa1bc8(lVar5,DAT_0840ca38);
  *unaff_x23 = lVar5;
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
    lVar5 = *unaff_x23;
  }
  if (lVar5 == 0) goto LAB_036a4d00;
  lVar5 = *(long *)(lVar5 + 0x100);
  uVar6 = FUN_03398a84(DAT_083d2738);
  FUN_07a222a8();
  if (lVar5 == 0) goto LAB_036a4d00;
  FUN_07a223cc(lVar5,uVar6,0);
  if (*(char *)(unaff_x19 + 0x29) == '\0') {
    lVar5 = *(long *)(unaff_x19 + 0x40);
    if (lVar5 == 0) goto LAB_036a4d00;
    if (*(char *)(unaff_x19 + 0x28) != '\0') goto Estrada_Microphone__get_devices;
LAB_036a4c48:
    FUN_079b2acc(0xff800000,lVar5,DAT_08446db8,0xffffffff);
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  else {
    uVar6 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
    uVar6 = FUN_07a0670c(uVar6,0);
    uVar7 = FUN_0666e380(uVar6,DAT_0842d1f0);
    if ((uVar7 & 1) == 0) {
      uVar6 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
      uVar6 = FUN_07a0670c(uVar6,0);
      uVar7 = FUN_0666e380(uVar6,DAT_08459648);
      if ((uVar7 & 1) == 0) {
        uVar6 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar6 = FUN_07a0670c(uVar6,0);
        uVar7 = FUN_0666e380(uVar6,DAT_08452820);
        if ((uVar7 & 1) != 0) {
          lVar5 = *unaff_x22;
          if (lVar5 == 0) goto LAB_036a4d00;
          goto LAB_036a4c48;
        }
      }
      else {
        lVar5 = *unaff_x22;
        if (lVar5 == 0) goto LAB_036a4d00;
Estrada_Microphone__get_devices:
        FUN_079b2acc(0xff800000,lVar5,DAT_08446dc0,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
      }
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x40);
      if (lVar5 == 0) goto LAB_036a4d00;
      if (*(char *)(unaff_x19 + 0x28) == '\0') {
        FUN_079b2acc(0xff800000,lVar5,DAT_08446db8,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 0;
        uVar8 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar6 = DAT_08452820;
      }
      else {
        FUN_079b2acc(0xff800000,lVar5,DAT_08446dc0,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
        uVar8 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar6 = DAT_08459648;
      }
      FUN_07a06638(uVar8,uVar6,0);
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


