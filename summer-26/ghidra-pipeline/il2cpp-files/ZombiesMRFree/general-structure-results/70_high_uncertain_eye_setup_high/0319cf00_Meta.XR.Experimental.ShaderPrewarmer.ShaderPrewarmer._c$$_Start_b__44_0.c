/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer.<>c$$<Start>b__44_0
ENTRY_POINT: 0319cf00
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer_<>c__<Start>b__44_0
               (long param_1,long param_2)

{
  long lVar1;
  undefined4 in_w9;
  long unaff_x19;
  long lVar2;
  
  *(undefined4 *)(param_2 + 0x4c) = in_w9;
  if (param_1 != 0) {
    lVar2 = 0;
    do {
      if ((int)*(uint *)(param_1 + 0x18) <= (int)(uint)lVar2) {
        return;
      }
      if (*(uint *)(param_1 + 0x18) <= (uint)lVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
                    /* try { // try from 0319cf20 to 0329cf2f has its CatchHandler @ 0319cfcc */
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      lVar1 = *(long *)(param_1 + lVar2 * 8 + 0x20);
                    /* try { // try from 0319cf30 to 0329cf3b has its CatchHandler @ 0319cf9c */
      if (lVar1 == 0) break;
                    /* try { // try from 0319cf3c to 0329cfe7 has its CatchHandler @ 0319cef4 */
      FUN_0319cf60(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x48),
                   *(undefined4 *)(unaff_x19 + 0x34));
      param_1 = *(long *)(unaff_x19 + 0x38);
      lVar2 = lVar2 + 1;
    } while (param_1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


