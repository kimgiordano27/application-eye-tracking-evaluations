/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 05bafa44
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar3 = (param_8 + param_7) - in_s20;
  fVar5 = (in_s17 + in_s16) - in_s19;
  fVar7 = (param_4 - unaff_s15 * param_2) - in_s21;
  fVar2 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor
                           ((param_6 + param_5) - unaff_s15 * param_3,fVar3,fVar5,fVar7);
  if (unaff_x20 != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bafa10 with catch @ 05bafaa8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05baf9f0 with catch @ 05bafaac
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05baf9c4 with catch @ 05bafab0
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05baf9b8 with catch @ 05bafab4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05baf988 with catch @ 05bafab8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05baf974 with catch @ 05bafabc
                        */
    fVar6 = (unaff_s12 * fVar2 + unaff_s11 * fVar7 + unaff_s14 * fVar5) - unaff_s13 * fVar3;
    fVar4 = (unaff_s13 * fVar5 + unaff_s12 * fVar7 + unaff_s14 * fVar3) - unaff_s11 * fVar2;
    FUN_069e7254((unaff_s11 * fVar3 + unaff_s13 * fVar7 + unaff_s14 * fVar2) - unaff_s12 * fVar5,
                 fVar4,fVar6,
                 ((unaff_s14 * fVar7 - unaff_s13 * fVar2) - unaff_s12 * fVar3) - unaff_s11 * fVar5);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_069e6fbc(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar6;
        in_stack_00000068 = in_stack_00000068 + fVar4;
        fVar3 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
        FUN_069e7098((in_stack_00000000 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                     in_stack_00000008._4_4_ - fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


