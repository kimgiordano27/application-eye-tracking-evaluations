/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectCategoryButton
ENTRY_POINT: 052d2068
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectCategoryButton
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  long *plVar4;
  uint in_w9;
  long in_x10;
  int in_w11;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((in_w11 == 0) && (*(char *)(in_x10 + 0x9e) == '\0')) {
    return;
  }
  if ((in_w8 & (*(byte *)(unaff_x19 + 0x358) ^ 0xffffffff)) == 0) {
    if ((*(byte *)(unaff_x19 + 0x358) & in_w9) == 0) {
      return;
    }
    *(undefined1 *)(unaff_x19 + 0x358) = 0;
    Meta_XR_ImmersiveDebugger_UserInterface_Generic_LayoutStyle__get_BottomRightMargin();
    return;
  }
  *(undefined1 *)(unaff_x19 + 0x358) = 1;
  if (*(char *)(in_x10 + 0x9f) == '\0') {
    if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_052d22ec;
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x98) + 0x78);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar5,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0528cb7c(0);
      if (lVar2 == 0) goto LAB_052d22ec;
      plVar4 = (long *)(lVar2 + 0xc0);
    }
    else {
      if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_052d22ec;
      plVar4 = (long *)(*(long *)(unaff_x19 + 0x98) + 0x78);
    }
    if (*plVar4 == 0) goto LAB_052d22ec;
    FUN_052abc4c(*plVar4,*(undefined8 *)(unaff_x19 + 0x330),0);
    if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_052d22ec;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x330);
    lVar2 = FUN_066c67b0(*(long *)(unaff_x19 + 0x98),0);
    if (lVar2 == 0) goto LAB_052d22ec;
    FUN_066d320c(lVar2,0);
    fVar6 = (float)FUN_066bd6e0(0);
    fVar9 = param_2;
    fVar10 = param_3;
    fVar11 = param_4;
    lVar2 = FUN_066c67b0();
    if (lVar2 == 0) goto LAB_052d22ec;
    fVar7 = (float)FUN_066d320c(lVar2,0);
    fVar13 = param_3 * fVar9;
    fVar14 = param_2 * fVar7;
    fVar8 = param_2 * fVar9;
    fVar12 = param_2 * fVar10;
    fVar15 = param_3 * fVar10;
    param_2 = (param_3 * fVar7 + param_4 * fVar9 + param_2 * fVar11) - fVar6 * fVar10;
    param_3 = (fVar6 * fVar9 + param_4 * fVar10 + param_3 * fVar11) - fVar14;
    FUN_066bd6e0((fVar12 + param_4 * fVar7 + fVar6 * fVar11) - fVar13,param_2,param_3,
                 ((param_4 * fVar11 - fVar6 * fVar7) - fVar8) - fVar15,0);
    FUN_05297fc4(uVar5,0);
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    lVar2 = FUN_066c67b0(*(long *)(unaff_x19 + 0x98),0);
    if ((*(long *)(unaff_x19 + 0x280) != 0) &&
       (FUN_052c2b3c(*(long *)(unaff_x19 + 0x280),0), lVar2 != 0)) {
      fVar9 = (float)FUN_066d6014(lVar2,0);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x98);
      lVar2 = FUN_066c67b0();
      if (lVar2 != 0) {
        fVar6 = *(float *)(unaff_x19 + 0x2d8);
        fVar11 = *(float *)(unaff_x19 + 0x2d4);
        uVar3 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x2d0),lVar2,0);
        fVar10 = (float)FUN_052d4090(uVar3,uVar5,*(undefined8 *)(unaff_x19 + 0x280));
        lVar2 = *(long *)(unaff_x19 + 0x330);
        fVar11 = fVar11 - param_2;
        fVar6 = fVar6 - param_3;
        *(float *)(unaff_x19 + 0x34c) = fVar10 - fVar9;
        *(float *)(unaff_x19 + 0x350) = fVar11;
        *(float *)(unaff_x19 + 0x354) = fVar6;
        fVar9 = (float)FUN_052cfe78();
        if (lVar2 != 0) {
          FUN_067441f8(fVar9 + *(float *)(unaff_x19 + 0x34c),fVar11 + *(float *)(unaff_x19 + 0x350),
                       fVar6 + *(float *)(unaff_x19 + 0x354),lVar2,0);
          return;
        }
      }
    }
  }
LAB_052d22ec:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


