/*
FUNCTION_NAME: OVRManager$$set_runtimeSettings
ENTRY_POINT: 02bfecd4
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__set_runtimeSettings(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar3;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  
  do {
    lVar2 = thunk_FUN_01861ac0(unaff_x23,*(undefined8 *)(param_1 + 0x40));
    plVar3 = unaff_x22;
    if (lVar2 == 0) {
      uVar4 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,0);
    }
    do {
      if (*(uint *)(unaff_x21 + 3) <= unaff_w20 + unaff_w26) {
OVRManager__get_boundary:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      unaff_x22 = plVar3 + 1;
      *plVar3 = unaff_x23;
      thunk_FUN_0188fd20(plVar3,unaff_x23);
      unaff_w26 = unaff_w26 + 1;
      if ((int)unaff_x21[3] <= (int)(unaff_w20 + unaff_w26)) {
        *unaff_x19 = (long)unaff_x21;
        thunk_FUN_0188fd20();
        return;
      }
      lVar2 = *unaff_x19;
      if (lVar2 == 0) {
LAB_02bfed5c:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto OVRManager__get_boundary;
      lVar2 = *(long *)(lVar2 + unaff_x27 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_02bfed5c;
      uVar4 = *unaff_x25;
      lVar1 = thunk_FUN_01861ac0(lVar2,uVar4);
      if (lVar1 == 0) {
LAB_02bfed60:
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar2,uVar4);
      }
      uVar4 = *unaff_x25;
      lVar1 = thunk_FUN_01861ac0(lVar2,uVar4);
      if (lVar1 == 0) goto LAB_02bfed60;
      if (*(uint *)(lVar1 + 0x18) <= unaff_w26) goto OVRManager__get_boundary;
      unaff_x23 = *(long *)(lVar1 + (long)(int)unaff_w26 * 8 + 0x20);
      plVar3 = unaff_x22;
    } while (unaff_x23 == 0);
    param_1 = *unaff_x21;
  } while( true );
}


