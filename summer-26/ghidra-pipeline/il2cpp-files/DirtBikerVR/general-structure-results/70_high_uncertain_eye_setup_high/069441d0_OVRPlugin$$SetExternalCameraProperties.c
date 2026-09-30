/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 069441d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetExternalCameraProperties(long param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((*(byte *)(unaff_x21 + 0xfbf) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084980e0);
    *(undefined1 *)(unaff_x21 + 0xfbf) = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (*(int *)(param_1 + 0x18) == 1) {
      if (unaff_x20 == 0) {
LAB_06944328:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      fVar2 = *(float *)(unaff_x20 + 0x130) + *(float *)(unaff_x20 + 0x130);
      fVar6 = 1.0;
      if (fVar2 <= 1.0) {
        fVar6 = fVar2;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar6;
      }
      *(float *)(param_1 + 0x14) = fVar3;
    }
    else {
      if ((((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x10) == 0)) ||
          (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xe8), lVar1 == 0)) ||
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 == 0)) goto LAB_06944328;
      fVar6 = 0.0;
      if (*(char *)(lVar1 + 0xe1) == '\0') {
        fVar3 = *(float *)(unaff_x20 + 0x130) + *(float *)(unaff_x20 + 0x130);
        fVar2 = 1.0;
        if (fVar3 <= 1.0) {
          fVar2 = fVar3;
        }
        fVar6 = 0.0;
        if (0.0 <= fVar3) {
          fVar6 = fVar2;
        }
        fVar6 = *(float *)(unaff_x20 + 0x134) * fVar6;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x14);
      uVar8 = *(undefined4 *)(param_1 + 0x24);
      uVar4 = FUN_07ca8818(0);
      fVar3 = (float)FUN_07c8cea8(uVar7,fVar6,uVar8,0x7f800000,uVar4,param_1 + 0x30,0);
      fVar2 = 1.0;
      if (fVar3 <= 1.0) {
        fVar2 = fVar3;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar3) {
        fVar5 = fVar2;
      }
      *(float *)(param_1 + 0x14) = fVar5;
      if (((*(char *)(param_1 + 0x1c) != '\0') && (fVar6 < DAT_015c5b88)) && (DAT_015c5c98 < fVar5))
      {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_06944328;
        FUN_059f8c60(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_084980e0);
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
  }
  return;
}


