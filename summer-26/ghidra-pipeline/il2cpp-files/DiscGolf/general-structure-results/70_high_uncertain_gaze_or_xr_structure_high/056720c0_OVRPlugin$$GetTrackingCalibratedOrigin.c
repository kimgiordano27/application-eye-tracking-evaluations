/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 056720c0
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


void OVRPlugin__GetTrackingCalibratedOrigin(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000018;
  undefined4 uStack000000000000001c;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Collections_Generic_List<JsonObject>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<JsonObject>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x66f) = 1;
  uStack000000000000001c = *unaff_x19;
  uVar1 = thunk_FUN_02dd2d7c(*unaff_x20,&stack0x0000001c);
  in_stack_00000018 = unaff_x19[1];
  uVar2 = thunk_FUN_02dd2d7c(*unaff_x21,&stack0x00000018);
  uStack000000000000000c = unaff_x19[2];
  uVar3 = thunk_FUN_02dd2d7c(*unaff_x23,&stack0x0000000c);
  FUN_0536e120(*unaff_x22,uVar1,uVar2,uVar3,0);
  return;
}


