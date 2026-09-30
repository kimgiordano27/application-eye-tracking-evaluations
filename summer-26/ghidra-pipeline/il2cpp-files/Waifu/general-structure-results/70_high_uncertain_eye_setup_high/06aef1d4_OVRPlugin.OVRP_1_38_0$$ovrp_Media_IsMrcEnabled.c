/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 06aef1d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_07a1a680();
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    return;
  }
  pcVar2 = *(code **)(unaff_x23 + 0x188);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    *(code **)(unaff_x23 + 0x188) = pcVar2;
  }
  lVar1 = (*pcVar2)();
  if (lVar1 != 0) {
    fVar3 = (float)FUN_07a18d2c(lVar1,0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      fVar5 = param_2;
      fVar6 = param_3;
      fVar4 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x50),0);
      if (DAT_086d7ff6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7ff6 = '\x01';
      }
      if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar1 = *(long *)(unaff_x19 + 0x48);
      if (lVar1 != 0) {
        pcVar2 = *(code **)(unaff_x23 + 0x188);
        if (pcVar2 == (code *)0x0) {
          pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x23 + 0x188) = pcVar2;
        }
        lVar1 = (*pcVar2)(lVar1);
        if (lVar1 != 0) {
          fVar3 = SQRT((param_3 - fVar6) * (param_3 - fVar6) +
                       (fVar3 - fVar4) * (fVar3 - fVar4) + (param_2 - fVar5) * (param_2 - fVar5));
          FUN_07a19820(fVar3 * *(float *)(unaff_x19 + 100),fVar3 * *(float *)(unaff_x19 + 0x68),
                       fVar3 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


