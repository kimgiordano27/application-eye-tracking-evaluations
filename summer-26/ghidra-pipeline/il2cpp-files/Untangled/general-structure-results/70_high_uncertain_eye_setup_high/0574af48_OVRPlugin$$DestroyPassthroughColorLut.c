/*
FUNCTION_NAME: OVRPlugin$$DestroyPassthroughColorLut
ENTRY_POINT: 0574af48
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyPassthroughColorLut(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  int unaff_w20;
  long unaff_x25;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  auVar6 = FUN_0556c3dc();
  uVar4 = auVar6._8_8_;
  uVar3 = auVar6._0_8_;
  FUN_055b5920(0);
  auVar6 = FUN_0556c3dc();
  puVar1 = PTR_DAT_06d040e0;
  uVar5 = auVar6._8_8_;
  uVar2 = auVar6._0_8_;
  if (unaff_w20 < 0x2b) {
    if (unaff_w20 < 0xd) {
      if (unaff_w20 == 0) goto LAB_0574b240;
      if (unaff_w20 == 0xc) goto LAB_0574b154;
    }
    else {
      if (unaff_w20 == 0x1a) goto LAB_0574b20c;
      if (unaff_w20 == 0x2a) goto LAB_0574b0b4;
    }
LAB_0574b48c:
    *unaff_x19 = 0;
    thunk_FUN_02f411dc();
    uVar3 = 0;
  }
  else {
    if (unaff_w20 < 0x42) {
      if (unaff_w20 == 0x3f) {
LAB_0574b240:
        if (*(int *)(*(long *)PTR_DAT_06d040e0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        _in_stack_00000008 = FUN_05663480(uVar3,uVar4,uVar2,uVar5,0);
      }
      else {
        if (unaff_w20 != 0x41) goto LAB_0574b48c;
LAB_0574b154:
        if (*(int *)(*(long *)PTR_DAT_06d040e0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        _in_stack_00000008 = FUN_05663698(uVar3,uVar4,uVar2,uVar5,0);
      }
    }
    else if (unaff_w20 == 0x45) {
LAB_0574b20c:
      if (*(int *)(*(long *)PTR_DAT_06d040e0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      _in_stack_00000008 = FUN_056635e8(uVar3,uVar4,uVar2,uVar5,0);
    }
    else {
      if (unaff_w20 != 0x49) goto LAB_0574b48c;
LAB_0574b0b4:
      if (*(int *)(*(long *)PTR_DAT_06d040e0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      _in_stack_00000008 = FUN_05663534(uVar3,uVar4,uVar2,uVar5,0);
    }
    uVar3 = thunk_FUN_02ef1438(*(undefined8 *)puVar1,&stack0x00000008);
    *unaff_x19 = uVar3;
    thunk_FUN_02f411dc();
    uVar3 = 1;
  }
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


