/*
FUNCTION_NAME: Unity.XR.MockHMD.MockHMD$$SetFoveationMode
ENTRY_POINT: 061d16a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_9;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x061d188c) */
/* WARNING: Removing unreachable block (ram,0x061d1980) */
/* WARNING: Removing unreachable block (ram,0x061d1994) */

void Unity_XR_MockHMD_MockHMD__SetFoveationMode(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  
  FUN_02d965b8(PTR_DAT_069fda78);
  FUN_02d965b8(Method_LTDescr_<setCanvasScale>b__107_0__);
  FUN_02d965b8(Method_LTDescr_<setCanvasScale>b__107_1__);
  FUN_02d965b8(PTR_DAT_069fda80);
  FUN_02d965b8(PTR_DAT_069fda88);
  FUN_02d965b8(Method_LTDescr_<setCanvasSizeDelta>b__108_0__);
  FUN_02d965b8(PTR_DAT_06a0aa00);
  FUN_02d965b8(PTR_DAT_069fda90);
  FUN_02d965b8(Method_LTDescr_<setCanvasSizeDelta>b__108_1__);
  *(undefined1 *)(unaff_x20 + 0xe61) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000060 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  lVar8 = FUN_061d0bd4();
  puVar7 = Method_LTDescr_<setCanvasSizeDelta>b__108_1__;
  puVar6 = Method_LTDescr_<setCanvasScale>b__107_1__;
  puVar5 = Method_LTDescr_<setCanvasScale>b__107_0__;
  puVar4 = PTR_DAT_069ff9e0;
  puVar3 = PTR_DAT_069fda80;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&stack0x00000010);
  in_stack_00000060 = in_stack_00000020;
  in_stack_00000058 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000010;
LAB_061d1790:
  do {
    uVar9 = FUN_05156804(&stack0x00000050,*(undefined8 *)puVar3);
    lVar11 = in_stack_00000060;
    if ((uVar9 & 1) == 0) {
      FUN_05156800(&stack0x00000050,*(undefined8 *)PTR_DAT_069fda78);
      return;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04010c90(&stack0x00000010,lVar8,*(undefined8 *)puVar7);
    in_stack_00000030 = in_stack_00000010;
    in_stack_00000010 = 0;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000018 = &stack0x00000030;
    do {
      uVar9 = FUN_05156804(&stack0x00000030,*(undefined8 *)puVar6);
      if ((uVar9 & 1) == 0) {
        bVar2 = false;
        goto LAB_061d1870;
      }
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_04e95158(in_stack_00000040,lVar11,&stack0x00000028,*(undefined8 *)puVar4);
    } while ((uVar9 & 1) == 0);
    if (unaff_x19 == 0) {
LAB_061d1908:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_061d1908;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000028;
      LeanTween__value();
    }
    else {
      FUN_040101ec();
    }
    bVar2 = true;
LAB_061d1870:
    FUN_05156800(&stack0x00000030,*(undefined8 *)puVar5);
  } while (bVar2);
  if (unaff_x19 != 0) {
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = 0;
        LeanTween__value(puVar10,0);
      }
      else {
        FUN_040101ec();
      }
      goto LAB_061d1790;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


