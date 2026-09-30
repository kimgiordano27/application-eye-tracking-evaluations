/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 036e1964
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  if ((param_1 & 1) == 0) {
    if (unaff_x21 == 0) {
      uVar1 = thunk_FUN_015f058c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar1,0);
    }
LAB_036e1984:
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  else {
    if ((*(byte *)(unaff_x20 + 0x53) >> 4 & 1) == 0) {
      if (unaff_w22 != 0) goto LAB_036e1984;
      pcVar2 = FUN_012a3488;
    }
    else if (unaff_w22 == 0) {
      pcVar2 = FUN_012a3494;
    }
    else {
      pcVar2 = FUN_012a34ac;
    }
    *(code **)(unaff_x19 + 0x18) = pcVar2;
  }
  *(code **)(unaff_x19 + 0x38) = FUN_012a3448;
  return;
}


