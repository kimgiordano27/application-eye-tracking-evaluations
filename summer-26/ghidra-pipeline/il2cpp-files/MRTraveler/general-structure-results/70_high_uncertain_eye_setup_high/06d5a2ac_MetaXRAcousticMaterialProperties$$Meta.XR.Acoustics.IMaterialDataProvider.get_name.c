/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 06d5a2ac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool MetaXRAcousticMaterialProperties__Meta_XR_Acoustics_IMaterialDataProvider_get_name
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_5 != 0) {
    if ((int)*(long *)(param_5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar1 = *(long *)(param_5 + ((*(long *)(param_5 + 0x18) << 0x20) + -0x100000000 >> 0x1d) + 0x20)
    ;
    if (lVar1 != 0) {
      fVar3 = param_2;
      fVar4 = param_3;
      fVar2 = (float)FUN_085eb198(lVar1,0);
      return (fVar4 - param_4) * (fVar4 - param_4) +
             (fVar2 - param_2) * (fVar2 - param_2) + (fVar3 - param_3) * (fVar3 - param_3) <
             param_1 * param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


