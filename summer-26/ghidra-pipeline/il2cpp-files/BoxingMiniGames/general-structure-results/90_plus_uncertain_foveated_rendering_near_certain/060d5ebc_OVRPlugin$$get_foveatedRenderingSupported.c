/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 060d5ebc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (unaff_x20 != 0) {
    fVar2 = *(float *)(unaff_x19 + 100);
    fVar3 = *(float *)(unaff_x19 + 0x68);
    fVar4 = *(float *)(unaff_x19 + 0x6c);
    fVar1 = (float)FUN_060d4e34();
    if (DAT_07ed76bb == '\0') {
      FUN_03642964(PTR_DAT_079f4df0);
      DAT_07ed76bb = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (param_4 != 0) {
      fVar1 = SQRT(param_3 * param_3 + fVar1 * fVar1 + param_2 * param_2);
      FUN_071d0c1c(fVar2 * fVar1,fVar3 * fVar1,fVar4 * fVar1,param_4,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_0718a8f8(*(long *)(unaff_x19 + 0x48),1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


