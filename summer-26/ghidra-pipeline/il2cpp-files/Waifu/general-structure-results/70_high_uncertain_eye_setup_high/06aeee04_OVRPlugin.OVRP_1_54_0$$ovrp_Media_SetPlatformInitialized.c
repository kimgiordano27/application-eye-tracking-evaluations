/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$ovrp_Media_SetPlatformInitialized
ENTRY_POINT: 06aeee04
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_54_0__ovrp_Media_SetPlatformInitialized
               (code *param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = (*param_1)();
  if (unaff_x20 != 0) {
    fVar3 = *(float *)(unaff_x19 + 100);
    fVar4 = *(float *)(unaff_x19 + 0x68);
    fVar5 = *(float *)(unaff_x19 + 0x6c);
    fVar2 = (float)FUN_06aed7c4();
    if (DAT_086d7cc9 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc9 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar1 != 0) {
      fVar2 = SQRT(param_4 * param_4 + fVar2 * fVar2 + param_3 * param_3);
      FUN_07a19820(fVar3 * fVar2,fVar4 * fVar2,fVar5 * fVar2,lVar1,0);
      lVar1 = *(long *)(unaff_x19 + 0x48);
      if (lVar1 != 0) {
        if (DAT_086edcc0 == (code *)0x0) {
          DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x06aeeee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_086edcc0)(lVar1,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


