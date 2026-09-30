/*
FUNCTION_NAME: OVRPlugin$$get_batteryLevel
ENTRY_POINT: 05317e88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_batteryLevel
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  while (!(bool)in_CY) {
    lVar1 = unaff_x19 + unaff_x25 * 0x10;
    unaff_x23 = unaff_x23 + 1;
    *(undefined4 *)(lVar1 + 0x20) = param_1;
    *(undefined4 *)(lVar1 + 0x24) = param_2;
    *(undefined4 *)(lVar1 + 0x28) = param_3;
    *(undefined4 *)(lVar1 + 0x2c) = param_4;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)(uint)unaff_x23) {
      return;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x23) break;
    if (unaff_x21 == 0) {
LAB_05317ec8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = *(uint *)(unaff_x24 + unaff_x23 * 4);
    unaff_x25 = (long)(int)uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) break;
    if (unaff_x20 == 0) goto LAB_05317ec8;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar2) break;
    lVar1 = unaff_x21 + unaff_x25 * 0x10;
    param_2 = *(undefined4 *)(lVar1 + 0x24);
    param_3 = *(undefined4 *)(lVar1 + 0x28);
    param_4 = *(undefined4 *)(lVar1 + 0x2c);
    param_1 = FUN_060df37c(*(undefined4 *)(lVar1 + 0x20),0);
    if (unaff_x19 == 0) goto LAB_05317ec8;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


