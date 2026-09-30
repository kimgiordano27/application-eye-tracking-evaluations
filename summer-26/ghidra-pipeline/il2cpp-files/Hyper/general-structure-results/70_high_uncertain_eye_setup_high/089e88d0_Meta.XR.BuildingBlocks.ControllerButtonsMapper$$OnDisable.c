/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnDisable
ENTRY_POINT: 089e88d0
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnDisable(undefined4 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined4 uVar3;
  
  do {
    *(undefined4 *)(unaff_x20 + 0x24) = param_1;
LAB_089e8864:
    while( true ) {
      uVar1 = FUN_088e7824();
      if ((uVar1 == 0) || ((uVar1 & 7) == 4)) {
        return;
      }
      if (0x15 < uVar1) break;
      if (uVar1 == 0xd) {
        uVar3 = FUN_088e80a8();
        *(undefined4 *)(unaff_x20 + 0x18) = uVar3;
      }
      else if (uVar1 == 0x15) {
        uVar3 = FUN_088e80a8();
        *(undefined4 *)(unaff_x20 + 0x1c) = uVar3;
      }
      else {
LAB_089e88d8:
                    /* catch() { ... } // from try @ 089e88bc with catch @ 089e88e0 */
                    /* try { // try from 089e88e4 to 08ae88eb has its CatchHandler @ 089e88f4 */
        uVar2 = FUN_088ed628(*(undefined8 *)(unaff_x20 + 0x10));
                    /* try { // try from 089e88ec to 08ae88f7 has its CatchHandler @ 089e83d0 */
        *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 089e88e4 with catch @ 089e88f4
                        */
        thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar2);
      }
    }
    if (uVar1 == 0x1d) {
      uVar3 = FUN_088e80a8();
      *(undefined4 *)(unaff_x20 + 0x20) = uVar3;
      goto LAB_089e8864;
    }
    if (uVar1 != 0x25) goto LAB_089e88d8;
    param_1 = FUN_088e80a8();
  } while( true );
}


