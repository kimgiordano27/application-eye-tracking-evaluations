/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 01d903c4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
  do {
    FUN_01ca0f60();
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)in_stack_00000008._4_4_) {
      uVar2 = *(undefined8 *)PTR_DAT_02352728;
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01d5e86c(uVar2,0);
      if (unaff_x19 != 0) {
        System_WindowsConsoleDriver__GetConsoleScreenBufferInfo();
        return;
      }
      break;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    plVar3 = *(long **)(unaff_x20 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20);
    if (plVar3 == (long *)0x0) break;
    if (plVar3[4] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_01d47d28((long)&stack0x00000008 + 4,0);
      uVar2 = FUN_01c45a74(*unaff_x28,uVar2,0);
    }
    lVar1 = thunk_FUN_010400dc(*unaff_x25);
    FUN_01d90d84(lVar1,plVar3,uVar2);
    if (unaff_x22 == 0) {
      if (unaff_x19 == 0) break;
      FUN_01ca0f60();
      if (plVar3[4] != 0) goto LAB_01d90370;
    }
    else {
      *(long *)(unaff_x22 + 0x40) = lVar1;
      thunk_FUN_0106e12c((long *)(unaff_x22 + 0x40),lVar1);
      if (plVar3[4] != 0) {
        if (unaff_x19 == 0) break;
LAB_01d90370:
        FUN_01ca0f60();
      }
    }
    uVar2 = FUN_01d47d28((long)&stack0x00000008 + 4,0);
    FUN_01c45a74(*unaff_x27,uVar2,0);
    (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    unaff_x22 = lVar1;
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


