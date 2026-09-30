/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvyConnection$$.ctor
ENTRY_POINT: 02eb88f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FluffyUnderware_Curvy_CurvyConnection___ctor(void)

{
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar1;
  long unaff_x21;
  int unaff_w25;
  undefined8 in_stack_00000008;
  int iStack0000000000000034;
  
  if ((unaff_w25 < 0) && (in_stack_00000008._4_1_ != '\0')) {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  iVar1 = unaff_x19[0x12];
  if (((iVar1 < 1) && (*(char *)(unaff_x20 + 0x7c) == '\0')) &&
     (*(undefined1 *)(unaff_x20 + 0x7c) = 1, *(char *)(unaff_x20 + 0x60) == '\0')) {
    *(undefined1 *)(unaff_x20 + 0x60) = 1;
    if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02eb0484(*(long *)(unaff_x20 + 0x50),1,0);
    iVar1 = unaff_x19[0x12];
  }
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,0);
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(int *)(*(long *)PTR_DAT_03cf0c78 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iStack0000000000000034 = iVar1;
  FUN_02145584(unaff_x19 + 2,&stack0x00000034,*(undefined8 *)PTR_DAT_03cf0d08);
  return;
}


