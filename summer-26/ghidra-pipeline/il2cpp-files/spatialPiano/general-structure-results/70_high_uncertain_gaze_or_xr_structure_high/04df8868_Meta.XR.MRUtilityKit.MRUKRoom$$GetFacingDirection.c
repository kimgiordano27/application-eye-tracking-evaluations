/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetFacingDirection
ENTRY_POINT: 04df8868
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetFacingDirection
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  int unaff_w21;
  
  *(long *)(param_2 + 0x40) = param_2;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  uVar1 = FUN_02f08824(param_4);
  if ((uVar1 & 1) == 0) {
    if (param_3 == 0) {
      uVar2 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar2,0);
    }
  }
  else if (unaff_w21 == 0) {
    *(code **)(unaff_x19 + 0x18) = FUN_02b91434;
    goto LAB_04df88a8;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
LAB_04df88a8:
  *(code **)(unaff_x19 + 0x38) = FUN_02b913cc;
  return;
}


