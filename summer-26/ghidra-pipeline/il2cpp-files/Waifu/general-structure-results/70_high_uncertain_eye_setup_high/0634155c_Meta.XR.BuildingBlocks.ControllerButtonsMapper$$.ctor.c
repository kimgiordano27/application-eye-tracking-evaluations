/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$.ctor
ENTRY_POINT: 0634155c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper___ctor(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *in_x9;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x28;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  
  lVar2 = (*in_x9)();
  if (lVar2 != 0) {
    uVar10 = *(undefined4 *)(lVar2 + 0x88);
    uVar9 = *(undefined4 *)(lVar2 + 0x8c);
    uVar8 = *(undefined4 *)(lVar2 + 0x90);
    lVar2 = (**(code **)(*unaff_x19 + 0x1f8))();
    if ((lVar2 != 0) && ((uVar3 = FUN_0633d928(), (uVar3 & 1) == 0 || (unaff_x19[0x10] != 0)))) {
      uVar3 = FUN_0633d928();
      if ((uVar3 & 1) != 0) {
        if (unaff_x19[10] == 0) goto LAB_06341ad0;
        FUN_079e72fc(unaff_x19[10],0);
      }
      if (unaff_x22 != 0) {
        uVar8 = FUN_063669e4(uVar10,uVar9,uVar8);
        *(undefined4 *)(unaff_x19 + 7) = uVar8;
        if ((unaff_x21 & 1) != 0) {
          lVar2 = FUN_05b961dc(*(undefined8 *)(unaff_x28 + 0xcb0));
          if (lVar2 == 0) goto LAB_06341ad0;
          lVar4 = FUN_06317920(lVar2,0);
          lVar2 = unaff_x19[7];
          uVar1 = FUN_0633d928();
          if (unaff_x19[10] == 0) goto LAB_06341ad0;
          uVar5 = FUN_079e8100(unaff_x19[10],0);
          if (unaff_x19[10] == 0) goto LAB_06341ad0;
          uVar6 = FUN_079e81b4(unaff_x19[10],0);
          if (unaff_x19[10] == 0) goto LAB_06341ad0;
          uVar7 = FUN_079e8268(unaff_x19[10],0);
          if (unaff_x19[10] == 0) goto LAB_06341ad0;
          auVar11 = FUN_079e7414(unaff_x19[10],0);
          if ((unaff_x19[10] == 0) || (FUN_079e72fc(unaff_x19[10],0), lVar4 == 0))
          goto LAB_06341ad0;
          FUN_063671fc(lVar4,(int)lVar2,uVar1 & 1,uVar5,uVar6,uVar7,auVar11._0_8_,auVar11._8_8_);
        }
        lVar2 = FUN_05b961dc(*(undefined8 *)(unaff_x28 + 0xcb0));
        if ((lVar2 != 0) && (lVar2 = FUN_06317920(lVar2,0), lVar2 != 0)) {
          FUN_06366fcc(lVar2,(int)unaff_x19[7],0);
          FUN_06340e18();
          return;
        }
      }
    }
  }
LAB_06341ad0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


