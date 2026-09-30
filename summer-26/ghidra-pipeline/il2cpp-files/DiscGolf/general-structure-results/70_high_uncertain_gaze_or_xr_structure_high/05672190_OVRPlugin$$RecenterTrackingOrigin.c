/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 05672190
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__RecenterTrackingOrigin(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
  memset(&stack0x00000008,0,0xb8);
  uVar2 = FUN_0566ee84();
  puVar1 = System_Collections_Generic_List<JsonObject>_TypeInfo;
  if ((uVar2 & 1) == 0) {
    uVar3 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
  }
  else {
    uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&stack0x00000004);
    uVar4 = FUN_05672218(uVar3,in_stack_00000008._4_4_);
    uVar3 = FUN_0536e0dc(*(undefined8 *)puVar1,uVar3,uVar4,0);
  }
  return uVar3;
}


