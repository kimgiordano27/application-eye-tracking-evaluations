/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 03139214
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__InitOVRManager(undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_03928f54();
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_0391f968(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar5 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
                    /* try { // try from 03139264 to 03239363 has its CatchHandler @ 03139264
                       catch() { ... } // from try @ 03139264 with catch @ 03139264
                       catch() { ... } // from try @ 03139374 with catch @ 03139264
                       catch() { ... } // from try @ 031393e4 with catch @ 03139264
                       catch() { ... } // from try @ 0313943c with catch @ 03139264
                       catch() { ... } // from try @ 03139498 with catch @ 03139264 */
    uVar2 = FUN_0391c27c();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x21);
    }
    uVar1 = FUN_0391f968(uVar5,uVar2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    lVar3 = FUN_0391c27c();
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (uVar5 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
      uVar1 = FUN_0392a890(lVar3,uVar5,0);
      if ((uVar1 & 1) != 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        lVar3 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
        lVar4 = FUN_0391c27c();
        if ((lVar4 != 0) && (FUN_03928d34(lVar4,0), lVar3 != 0)) {
          FUN_03928dd4(lVar3,0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar3 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0);
            lVar4 = FUN_0391c27c();
            if ((lVar4 != 0) && (FUN_039274a0(lVar4,0), lVar3 != 0)) {
                    /* try { // try from 03139364 to 03239373 has its CatchHandler @ 031393f0 */
              FUN_03928f54(lVar3,0);
                    /* try { // try from 03139374 to 032393bf has its CatchHandler @ 03139264 */
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (lVar3 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
                fVar6 = (float)FUN_03929354(lVar3,0);
                lVar4 = FUN_0391c27c();
                if (lVar4 != 0) {
                  fVar7 = (float)FUN_0392a7f0(lVar4,0);
                    /* try { // try from 031393c0 to 032393cf has its CatchHandler @ 031393ec */
                  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                     (lVar4 = FUN_0391c27c(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
                    fVar8 = (float)FUN_0392a7f0(lVar4,0);
                    fVar7 = fVar7 / fVar8;
                    /* try { // try from 031393d4 to 032393e3 has its CatchHandler @ 031393e8 */
                    /* try { // try from 031393e4 to 03239407 has its CatchHandler @ 03139264 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 031393d4 with catch @ 031393e8
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 031393c0 with catch @ 031393ec
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03139364 with catch @ 031393f0
                        */
                    FUN_039293f4(fVar6 * fVar7,param_2 * fVar7,param_3 * fVar7,lVar3,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


