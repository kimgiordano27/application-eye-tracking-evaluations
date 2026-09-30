/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$Invoke
ENTRY_POINT: 05d3fbd0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton3Delegate__Invoke(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    FUN_05cc45d8(*(long *)(unaff_x20 + 0x90),0);
    FUN_068ecc2c(*(undefined4 *)(unaff_x19 + 0xc),*(undefined4 *)(unaff_x19 + 0x10),
                 *(undefined4 *)(unaff_x19 + 0x14),*(undefined4 *)(unaff_x19 + 0x18),
                 *(undefined4 *)(unaff_x20 + 0xf4),*(undefined4 *)(unaff_x20 + 0xf8),
                 *(undefined4 *)(unaff_x20 + 0xfc),*(undefined4 *)(unaff_x20 + 0x100),0);
    uVar4 = *(undefined4 *)(unaff_x20 + 0x120);
    uVar2 = *(undefined4 *)(unaff_x20 + 0x118);
    uVar3 = *(undefined4 *)(unaff_x20 + 0x11c);
    uVar1 = FUN_068ecc2c(*(undefined4 *)(unaff_x20 + 0x114),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar4;
    FUN_05cc3684(unaff_x20 + 0x124);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


