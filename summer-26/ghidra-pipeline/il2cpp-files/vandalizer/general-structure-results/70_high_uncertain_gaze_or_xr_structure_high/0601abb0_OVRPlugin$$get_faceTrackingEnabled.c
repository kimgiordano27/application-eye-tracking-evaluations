/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 0601abb0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_faceTrackingEnabled(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x20 + 0x38));
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  plVar1 = (long *)(unaff_x19 + 0x38);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0601ab10 with catch @ 0601ac40
                        */
    FUN_031f2390();
  }
  if (*(int *)(lVar3 + 0x18) < 1) {
    *plVar1 = 0;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0601ac08 with catch @ 0601ac2c
                        */
    thunk_FUN_0329bf60(plVar1,0);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0601abf8 with catch @ 0601ac30
                        */
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0601ab60 with catch @ 0601ac44
                        */
      FUN_031f2398();
    }
                    /* try { // try from 0601abf8 to 0611ac03 has its CatchHandler @ 0601ac30 */
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
                    /* try { // try from 0601ac08 to 0611ac13 has its CatchHandler @ 0601ac2c */
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar2 = 1;
    *(undefined4 *)(unaff_x19 + 0x2c) = *(undefined4 *)(lVar3 + 0x38);
                    /* try { // try from 0601ac14 to 0611ac5b has its CatchHandler @ 0601a63c */
    *(undefined8 *)(unaff_x19 + 0x24) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x1c) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x14) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0601abcc with catch @ 0601ac34
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0601ab90 with catch @ 0601ac38
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 0601ab24 with catch @ 0601ac3c
                        */
  return uVar2;
}


