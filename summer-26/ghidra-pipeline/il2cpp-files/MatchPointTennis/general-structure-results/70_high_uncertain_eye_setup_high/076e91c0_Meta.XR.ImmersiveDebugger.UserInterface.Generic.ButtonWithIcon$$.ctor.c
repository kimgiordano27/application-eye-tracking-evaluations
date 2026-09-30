/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$.ctor
ENTRY_POINT: 076e91c0
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  float fVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 in_w8;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar8;
  long lVar9;
  undefined4 unaff_w21;
  undefined8 uVar10;
  undefined4 unaff_w22;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *(undefined1 *)(unaff_x19 + 0x1d4) = in_w8;
  if (param_4 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
  FUN_076e999c(param_4,unaff_w22,unaff_w21,unaff_w20);
  if (*(char *)(unaff_x19 + 0x1c0) != '\0') {
    if (*(char *)(unaff_x19 + 0x23c) != '\0') {
      if (*(long *)(unaff_x19 + 0x1b8) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),0);
      *(undefined1 *)(unaff_x19 + 0x23c) = 0;
    }
    if (-1 < *(int *)(unaff_x19 + 0x238)) {
      if (*(long *)(unaff_x19 + 0x228) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      if (*(int *)(unaff_x19 + 0x238) < *(int *)(*(long *)(unaff_x19 + 0x228) + 0x18)) {
        if (*(long *)(unaff_x19 + 0x1b8) == 0)
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        FUN_076e9b4c();
      }
      *(undefined4 *)(unaff_x19 + 0x238) = 0xffffffff;
    }
    if (*(long *)(unaff_x19 + 0xf8) == 0)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    FUN_095389b0(*(long *)(unaff_x19 + 0xf8),0);
    fVar14 = *(float *)(unaff_x19 + 0x1c4);
    if (DAT_0a51c24f == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a51c24f = '\x01';
    }
    fVar1 = DAT_01c762f8;
    fVar12 = ABS(fVar14);
    fVar15 = ABS(param_3);
    if (ABS(param_3) <= fVar12) {
      fVar15 = fVar12;
    }
    fVar13 = **(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) * 8.0;
    fVar12 = fVar15 * DAT_01c762f8;
    if (fVar15 * DAT_01c762f8 <= fVar13) {
      fVar12 = fVar13;
    }
    fVar14 = ABS(fVar14 - param_3);
    if (fVar12 <= fVar14) {
      *(float *)(unaff_x19 + 0x1c4) = param_3;
      puVar2 = PTR_DAT_09f1e538;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x168);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar6 = FUN_0952fedc(uVar8,0);
      if ((uVar6 & 1) == 0) goto LAB_076e94a8;
      if (*(long *)(unaff_x19 + 0x168) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      fVar15 = *(float *)(unaff_x19 + 0x3c);
      uVar8 = thunk_FUN_0953ac24(*(long *)(unaff_x19 + 0x168),0);
      if (fVar15 <= param_3) {
        uVar10 = *(undefined8 *)(unaff_x19 + 0x178);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar6 = FUN_0952c404(uVar8,uVar10,0);
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x170) == 0) ||
             (lVar7 = FUN_095259a0(*(long *)(unaff_x19 + 0x170),0), lVar7 == 0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0952a454(lVar7,1,0);
          if (*(long *)(unaff_x19 + 0x168) == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0953acf8(*(long *)(unaff_x19 + 0x168),*(undefined8 *)(unaff_x19 + 0x170),0,0);
          if ((*(long *)(unaff_x19 + 0x178) == 0) ||
             (lVar7 = FUN_095259a0(*(long *)(unaff_x19 + 0x178),0), lVar7 == 0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0952a454(lVar7,0,0);
          lVar7 = *(long *)(unaff_x19 + 0x1a8);
          if (DAT_0a51c153 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1fb40);
            DAT_0a51c153 = '\x01';
          }
          if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_09538e64(**(undefined4 **)(*(long *)PTR_DAT_09f1fb40 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_09f1fb40 + 0xb8))[1],lVar7,0);
          lVar7 = *(long *)(unaff_x19 + 0x1a8);
          if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          fVar14 = *(float *)(unaff_x19 + 0x1b4);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x1b0);
          goto LAB_076e94a0;
        }
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x19 + 0x170);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar6 = FUN_0952c404(uVar8,uVar10,0);
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x178) == 0) ||
             (lVar7 = FUN_095259a0(*(long *)(unaff_x19 + 0x178),0), lVar7 == 0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0952a454(lVar7,1,0);
          if (*(long *)(unaff_x19 + 0x168) == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0953acf8(*(long *)(unaff_x19 + 0x168),*(undefined8 *)(unaff_x19 + 0x178),0,0);
          if ((*(long *)(unaff_x19 + 0x170) == 0) ||
             (lVar7 = FUN_095259a0(*(long *)(unaff_x19 + 0x170),0), lVar7 == 0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0952a454(lVar7,0,0);
          if (*(long *)(unaff_x19 + 0x178) == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_09538f28(*(long *)(unaff_x19 + 0x178),0);
          if (*(long *)(unaff_x19 + 0x1a8) == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_09538e64(0,fVar14 * -0.5,*(long *)(unaff_x19 + 0x1a8),0);
          lVar7 = *(long *)(unaff_x19 + 0x1a8);
          if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          uVar11 = *(undefined4 *)(unaff_x19 + 0x1b0);
          fVar14 = *(float *)(unaff_x19 + 0x1b4) - fVar14;
LAB_076e94a0:
          FUN_09538ff0(uVar11,fVar14,lVar7,0);
        }
      }
LAB_076e94a8:
      if (*(long *)(unaff_x19 + 0x1b8) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      FUN_076e9c20();
    }
    lVar7 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
    if (*(char *)(unaff_x19 + 0x1f9) == '\0') {
      fVar14 = (float)FUN_09824e8c(lVar7,0);
      if (*(long *)(unaff_x19 + 0x188) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      bVar3 = FUN_0952a518(*(long *)(unaff_x19 + 0x188),0);
      if ((fVar1 < fVar14 && fVar14 < DAT_01c7644c) != (bool)(bVar3 & 1)) {
        lVar7 = *(long *)(unaff_x19 + 0x188);
        if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        uVar4 = FUN_0952a518(lVar7,0);
        uVar4 = ~uVar4 & 1;
        goto LAB_076e9558;
      }
    }
    else {
      FUN_09824fe8(0,lVar7,0);
      if (*(long *)(unaff_x19 + 0x188) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      uVar6 = FUN_0952a518(*(long *)(unaff_x19 + 0x188),0);
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x188);
        if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
        uVar4 = 0;
LAB_076e9558:
        FUN_0952a454(lVar7,uVar4,0);
      }
    }
    if (*(char *)(unaff_x19 + 0x54) != '\0') {
      lVar7 = *(long *)(unaff_x19 + 0x118);
      if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
      if ((*(char *)(lVar7 + 0x1d0) != '\0') &&
         (iVar5 = FUN_0980c424(lVar7,0), iVar5 != *(int *)(unaff_x19 + 0x294))) {
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
        uVar6 = FUN_095a53ac(0x111,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_095a53ac(0x112,0);
          if (((uVar6 & 1) != 0) && (*(int *)(unaff_x19 + 0x2c8) != -1)) {
            lVar7 = *(long *)(unaff_x19 + 0x2c0);
            iVar5 = *(int *)(unaff_x19 + 0x2c8) + 1;
            *(int *)(unaff_x19 + 0x2c8) = iVar5;
            if (lVar7 == 0)
            goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
            if (iVar5 < *(int *)(lVar7 + 0x1c)) {
              lVar9 = *(long *)(unaff_x19 + 0x118);
              lVar7 = FUN_07000a94(lVar7,iVar5,*(undefined8 *)PTR_DAT_09f2f3c0);
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x2d0);
              lVar9 = *(long *)(unaff_x19 + 0x118);
              *(undefined4 *)(unaff_x19 + 0x2c8) = 0xffffffff;
              if (lVar7 == 0) {
                lVar7 = **(long **)(*(long *)(PTR_DAT_09f1e5b8 + 0x90) + 0xb8);
              }
            }
            if (lVar9 == 0)
            goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
            FUN_0980adc4(lVar9,lVar7,0);
          }
        }
        else {
          if (*(int *)(unaff_x19 + 0x2c8) == -1) {
            if (*(long *)(unaff_x19 + 0x2c0) == 0)
            goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
            *(int *)(unaff_x19 + 0x2c8) = *(int *)(*(long *)(unaff_x19 + 0x2c0) + 0x1c) + -1;
            if (*(long *)(unaff_x19 + 0x118) == 0)
            goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
            *(undefined8 *)(unaff_x19 + 0x2d0) =
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x118) + 0x180);
            thunk_FUN_044bb4b4(unaff_x19 + 0x2d0);
          }
          else {
            uVar4 = *(int *)(unaff_x19 + 0x2c8) - 1;
            *(uint *)(unaff_x19 + 0x2c8) = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
          }
          if (*(long *)(unaff_x19 + 0x2c0) == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          lVar7 = *(long *)(unaff_x19 + 0x118);
          uVar8 = FUN_07000a94(*(long *)(unaff_x19 + 0x2c0),*(undefined4 *)(unaff_x19 + 0x2c8),
                               *(undefined8 *)PTR_DAT_09f2f3c0);
          if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0980adc4(lVar7,uVar8,0);
          lVar7 = *(long *)(unaff_x19 + 0x118);
          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x180) == 0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label;
          FUN_0980c448(lVar7,*(undefined4 *)(*(long *)(lVar7 + 0x180) + 0x10),0);
        }
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


