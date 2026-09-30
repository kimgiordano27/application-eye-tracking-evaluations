/*
FUNCTION_NAME: Unity.Services.Vivox.LoginSession.<>c__DisplayClass168_0$$<SetTransmittingAsync>b__0
ENTRY_POINT: 06011f70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Services_Vivox_LoginSession_<>c__DisplayClass168_0__<SetTransmittingAsync>b__0
          (undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 extraout_x1;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 uVar13;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int in_stack_00000038;
  undefined8 in_stack_00000050;
  
  if (param_2 == 1) {
    puVar5 = (undefined8 *)__cxa_begin_catch();
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar7 = thunk_FUN_02df8d3c(uVar6,*(undefined8 *)*puVar5);
    iVar3 = in_stack_00000038;
    if ((uVar7 & 1) == 0) {
      puVar10 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar10 = *puVar5;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar10,&PTR_PTR_066567d8,0);
    }
    *(undefined8 *)(&stack0x00000030 + (long)in_stack_00000038 * 8) = *puVar5;
    in_stack_00000038 = in_stack_00000038 + 1;
    __cxa_end_catch();
    in_stack_00000038 = iVar3;
    while (uVar7 = FUN_05156804(&stack0x00000040,*unaff_x27), uVar6 = in_stack_00000050,
          (uVar7 & 1) != 0) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0556fbfc();
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_04a54b1c(&stack0x00000008,uVar4,uVar6,*unaff_x29);
      if (unaff_x19 == 0) {
LAB_06011f64:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_06011f64;
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar12 + 0x20);
        *puVar5 = in_stack_00000008;
        *(undefined8 *)(lVar12 + 0x28) = in_stack_00000010;
        LeanTween__value(puVar5,0);
      }
      else {
        FUN_03f1d5e0();
      }
    }
    iVar3 = 5;
    lVar12 = in_stack_00000018;
  }
  else {
    if (param_2 != 1) {
      FUN_02cfb94c(&stack0x00000018);
                    /* WARNING: Subroutine does not return */
      FUN_02e86b8c(param_1);
    }
    plVar11 = (long *)__cxa_begin_catch(param_1);
    lVar12 = *plVar11;
    in_stack_00000018 = lVar12;
    __cxa_end_catch();
    iVar3 = 0;
  }
  FUN_05156800(in_stack_00000020,*unaff_x26);
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar12);
  }
  if ((iVar3 != 5) && (iVar3 != 0)) {
    return 0;
  }
  iVar3 = FUN_035ff40c();
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  if (iVar3 == 0) {
    thunk_FUN_02dfd288(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
                      );
    FUN_0297e1b4();
    lVar12 = thunk_FUN_02dfd288(puVar2);
    uVar8 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
    uVar4 = thunk_FUN_02dfd288(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
    uVar6 = thunk_FUN_03831920(uVar6,uVar8,uVar4);
    uVar4 = thunk_FUN_02dfd288(
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__
                              );
  }
  else {
    iVar3 = FUN_035ff40c();
    if (iVar3 < 2) {
      uVar6 = FUN_03604ee0();
      FUN_03604ee0();
      uVar4 = thunk_FUN_02dd3144(*unaff_x23);
      FUN_060119d8(uVar4,uVar6,extraout_x1);
      return uVar4;
    }
    lVar12 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar12 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
    uVar4 = thunk_FUN_02dfd288(
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                              );
    if (lVar12 == 0) {
      lVar12 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar2 = Method_UnityEngine_UIElements_Button_OnNavigationSubmit__;
      lVar12 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
      uVar13 = **(undefined8 **)(lVar12 + 0xb8);
      thunk_FUN_02dfd288(
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                        );
      uVar8 = thunk_FUN_02dd3144();
      uVar9 = thunk_FUN_02dfd288(Method_ButtonBehavior_<DisablePopOut>b__11_0__);
      FUN_03b745c8(uVar8,uVar13,uVar9,0);
      lVar12 = thunk_FUN_02dfd288(puVar2);
      *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8) = uVar8;
      lVar12 = thunk_FUN_02dfd288(puVar2);
      LeanTween__value(*(long *)(lVar12 + 0xb8) + 8,uVar8);
    }
    thunk_FUN_02dfd288(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp__
                      );
    uVar8 = thunk_FUN_0360ad50();
    uVar9 = thunk_FUN_02dfd288(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
    uVar6 = thunk_FUN_03831920(uVar6,uVar8,uVar9);
  }
  uVar6 = FUN_05362cb4(uVar4,uVar6,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0eb68);
  uVar4 = thunk_FUN_02dd3144();
  FUN_060104cc(uVar4,uVar6);
  uVar6 = thunk_FUN_02dfd288(Method_ButtonBehavior_<SlideOut>b__7_0__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar6);
}


