/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ValidateComponents
ENTRY_POINT: 04c2f588
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentRaycastManager__ValidateComponents(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 in_w8;
  long lVar5;
  long lVar6;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  *(undefined1 *)(unaff_x20 + 0x707) = in_w8;
  puVar3 = PTR_DAT_065e6138;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (*unaff_x19 == 0) {
    _uStack0000000000000000 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 8) + 0x18);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar5 + 0x28);
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 10);
    lVar1 = *(long *)PTR_DAT_065c8668;
    if (lVar6 != 0) {
      lVar1 = lVar6;
    }
    *(long *)(unaff_x19 + 0xc) = lVar1;
    puVar2 = PTR_DAT_065dd1f0;
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) {
      if (*(int *)(*(long *)PTR_DAT_065dd1f0 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6975a == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd1f0);
        DAT_06a6975a = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
    }
    lVar5 = FUN_04c2f860(uVar7,lVar1,lVar5);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _uStack0000000000000000 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e1b60);
    uVar4 = FUN_044a8fc8();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _uStack0000000000000000;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b6a50(unaff_x19 + 2);
      return;
    }
  }
  uVar7 = FUN_044a9014();
  uVar8 = *(undefined8 *)(unaff_x19 + 0xc);
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e1518);
  FUN_04c17ea4(lVar5,uVar8,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar5 + 0x98) = uVar7;
  if (*(long *)(unaff_x19 + 10) != 0) {
    *(undefined4 *)(lVar5 + 0xa0) = *(undefined4 *)(*(long *)(unaff_x19 + 10) + 0x20);
    *unaff_x19 = -2;
    unaff_x19[0xc] = 0;
    puVar2 = PTR_DAT_065e6250;
    unaff_x19[0xd] = 0;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar5,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


