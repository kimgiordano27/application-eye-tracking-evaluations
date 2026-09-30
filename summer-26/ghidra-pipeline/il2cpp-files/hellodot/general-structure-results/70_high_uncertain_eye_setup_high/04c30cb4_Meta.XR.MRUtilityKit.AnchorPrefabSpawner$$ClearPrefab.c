/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefab
ENTRY_POINT: 04c30cb4
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefab(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar2 = FUN_044a8b84();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = FUN_04c2d304();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000020 = FUN_0404bcb8(lVar3,0,*(undefined8 *)PTR_DAT_065e6320);
    uVar2 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6308);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b6c64(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    lVar3 = FUN_044a9014(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6300);
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6310);
    FUN_04f7383c(lVar3,0);
    *(undefined4 *)(lVar3 + 0x10) = 3;
    *(undefined8 *)(lVar3 + 0x18) = uVar5;
    lVar4 = *(long *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x70) = lVar3;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),lVar3,*(undefined8 *)(lVar4 + 0x28))
      ;
      lVar3 = *(long *)(unaff_x20 + 0x70);
    }
  }
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_065e62f0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,lVar3,*(undefined8 *)puVar1);
  return;
}


