/*
FUNCTION_NAME: OVRPlugin$$set_eyeHeight
ENTRY_POINT: 0314f17c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_eyeHeight(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  lVar3 = thunk_FUN_01afa9e0(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar1 = StringLiteral_10278;
  if (lVar3 != 0) {
    if ((int)unaff_x20[3] != 0) {
      unaff_x20[4] = unaff_x21;
      thunk_FUN_01b4f09c();
      in_stack_00000008._4_4_ = *unaff_x19 + 2;
      uVar4 = FUN_0303de64((long)&stack0x00000008 + 4,0);
      lVar3 = thunk_FUN_01afaadc(*unaff_x23);
      FUN_03143cfc(lVar3,uVar4,*(undefined8 *)puVar1);
      if ((lVar3 != 0) &&
         (lVar5 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar5 == 0))
      goto LAB_0314f274;
      puVar2 = PTR_DAT_03d7fc28;
      puVar1 = Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
      if (1 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[5] = lVar3;
        thunk_FUN_01b4f09c(unaff_x20 + 5,lVar3);
        uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
        FUN_03143d50(0,0x43340000,uVar4,*(undefined8 *)puVar1,*(undefined8 *)puVar1);
        *unaff_x19 = *unaff_x19 + 3;
        return uVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_0314f274:
  uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar4,0);
}


