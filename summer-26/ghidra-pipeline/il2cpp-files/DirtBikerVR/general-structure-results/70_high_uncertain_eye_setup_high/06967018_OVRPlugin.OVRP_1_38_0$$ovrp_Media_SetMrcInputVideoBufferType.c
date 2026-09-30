/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcInputVideoBufferType
ENTRY_POINT: 06967018
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcInputVideoBufferType(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int in_w9;
  long lVar7;
  byte bVar8;
  long unaff_x19;
  undefined4 uVar9;
  
  if (in_w9 != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_06967338;
    if (*(char *)(*(long *)(param_1 + 0xc0) + 0x58) == '\0') {
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06967338;
      cVar1 = *(char *)(*(long *)(unaff_x19 + 0x60) + 0x18);
      FUN_069673d4();
      if (cVar1 == '\0') goto LAB_0696706c;
      if ((*(long *)(unaff_x19 + 0x60) == 0) || (FUN_069673d4(), *(long *)(unaff_x19 + 0x60) == 0))
      goto LAB_06967338;
    }
    FUN_0696733c();
  }
LAB_0696706c:
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    if (((*(long *)(unaff_x19 + 0x10) == 0) ||
        (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)) goto LAB_06967338;
    iVar3 = FUN_0694a438(lVar5,0);
    if (iVar3 < 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06967338;
      FUN_0696733c();
    }
    else {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06967338;
      FUN_069673d4();
    }
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 == 0)) goto LAB_06967338;
    if (*(char *)(lVar5 + 0x62) != '\0') {
      FUN_06967468();
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06967338;
      if (*(char *)(*(long *)(unaff_x19 + 0x48) + 0x18) == '\0') {
        if (*(long *)(unaff_x19 + 0x28) == 0) {
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06967338;
          FUN_069673d4();
        }
        else {
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06967338;
          cVar1 = *(char *)(*(long *)(unaff_x19 + 0x28) + 0x18);
          FUN_069673d4();
          if (cVar1 != '\0') {
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (FUN_069673d4(), *(long *)(unaff_x19 + 0x28) == 0)) goto LAB_06967338;
            FUN_0696733c();
          }
        }
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_069673d4();
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06967338;
        FUN_0696733c();
      }
      if ((*(long *)(unaff_x19 + 0x10) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 == 0)) goto LAB_06967338;
      *(undefined1 *)(lVar5 + 0x62) = 0;
    }
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 == 0)) goto LAB_06967338;
    if (*(char *)(lVar5 + 0x5e) != '\0') {
      cVar1 = *(char *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      FUN_06967468();
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_06967338;
      cVar2 = *(char *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((cVar1 == '\0') && (cVar2 != '\0')) {
        if ((*(long *)(unaff_x19 + 0x48) == 0) || (FUN_0696733c(), *(long *)(unaff_x19 + 0x60) == 0)
           ) goto LAB_06967338;
        FUN_0696733c();
      }
      else if (cVar2 == '\0') {
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06967338;
        if (*(char *)(*(long *)(unaff_x19 + 0x48) + 0x18) == '\0') {
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06967338;
          FUN_069673d4();
        }
      }
      if ((*(long *)(unaff_x19 + 0x10) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 == 0)) goto LAB_06967338;
      *(undefined1 *)(lVar5 + 0x5e) = 0;
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0x40);
  if ((lVar5 != 0) && (*(long *)(unaff_x19 + 0x58) != 0)) {
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if ((lVar7 == 0) || (lVar6 = *(long *)(lVar7 + 0xd8), lVar6 == 0)) goto LAB_06967338;
    bVar8 = *(byte *)(unaff_x19 + 0x68);
    if (*(char *)(lVar6 + 0x5f) != '\0') {
      bVar8 = bVar8 ^ 1;
      *(byte *)(unaff_x19 + 0x68) = bVar8;
      *(byte *)(unaff_x19 + 0x6a) = bVar8;
      *(byte *)(unaff_x19 + 0x69) = bVar8;
      if (bVar8 == 0) {
        *(undefined2 *)(unaff_x19 + 0x69) = 0;
      }
      else {
        uVar9 = *(undefined4 *)(lVar7 + 0x140);
        *(undefined4 *)(unaff_x19 + 0x6c) = uVar9;
        *(undefined4 *)(unaff_x19 + 0x70) = uVar9;
      }
      *(undefined1 *)(lVar6 + 0x5f) = 0;
    }
    if (bVar8 == 0) {
      if (*(char *)(lVar6 + 0x61) != '\0') {
        bVar8 = *(byte *)(unaff_x19 + 0x69);
        *(byte *)(unaff_x19 + 0x69) = bVar8 ^ 1;
        if (bVar8 == 0) {
          uVar9 = *(undefined4 *)(lVar7 + 0x140);
          *(undefined1 *)(unaff_x19 + 0x6a) = 0;
          *(undefined4 *)(unaff_x19 + 0x6c) = uVar9;
        }
        *(undefined1 *)(lVar6 + 0x61) = 0;
      }
      if (*(char *)(lVar6 + 99) != '\0') {
        bVar8 = *(byte *)(unaff_x19 + 0x6a);
        *(byte *)(unaff_x19 + 0x6a) = bVar8 ^ 1;
        if (bVar8 == 0) {
          uVar9 = *(undefined4 *)(lVar7 + 0x140);
          *(undefined1 *)(unaff_x19 + 0x69) = 0;
          *(undefined4 *)(unaff_x19 + 0x70) = uVar9;
        }
        goto LAB_0696724c;
      }
    }
    else {
      *(undefined1 *)(lVar6 + 0x61) = 0;
LAB_0696724c:
      *(undefined1 *)(lVar6 + 99) = 0;
    }
    if ((*(char *)(unaff_x19 + 0x69) == '\0') || (uVar4 = FUN_06966f78(), (uVar4 & 1) == 0)) {
      FUN_069673d4(lVar5);
    }
    else {
      FUN_0696733c(lVar5);
    }
    lVar5 = *(long *)(unaff_x19 + 0x58);
    if (*(char *)(unaff_x19 + 0x6a) == '\0') {
      if (lVar5 == 0) goto LAB_06967338;
    }
    else {
      uVar4 = FUN_06966fb8();
      if (lVar5 == 0) goto LAB_06967338;
      if ((uVar4 & 1) != 0) {
        FUN_0696733c(lVar5);
        goto LAB_069672fc;
      }
    }
    FUN_069673d4(lVar5);
  }
LAB_069672fc:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 == 0)) {
LAB_06967338:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(char *)(lVar5 + 0x5d) != '\0') {
      FUN_06967468();
      if ((*(long *)(unaff_x19 + 0x10) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 == 0)) goto LAB_06967338;
      *(undefined1 *)(lVar5 + 0x5d) = 0;
    }
  }
  return;
}


