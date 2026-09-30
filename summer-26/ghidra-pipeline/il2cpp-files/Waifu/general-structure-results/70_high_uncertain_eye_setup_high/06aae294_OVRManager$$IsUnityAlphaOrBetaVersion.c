/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 06aae294
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsUnityAlphaOrBetaVersion(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 in_x9;
  code *pcVar7;
  
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = param_2;
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = in_x9;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  cVar3 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  if ((*(byte *)(param_3 + 0x4c) >> 4 & 1) == 0) {
    if (cVar3 != '\x01') {
      if (param_2 == 0) {
        uVar5 = thunk_FUN_0334f058(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar5,0);
      }
LAB_06aae344:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto FUN_06aae3d8;
    }
    if (*(char *)(param_1 + 0x70) != '\0') {
      if ((*(byte *)(param_3 + 0x53) & 3) == 2) {
        bVar4 = *(long *)(*(long *)(param_3 + 0x40) + 0x10) != 0;
      }
      else {
        bVar4 = false;
      }
      if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x118) >> 5 & 1) == 0) {
        uVar2 = *(uint *)(*(long *)(param_3 + 0x20) + 0x28);
        if (bVar4) {
          uVar2 = uVar2 >> 0x10 & 0xff;
          if ((uVar2 == 0x1e) || (uVar2 == 0x13)) goto LAB_06aae3ac;
          pcVar7 = FUN_032905ec;
        }
        else {
          uVar2 = uVar2 >> 0x10 & 0xff;
          if ((uVar2 == 0x1e) || (uVar2 == 0x13)) goto LAB_06aae3cc;
          pcVar7 = FUN_032904e4;
        }
      }
      else if (bVar4) {
LAB_06aae3ac:
        pcVar7 = FUN_0329065c;
      }
      else {
LAB_06aae3cc:
        pcVar7 = FUN_03290544;
      }
      *(code **)(param_1 + 0x18) = pcVar7;
      goto FUN_06aae3d8;
    }
    pcVar7 = FUN_0329045c;
  }
  else {
    if (cVar3 != '\x02') goto LAB_06aae344;
    pcVar7 = FUN_032904a4;
  }
  *(code **)(param_1 + 0x18) = pcVar7;
FUN_06aae3d8:
  *(code **)(param_1 + 0x38) = FUN_032903e0;
  return;
}


