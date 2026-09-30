/*
FUNCTION_NAME: OVRManager$$get_enableDynamicResolution
ENTRY_POINT: 05ba5280
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_enableDynamicResolution
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined8 uVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  if (param_5 != 0) {
    FUN_06a57874(unaff_s8 + param_4,param_5,0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (lVar1 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
      fVar2 = (float)FUN_069e6fbc(lVar1,0);
      if (DAT_075457aa == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457aa = '\x01';
      }
      uVar3 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x18);
      param_2 = param_2 + (float)((ulong)uVar3 >> 0x20) * param_4 * 0.5;
      FUN_069e7098(CONCAT44(param_2,fVar2 + (float)uVar3 * param_4 * 0.5),param_2,
                   param_3 + param_4 * *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x20
                                                 ) * 0.5,lVar1,0);
      FUN_05ba4f84();
      return unaff_s9 < unaff_s10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


