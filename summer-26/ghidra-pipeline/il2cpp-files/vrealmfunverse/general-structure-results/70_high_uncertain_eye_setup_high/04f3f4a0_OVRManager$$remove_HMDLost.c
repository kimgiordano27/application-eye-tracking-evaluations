/*
FUNCTION_NAME: OVRManager$$remove_HMDLost
ENTRY_POINT: 04f3f4a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDLost
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long unaff_x20;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s13;
  
  if (param_4 != 0) {
    uVar1 = FUN_05c9bf94(param_4,0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar2 = (float)FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar4 = *(float *)(unaff_x20 + 0x28);
        fVar3 = (float)FUN_05d0be20(*(long *)(unaff_x20 + 0x20),0);
        FUN_04f41240(uVar1,param_2,param_3,fVar2 + fVar4,
                     fVar3 * 0.5 + *(float *)(unaff_x20 + 0x28) + unaff_s13);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


