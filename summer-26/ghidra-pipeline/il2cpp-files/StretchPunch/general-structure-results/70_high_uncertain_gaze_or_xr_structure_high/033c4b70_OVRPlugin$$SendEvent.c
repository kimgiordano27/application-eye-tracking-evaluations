/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 033c4b70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x980));
  *(undefined1 *)(unaff_x21 + 0x9b7) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_033aa3b4();
  if ((uVar1 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c4bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x238))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  thunk_FUN_01dd295c(StringLiteral_1111);
  uVar2 = thunk_FUN_01de27b8();
  uVar3 = thunk_FUN_01dd295c(StringLiteral_8475);
  FUN_032870b8(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01dd295c(StringLiteral_8831);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar2,uVar3);
}


