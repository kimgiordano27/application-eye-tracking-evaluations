/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05ff2348
PROGRAM: vandalizer-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingEnabled
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  uVar2 = (ulong)(uint)(unaff_s9 - (float)param_2);
  uVar3 = (ulong)(uint)(unaff_s8 - (float)param_3);
  uVar1 = FUN_06e46264(unaff_s10 - (float)param_1,uVar2,uVar3,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_05f76654(param_1,param_2,param_3,uVar1,uVar2,uVar3,param_4,*(long *)(unaff_x19 + 0x30),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


