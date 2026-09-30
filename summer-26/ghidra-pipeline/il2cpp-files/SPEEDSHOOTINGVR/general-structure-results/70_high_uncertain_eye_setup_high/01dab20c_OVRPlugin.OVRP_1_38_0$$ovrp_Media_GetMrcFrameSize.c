/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameSize
ENTRY_POINT: 01dab20c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dab32c) */

int OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize(void)

{
  int in_w8;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar1;
  long *unaff_x24;
  long lVar2;
  int unaff_w25;
  int unaff_w26;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01022c14();
    }
    unaff_w23 = unaff_w23 + -1;
    FUN_01dab44c(unaff_x22,0);
    iVar1 = unaff_w25;
    if ((unaff_w26 + unaff_w23 < 1) ||
       (unaff_x22 = *(long *)(unaff_x21 + 0x30), iVar1 = unaff_w23, unaff_x22 == 0)) break;
    FUN_01dab020();
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  }
  thunk_FUN_00ffe618();
  lVar2 = *(long *)(unaff_x21 + 0x28);
  *(int *)(unaff_x21 + 0x10) = iVar1;
  thunk_FUN_00ffe618();
  if ((0 < iVar1) && ((unaff_w20 == 0 && (lVar2 != 0)))) {
    lVar2 = *(long *)(unaff_x21 + 0x28);
    thunk_FUN_00ffe618();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01da75f8(lVar2);
    unaff_w20 = 0;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0102a860();
  }
  return unaff_w20;
}


