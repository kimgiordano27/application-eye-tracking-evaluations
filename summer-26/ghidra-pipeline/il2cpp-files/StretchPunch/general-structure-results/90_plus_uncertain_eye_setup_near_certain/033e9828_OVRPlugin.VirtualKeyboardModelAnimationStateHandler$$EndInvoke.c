/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$EndInvoke
ENTRY_POINT: 033e9828
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


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__EndInvoke(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x25;
  
  while( true ) {
    FUN_03419818(param_1,param_2,0);
    while( true ) {
      lVar3 = *(long *)(unaff_x19 + 0x28);
      unaff_w22 = unaff_w22 + 1;
      if (lVar3 == 0) goto LAB_033e986c;
      if (*(int *)(lVar3 + 0x18) <= unaff_w22) {
        FUN_03419818();
        if ((unaff_w20 >> 1 & 1) == 0) {
          FUN_033e99c8();
        }
        if ((*(long *)(unaff_x19 + 0x18) != 0 & unaff_w20) == 0) {
          if (unaff_x21 == (long *)0x0) goto LAB_033e986c;
        }
        else {
          if ((unaff_x21 == (long *)0x0) || (lVar3 = FUN_03418f00(), lVar3 == 0)) goto LAB_033e986c;
          FUN_03418f00(lVar3,*(undefined8 *)(unaff_x19 + 0x18),0);
        }
        (**(code **)(*unaff_x21 + 0x168))();
        return;
      }
      if (unaff_w22 != 0) {
        FUN_03418f00();
        lVar3 = *(long *)(unaff_x19 + 0x28);
        if (lVar3 == 0) goto LAB_033e986c;
      }
      lVar3 = FUN_03198ca0(lVar3,unaff_w22,*unaff_x25);
      if (lVar3 == 0) goto LAB_033e986c;
      if (*(long *)(lVar3 + 0x18) != 0) break;
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar3 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),unaff_w22,*unaff_x25), lVar3 == 0))
      goto LAB_033e986c;
      FUN_033e9984();
      FUN_03418f00();
    }
    lVar3 = FUN_03419818();
    if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar1 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),unaff_w22,*unaff_x25), lVar1 == 0)) ||
        (uVar2 = FUN_033e9984(), lVar3 == 0)) ||
       (param_1 = FUN_03418f00(lVar3,uVar2,0), param_1 == 0)) break;
    param_2 = 0x5d;
  }
LAB_033e986c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


