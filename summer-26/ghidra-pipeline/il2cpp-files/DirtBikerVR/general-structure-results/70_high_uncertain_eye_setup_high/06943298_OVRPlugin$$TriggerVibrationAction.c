/*
FUNCTION_NAME: OVRPlugin$$TriggerVibrationAction
ENTRY_POINT: 06943298
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__TriggerVibrationAction(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 800));
  FUN_03a8a718(PTR_DAT_084868c0);
  *(undefined1 *)(unaff_x23 + 0xfb6) = 1;
  uVar1 = *unaff_x20;
  *(undefined4 *)(unaff_x19 + 0x30) = 0x3e800000;
  uVar1 = thunk_FUN_03ac74bc(uVar1);
  FUN_0694340c();
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x88),uVar1);
  lVar2 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_07c42d70(lVar2,0);
  lVar3 = FUN_03a8a804(*unaff_x21,2);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  FUN_07c41c34(0,0,0,0x3f800000,&stack0x00000020,0);
  if (lVar3 == 0) {
LAB_06943404:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
    *(undefined4 *)(lVar3 + 0x38) = in_stack_00000038;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
    FUN_07c41c24(0x3f800000,0x3f800000);
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar3 + 0x54) = 0;
      *(undefined8 *)(lVar3 + 0x4c) = 0;
      *(undefined8 *)(lVar3 + 0x44) = 0;
      *(undefined8 *)(lVar3 + 0x3c) = 0;
      if (lVar2 != 0) {
        FUN_07c42240(lVar2,lVar3,0);
        *(long *)(unaff_x19 + 200) = lVar2;
        thunk_FUN_03afed3c((long *)(unaff_x19 + 200),lVar2);
        FUN_069434ac();
        FUN_06943564();
        if ((*(long *)(unaff_x19 + 0x10) != 0) &&
           (*(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8) != 0)) {
          FUN_06941ffc();
          return;
        }
      }
      goto LAB_06943404;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


