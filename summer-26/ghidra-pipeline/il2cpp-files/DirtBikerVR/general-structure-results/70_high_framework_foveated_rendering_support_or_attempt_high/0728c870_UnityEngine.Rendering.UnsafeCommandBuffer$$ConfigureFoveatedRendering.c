/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 0728c870
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_17;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long *plVar7;
  
  lVar2 = *(long *)(unaff_x19 + 0xe0);
  if (lVar2 != 0) {
    FUN_072c452c(lVar2,0);
  }
                    /* try { // try from 0728c884 to 0738c887 has its CatchHandler @ 0728c888 */
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  thunk_FUN_03afed3c((long *)(unaff_x19 + 0xe0),0);
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    FUN_07295a94();
  }
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  thunk_FUN_03afed3c((long *)(unaff_x19 + 0xf8),0);
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    FUN_0728f2f0();
    if (*(long *)(unaff_x19 + 0x130) != 0) {
      FUN_072bd100(*(long *)(unaff_x19 + 0x130),0);
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0x130,0);
    }
    plVar7 = (long *)(unaff_x19 + 0xd0);
    if (*plVar7 != 0) {
      FUN_072fb5fc(*plVar7,0);
      if (*plVar7 != 0) {
        FUN_072fafb0(*plVar7,0);
      }
    }
    *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    thunk_FUN_03afed3c(plVar7,0);
    lVar2 = *(long *)(unaff_x19 + 0xf0);
    if (lVar2 != 0) {
      FUN_072d0a18(lVar2,0);
    }
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    thunk_FUN_03afed3c((long *)(unaff_x19 + 0xf0),0);
    if (*(long *)(unaff_x19 + 0x128) != 0) {
      *(undefined1 *)(*(long *)(unaff_x19 + 0x128) + 0x38) = 0;
      *(undefined1 *)(unaff_x19 + 0x88) = 0;
      uVar3 = FUN_0728b528();
      if ((uVar3 & 1) != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x128);
        uVar4 = FUN_0728a090();
        if (lVar2 == 0) goto LAB_0728ca58;
        FUN_0728a0b4(lVar2,uVar4);
      }
      lVar2 = *(long *)(unaff_x19 + 0x128);
      if ((lVar2 != 0) && (lVar5 = *(long *)(lVar2 + 0x50), lVar5 != 0)) {
        if ((*(char *)(lVar5 + 0x11) != '\0') && (lVar6 = *(long *)(unaff_x19 + 0xc0), lVar6 != 0))
        {
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),*(undefined1 *)(lVar5 + 0x10),
                     *(undefined8 *)(lVar6 + 0x28));
          lVar2 = *(long *)(unaff_x19 + 0x128);
          if (lVar2 == 0) goto LAB_0728ca58;
        }
        puVar1 = PTR_DAT_084e7b80;
        lVar5 = *(long *)(lVar2 + 0x50);
        if (lVar5 != 0) {
          if ((*(char *)(lVar5 + 0x10) != '\0') && (lVar6 = *(long *)(unaff_x19 + 0xb8), lVar6 != 0)
             ) {
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),*(undefined1 *)(lVar5 + 0x11),
                       *(undefined8 *)(lVar6 + 0x28));
            lVar2 = *(long *)(unaff_x19 + 0x128);
          }
          uVar4 = *(undefined8 *)puVar1;
          *(undefined1 *)(unaff_x19 + 0x88) = 0;
          uVar4 = thunk_FUN_03ac74bc(uVar4);
          FUN_0679343c(uVar4,0);
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x50) = uVar4;
            thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x50),uVar4);
            lVar2 = *(long *)(unaff_x19 + 0x90);
            if (lVar2 != 0) {
              if (*(long *)(lVar2 + 0x28) != 0) {
                FUN_07288374();
                lVar2 = *(long *)(unaff_x19 + 0x90);
                if (lVar2 == 0) goto LAB_0728ca30;
              }
              *(undefined8 *)(lVar2 + 0x70) = 0;
              *(undefined8 *)(lVar2 + 0x78) = 0;
            }
LAB_0728ca30:
            if (*(long *)(unaff_x19 + 0x100) != 0) {
              FUN_07302b18(*(long *)(unaff_x19 + 0x100),0);
            }
            *(undefined8 *)(unaff_x19 + 0x108) = 0;
            thunk_FUN_03afed3c(unaff_x19 + 0x108,0);
            return;
          }
        }
      }
    }
  }
LAB_0728ca58:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


