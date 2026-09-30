/*
FUNCTION_NAME: FUN_031a7258
ENTRY_POINT: 031a7258
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_10;strong_file_logging_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_031a7258(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_071bb897 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d03000);
    DAT_071bb897 = 1;
  }
  *(undefined8 *)(param_3 + 0x60) = param_4;
  thunk_FUN_02f411dc((undefined8 *)(param_3 + 0x60),param_4);
  puVar1 = PTR_DAT_06d03000;
  if (*(long *)(param_3 + 0x20) != 0) {
    fVar9 = (float)FUN_06741734(*(long *)(param_3 + 0x20),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0673c42c(0);
    lVar2 = *(long *)(param_3 + 0x40);
    if (lVar2 != 0) {
      *(float *)(param_3 + 0x68) = (fVar9 * -param_2) / (float)*(int *)(lVar2 + 0x18);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
        lVar2 = *(long *)(param_3 + 0x40);
        if (lVar2 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
      }
      puVar1 = PTR_DAT_06d02c10;
      lVar7 = 4;
      pfVar4 = *(float **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
      fVar13 = pfVar4[1];
      fVar9 = pfVar4[2];
      fVar14 = *pfVar4;
      while( true ) {
        uVar8 = (int)lVar7 - 4;
        uVar3 = (uint)*(undefined8 *)(lVar2 + 0x18);
        if ((int)uVar3 <= (int)uVar8) break;
        if (uVar3 <= uVar8) {
LAB_031a746c:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar5 = *(long *)(lVar2 + lVar7 * 8);
        if (lVar5 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
        lVar5 = *(long *)(lVar5 + 0x10);
        if (DAT_071bab7b == '\0') {
          FUN_02f07e70(puVar1);
          DAT_071bab7b = '\x01';
          lVar2 = *(long *)(param_3 + 0x40);
        }
        if (lVar2 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
        if (*(uint *)(lVar2 + 0x18) <= uVar8) goto LAB_031a746c;
        lVar2 = *(long *)(lVar2 + lVar7 * 8);
        if ((lVar2 == 0) || (lVar5 == 0))
        goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
        lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
        fVar10 = *(float *)(lVar2 + 0x30) * 0.5 + *(float *)(lVar2 + 0x24);
        fVar12 = *(float *)(lVar6 + 0x20) * fVar10;
        fVar11 = *(float *)(lVar6 + 0x1c) * fVar10;
        UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_get_lineHeightAtCursorPosition
                  (*(float *)(lVar6 + 0x18) * fVar10,lVar5,0);
        lVar2 = *(long *)(param_3 + 0x40);
        if (lVar2 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
        if (*(uint *)(lVar2 + 0x18) <= uVar8) goto LAB_031a746c;
        lVar2 = *(long *)(lVar2 + lVar7 * 8);
        if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0))
        goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
        fVar10 = (float)FUN_066d48c0(lVar2,0);
        lVar2 = *(long *)(param_3 + 0x40);
        fVar14 = fVar14 + fVar10;
        fVar13 = fVar13 + fVar11;
        fVar9 = fVar9 + fVar12;
        lVar7 = lVar7 + 1;
        if (lVar2 == 0) goto PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton;
      }
      if (*(long *)(param_3 + 0x20) != 0) {
        fVar10 = (float)(int)uVar3;
        FUN_06741b64(fVar14 / fVar10,fVar13 / fVar10,fVar9 / fVar10,*(long *)(param_3 + 0x20),0);
        FUN_031a7470(param_3);
        return;
      }
    }
  }
PixelCrushers_DialogueSystem_QuestLogWindow__ClickCloseButton:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


