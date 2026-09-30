/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$set_ButtonClickActions
ENTRY_POINT: 06d6c67c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__set_ButtonClickActions
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar6;
  
  lVar1 = FUN_085875ac(param_5,param_6,0);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x20);
  }
  uVar2 = FUN_085dfaac(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_06d6c818();
    if (lVar3 != 0) {
      uVar4 = FUN_05214770(lVar3,*(undefined8 *)PTR_DAT_08e6dc78);
      *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
      thunk_FUN_03d233cc();
      if (lVar1 != 0) {
        uVar4 = FUN_085eb090(lVar1,0);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
        thunk_FUN_03d233cc();
        lVar1 = FUN_06d6c770();
        if (lVar1 != 0) {
          uVar6 = FUN_085eb494(lVar1,0);
          *(undefined4 *)(unaff_x19 + 0x44) = uVar6;
          *(undefined4 *)(unaff_x19 + 0x48) = param_2;
          *(undefined4 *)(unaff_x19 + 0x4c) = param_3;
          *(undefined4 *)(unaff_x19 + 0x50) = param_4;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  thunk_FUN_03ce5214(PTR_DAT_08e695a0);
  uVar4 = thunk_FUN_03cf5234();
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e8ef50);
  FUN_071396dc(uVar4,uVar5,0);
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e8ef58);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4,uVar5);
}


