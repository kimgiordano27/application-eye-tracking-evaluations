/*
FUNCTION_NAME: OVRManager$$remove_SpaceListSaveComplete
ENTRY_POINT: 05cfa294
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceListSaveComplete(void)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float unaff_s8;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  lVar1 = *(long *)(unaff_x19 + 0x88);
  if (lVar1 != 0) {
    fVar2 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    fVar2 = (float)UnityEngine_UIElements_BackgroundRepeat__Initial
                             (unaff_s8 * fVar2,fStack0000000000000020,fStack0000000000000024,
                              in_stack_00000028,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_05cf4c7c(*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05cf598c((fStack0000000000000020 * fStack0000000000000014 +
                     in_stack_00000028 * in_stack_00000008._4_4_ + fVar2 * in_stack_00000018) -
                     fStack0000000000000024 * fStack0000000000000010,
                     (fStack0000000000000024 * in_stack_00000008._4_4_ +
                     in_stack_00000028 * fStack0000000000000010 +
                     fStack0000000000000020 * in_stack_00000018) - fVar2 * fStack0000000000000014,
                     (fVar2 * fStack0000000000000010 +
                     in_stack_00000028 * fStack0000000000000014 +
                     fStack0000000000000024 * in_stack_00000018) -
                     fStack0000000000000020 * in_stack_00000008._4_4_,
                     ((in_stack_00000028 * in_stack_00000018 - fVar2 * in_stack_00000008._4_4_) -
                     fStack0000000000000020 * fStack0000000000000010) -
                     fStack0000000000000024 * fStack0000000000000014,*(long *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


