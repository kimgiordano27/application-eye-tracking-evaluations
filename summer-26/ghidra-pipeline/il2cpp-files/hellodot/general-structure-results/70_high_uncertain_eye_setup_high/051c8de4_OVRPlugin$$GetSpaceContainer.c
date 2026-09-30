/*
FUNCTION_NAME: OVRPlugin$$GetSpaceContainer
ENTRY_POINT: 051c8de4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceContainer(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x23;
  
  lVar2 = thunk_FUN_02cea894();
  FUN_051c8eb4(lVar2,3);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
LAB_051c8ea4:
    uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,0);
  }
  if (3 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21[7] = lVar2;
    lVar2 = thunk_FUN_02cea894(*unaff_x23);
    FUN_051c8eb4(lVar2,4);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
    goto LAB_051c8ea4;
    puVar1 = PTR_DAT_06606c80;
    if (4 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[8] = lVar2;
      *(long **)(unaff_x20 + 0x30) = unaff_x21;
      uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
      FUN_051debc8(uVar4,0);
      *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
      FUN_04f7383c();
      *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


