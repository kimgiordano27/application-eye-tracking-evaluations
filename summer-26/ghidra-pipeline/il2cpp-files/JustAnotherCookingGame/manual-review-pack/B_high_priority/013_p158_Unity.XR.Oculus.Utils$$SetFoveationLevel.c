/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$SetFoveationLevel
ENTRY_POINT: 00e8c9c0
PROGRAM: JustAnotherCookingGame-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_14;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_Utils__SetFoveationLevel(long param_1)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  long lVar5;
  ulong in_x10;
  int *in_x11;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  int unaff_w28;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x00e8c9c0:
  in_x11 = in_x11 + 4;
  if (!(bool)in_CY) goto LAB_00e8c9ac;
LAB_00e8c9c8:
  puVar1 = (undefined8 *)FUN_005c1e44(unaff_x22,unaff_x24,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x22,unaff_w23,unaff_w21,puVar1[1]);
    if ((uVar2 & 1) != 0) {
      if ((int)unaff_w27 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_00e8cb70;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w25) goto LAB_00e8cb74;
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_00e8cb70;
        if (*(uint *)(lVar5 + 0x18) <= (uint)in_stack_00000000) goto LAB_00e8cb74;
        *(undefined4 *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
             *(undefined4 *)(lVar4 + unaff_x26 * 0x18 + 0x24);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_00e8cb70;
        if ((*(uint *)(lVar4 + 0x18) <= unaff_w25) || (*(uint *)(lVar4 + 0x18) <= unaff_w27))
        goto LAB_00e8cb74;
        *(undefined4 *)(lVar4 + 0x20 + (long)(int)unaff_w27 * 0x18 + 4) =
             *(undefined4 *)(lVar4 + 0x20 + unaff_x26 * 0x18 + 4);
      }
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) {
LAB_00e8cb70:
                    /* WARNING: Subroutine does not return */
        FUN_006281b8();
      }
      if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
        *(undefined4 *)(lVar4 + unaff_x26 * 0x18 + 0x20) = 0xffffffff;
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_00e8cb70;
        if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + unaff_x26 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x28);
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) goto LAB_00e8cb70;
          if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + unaff_x26 * 0x18 + 0x28) = 0;
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) goto LAB_00e8cb70;
            if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + unaff_x26 * 0x18 + 0x30) = 0;
              *(uint *)(unaff_x19 + 0x28) = unaff_w25;
              *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
              *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + 1;
              return 1;
            }
          }
        }
      }
LAB_00e8cb74:
      uVar3 = thunk_FUN_005c3bd0();
                    /* WARNING: Subroutine does not return */
      FUN_00628184(uVar3,0);
    }
    lVar4 = *(long *)(unaff_x19 + 0x18);
    do {
      unaff_w27 = unaff_w25;
      if (lVar4 == 0) goto LAB_00e8cb70;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w27) goto LAB_00e8cb74;
      unaff_w25 = *(uint *)(lVar4 + unaff_x26 * unaff_x20 + 0x24);
      if ((int)unaff_w25 < 0) {
        return 0;
      }
      if (lVar4 == 0) goto LAB_00e8cb70;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w25) goto LAB_00e8cb74;
      unaff_x26 = (long)(int)unaff_w25;
    } while (*(int *)(lVar4 + unaff_x26 * unaff_x20 + 0x20) != unaff_w28);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 == (long *)0x0) goto LAB_00e8cb70;
    unaff_w23 = *(undefined4 *)(lVar4 + unaff_x26 * unaff_x20 + 0x28);
    unaff_x24 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x18) + 0xc0) + 0xe0);
    if ((*(byte *)(unaff_x24 + 0x132) & 1) == 0) {
      FUN_005c1b60(unaff_x24);
    }
    param_1 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (in_x9 == 0) goto LAB_00e8c9c8;
    in_x10 = 0;
    in_x11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_00e8c9ac:
    if (*(long *)(in_x11 + -2) != unaff_x24) {
      in_x10 = in_x10 + 1;
      in_CY = in_x9 <= in_x10;
      goto code_r0x00e8c9c0;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x11 * 0x10 + 0x138);
  } while( true );
}


