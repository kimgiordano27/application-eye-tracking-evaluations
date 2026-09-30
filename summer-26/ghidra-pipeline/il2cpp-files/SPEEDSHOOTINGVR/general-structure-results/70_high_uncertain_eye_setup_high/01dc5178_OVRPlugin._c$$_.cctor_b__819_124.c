/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_124
ENTRY_POINT: 01dc5178
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dc5214) */

void OVRPlugin_<>c__<_cctor>b__819_124(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  long *plVar4;
  char cStack000000000000000c;
  
  thunk_FUN_0106e12c();
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(long *)(*unaff_x21 + 0x18) == 0) {
    uVar1 = FUN_01dc5380();
    cStack000000000000000c = '\0';
    FUN_01da75d8(uVar1,&stack0x0000000c,0);
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    plVar4 = (long *)(*unaff_x21 + 0x18);
    if (*plVar4 == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      plVar2 = *(long **)(unaff_x20 + 0x10);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar3 = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
      *plVar4 = lVar3;
      thunk_FUN_0106e12c(plVar4);
    }
    if (cStack000000000000000c != '\0') {
      thunk_FUN_0102a860(uVar1,0);
    }
  }
  return;
}


