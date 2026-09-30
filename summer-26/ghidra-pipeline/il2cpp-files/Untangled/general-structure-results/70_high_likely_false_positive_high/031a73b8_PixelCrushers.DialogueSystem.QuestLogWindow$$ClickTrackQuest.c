/*
FUNCTION_NAME: PixelCrushers.DialogueSystem.QuestLogWindow$$ClickTrackQuest
ENTRY_POINT: 031a73b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_9;strong_file_logging_hits_7;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PixelCrushers_DialogueSystem_QuestLogWindow__ClickTrackQuest
               (float param_1,float param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long in_x9;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  uint uVar5;
  long unaff_x25;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  do {
    lVar4 = *(long *)(in_x9 + 0xb8);
    param_2 = param_1 * unaff_s11 + param_2;
    fVar8 = *(float *)(lVar4 + 0x20) * param_2;
    fVar7 = *(float *)(lVar4 + 0x1c) * param_2;
    UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_get_lineHeightAtCursorPosition
              (*(float *)(lVar4 + 0x18) * param_2,fVar7,fVar8,param_3,0);
    lVar4 = *(long *)(unaff_x19 + 0x40);
    if (lVar4 == 0) {
PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x25) goto LAB_031a746c;
    lVar4 = *(long *)(lVar4 + unaff_x22 * 8);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0))
    goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
    fVar6 = (float)FUN_066d48c0(lVar4,0);
    lVar1 = *(long *)(unaff_x19 + 0x40);
    unaff_s10 = unaff_s10 + fVar6;
    unaff_s9 = unaff_s9 + fVar7;
    unaff_s8 = unaff_s8 + fVar8;
    lVar4 = unaff_x22 + 1;
    if (lVar1 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
    unaff_x25 = unaff_x22 + -3;
    uVar2 = (uint)*(undefined8 *)(lVar1 + 0x18);
    uVar5 = (uint)unaff_x25;
    if ((int)uVar2 <= (int)uVar5) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar7 = (float)(int)uVar2;
        FUN_06741b64(unaff_s10 / fVar7,unaff_s9 / fVar7,unaff_s8 / fVar7,*(long *)(unaff_x19 + 0x20)
                     ,0);
        FUN_031a7470();
        return;
      }
      goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
    }
    if (uVar2 <= uVar5) {
LAB_031a746c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar3 = *(long *)(lVar1 + lVar4 * 8);
    if (lVar3 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
    param_3 = *(long *)(lVar3 + 0x10);
    if (*(char *)(unaff_x23 + 0xb7b) == '\0') {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x23 + 0xb7b) = unaff_w24;
      lVar1 = *(long *)(unaff_x19 + 0x40);
    }
    if (lVar1 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_031a746c;
    lVar1 = *(long *)(lVar1 + lVar4 * 8);
    if ((lVar1 == 0) || (param_3 == 0))
    goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
    in_x9 = *unaff_x20;
    param_1 = *(float *)(lVar1 + 0x30);
    param_2 = *(float *)(lVar1 + 0x24);
    unaff_x22 = lVar4;
  } while( true );
}


