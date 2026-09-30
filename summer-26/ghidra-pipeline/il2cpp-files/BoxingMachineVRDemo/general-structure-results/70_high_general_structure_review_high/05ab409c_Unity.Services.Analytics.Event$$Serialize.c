/*
FUNCTION_NAME: Unity.Services.Analytics.Event$$Serialize
ENTRY_POINT: 05ab409c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_5
*/


void Unity_Services_Analytics_Event__Serialize(void)

{
  undefined1 uVar1;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  byte unaff_w21;
  long *unaff_x25;
  float unaff_s8;
  
  if (in_w8 == 0) {
    uVar1 = 0x7f;
  }
  else {
    if (unaff_s8 != 1.0) {
      uVar1 = Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose()
      ;
    }
    else {
      uVar1 = 0x7f;
    }
    unaff_w21 = (unaff_s8 != 1.0 && unaff_s8 < 2.0) | unaff_w21 << 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  *(byte *)(*(long *)(unaff_x19 + 0x228) + (long)unaff_w20) = unaff_w21;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x238) + (long)unaff_w20) = uVar1;
  return;
}


