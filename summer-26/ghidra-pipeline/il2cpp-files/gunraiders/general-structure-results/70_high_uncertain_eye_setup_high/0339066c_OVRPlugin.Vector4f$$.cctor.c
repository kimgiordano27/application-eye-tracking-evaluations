/*
FUNCTION_NAME: OVRPlugin.Vector4f$$.cctor
ENTRY_POINT: 0339066c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f___cctor(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  
  lVar1 = thunk_FUN_01c49334(*unaff_x25);
  if (param_1 == (long *)0x0) {
LAB_0339070c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_01c495e4(lVar1,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0)) {
LAB_03390710:
    uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar3,0);
  }
  uVar4 = *(uint *)(param_1 + 3);
  if (uVar4 != 0) {
    param_1[4] = lVar1;
    if (unaff_x20 != 0) {
      lVar1 = thunk_FUN_01c495e4();
      if (lVar1 == 0) goto LAB_03390710;
      uVar4 = *(uint *)(param_1 + 3);
    }
    if (1 < uVar4) {
      param_1[5] = unaff_x20;
      if (unaff_x21 != 0) {
        FUN_032108c8();
        return;
      }
      goto LAB_0339070c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


