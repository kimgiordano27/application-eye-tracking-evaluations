/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchTexture$$get_Texture
ENTRY_POINT: 076eba40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchTexture__get_Texture
               (undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  while( true ) {
    FUN_071c0708(unaff_x21,auVar1._0_8_,auVar1._8_8_,*unaff_x25);
    do {
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w22 == unaff_w20) {
        if (*(long *)(unaff_x19 + 0x1b8) != 0) {
          FUN_076eb340();
          if (*(long *)(unaff_x19 + 0x1b8) != 0) {
            FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),1);
            FUN_076eb104();
            return;
          }
        }
        goto LAB_076ebb44;
      }
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_076ebb44;
      FUN_071c086c(*(long *)(unaff_x19 + 0x228),unaff_w20,*unaff_x23);
      unaff_x21 = *(long *)(unaff_x19 + 0x230);
    } while (unaff_x21 == 0);
    if (*(long *)(unaff_x19 + 0x208) == 0) break;
    auVar1 = FUN_05ab73fc(*(long *)(unaff_x19 + 0x208),unaff_w20,*unaff_x24);
  }
LAB_076ebb44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


