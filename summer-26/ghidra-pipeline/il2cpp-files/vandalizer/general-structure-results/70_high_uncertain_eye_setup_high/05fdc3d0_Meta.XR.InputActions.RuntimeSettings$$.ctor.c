/*
FUNCTION_NAME: Meta.XR.InputActions.RuntimeSettings$$.ctor
ENTRY_POINT: 05fdc3d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_InputActions_RuntimeSettings___ctor
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  float *unaff_x20;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_06e6aafc();
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    fVar3 = (float)FUN_06e6a5c4(lVar2,0);
                    /* try { // try from 05fdc3f4 to 060dc423 has its CatchHandler @ 05fdc104 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05fdc354 with catch @ 05fdc3f8
                        */
    fVar7 = unaff_s10 + param_2;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05fdc344 with catch @ 05fdc3fc
                        */
    fVar8 = unaff_s11 + param_3;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05fdc374 with catch @ 05fdc400
                        */
    fVar4 = (float)FUN_05fddeec();
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05fdc3c4 with catch @ 05fdc404
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05fdc320 with catch @ 05fdc408
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05fdc308 with catch @ 05fdc40c
                        */
    FUN_06e6a69c((unaff_s9 + fVar3) - fVar4,fVar7 - param_2,fVar8 - param_3,lVar2,0);
    fVar3 = *unaff_x20;
    fVar7 = unaff_x20[1];
                    /* try { // try from 05fdc424 to 060dc43b has its CatchHandler @ 05fdc618 */
    fVar4 = unaff_x20[2];
    if (DAT_07a3caf2 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
                    /* try { // try from 05fdc43c to 060dc5bf has its CatchHandler @ 05fdc104 */
      DAT_07a3caf2 = '\x01';
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar10 = *(float *)(lVar2 + 0x18);
    fVar9 = *(float *)(lVar2 + 0x1c);
    fVar8 = *(float *)(lVar2 + 0x20);
    if (DAT_07a44545 == '\0') {
      FUN_031f20f4(PTR_DAT_075b9420);
      DAT_07a44545 = '\x01';
    }
    fVar5 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
    fVar6 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
    if (fVar6 <= fVar5) {
      fVar7 = fVar4 * fVar8 + fVar3 * fVar10 + fVar7 * fVar9;
      fVar6 = (fVar10 * fVar7) / fVar5;
      fVar3 = fVar3 - fVar6;
      fVar4 = fVar4 - (fVar8 * fVar7) / fVar5;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      fVar7 = (float)FUN_06e6a5c4(*(long *)(unaff_x19 + 0x30),0);
      if (*(char *)(unaff_x19 + 0x11a) == '\0') {
        fVar8 = 0.0;
      }
      else {
        fVar8 = *(float *)(unaff_x19 + 0x5c);
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_06e6a69c(fVar3 + fVar7,fVar8 + unaff_s8 + *(float *)(unaff_x19 + 0x58),fVar4 + fVar6,
                     *(long *)(unaff_x19 + 0x30),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0);
          FUN_05f9d090(uVar1,&stack0x00000020,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


