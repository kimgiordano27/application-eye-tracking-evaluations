/*
FUNCTION_NAME: OVRPlugin$$get_eyeHeight
ENTRY_POINT: 0314f12c
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


undefined8 OVRPlugin__get_eyeHeight(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 in_w8;
  int *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x20 + 0xfc5) = in_w8;
  plVar3 = (long *)FUN_01b47fd0(*unaff_x22,2);
  uVar4 = FUN_0303de64();
  lVar5 = thunk_FUN_01afaadc(*unaff_x23);
  FUN_03143cfc(lVar5,uVar4,*unaff_x21);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_0314f274:
    uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,0);
  }
  puVar1 = StringLiteral_10278;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar5;
    thunk_FUN_01b4f09c(plVar3 + 4,lVar5);
    in_stack_00000008._4_4_ = *unaff_x19 + 2;
    uVar4 = FUN_0303de64((long)&stack0x00000008 + 4,0);
    lVar5 = thunk_FUN_01afaadc(*unaff_x23);
    FUN_03143cfc(lVar5,uVar4,*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
    goto LAB_0314f274;
    puVar2 = PTR_DAT_03d7fc28;
    puVar1 = Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar5;
      thunk_FUN_01b4f09c(plVar3 + 5,lVar5);
      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
      FUN_03143d50(0,0x43340000,uVar4,*(undefined8 *)puVar1,*(undefined8 *)puVar1,plVar3);
      *unaff_x19 = *unaff_x19 + 3;
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


