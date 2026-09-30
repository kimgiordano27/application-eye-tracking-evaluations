/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<RayCastDebugger>b__59_0
ENTRY_POINT: 04e0535c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<RayCastDebugger>b__59_0
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  *(long *)(param_2 + 0x20) = param_3;
  *(long *)(param_2 + 0x28) = param_4;
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  uVar2 = FUN_02f08824(param_4);
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) {
      uVar3 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(unaff_x19 + 0x18) = FUN_02b9f1f4;
    goto LAB_04e053a8;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
LAB_04e053a8:
  *(code **)(unaff_x19 + 0x38) = FUN_02b9f1a4;
  return;
}


