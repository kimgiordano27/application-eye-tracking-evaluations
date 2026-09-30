/*
FUNCTION_NAME: OVRPlugin$$get_batteryLevel
ENTRY_POINT: 0314f1dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_batteryLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03143cfc();
  if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_01afa9e0(), lVar3 == 0)) {
    uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,0);
  }
  puVar2 = PTR_DAT_03d7fc28;
  puVar1 = Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
  if (1 < *(uint *)(unaff_x20 + 0x18)) {
    *(long *)(unaff_x20 + 0x28) = unaff_x21;
    thunk_FUN_01b4f09c();
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_03143d50(0,0x43340000,uVar4,*(undefined8 *)puVar1,*(undefined8 *)puVar1);
    *unaff_x19 = *unaff_x19 + 3;
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


