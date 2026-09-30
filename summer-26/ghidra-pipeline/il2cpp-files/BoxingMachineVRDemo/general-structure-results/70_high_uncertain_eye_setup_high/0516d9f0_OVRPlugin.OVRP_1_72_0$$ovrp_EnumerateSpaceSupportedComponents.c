/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EnumerateSpaceSupportedComponents
ENTRY_POINT: 0516d9f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EnumerateSpaceSupportedComponents(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c(PTR_DAT_067828b8);
  *(undefined1 *)(unaff_x20 + 0xe8b) = 1;
  lVar1 = *(long *)(unaff_x19 + 0x80);
  if (lVar1 != 0) {
    FUN_03aadb8c(lVar1,*(int *)(lVar1 + 0x18) + -1,*(undefined8 *)PTR_DAT_067828a8);
    lVar1 = *(long *)(unaff_x19 + 0x80);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) == 0) {
        *(undefined8 *)(unaff_x19 + 0xa0) = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_03aac1c4(lVar1,*(int *)(lVar1 + 0x18) + -1,*(undefined8 *)PTR_DAT_067828b8);
        *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
      }
      thunk_FUN_02dd37b4(unaff_x19 + 0xa0,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


