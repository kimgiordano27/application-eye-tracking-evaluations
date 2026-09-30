/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Deserialize
ENTRY_POINT: 05806e50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers__Deserialize(void)

{
  void *__src;
  void *unaff_x19;
  size_t unaff_x21;
  long unaff_x22;
  long unaff_x29;
  
  __src = (void *)FUN_02fe93e4();
  memcpy(unaff_x19,__src,unaff_x21);
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


