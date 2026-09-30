/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$Invoke
ENTRY_POINT: 033e9788
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__Invoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  int iVar5;
  
  puVar1 = StringLiteral_9111;
  if (param_1 != 0) {
    iVar5 = 0;
    while (iVar5 < *(int *)(param_1 + 0x18)) {
      if (iVar5 != 0) {
        FUN_03418f00();
        param_1 = *(long *)(unaff_x19 + 0x28);
        if (param_1 == 0) goto LAB_033e986c;
      }
      lVar2 = FUN_03198ca0(param_1,iVar5,*(undefined8 *)puVar1);
      if (lVar2 == 0) goto LAB_033e986c;
      if (*(long *)(lVar2 + 0x18) == 0) {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar2 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar5,*(undefined8 *)puVar1),
           lVar2 == 0)) goto LAB_033e986c;
        FUN_033e9984();
        FUN_03418f00();
      }
      else {
        lVar2 = FUN_03419818();
        if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar3 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar5,*(undefined8 *)puVar1),
             lVar3 == 0)) || (uVar4 = FUN_033e9984(), lVar2 == 0)) ||
           (lVar2 = FUN_03418f00(lVar2,uVar4,0), lVar2 == 0)) goto LAB_033e986c;
        FUN_03419818(lVar2,0x5d,0);
      }
      param_1 = *(long *)(unaff_x19 + 0x28);
      iVar5 = iVar5 + 1;
      if (param_1 == 0) goto LAB_033e986c;
    }
    FUN_03419818();
    if ((unaff_w20 >> 1 & 1) == 0) {
      FUN_033e99c8();
    }
    if ((*(long *)(unaff_x19 + 0x18) != 0 & unaff_w20) == 0) {
      if (unaff_x21 != (long *)0x0) goto LAB_033e98d0;
    }
    else if ((unaff_x21 != (long *)0x0) && (lVar2 = FUN_03418f00(), lVar2 != 0)) {
      FUN_03418f00(lVar2,*(undefined8 *)(unaff_x19 + 0x18),0);
LAB_033e98d0:
      (**(code **)(*unaff_x21 + 0x168))();
      return;
    }
  }
LAB_033e986c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


