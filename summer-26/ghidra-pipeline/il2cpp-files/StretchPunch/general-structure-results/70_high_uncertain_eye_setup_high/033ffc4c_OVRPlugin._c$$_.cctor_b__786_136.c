/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_136
ENTRY_POINT: 033ffc4c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__786_136(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  puVar2 = StringLiteral_9558;
  puVar1 = StringLiteral_9557;
  puVar5 = StringLiteral_1751;
  if (unaff_x23 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar3 = thunk_FUN_01de27b8();
    puVar5 = StringLiteral_9559;
                    /* try { // try from 033ffd24 to 034ffd33 has its CatchHandler @ 034004a4 */
  }
  else {
    if (unaff_x21 != 0) {
      if (-2 < unaff_w24) {
        in_stack_00000008 = 0;
        FUN_033a924c(&stack0x00000008,0,0,0,0,unaff_w24,0);
        uVar3 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
        FUN_033ffdac();
        uVar4 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
        FUN_033fbbb0(uVar4,uVar3,*(undefined8 *)puVar1,0);
        if ((unaff_x19 & 1) == 0) {
          FUN_033ffec8(uVar4,0);
        }
        else {
          FUN_033ffea0();
        }
        return uVar3;
      }
      thunk_FUN_01dd295c(
                        Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                        );
      uVar3 = thunk_FUN_01de27b8();
      uVar4 = thunk_FUN_01dd295c(StringLiteral_9560);
      FUN_0338ed78(uVar3,uVar4,0);
      goto LAB_033ffd94;
    }
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar3 = thunk_FUN_01de27b8();
    puVar5 = StringLiteral_1752;
  }
  uVar4 = thunk_FUN_01dd295c(puVar5);
  FUN_032870b8(uVar3,uVar4,0);
LAB_033ffd94:
  uVar4 = thunk_FUN_01dd295c(StringLiteral_9561);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,uVar4);
}


