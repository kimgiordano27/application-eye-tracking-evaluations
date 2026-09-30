/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.MacOSMicrophonePermissionRequester.<RequestPermission>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
ENTRY_POINT: 036a4a2c
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


void Estrada_DefaultMicrophoneController_MacOSMicrophonePermissionRequester_<RequestPermission>d__2__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (ulong *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong in_x9;
  long in_x12;
  long unaff_x19;
  long lVar7;
  long unaff_x21;
  long *unaff_x22;
  long *plVar8;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 | in_x12 << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar8 = (long *)(unaff_x19 + 0x48);
  lVar7 = *plVar8;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a119fc(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if (lVar7 == 0) goto LAB_036a4d00;
    lVar7 = FUN_03fa1bc8(lVar7,DAT_0840ca38);
    *plVar8 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) goto LAB_036a4d00;
    lVar7 = *(long *)(lVar7 + 0x100);
    uVar5 = FUN_03398a84(DAT_083d2738);
    FUN_07a222a8();
    if (lVar7 == 0) goto LAB_036a4d00;
    FUN_07a223cc(lVar7,uVar5,0);
  }
  if (*(char *)(unaff_x19 + 0x29) == '\0') {
    lVar7 = *(long *)(unaff_x19 + 0x40);
    if (lVar7 == 0) goto LAB_036a4d00;
    if (*(char *)(unaff_x19 + 0x28) != '\0') goto Estrada_Microphone__get_devices;
LAB_036a4c48:
    FUN_079b2acc(0xff800000,lVar7,DAT_08446db8,0xffffffff);
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  else {
    uVar5 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
    uVar5 = FUN_07a0670c(uVar5,0);
    uVar4 = FUN_0666e380(uVar5,DAT_0842d1f0);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
      uVar5 = FUN_07a0670c(uVar5,0);
      uVar4 = FUN_0666e380(uVar5,DAT_08459648);
      if ((uVar4 & 1) == 0) {
        uVar5 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar5 = FUN_07a0670c(uVar5,0);
        uVar4 = FUN_0666e380(uVar5,DAT_08452820);
        if ((uVar4 & 1) != 0) {
          lVar7 = *unaff_x22;
          if (lVar7 == 0) goto LAB_036a4d00;
          goto LAB_036a4c48;
        }
      }
      else {
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036a4d00;
Estrada_Microphone__get_devices:
        FUN_079b2acc(0xff800000,lVar7,DAT_08446dc0,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
      }
    }
    else {
      lVar7 = *(long *)(unaff_x19 + 0x40);
      if (lVar7 == 0) goto LAB_036a4d00;
      if (*(char *)(unaff_x19 + 0x28) == '\0') {
        FUN_079b2acc(0xff800000,lVar7,DAT_08446db8,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 0;
        uVar6 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar5 = DAT_08452820;
      }
      else {
        FUN_079b2acc(0xff800000,lVar7,DAT_08446dc0,0xffffffff);
        *(undefined1 *)(unaff_x19 + 0x28) = 1;
        uVar6 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
        uVar5 = DAT_08459648;
      }
      FUN_07a06638(uVar6,uVar5,0);
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


