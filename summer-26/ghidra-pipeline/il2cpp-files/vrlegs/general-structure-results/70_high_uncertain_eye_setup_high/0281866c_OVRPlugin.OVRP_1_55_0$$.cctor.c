/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$.cctor
ENTRY_POINT: 0281866c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0___cctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 in_w8;
  long *plVar5;
  int unaff_w19;
  long unaff_x21;
  int iVar6;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x23 + 0x386) = in_w8;
  FUN_02818564();
  if (0 < *(int *)(unaff_x21 + 0x28)) {
    uVar4 = FUN_028187c8();
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x21 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02740a98(uVar7,0,3,uVar8,0,0);
    plVar5 = *(long **)(unaff_x21 + 0x18);
    if (plVar5 == (long *)0x0) {
LAB_028187c4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar5 + 0x228))
              (plVar5,*(undefined8 *)(unaff_x21 + 0x10),0,uVar3,*(undefined8 *)(*plVar5 + 0x230));
  }
  FUN_02818888();
  puVar2 = PTR_DAT_03cc03b8;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + unaff_w19;
  if (unaff_w19 < in_stack_00000008._4_4_) {
    iVar6 = 0x39;
    do {
      iVar1 = in_stack_00000008._4_4_ - unaff_w19;
      if (unaff_w19 + iVar6 <= in_stack_00000008._4_4_) {
        iVar1 = iVar6;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02740a98();
      plVar5 = *(long **)(unaff_x21 + 0x18);
      if (plVar5 == (long *)0x0) goto LAB_028187c4;
      (**(code **)(*plVar5 + 0x228))
                (plVar5,*(undefined8 *)(unaff_x21 + 0x10),0,uVar3,*(undefined8 *)(*plVar5 + 0x230));
      unaff_w19 = iVar1 + unaff_w19;
      iVar6 = iVar1;
    } while (unaff_w19 < in_stack_00000008._4_4_);
  }
  return;
}


