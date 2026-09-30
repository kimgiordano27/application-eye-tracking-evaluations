/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$OnHoverChanged
ENTRY_POINT: 076e9504
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__OnHoverChanged
               (float param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  long lVar7;
  float unaff_s9;
  
  bVar1 = FUN_0952a518(param_2,0);
  if ((unaff_s9 < param_1 && param_1 < DAT_01c7644c) != (bool)(bVar1 & 1)) {
    lVar6 = *(long *)(unaff_x19 + 0x188);
    if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    uVar2 = FUN_0952a518(lVar6,0);
    FUN_0952a454(lVar6,~uVar2 & 1,0);
  }
  if (*(char *)(unaff_x19 + 0x54) != '\0') {
    lVar6 = *(long *)(unaff_x19 + 0x118);
    if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    if ((*(char *)(lVar6 + 0x1d0) != '\0') &&
       (iVar3 = FUN_0980c424(lVar6,0), iVar3 != *(int *)(unaff_x19 + 0x294))) {
      if (*(long *)(unaff_x19 + 0x118) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      FUN_076e9e20();
    }
  }
  if (*(long *)(unaff_x19 + 0x118) == 0)
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
  if (*(char *)(*(long *)(unaff_x19 + 0x118) + 0x1d0) != '\0') {
    if (*(long *)(unaff_x19 + 0x2c0) == 0)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    if (0 < *(int *)(*(long *)(unaff_x19 + 0x2c0) + 0x1c)) {
      uVar4 = FUN_095a53ac(0x111,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_095a53ac(0x112,0);
        if (((uVar4 & 1) != 0) && (*(int *)(unaff_x19 + 0x2c8) != -1)) {
          lVar6 = *(long *)(unaff_x19 + 0x2c0);
          iVar3 = *(int *)(unaff_x19 + 0x2c8) + 1;
          *(int *)(unaff_x19 + 0x2c8) = iVar3;
          if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          if (iVar3 < *(int *)(lVar6 + 0x1c)) {
            lVar7 = *(long *)(unaff_x19 + 0x118);
            lVar6 = FUN_07000a94(lVar6,iVar3,*(undefined8 *)PTR_DAT_09f2f3c0);
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x2d0);
            lVar7 = *(long *)(unaff_x19 + 0x118);
            *(undefined4 *)(unaff_x19 + 0x2c8) = 0xffffffff;
            if (lVar6 == 0) {
              lVar6 = **(long **)(*(long *)(PTR_DAT_09f1e5b8 + 0x90) + 0xb8);
            }
          }
          if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0980adc4(lVar7,lVar6,0);
        }
      }
      else {
        if (*(int *)(unaff_x19 + 0x2c8) == -1) {
          if (*(long *)(unaff_x19 + 0x2c0) == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          *(int *)(unaff_x19 + 0x2c8) = *(int *)(*(long *)(unaff_x19 + 0x2c0) + 0x1c) + -1;
          if (*(long *)(unaff_x19 + 0x118) == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          *(undefined8 *)(unaff_x19 + 0x2d0) = *(undefined8 *)(*(long *)(unaff_x19 + 0x118) + 0x180)
          ;
          thunk_FUN_044bb4b4(unaff_x19 + 0x2d0);
        }
        else {
          uVar2 = *(int *)(unaff_x19 + 0x2c8) - 1;
          *(uint *)(unaff_x19 + 0x2c8) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        }
        if (*(long *)(unaff_x19 + 0x2c0) == 0)
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        lVar6 = *(long *)(unaff_x19 + 0x118);
        uVar5 = FUN_07000a94(*(long *)(unaff_x19 + 0x2c0),*(undefined4 *)(unaff_x19 + 0x2c8),
                             *(undefined8 *)PTR_DAT_09f2f3c0);
        if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        FUN_0980adc4(lVar6,uVar5,0);
        lVar6 = *(long *)(unaff_x19 + 0x118);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x180) == 0))
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        FUN_0980c448(lVar6,*(undefined4 *)(*(long *)(lVar6 + 0x180) + 0x10),0);
      }
    }
  }
  if (*(char *)(unaff_x19 + 0x1c1) != '\0') {
    if (*(char *)(unaff_x19 + 0x1c0) == '\0') {
      if (*(long *)(unaff_x19 + 0x198) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      FUN_076ea4a0(*(long *)(unaff_x19 + 0x198),1);
    }
    else {
      if (*(long *)(unaff_x19 + 0x1b8) == 0) {
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076ea470();
    }
    FUN_076ea6ac();
    *(undefined1 *)(unaff_x19 + 0x1c1) = 0;
  }
  return;
}


