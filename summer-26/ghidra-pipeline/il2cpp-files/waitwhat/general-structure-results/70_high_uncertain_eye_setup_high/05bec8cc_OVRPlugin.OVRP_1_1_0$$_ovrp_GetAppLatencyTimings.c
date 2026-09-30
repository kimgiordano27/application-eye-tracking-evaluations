/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetAppLatencyTimings
ENTRY_POINT: 05bec8cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetAppLatencyTimings(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long lVar7;
  long unaff_x22;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_031c0d08();
      goto LAB_05bec8f8;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_05bec8f8:
  uVar4 = (*(code *)*puVar3)();
  cVar2 = *(char *)(unaff_x19 + 0x54);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  if (cVar2 != '\0') {
    lVar5 = FUN_069d3b50();
    if ((lVar5 == 0) || (lVar5 = FUN_03ac393c(lVar5,*(undefined8 *)PTR_DAT_07116c88), lVar5 == 0)) {
LAB_05bec98c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        lVar6 = *(long *)(lVar5 + 0x20 + lVar7 * 8);
        if (lVar6 == 0) goto LAB_05bec98c;
        FUN_069a0b64(lVar6,0,0);
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}


