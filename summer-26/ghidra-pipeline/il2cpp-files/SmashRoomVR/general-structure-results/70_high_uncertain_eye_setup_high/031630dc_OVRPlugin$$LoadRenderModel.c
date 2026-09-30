/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 031630dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LoadRenderModel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x21;
  undefined8 uVar6;
  undefined4 unaff_w22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  FUN_03081994();
  *(undefined4 *)(unaff_x21 + 0x1c) = unaff_w22;
  *(undefined4 *)(unaff_x21 + 0x10) = 0x42f00000;
  *(undefined1 *)(unaff_x21 + 0x18) = 0;
  lVar3 = thunk_FUN_01afa9e0();
  puVar2 = PTR_DAT_03d806a8;
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  if (lVar3 == 0) {
    uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar6,0);
  }
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    *(long *)(unaff_x20 + 0x30) = unaff_x21;
    thunk_FUN_01b4f09c();
    *(long *)(unaff_x19 + 0x38) = unaff_x20;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x38));
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03927648(0);
    *(undefined8 *)(unaff_x19 + 0xa0) = uStack0000000000000014;
    *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    *(undefined8 *)(unaff_x19 + 0x94) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000000;
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar3 = *(long *)puVar2;
      }
      uVar6 = **(undefined8 **)(lVar3 + 0xb8);
                    /* try { // try from 031631cc to 03263307 has its CatchHandler @ 031631cc
                       catch() { ... } // from try @ 031631cc with catch @ 031631cc
                       catch() { ... } // from try @ 0316342c with catch @ 031631cc
                       catch() { ... } // from try @ 03163570 with catch @ 031631cc
                       catch() { ... } // from try @ 031635a0 with catch @ 031631cc
                       catch() { ... } // from try @ 031635d4 with catch @ 031631cc
                       catch() { ... } // from try @ 03163654 with catch @ 031631cc */
      lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80678);
      FUN_0251bcc8(lVar5,uVar6,*(undefined8 *)PTR_DAT_03d806a0,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar5;
      thunk_FUN_01b4f09c(plVar4,lVar5);
    }
    *(long *)(unaff_x19 + 0xa8) = lVar5;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0xa8),lVar5);
    FUN_039211e4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


