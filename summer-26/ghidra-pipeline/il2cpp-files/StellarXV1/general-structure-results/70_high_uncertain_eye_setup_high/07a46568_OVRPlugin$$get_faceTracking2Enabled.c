/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 07a46568
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTracking2Enabled(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  if ((unaff_x22 != 0) && (lVar2 = thunk_FUN_040b4e00(), lVar2 == 0)) {
LAB_07a46650:
    uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,0);
  }
  if ((*(uint *)(unaff_x21 + 3) & 0xfffffffc) != 0) {
    unaff_x21[7] = unaff_x22;
    thunk_FUN_040ec700();
    lVar2 = thunk_FUN_040b4efc(*unaff_x23);
    FUN_07a46660(lVar2,4);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
    goto LAB_07a46650;
    puVar1 = PTR_DAT_092ee590;
    if (4 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[8] = lVar2;
      thunk_FUN_040ec700(unaff_x21 + 8,lVar2);
      *(long **)(unaff_x20 + 0x30) = unaff_x21;
      thunk_FUN_040ec700();
      uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
      FUN_07a5ccd0(uVar4,0);
      *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
      thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x40),uVar4);
      FUN_076bca34();
      *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
      thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x38));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


