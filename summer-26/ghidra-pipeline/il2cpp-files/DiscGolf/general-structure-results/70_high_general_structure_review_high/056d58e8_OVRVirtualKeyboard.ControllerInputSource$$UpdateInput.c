/*
FUNCTION_NAME: OVRVirtualKeyboard.ControllerInputSource$$UpdateInput
ENTRY_POINT: 056d58e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void OVRVirtualKeyboard_ControllerInputSource__UpdateInput(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w8;
  char *pcVar9;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
  }
  iVar5 = FUN_063055f8(0);
  if (iVar5 != 0xb) {
    thunk_FUN_02dfd288(PTR_DAT_069ff490);
    uVar7 = thunk_FUN_02dd3144();
    uVar8 = thunk_FUN_02dfd288(
                              UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>_TypeInfo
                              );
    FUN_054ea764(uVar7,uVar8,0);
LAB_056d5984:
    uVar8 = thunk_FUN_02dfd288(
                              UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar8);
  }
  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                              UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>_TypeInfo
                            );
  FUN_0552aca4(lVar6,0);
  if (lVar6 != 0) {
    bVar4 = FUN_056ab3f8();
    lVar6 = *unaff_x21;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar6);
      lVar6 = *unaff_x21;
    }
    **(byte **)(lVar6 + 0xb8) = bVar4 & 1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar6);
      lVar6 = *unaff_x21;
    }
    pcVar9 = *(char **)(lVar6 + 0xb8);
    if (*pcVar9 == '\0') {
      thunk_FUN_02dfd288(PTR_DAT_06a0e800);
      uVar7 = thunk_FUN_02dd3144();
      uVar8 = thunk_FUN_02dfd288(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>_TypeInfo
                                );
      FUN_06350af4(uVar7,uVar8,0);
      goto LAB_056d5984;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar6);
      pcVar9 = *(char **)(*unaff_x21 + 0xb8);
    }
    puVar3 = UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>_TypeInfo;
    puVar2 = UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollerVisibility>_TypeInfo;
    puVar1 = PTR_DAT_069fb980;
    if (pcVar9[1] != '\0') {
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06309d28(*(undefined8 *)puVar2,0);
    }
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0634fa84(lVar6,*(undefined8 *)puVar3,0);
    if (lVar6 != 0) {
      FUN_0364c220(lVar6,*(undefined8 *)
                          UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>_TypeInfo
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


