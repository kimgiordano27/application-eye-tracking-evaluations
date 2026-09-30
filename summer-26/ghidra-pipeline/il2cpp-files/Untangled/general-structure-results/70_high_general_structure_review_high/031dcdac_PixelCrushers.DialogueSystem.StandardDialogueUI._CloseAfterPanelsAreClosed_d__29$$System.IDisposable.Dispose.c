/*
FUNCTION_NAME: PixelCrushers.DialogueSystem.StandardDialogueUI.<CloseAfterPanelsAreClosed>d__29$$System.IDisposable.Dispose
ENTRY_POINT: 031dcdac
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4
*/


void PixelCrushers_DialogueSystem_StandardDialogueUI_<CloseAfterPanelsAreClosed>d__29__System_IDisposable_Dispose
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar3;
  uint unaff_w24;
  long *plVar4;
  undefined8 uVar5;
  
code_r0x031dcdac:
  FUN_03fd0c9c();
  do {
    unaff_w24 = unaff_w24 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
      FUN_031dce20();
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
LAB_031dce1c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar3 = *unaff_x21;
    plVar4 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
    lVar2 = *plVar4;
    if (lVar2 == 0) goto LAB_031dce18;
    uVar5 = FUN_066d48c0(lVar2,0);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_031dce1c;
    lVar2 = *plVar4;
    if (((lVar2 == 0) || (FUN_066d48c0(lVar2,0), lVar3 == 0)) ||
       (uVar5 = FUN_031972ac(uVar5,param_3,lVar3,0), unaff_x22 == 0)) {
LAB_031dce18:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar2 == 0) goto LAB_031dce18;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) goto code_r0x031dcdac;
    *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
    thunk_FUN_02f411dc();
  } while( true );
}


