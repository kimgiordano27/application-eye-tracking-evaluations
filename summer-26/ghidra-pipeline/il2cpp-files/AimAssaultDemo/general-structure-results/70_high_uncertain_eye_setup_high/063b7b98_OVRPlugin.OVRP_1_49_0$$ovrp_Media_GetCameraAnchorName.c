/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorName
ENTRY_POINT: 063b7b98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5)

{
  float fVar1;
  long unaff_x20;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((*(byte *)(unaff_x20 + 0x776) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db7400);
    *(undefined1 *)(unaff_x20 + 0x776) = 1;
  }
  if (*(long *)(param_5 + 0x90) != 0) {
    fVar4 = *(float *)(param_5 + 0x20);
    FUN_075ba4b0(*(long *)(param_5 + 0x90),0);
    if (*(long *)(param_5 + 0x90) != 0) {
      FUN_075ba4b0(*(long *)(param_5 + 0x90),0);
      fVar1 = DAT_015866e8;
      param_2 = param_2 * DAT_015866e8;
      param_3 = param_3 * DAT_015866e8;
      uVar3 = FUN_07599c38(fVar4 * DAT_015866e8,0);
      *(undefined4 *)(param_5 + 0x98) = uVar3;
      *(float *)(param_5 + 0x9c) = param_2;
      *(float *)(param_5 + 0xa0) = param_3;
      *(undefined4 *)(param_5 + 0xa4) = param_4;
      if (*(long *)(param_5 + 0x90) != 0) {
        fVar4 = *(float *)(param_5 + 0x24);
        FUN_075ba4b0(*(long *)(param_5 + 0x90),0);
        if (*(long *)(param_5 + 0x90) != 0) {
          FUN_075ba4b0(*(long *)(param_5 + 0x90),0);
          param_2 = param_2 * fVar1;
          param_3 = param_3 * fVar1;
          uVar3 = FUN_07599c38(fVar4 * fVar1,0);
          lVar2 = *(long *)(param_5 + 0x90);
          *(undefined4 *)(param_5 + 0xa8) = uVar3;
          *(float *)(param_5 + 0xac) = param_2;
          *(float *)(param_5 + 0xb0) = param_3;
          *(undefined4 *)(param_5 + 0xb4) = param_4;
          FUN_07599a90(*(undefined4 *)(param_5 + 0x98),*(undefined4 *)(param_5 + 0x9c),
                       *(undefined4 *)(param_5 + 0xa0),*(undefined4 *)(param_5 + 0xa4),0);
          if (lVar2 != 0) {
            FUN_075ba5a4(lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


