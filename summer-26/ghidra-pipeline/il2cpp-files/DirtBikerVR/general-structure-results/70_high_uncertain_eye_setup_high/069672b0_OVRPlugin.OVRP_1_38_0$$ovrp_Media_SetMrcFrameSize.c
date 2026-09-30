/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameSize
ENTRY_POINT: 069672b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameSize(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long in_x9;
  int in_w10;
  undefined1 in_w11;
  long unaff_x19;
  long lVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(unaff_x19 + 0x69) = in_w11;
  if (in_w10 == 0) {
    uVar4 = *(undefined4 *)(in_x9 + 0x140);
    *(undefined1 *)(unaff_x19 + 0x6a) = 0;
    *(undefined4 *)(unaff_x19 + 0x6c) = uVar4;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  if (*(char *)(param_1 + 99) != '\0') {
    bVar1 = *(byte *)(unaff_x19 + 0x6a);
    *(byte *)(unaff_x19 + 0x6a) = bVar1 ^ 1;
    if (bVar1 == 0) {
      uVar4 = *(undefined4 *)(in_x9 + 0x140);
      *(undefined1 *)(unaff_x19 + 0x69) = 0;
      *(undefined4 *)(unaff_x19 + 0x70) = uVar4;
    }
    *(char *)(param_1 + 99) = '\0';
  }
  if ((*(char *)(unaff_x19 + 0x69) == '\0') || (uVar2 = FUN_06966f78(), (uVar2 & 1) == 0)) {
    FUN_069673d4();
  }
  else {
    FUN_0696733c();
  }
  lVar3 = *(long *)(unaff_x19 + 0x58);
  if (*(char *)(unaff_x19 + 0x6a) == '\0') {
    if (lVar3 == 0) goto LAB_06967338;
LAB_069672f4:
    FUN_069673d4(lVar3);
  }
  else {
    uVar2 = FUN_06966fb8();
    if (lVar3 == 0) goto LAB_06967338;
    if ((uVar2 & 1) == 0) goto LAB_069672f4;
    FUN_0696733c(lVar3);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar3 == 0)) {
LAB_06967338:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(char *)(lVar3 + 0x5d) != '\0') {
      FUN_06967468();
      if ((*(long *)(unaff_x19 + 0x10) == 0) ||
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar3 == 0)) goto LAB_06967338;
      *(undefined1 *)(lVar3 + 0x5d) = 0;
    }
  }
  return;
}


