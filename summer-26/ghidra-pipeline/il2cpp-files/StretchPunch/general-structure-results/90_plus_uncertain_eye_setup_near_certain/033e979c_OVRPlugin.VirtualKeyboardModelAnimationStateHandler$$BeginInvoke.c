/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$BeginInvoke
ENTRY_POINT: 033e979c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__BeginInvoke(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x25;
  
  while (unaff_w22 < in_w8) {
    if (unaff_w22 != 0) {
      FUN_03418f00();
      param_1 = *(long *)(unaff_x19 + 0x28);
      if (param_1 == 0) goto LAB_033e986c;
    }
    lVar1 = FUN_03198ca0(param_1,unaff_w22,*unaff_x25);
    if (lVar1 == 0) goto LAB_033e986c;
    if (*(long *)(lVar1 + 0x18) == 0) {
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar1 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),unaff_w22,*unaff_x25), lVar1 == 0))
      goto LAB_033e986c;
      FUN_033e9984();
      FUN_03418f00();
    }
    else {
      lVar1 = FUN_03419818();
      if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar2 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),unaff_w22,*unaff_x25), lVar2 == 0)) ||
          (uVar3 = FUN_033e9984(), lVar1 == 0)) || (lVar1 = FUN_03418f00(lVar1,uVar3,0), lVar1 == 0)
         ) goto LAB_033e986c;
      FUN_03419818(lVar1,0x5d,0);
    }
    param_1 = *(long *)(unaff_x19 + 0x28);
    unaff_w22 = unaff_w22 + 1;
    if (param_1 == 0) goto LAB_033e986c;
    in_w8 = *(int *)(param_1 + 0x18);
  }
  FUN_03419818();
  if ((unaff_w20 >> 1 & 1) == 0) {
    FUN_033e99c8();
  }
  if ((*(long *)(unaff_x19 + 0x18) != 0 & unaff_w20) == 0) {
    if (unaff_x21 != (long *)0x0) goto LAB_033e98d0;
  }
  else if ((unaff_x21 != (long *)0x0) && (lVar1 = FUN_03418f00(), lVar1 != 0)) {
    FUN_03418f00(lVar1,*(undefined8 *)(unaff_x19 + 0x18),0);
LAB_033e98d0:
    (**(code **)(*unaff_x21 + 0x168))();
    return;
  }
LAB_033e986c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


