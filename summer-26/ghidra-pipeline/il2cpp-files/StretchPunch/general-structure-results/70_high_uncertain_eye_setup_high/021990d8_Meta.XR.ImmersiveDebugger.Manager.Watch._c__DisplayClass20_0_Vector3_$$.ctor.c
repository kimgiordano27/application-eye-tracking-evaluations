/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$.ctor
ENTRY_POINT: 021990d8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>___ctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x24;
  undefined *puVar4;
  
  if (*(int *)(unaff_x24 + 0x18) < unaff_w21) {
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar1 = thunk_FUN_01de27b8();
    uVar2 = thunk_FUN_01dd295c(StringLiteral_1124);
    puVar4 = StringLiteral_1235;
  }
  else {
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x24 + 0x18) - unaff_w21)) {
      FUN_021a6afc();
      return;
    }
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar1 = thunk_FUN_01de27b8();
    uVar2 = thunk_FUN_01dd295c(StringLiteral_1123);
    puVar4 = StringLiteral_1234;
  }
  uVar3 = thunk_FUN_01dd295c(puVar4);
  FUN_0328a910(uVar1,uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1);
}


