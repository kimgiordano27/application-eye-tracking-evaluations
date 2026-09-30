/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 0696715c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(long param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long unaff_x19;
  undefined4 uVar8;
  
  if ((param_1 != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar4 == 0)) goto LAB_06967338;
    if (*(char *)(lVar4 + 0x5e) != '\0') {
      cVar1 = *(char *)(param_1 + 0x18);
      FUN_06967468();
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_06967338;
      cVar2 = *(char *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((cVar1 == '\0') && (cVar2 != '\0')) {
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06967338;
        FUN_0696733c();
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06967338;
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
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar4 == 0)) goto LAB_06967338;
      *(undefined1 *)(lVar4 + 0x5e) = 0;
    }
  }
  lVar4 = *(long *)(unaff_x19 + 0x40);
  if ((lVar4 != 0) && (*(long *)(unaff_x19 + 0x58) != 0)) {
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if ((lVar6 == 0) || (lVar5 = *(long *)(lVar6 + 0xd8), lVar5 == 0)) goto LAB_06967338;
    bVar7 = *(byte *)(unaff_x19 + 0x68);
    if (*(char *)(lVar5 + 0x5f) != '\0') {
      bVar7 = bVar7 ^ 1;
      *(byte *)(unaff_x19 + 0x68) = bVar7;
      *(byte *)(unaff_x19 + 0x6a) = bVar7;
      *(byte *)(unaff_x19 + 0x69) = bVar7;
      if (bVar7 == 0) {
        *(undefined2 *)(unaff_x19 + 0x69) = 0;
      }
      else {
        uVar8 = *(undefined4 *)(lVar6 + 0x140);
        *(undefined4 *)(unaff_x19 + 0x6c) = uVar8;
        *(undefined4 *)(unaff_x19 + 0x70) = uVar8;
      }
      *(undefined1 *)(lVar5 + 0x5f) = 0;
    }
    if (bVar7 == 0) {
      if (*(char *)(lVar5 + 0x61) != '\0') {
        bVar7 = *(byte *)(unaff_x19 + 0x69);
        *(byte *)(unaff_x19 + 0x69) = bVar7 ^ 1;
        if (bVar7 == 0) {
          uVar8 = *(undefined4 *)(lVar6 + 0x140);
          *(undefined1 *)(unaff_x19 + 0x6a) = 0;
          *(undefined4 *)(unaff_x19 + 0x6c) = uVar8;
        }
        *(undefined1 *)(lVar5 + 0x61) = 0;
      }
      if (*(char *)(lVar5 + 99) != '\0') {
        bVar7 = *(byte *)(unaff_x19 + 0x6a);
        *(byte *)(unaff_x19 + 0x6a) = bVar7 ^ 1;
        if (bVar7 == 0) {
          uVar8 = *(undefined4 *)(lVar6 + 0x140);
          *(undefined1 *)(unaff_x19 + 0x69) = 0;
          *(undefined4 *)(unaff_x19 + 0x70) = uVar8;
        }
        goto LAB_0696724c;
      }
    }
    else {
      *(undefined1 *)(lVar5 + 0x61) = 0;
LAB_0696724c:
      *(undefined1 *)(lVar5 + 99) = 0;
    }
    if ((*(char *)(unaff_x19 + 0x69) == '\0') || (uVar3 = FUN_06966f78(), (uVar3 & 1) == 0)) {
      FUN_069673d4(lVar4);
    }
    else {
      FUN_0696733c(lVar4);
    }
    lVar4 = *(long *)(unaff_x19 + 0x58);
    if (*(char *)(unaff_x19 + 0x6a) == '\0') {
      if (lVar4 == 0) goto LAB_06967338;
    }
    else {
      uVar3 = FUN_06966fb8();
      if (lVar4 == 0) goto LAB_06967338;
      if ((uVar3 & 1) != 0) {
        FUN_0696733c(lVar4);
        goto LAB_069672fc;
      }
    }
    FUN_069673d4(lVar4);
  }
LAB_069672fc:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar4 == 0)) {
LAB_06967338:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(char *)(lVar4 + 0x5d) != '\0') {
      FUN_06967468();
      if ((*(long *)(unaff_x19 + 0x10) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar4 == 0)) goto LAB_06967338;
      *(undefined1 *)(lVar4 + 0x5d) = 0;
    }
  }
  return;
}


