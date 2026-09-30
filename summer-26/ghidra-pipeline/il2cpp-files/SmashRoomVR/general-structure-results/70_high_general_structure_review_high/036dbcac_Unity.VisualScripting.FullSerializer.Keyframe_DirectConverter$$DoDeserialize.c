/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Keyframe_DirectConverter$$DoDeserialize
ENTRY_POINT: 036dbcac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_Keyframe_DirectConverter__DoDeserialize
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               int param_5)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 in_stack_00000008;
  float in_stack_00000018;
  
  if (param_5 < 0) {
    *(undefined4 *)(unaff_x19 + 0x234) = 0;
    iVar1 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x220);
    if (lVar2 == 0) goto LAB_036dbdec;
    if (*(int *)(lVar2 + 0x10) < param_5) {
      *(int *)(unaff_x19 + 0x234) = *(int *)(lVar2 + 0x10);
    }
    *(int *)(unaff_x19 + 0x238) = param_5;
    iVar1 = *(int *)(lVar2 + 0x10);
    if (param_5 <= *(int *)(lVar2 + 0x10)) {
      iVar1 = param_5;
    }
  }
  *(int *)(unaff_x19 + 0x238) = iVar1;
  if (*(int *)(unaff_x19 + 400) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x110) != 0) {
    UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
              (*(long *)(unaff_x19 + 0x110),0);
    if ((*(long *)(unaff_x19 + 0x138) != 0) &&
       (lVar2 = FUN_036dff78(*(long *)(unaff_x19 + 0x138),0), lVar2 != 0)) {
      FUN_03928d34(lVar2,0);
      if (*(long *)(unaff_x19 + 0x138) != 0) {
        fVar4 = param_2;
        FUN_036e0154(&stack0x00000008,*(long *)(unaff_x19 + 0x138),0);
        fVar3 = in_stack_00000018;
        if (*(long *)(unaff_x19 + 0x110) != 0) {
          FUN_03928d34(*(long *)(unaff_x19 + 0x110),0);
          if (*(long *)(unaff_x19 + 0x110) != 0) {
            param_2 = param_2 + (in_stack_00000008._4_4_ - fVar3);
            fVar3 = fVar4;
            UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                      (*(long *)(unaff_x19 + 0x110),0);
            fVar5 = param_4 + param_2;
            if (fVar4 + fVar3 <= fVar5) {
              param_4 = (fVar4 + fVar3) - param_2;
            }
            if ((*(long *)(unaff_x19 + 0x138) != 0) &&
               (lVar2 = FUN_036dff78(*(long *)(unaff_x19 + 0x138),0), lVar2 != 0)) {
              fVar3 = (float)FUN_03927efc(lVar2,0);
              FUN_03927f8c(fVar3 + 0.0,param_4 + fVar5,lVar2,0);
              FUN_036d5d64();
              return;
            }
          }
        }
      }
    }
  }
LAB_036dbdec:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


