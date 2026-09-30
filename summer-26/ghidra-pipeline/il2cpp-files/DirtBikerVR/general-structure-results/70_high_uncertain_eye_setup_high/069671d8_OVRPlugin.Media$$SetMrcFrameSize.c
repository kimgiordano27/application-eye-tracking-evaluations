/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameSize
ENTRY_POINT: 069671d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcFrameSize(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long unaff_x19;
  undefined4 uVar6;
  
  if ((*(long *)(unaff_x19 + 0x10) == 0) ||
     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar2 == 0)) goto LAB_06967338;
  *(undefined1 *)(lVar2 + 0x5e) = 0;
  lVar2 = *(long *)(unaff_x19 + 0x40);
  if ((lVar2 != 0) && (*(long *)(unaff_x19 + 0x58) != 0)) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0xd8), lVar3 == 0)) goto LAB_06967338;
    bVar5 = *(byte *)(unaff_x19 + 0x68);
    if (*(char *)(lVar3 + 0x5f) != '\0') {
      bVar5 = bVar5 ^ 1;
      *(byte *)(unaff_x19 + 0x68) = bVar5;
      *(byte *)(unaff_x19 + 0x6a) = bVar5;
      *(byte *)(unaff_x19 + 0x69) = bVar5;
      if (bVar5 == 0) {
        *(undefined2 *)(unaff_x19 + 0x69) = 0;
      }
      else {
        uVar6 = *(undefined4 *)(lVar4 + 0x140);
        *(undefined4 *)(unaff_x19 + 0x6c) = uVar6;
        *(undefined4 *)(unaff_x19 + 0x70) = uVar6;
      }
      *(undefined1 *)(lVar3 + 0x5f) = 0;
    }
    if (bVar5 == 0) {
      if (*(char *)(lVar3 + 0x61) != '\0') {
        bVar5 = *(byte *)(unaff_x19 + 0x69);
        *(byte *)(unaff_x19 + 0x69) = bVar5 ^ 1;
        if (bVar5 == 0) {
          uVar6 = *(undefined4 *)(lVar4 + 0x140);
          *(undefined1 *)(unaff_x19 + 0x6a) = 0;
          *(undefined4 *)(unaff_x19 + 0x6c) = uVar6;
        }
        *(undefined1 *)(lVar3 + 0x61) = 0;
      }
      if (*(char *)(lVar3 + 99) != '\0') {
        bVar5 = *(byte *)(unaff_x19 + 0x6a);
        *(byte *)(unaff_x19 + 0x6a) = bVar5 ^ 1;
        if (bVar5 == 0) {
          uVar6 = *(undefined4 *)(lVar4 + 0x140);
          *(undefined1 *)(unaff_x19 + 0x69) = 0;
          *(undefined4 *)(unaff_x19 + 0x70) = uVar6;
        }
        goto LAB_0696724c;
      }
    }
    else {
      *(undefined1 *)(lVar3 + 0x61) = 0;
LAB_0696724c:
      *(undefined1 *)(lVar3 + 99) = 0;
    }
    if ((*(char *)(unaff_x19 + 0x69) == '\0') || (uVar1 = FUN_06966f78(), (uVar1 & 1) == 0)) {
      FUN_069673d4(lVar2);
    }
    else {
      FUN_0696733c(lVar2);
    }
    lVar2 = *(long *)(unaff_x19 + 0x58);
    if (*(char *)(unaff_x19 + 0x6a) == '\0') {
      if (lVar2 == 0) goto LAB_06967338;
    }
    else {
      uVar1 = FUN_06966fb8();
      if (lVar2 == 0) goto LAB_06967338;
      if ((uVar1 & 1) != 0) {
        FUN_0696733c(lVar2);
        goto LAB_069672fc;
      }
    }
    FUN_069673d4(lVar2);
  }
LAB_069672fc:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar2 == 0)) {
LAB_06967338:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(char *)(lVar2 + 0x5d) != '\0') {
      FUN_06967468();
      if ((*(long *)(unaff_x19 + 0x10) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar2 == 0)) goto LAB_06967338;
      *(undefined1 *)(lVar2 + 0x5d) = 0;
    }
  }
  return;
}


