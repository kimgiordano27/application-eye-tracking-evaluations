/*
FUNCTION_NAME: UnityEngine.UIElements.KeyboardTextEditorEventHandler$$PostDrawCursor
ENTRY_POINT: 026cecdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void UnityEngine_UIElements_KeyboardTextEditorEventHandler__PostDrawCursor
               (code *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x24;
  long unaff_x25;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_00da4f14("UnityEngine.GUIUtility::get_compositionString()");
    *(code **)(unaff_x25 + 0x300) = param_1;
  }
  lVar2 = (*param_1)();
  if (lVar2 == 0) goto LAB_026cf07c;
  lVar7 = *(long *)(unaff_x19 + 0x38);
  if (*(int *)(lVar2 + 0x10) < 1) {
    if (lVar7 == 0) goto LAB_026cf07c;
    *(long *)(lVar7 + 0x10) = param_3;
  }
  else {
    if (param_3 == 0) goto LAB_026cf07c;
    uVar3 = FUN_01601d40(param_3,0,*(undefined4 *)(unaff_x19 + 0x50),0);
    pcVar6 = *(code **)(unaff_x25 + 0x300);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)FUN_00da4f14("UnityEngine.GUIUtility::get_compositionString()");
      *(code **)(unaff_x25 + 0x300) = pcVar6;
    }
    uVar4 = (*pcVar6)();
    uVar5 = FUN_01603ec8(param_3,*(undefined4 *)(unaff_x19 + 0x54),0);
    uVar3 = FUN_01600424(uVar3,uVar4,uVar5,0);
    if (lVar7 == 0) goto LAB_026cf07c;
    *(undefined8 *)(lVar7 + 0x10) = uVar3;
    pcVar6 = *(code **)(unaff_x25 + 0x300);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)FUN_00da4f14("UnityEngine.GUIUtility::get_compositionString()");
      *(code **)(unaff_x25 + 0x300) = pcVar6;
    }
    lVar2 = (*pcVar6)();
    if (lVar2 == 0) goto LAB_026cf07c;
    unaff_w20 = *(int *)(lVar2 + 0x10) + unaff_w20;
  }
  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x48);
  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x40);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar3 = FUN_026884c4(&stack0x00000010,0);
  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x48);
  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar4 = FUN_026884d4(&stack0x00000010,0);
  FUN_0268834c(0,0,uVar3,uVar4);
  if (lVar2 != 0) {
    uVar3 = 0;
    uVar8 = thunk_FUN_026e5fc0(0,0,0,0,lVar2,*(undefined8 *)(unaff_x19 + 0x38),unaff_w20,0);
    *(undefined4 *)(unaff_x19 + 0x5c) = uVar8;
    *(int *)(unaff_x19 + 0x60) = (int)uVar3;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar4 = FUN_026e5534(*(long *)(unaff_x19 + 0x20),0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        uVar5 = uVar3;
        fVar9 = (float)FUN_026e5534(lVar2,0);
        FUN_026e55c4(fVar9 - *(float *)(unaff_x19 + 0x2c),
                     (float)uVar5 - *(float *)(unaff_x19 + 0x30),lVar2,0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_026e58ac(*(undefined4 *)(unaff_x19 + 0x2c),*(undefined4 *)(unaff_x19 + 0x30),
                       *(long *)(unaff_x19 + 0x20),0);
          in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x48);
          in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x40);
          fVar14 = *(float *)(unaff_x19 + 0x5c);
          fVar16 = *(float *)(unaff_x19 + 0x60);
          fVar9 = (float)FUN_02688390(&stack0x00000010,0);
          in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x48);
          in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x40);
          fVar10 = (float)FUN_026883a0(&stack0x00000010,0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            fVar11 = (float)FUN_026e6fa0(*(long *)(unaff_x19 + 0x20),0);
            FUN_026d4fb4((fVar14 + fVar9) - *(float *)(unaff_x19 + 0x2c),
                         (fVar16 + fVar10 + fVar11) - *(float *)(unaff_x19 + 0x30));
            FUN_026da8a4();
            pcVar6 = *(code **)(unaff_x25 + 0x300);
            if (pcVar6 == (code *)0x0) {
              pcVar6 = (code *)FUN_00da4f14("UnityEngine.GUIUtility::get_compositionString()");
              *(code **)(unaff_x25 + 0x300) = pcVar6;
            }
            lVar2 = (*pcVar6)();
            if (lVar2 != 0) {
              lVar7 = *(long *)(unaff_x19 + 0x20);
              uVar17 = *(undefined4 *)(unaff_x19 + 0x40);
              uVar15 = *(undefined4 *)(unaff_x19 + 0x44);
              uVar13 = *(undefined4 *)(unaff_x19 + 0x48);
              uVar12 = *(undefined4 *)(unaff_x19 + 0x4c);
              uVar5 = *(undefined8 *)(unaff_x19 + 0x38);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x18);
              iVar1 = *(int *)(unaff_x19 + 0x50);
              if (*(int *)(lVar2 + 0x10) < 1) {
                if (lVar7 == 0) goto LAB_026cf07c;
                FUN_026e77b0(uVar17,uVar15,uVar13,uVar12,lVar7,uVar5,uVar8,iVar1,
                             *(undefined4 *)(unaff_x19 + 0x54),0);
              }
              else {
                pcVar6 = *(code **)(unaff_x25 + 0x300);
                if (pcVar6 == (code *)0x0) {
                  pcVar6 = (code *)FUN_00da4f14("UnityEngine.GUIUtility::get_compositionString()");
                  *(code **)(unaff_x25 + 0x300) = pcVar6;
                }
                lVar2 = (*pcVar6)();
                if ((lVar2 == 0) || (lVar7 == 0)) goto LAB_026cf07c;
                FUN_026e7664(uVar17,uVar15,uVar13,uVar12,lVar7,uVar5,uVar8,iVar1,
                             *(int *)(lVar2 + 0x10) + iVar1,1,0);
              }
              if (*(int *)(unaff_x19 + 0x78) != -1) {
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_026cf07c;
                UnityEngine_UIElements_SliderInt__get_pageSize
                          (*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                           *(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                           *(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x38),
                           *(undefined4 *)(unaff_x19 + 0x18),*(int *)(unaff_x19 + 0x78),0);
              }
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                FUN_026e55c4(uVar4,uVar3,*(long *)(unaff_x19 + 0x20),0);
                lVar2 = *(long *)(unaff_x19 + 0x20);
                if (DAT_03774d77 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                    );
                  DAT_03774d77 = '\x01';
                }
                if (lVar2 != 0) {
                  FUN_026e58ac(**(undefined4 **)
                                 (*(long *)
                                   Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                 + 0xb8),
                               (*(undefined4 **)
                                 (*(long *)
                                   Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                 + 0xb8))[1],lVar2,0);
                  if (*(long *)(unaff_x19 + 0x38) != 0) {
                    *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10) = unaff_x24;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_026cf07c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


