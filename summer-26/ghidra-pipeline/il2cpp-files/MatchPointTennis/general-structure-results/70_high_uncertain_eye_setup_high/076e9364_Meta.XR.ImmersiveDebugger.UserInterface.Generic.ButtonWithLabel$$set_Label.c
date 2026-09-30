/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_Label
ENTRY_POINT: 076e9364
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_Label
               (undefined1 param_1 [16],float param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  float fVar8;
  float unaff_s9;
  
  if ((param_3 == 0) || (lVar4 = FUN_095259a0(param_3,0), lVar4 == 0))
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
  FUN_0952a454(lVar4,0,0);
  if (*(long *)(unaff_x19 + 0x178) == 0)
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
  FUN_09538f28(*(long *)(unaff_x19 + 0x178),0);
  if (*(long *)(unaff_x19 + 0x1a8) == 0)
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
  FUN_09538e64(0,param_2 * -0.5,*(long *)(unaff_x19 + 0x1a8),0);
  if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
     (FUN_09538ff0(*(undefined4 *)(unaff_x19 + 0x1b0),*(float *)(unaff_x19 + 0x1b4) - param_2,
                   *(long *)(unaff_x19 + 0x1a8),0), *(long *)(unaff_x19 + 0x1b8) == 0))
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
  FUN_076e9c20();
  lVar4 = *(long *)(unaff_x19 + 0x1a0);
  if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
  if (*(char *)(unaff_x19 + 0x1f9) == '\0') {
    fVar8 = (float)FUN_09824e8c(lVar4,0);
    if (*(long *)(unaff_x19 + 0x188) == 0)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    bVar1 = FUN_0952a518(*(long *)(unaff_x19 + 0x188),0);
    if ((unaff_s9 < fVar8 && fVar8 < DAT_01c7644c) != (bool)(bVar1 & 1)) {
      lVar4 = *(long *)(unaff_x19 + 0x188);
      if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      uVar2 = FUN_0952a518(lVar4,0);
      uVar2 = ~uVar2 & 1;
      goto LAB_076e9558;
    }
  }
  else {
    FUN_09824fe8(0,lVar4,0);
    if (*(long *)(unaff_x19 + 0x188) == 0)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    uVar5 = FUN_0952a518(*(long *)(unaff_x19 + 0x188),0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x188);
      if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      uVar2 = 0;
LAB_076e9558:
      FUN_0952a454(lVar4,uVar2,0);
    }
  }
  if (*(char *)(unaff_x19 + 0x54) != '\0') {
    lVar4 = *(long *)(unaff_x19 + 0x118);
    if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    if ((*(char *)(lVar4 + 0x1d0) != '\0') &&
       (iVar3 = FUN_0980c424(lVar4,0), iVar3 != *(int *)(unaff_x19 + 0x294))) {
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
      uVar5 = FUN_095a53ac(0x111,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_095a53ac(0x112,0);
        if (((uVar5 & 1) != 0) && (*(int *)(unaff_x19 + 0x2c8) != -1)) {
          lVar4 = *(long *)(unaff_x19 + 0x2c0);
          iVar3 = *(int *)(unaff_x19 + 0x2c8) + 1;
          *(int *)(unaff_x19 + 0x2c8) = iVar3;
          if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          if (iVar3 < *(int *)(lVar4 + 0x1c)) {
            lVar7 = *(long *)(unaff_x19 + 0x118);
            lVar4 = FUN_07000a94(lVar4,iVar3,*(undefined8 *)PTR_DAT_09f2f3c0);
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x2d0);
            lVar7 = *(long *)(unaff_x19 + 0x118);
            *(undefined4 *)(unaff_x19 + 0x2c8) = 0xffffffff;
            if (lVar4 == 0) {
              lVar4 = **(long **)(*(long *)(PTR_DAT_09f1e5b8 + 0x90) + 0xb8);
            }
          }
          if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0980adc4(lVar7,lVar4,0);
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
        lVar4 = *(long *)(unaff_x19 + 0x118);
        uVar6 = FUN_07000a94(*(long *)(unaff_x19 + 0x2c0),*(undefined4 *)(unaff_x19 + 0x2c8),
                             *(undefined8 *)PTR_DAT_09f2f3c0);
        if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        FUN_0980adc4(lVar4,uVar6,0);
        lVar4 = *(long *)(unaff_x19 + 0x118);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x180) == 0))
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        FUN_0980c448(lVar4,*(undefined4 *)(*(long *)(lVar4 + 0x180) + 0x10),0);
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


