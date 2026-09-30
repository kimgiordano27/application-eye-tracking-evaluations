/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpaceRotation
ENTRY_POINT: 05188520
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__SetAppSpaceRotation(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,param_3,0);
code_r0x05188540:
      (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d846d4();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02cbedc4();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto code_r0x05188540;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


