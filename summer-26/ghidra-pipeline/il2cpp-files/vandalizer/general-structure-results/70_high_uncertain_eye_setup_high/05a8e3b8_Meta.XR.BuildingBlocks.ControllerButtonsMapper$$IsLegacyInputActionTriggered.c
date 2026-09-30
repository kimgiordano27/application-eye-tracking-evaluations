/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsLegacyInputActionTriggered
ENTRY_POINT: 05a8e3b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsLegacyInputActionTriggered(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == 0) {
LAB_05a8e460:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 8);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(unaff_x19 + 8) = uVar1 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      goto LAB_05a8e44c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_05a8e460;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x58 + 0x20) < 0);
  lVar3 = lVar3 + (long)(int)uVar4 * 0x58;
  uVar6 = *(undefined8 *)(lVar3 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x68);
  uVar7 = *(undefined8 *)(lVar3 + 0x58);
  uVar9 = *(undefined8 *)(lVar3 + 0x50);
  uVar8 = *(undefined8 *)(lVar3 + 0x48);
  uVar11 = *(undefined8 *)(lVar3 + 0x40);
  uVar10 = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar8;
  thunk_FUN_0329bf60(unaff_x19 + 0x10,0);
LAB_05a8e44c:
  return uVar4 < uVar1;
}


