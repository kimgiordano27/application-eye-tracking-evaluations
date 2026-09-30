/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 06967f3c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  plVar5 = *(long **)(unaff_x21 + 0x738);
  if ((*(byte *)(unaff_x20 + 199) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_084b6f90);
    *(undefined1 *)(unaff_x20 + 199) = 1;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x30);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9e200(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = FUN_07c99058(param_4,0);
    lVar3 = *plVar5;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar3);
    }
    FUN_07ca310c(uVar4,0);
    return;
  }
  lVar3 = FUN_07c98f88(param_4,0);
  if (lVar3 != 0) {
    fVar6 = (float)FUN_07cac280(lVar3,0);
    if (*(long *)(param_4 + 0x30) != 0) {
      fVar8 = param_2;
      fVar9 = param_3;
      fVar7 = (float)FUN_07cac280(*(long *)(param_4 + 0x30),0);
      if (DAT_08974e27 == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        DAT_08974e27 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (*(float *)(param_4 + 0x24) <= 0.0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(float *)(param_4 + 0x24) <= *(float *)(param_4 + 0x54);
      }
      if (*(char *)(param_4 + 0x28) == '\0') {
        if (*(float *)(param_4 + 0x20) <
            SQRT((param_3 - fVar9) * (param_3 - fVar9) +
                 (fVar6 - fVar7) * (fVar6 - fVar7) + (param_2 - fVar8) * (param_2 - fVar8))) {
          bVar1 = true;
        }
        if ((bVar1) || (*(char *)(param_4 + 0x38) != '\0')) {
          FUN_07c9e6b0(0,DAT_015c5990,param_4,*(undefined8 *)PTR_DAT_084b6f90,0);
        }
      }
      *(float *)(param_4 + 0x54) = *(float *)(param_4 + 0x54) + 1.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


