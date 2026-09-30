/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Awake
ENTRY_POINT: 057c3320
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__Awake(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined8 *unaff_x25;
  
  if (unaff_x21 != 0) {
    FUN_03bb12a4();
    lVar2 = *(long *)(unaff_x20 + 0x18);
    uVar1 = thunk_FUN_0301080c(*unaff_x25);
    FUN_0579bad0();
    if (lVar2 != 0) {
      FUN_03bb12a4(lVar2,uVar1,0,*(undefined8 *)PTR_DAT_06f9b6f8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


