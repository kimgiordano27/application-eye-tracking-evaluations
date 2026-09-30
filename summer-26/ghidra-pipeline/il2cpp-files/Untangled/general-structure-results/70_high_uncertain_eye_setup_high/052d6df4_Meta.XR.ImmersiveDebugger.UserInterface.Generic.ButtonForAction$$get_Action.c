/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$get_Action
ENTRY_POINT: 052d6df4
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction__get_Action
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x23;
  
  lVar1 = FUN_037f15fc(param_2,*param_1);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x23);
  }
  uVar2 = FUN_066cd30c(lVar1,0);
  if ((uVar2 & 1) != 0) {
    if (lVar1 == 0) goto LAB_052d6fdc;
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar3,0);
    if ((uVar2 & 1) != 0) {
      unaff_x20 = *(long *)(lVar1 + 0x60);
      if (unaff_x20 == 0) goto LAB_052d6fdc;
      FUN_066d4ae0(unaff_x20,0);
      FUN_066d4960(unaff_x20,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d6fdc;
  FUN_066d5054(*(long *)(unaff_x19 + 0x180),unaff_x20,0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x280);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar3,0);
  if ((uVar2 & 1) != 0) {
    if ((((*(long *)(unaff_x19 + 0x280) == 0) ||
         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x280) + 0x68), lVar1 == 0)) ||
        (lVar1 = *(long *)(lVar1 + 0x48), lVar1 == 0)) ||
       (((lVar1 = *(long *)(lVar1 + 0x10), lVar1 == 0 ||
         (lVar1 = FUN_052beaa4(lVar1,*(undefined4 *)(unaff_x19 + 0xdc),0), lVar1 == 0)) ||
        (*(long *)(unaff_x19 + 0x180) == 0)))) goto LAB_052d6fdc;
    FUN_066d4bec(*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),
                 *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
                 *(long *)(unaff_x19 + 0x180),0);
    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_052d6fdc;
    FUN_066d3f5c(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),
                 *(undefined4 *)(lVar1 + 0x18),*(long *)(unaff_x19 + 0x180),0);
  }
  *(undefined1 *)(unaff_x19 + 0x308) = 1;
  uVar3 = FUN_066c67ec(unaff_x20,0);
  lVar1 = FUN_03a8a358(uVar3,*(undefined8 *)PTR_DAT_06d3d748);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
    uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3d750);
    FUN_04753b10();
    if (lVar1 != 0) {
      FUN_04759cb0(lVar1,uVar3,*(undefined8 *)PTR_DAT_06d3d758);
      return;
    }
  }
LAB_052d6fdc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


