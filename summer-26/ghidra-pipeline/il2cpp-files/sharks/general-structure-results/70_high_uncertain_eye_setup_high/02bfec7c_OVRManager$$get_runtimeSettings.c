/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 02bfec7c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_runtimeSettings(long param_1)

{
  long lVar1;
  uint in_w9;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  
  while (unaff_w20 < in_w9) {
    lVar2 = *(long *)(param_1 + unaff_x27 * 8 + 0x20);
    if (lVar2 == 0) {
LAB_02bfed5c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar3 = *unaff_x25;
    lVar1 = thunk_FUN_01861ac0(lVar2,uVar3);
    if (lVar1 == 0) {
LAB_02bfed60:
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar2,uVar3);
    }
    uVar3 = *unaff_x25;
    lVar1 = thunk_FUN_01861ac0(lVar2,uVar3);
    if (lVar1 == 0) goto LAB_02bfed60;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w26) break;
    lVar2 = *(long *)(lVar1 + (long)(int)unaff_w26 * 8 + 0x20);
    if ((lVar2 != 0) &&
       (lVar1 = thunk_FUN_01861ac0(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
      uVar3 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar3,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_w20 + unaff_w26) break;
    *unaff_x22 = lVar2;
    thunk_FUN_0188fd20(unaff_x22,lVar2);
    unaff_w26 = unaff_w26 + 1;
    if ((int)unaff_x21[3] <= (int)(unaff_w20 + unaff_w26)) {
      *unaff_x19 = (long)unaff_x21;
      thunk_FUN_0188fd20();
      return;
    }
    param_1 = *unaff_x19;
    if (param_1 == 0) goto LAB_02bfed5c;
    unaff_x22 = unaff_x22 + 1;
    in_w9 = *(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


