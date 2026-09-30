/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 03685718
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemHeadsetType(code *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000028;
  
  (*param_1)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if ((unaff_w23 != 0xc) && (unaff_w23 != 0)) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar2 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0367e580();
    uVar1 = thunk_FUN_01f113fc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_14__,
                               (long)&stack0x00000028 + 4);
    uVar1 = FUN_0340f2f0(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_23__,uVar1);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


