/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcActivationMode
ENTRY_POINT: 01daa5c4
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


/* WARNING: Removing unreachable block (ram,0x01daa78c) */
/* WARNING: Removing unreachable block (ram,0x01daa694) */
/* WARNING: Removing unreachable block (ram,0x01daa794) */

bool OVRPlugin_Media__SetMrcActivationMode(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long unaff_x19;
  long lVar4;
  int unaff_w21;
  int iVar5;
  undefined8 in_stack_00000038;
  
  if (unaff_w21 == 0) {
    bVar2 = false;
    iVar5 = 0xf;
  }
  else {
    uVar3 = FUN_01daac98();
    uVar3 = uVar3 & 1;
    iVar5 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    if (0 < iVar5) {
      iVar5 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      uVar3 = 1;
      *(int *)(unaff_x19 + 0x10) = iVar5 + -1;
    }
    lVar4 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_00ffe618();
    if ((lVar4 != 0) && (iVar5 = *(int *)(unaff_x19 + 0x10), thunk_FUN_00ffe618(), iVar5 == 0)) {
      lVar4 = *(long *)(unaff_x19 + 0x28);
      thunk_FUN_00ffe618();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01daad64(lVar4);
    }
    bVar2 = uVar3 != 0;
    iVar5 = 0xc;
  }
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_0102a860(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_01da86bc(&stack0x00000020);
  if ((iVar5 != 0xc) && (iVar5 != 0)) {
    bVar2 = false;
  }
  return bVar2;
}


