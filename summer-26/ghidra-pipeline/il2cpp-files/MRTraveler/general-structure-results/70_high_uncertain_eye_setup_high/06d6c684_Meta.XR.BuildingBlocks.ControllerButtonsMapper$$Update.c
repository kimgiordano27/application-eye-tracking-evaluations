/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 06d6c684
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar5;
  
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x20);
  }
  uVar1 = FUN_085dfaac(param_5,0,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_06d6c818();
    if (lVar2 != 0) {
      uVar3 = FUN_05214770(lVar2,*(undefined8 *)PTR_DAT_08e6dc78);
      *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
      thunk_FUN_03d233cc();
      if (param_5 != 0) {
        uVar3 = FUN_085eb090(param_5,0);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
        thunk_FUN_03d233cc();
        lVar2 = FUN_06d6c770();
        if (lVar2 != 0) {
          uVar5 = FUN_085eb494(lVar2,0);
          *(undefined4 *)(unaff_x19 + 0x44) = uVar5;
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
  uVar3 = thunk_FUN_03cf5234();
  uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e8ef50);
  FUN_071396dc(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e8ef58);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3,uVar4);
}


