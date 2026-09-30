/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 0404e5f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_02bb0e9c();
  cVar1 = *(char *)(unaff_x21 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_02b3c920();
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (unaff_x20 == 0) {
        uVar3 = thunk_FUN_02b86934(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar3,0);
      }
      goto LAB_0404e628;
    }
    pcVar4 = FUN_027df8c8;
  }
  else {
    if (cVar1 != '\x01') {
LAB_0404e628:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto FUN_0404e648;
    }
    pcVar4 = FUN_027df8d8;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
FUN_0404e648:
  *(code **)(unaff_x19 + 0x38) = FUN_027df858;
  return;
}


