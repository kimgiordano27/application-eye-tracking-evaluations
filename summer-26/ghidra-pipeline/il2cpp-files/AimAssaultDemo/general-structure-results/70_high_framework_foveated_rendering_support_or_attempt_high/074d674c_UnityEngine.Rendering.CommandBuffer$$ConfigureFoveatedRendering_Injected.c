/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected
ENTRY_POINT: 074d674c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_15;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering_Injected(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 *puVar9;
  long unaff_x22;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0xd28);
  puVar7 = *(undefined8 **)(unaff_x19 + 0xd30);
  plVar8 = *(long **)(unaff_x20 + 0xd78);
  if ((*(byte *)(unaff_x22 + 0x503) & 1) == 0) {
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass35_0_TypeInfo);
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass34_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d87068);
    FUN_0373b518(PTR_DAT_07d96d78);
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass36_0_TypeInfo);
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass37_0_TypeInfo);
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass38_0_TypeInfo);
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass39_0_TypeInfo);
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass3_0_TypeInfo);
    FUN_0373b518(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass40_0_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x503) = 1;
  }
  puVar1 = PTR_DAT_07d87068;
  uVar4 = thunk_FUN_037788cc(*puVar9);
  FUN_05a37e78(uVar4,*puVar7);
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_074d7110(uVar4,0x1000c);
  lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
  if (lVar5 != 0) {
    if ((*(int *)(lVar5 + 0x18) != 0) &&
       (*(undefined4 *)(lVar5 + 0x20) = 0x5b,
       puVar2 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass38_0_TypeInfo,
       *(int *)(lVar5 + 0x18) != 1)) {
      *(undefined4 *)(lVar5 + 0x24) = 0x1000d;
      FUN_074d7200(uVar4,0x1000c,0x5b);
      FUN_074d7110(uVar4,0x1000d);
      uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
      FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
      FUN_074d7200(uVar4,0x1000d,0x22,uVar6);
      uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
      FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
      FUN_074d7200(uVar4,0x1000d,0x5b,uVar6);
      lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
      if (lVar5 == 0) goto LAB_074d6e80;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined4 *)(lVar5 + 0x20) = 0x5d;
        FUN_074d7200(uVar4,0x1000d,0x5d);
        uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
        FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
        FUN_074d7200(uVar4,0x1000d,0x7b,uVar6);
        uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
        FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
        FUN_074d7200(uVar4,0x1000d,0x10001,uVar6);
        uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
        FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
        FUN_074d7200(uVar4,0x1000d,0x10002,uVar6);
        uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
        FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
        FUN_074d7200(uVar4,0x1000d,0x10003,uVar6);
        uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
        FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
        FUN_074d7200(uVar4,0x1000d,0x10004,uVar6);
        FUN_074d7110(uVar4,0x10008);
        lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
        if (lVar5 == 0) goto LAB_074d6e80;
        if ((*(int *)(lVar5 + 0x18) != 0) &&
           (*(undefined4 *)(lVar5 + 0x20) = 0x7b,
           puVar2 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass36_0_TypeInfo,
           *(int *)(lVar5 + 0x18) != 1)) {
          *(undefined4 *)(lVar5 + 0x24) = 0x10009;
          FUN_074d7200(uVar4,0x10008,0x7b);
          FUN_074d7110(uVar4,0x10009);
          uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
          FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
          FUN_074d7200(uVar4,0x10009,0x22,uVar6);
          lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
          puVar3 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass40_0_TypeInfo;
          puVar2 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass3_0_TypeInfo;
          if (lVar5 == 0) goto LAB_074d6e80;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined4 *)(lVar5 + 0x20) = 0x7d;
            FUN_074d7200(uVar4,0x10009,0x7d);
            FUN_074d7110(uVar4,0x1000a);
            uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
            FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
            FUN_074d7200(uVar4,0x1000a,0x22,uVar6);
            FUN_074d7110(uVar4,0x1000b);
            uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
            FUN_061683b8(uVar6,*(undefined8 *)puVar3,0);
            FUN_074d7200(uVar4,0x1000b,0x2c,uVar6);
            lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
            puVar2 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass39_0_TypeInfo;
            if (lVar5 == 0) goto LAB_074d6e80;
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined4 *)(lVar5 + 0x20) = 0x10012;
              FUN_074d7200(uVar4,0x1000b,0x7d);
              FUN_074d7110(uVar4,0x10010);
              uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
              FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
              FUN_074d7200(uVar4,0x10010,0x22,uVar6);
              FUN_074d7110(uVar4,0x10007);
              lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
              if (lVar5 == 0) goto LAB_074d6e80;
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined4 *)(lVar5 + 0x20) = 0x1000c;
                FUN_074d7200(uVar4,0x10007,0x5b);
                lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                if (lVar5 == 0) goto LAB_074d6e80;
                if (*(int *)(lVar5 + 0x18) != 0) {
                  *(undefined4 *)(lVar5 + 0x20) = 0x10008;
                  FUN_074d7200(uVar4,0x10007,0x7b);
                  FUN_074d7110(uVar4,0x1000e);
                  lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                  if (lVar5 == 0) goto LAB_074d6e80;
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined4 *)(lVar5 + 0x20) = 0x10010;
                    FUN_074d7200(uVar4,0x1000e,0x22);
                    lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                    if (lVar5 == 0) goto LAB_074d6e80;
                    if (*(int *)(lVar5 + 0x18) != 0) {
                      *(undefined4 *)(lVar5 + 0x20) = 0x1000c;
                      FUN_074d7200(uVar4,0x1000e,0x5b);
                      lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                      if (lVar5 == 0) goto LAB_074d6e80;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined4 *)(lVar5 + 0x20) = 0x10008;
                        FUN_074d7200(uVar4,0x1000e,0x7b);
                        lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                        if (lVar5 == 0) goto LAB_074d6e80;
                        if (*(int *)(lVar5 + 0x18) != 0) {
                          *(undefined4 *)(lVar5 + 0x20) = 0x10001;
                          FUN_074d7200(uVar4,0x1000e,0x10001);
                          lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                          if (lVar5 == 0) goto LAB_074d6e80;
                          if (*(int *)(lVar5 + 0x18) != 0) {
                            *(undefined4 *)(lVar5 + 0x20) = 0x10002;
                            FUN_074d7200(uVar4,0x1000e,0x10002);
                            lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                            if (lVar5 == 0) goto LAB_074d6e80;
                            if (*(int *)(lVar5 + 0x18) != 0) {
                              *(undefined4 *)(lVar5 + 0x20) = 0x10003;
                              FUN_074d7200(uVar4,0x1000e,0x10003);
                              lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                              puVar2 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass37_0_TypeInfo;
                              if (lVar5 == 0) goto LAB_074d6e80;
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                *(undefined4 *)(lVar5 + 0x20) = 0x10004;
                                FUN_074d7200(uVar4,0x1000e);
                                FUN_074d7110(uVar4,0x1000f);
                                uVar6 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,3);
                                FUN_061683b8(uVar6,*(undefined8 *)puVar2,0);
                                FUN_074d7200(uVar4,0x1000f,0x2c,uVar6);
                                lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                                if (lVar5 == 0) goto LAB_074d6e80;
                                if (*(int *)(lVar5 + 0x18) != 0) {
                                  *(undefined4 *)(lVar5 + 0x20) = 0x10012;
                                  FUN_074d7200(uVar4,0x1000f,0x5d);
                                  return uVar4;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_074d6e80:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


