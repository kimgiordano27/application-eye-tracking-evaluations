/*
FUNCTION_NAME: FUN_063b87bc
ENTRY_POINT: 063b87bc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void FUN_063b87bc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_38;
  
  if ((DAT_07556476 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07142308);
    FUN_03188a78(PTR_DAT_07142310);
    FUN_03188a78(PTR_DAT_07138328);
    FUN_03188a78(PTR_DAT_07142318);
    FUN_03188a78(PTR_DAT_070c2ab8);
    FUN_03188a78(PTR_DAT_070c36d0);
    FUN_03188a78(PTR_DAT_070c2ac8);
    FUN_03188a78(PTR_DAT_07138848);
    FUN_03188a78(PTR_DAT_070c2708);
    FUN_03188a78(PTR_DAT_070c27e8);
    FUN_03188a78(PTR_DAT_070c2750);
    FUN_03188a78(PTR_DAT_070c36f0);
    FUN_03188a78(PTR_DAT_070c26e8);
    FUN_03188a78(PTR_DAT_070c26f0);
    DAT_07556476 = 1;
  }
  puVar3 = PTR_DAT_070c27e8;
  puVar2 = PTR_DAT_070c2708;
  local_38 = 0;
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_063b8ccc;
  lVar6 = FUN_0645cd64(*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_070c2708,0);
  if (lVar6 == 0) {
    bVar4 = false;
  }
  else {
    iVar5 = FUN_057c466c(lVar6,*(undefined8 *)puVar3,5,0);
    bVar4 = iVar5 != -1;
  }
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_063b8ccc;
  uVar7 = FUN_0645cd64(*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_070c2750,0);
  if (((bVar4) || (uVar8 = FUN_057bebf8(uVar7,0), (uVar8 & 1) != 0)) ||
     (uVar8 = Newtonsoft_Json_Converters_XContainerWrapper__get_Container(uVar7,&local_38,0),
     (uVar8 & 1) == 0)) {
    local_38 = 0x7fffffffffffffff;
  }
  uVar8 = FUN_063b8730(param_1);
  if ((uVar8 & 1) == 0) {
LAB_063b8968:
    bVar4 = false;
  }
  else {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_063b8ccc;
    lVar6 = FUN_0645cd64(*(long *)(param_1 + 0x88),*(undefined8 *)puVar2,0);
    if (lVar6 == 0) goto LAB_063b8968;
    iVar5 = FUN_057c466c(lVar6,*(undefined8 *)puVar3,5,0);
    bVar4 = iVar5 != -1;
  }
  puVar2 = PTR_DAT_07138328;
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  *(bool *)(param_1 + 0xa9) = bVar4;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar6 = *(long *)puVar2;
  }
  uVar8 = FUN_0594edc8(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_063b8ccc;
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x98) != '\0') {
      lVar9 = *(long *)(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar6 = FUN_063afeec(param_1,0);
      if ((lVar6 == 0) || (lVar9 == 0)) goto LAB_063b8ccc;
      puVar1 = (undefined8 *)PTR_DAT_070c26e8;
      if (*(char *)(lVar6 + 0x30) != '\0') {
        puVar1 = (undefined8 *)PTR_DAT_070c26f0;
      }
      lVar6 = FUN_0645cd64(lVar9,*puVar1,0);
      if (lVar6 != 0) {
        lVar6 = FUN_057c3fc4(lVar6,0);
        if (lVar6 == 0) goto LAB_063b8ccc;
        iVar5 = FUN_057c466c(lVar6,*(undefined8 *)PTR_DAT_070c36f0,4,0);
        puVar2 = PTR_DAT_070c36d0;
        *(bool *)(param_1 + 0xa8) = iVar5 != -1;
        iVar5 = FUN_057c466c(lVar6,*(undefined8 *)puVar2,4,0);
        if (iVar5 != -1) {
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
      }
      if ((*(char *)(param_1 + 0xa9) == '\0') && (local_38 == 0x7fffffffffffffff)) {
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
    }
  }
  puVar2 = PTR_DAT_07142308;
  uVar8 = FUN_063b8730(param_1);
  if ((uVar8 & 1) == 0) {
Unity_XR_Oculus_Input_OculusHMD__get_rightEyeAngularVelocity:
    uVar7 = *(undefined8 *)puVar2;
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x61) = 1;
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
    FUN_06497bb0(uVar7,uVar10,0,param_2,0);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
  }
  else {
    if (*(char *)(param_1 + 0xa9) == '\0') {
      if (param_2 == 0) goto LAB_063b8ccc;
      iVar5 = *(int *)(param_2 + 0x1c);
      if (local_38 <= iVar5) goto Unity_XR_Oculus_Input_OculusHMD__get_rightEyeAngularVelocity;
    }
    else {
      if (param_2 == 0) goto LAB_063b8ccc;
      iVar5 = *(int *)(param_2 + 0x1c);
    }
    lVar6 = *(long *)(param_1 + 0x80);
    if (iVar5 < 1) {
      if (lVar6 == 0) goto LAB_063b8ccc;
      uVar7 = *(undefined8 *)(lVar6 + 0x90);
    }
    else {
      if (lVar6 == 0) goto LAB_063b8ccc;
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      uVar12 = *(undefined8 *)(lVar6 + 0x90);
      uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar2);
      FUN_06497bb0(uVar7,uVar10,uVar12,param_2,0);
    }
  }
  lVar6 = local_38;
  if (*(char *)(param_1 + 0xa9) == '\0') {
    if (*(char *)(param_1 + 0x61) == '\0') {
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      if (local_38 != 0x7fffffffffffffff) {
        uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)PTR_DAT_07142310);
        FUN_064a004c(uVar12,uVar10,uVar7,lVar6,0);
        goto LAB_063b8b6c;
      }
      uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar2);
      FUN_06497bb0(uVar12,uVar10,uVar7,0,0);
      *(undefined8 *)(param_1 + 0x58) = uVar12;
    }
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_07142318);
    FUN_063a4e98(uVar12,uVar10,uVar7,uVar11,0);
LAB_063b8b6c:
    *(undefined8 *)(param_1 + 0x58) = uVar12;
  }
  puVar2 = PTR_DAT_070c2ab8;
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_063b8ccc;
  uVar7 = FUN_0645cd64(*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_07138848,0);
  uVar8 = System_Globalization_UmAlQuraCalendar__GetDayOfMonth(uVar7,*(undefined8 *)puVar2,0);
  if ((uVar8 & 1) == 0) {
LAB_063b8bfc:
    uVar8 = System_Globalization_UmAlQuraCalendar__GetDayOfMonth
                      (uVar7,*(undefined8 *)PTR_DAT_070c2ac8,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_063b8ccc;
      if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x134) >> 1 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x50);
        uVar10 = *(undefined8 *)(param_1 + 0x58);
        uVar12 = 1;
        goto LAB_063b8c3c;
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_063b8ccc;
    if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x134) & 1) == 0) goto LAB_063b8bfc;
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar12 = 0;
LAB_063b8c3c:
    uVar7 = FUN_06498f40(uVar7,uVar10,uVar12,0);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_063b8ccc;
    FUN_0647e3c4(*(long *)(param_1 + 0x88),0xd,0);
  }
  uVar8 = FUN_063b8730(param_1);
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    if (*(long *)(param_1 + 0x50) == 0) {
LAB_063b8ccc:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_063a0f94(*(long *)(param_1 + 0x50),1,0,0);
  }
  return;
}


