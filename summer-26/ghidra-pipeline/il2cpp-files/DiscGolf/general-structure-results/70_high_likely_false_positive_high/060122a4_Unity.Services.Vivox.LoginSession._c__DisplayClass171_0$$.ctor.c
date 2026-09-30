/*
FUNCTION_NAME: Unity.Services.Vivox.LoginSession.<>c__DisplayClass171_0$$.ctor
ENTRY_POINT: 060122a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Services_Vivox_LoginSession_<>c__DisplayClass171_0___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000020;
  
  FUN_05156800(in_stack_00000020,*unaff_x26);
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  iVar2 = FUN_035ff40c();
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  if (iVar2 == 0) {
    thunk_FUN_02dfd288(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
                      );
    FUN_0297e1b4();
    lVar5 = thunk_FUN_02dfd288(puVar1);
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
    uVar4 = thunk_FUN_02dfd288(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
    uVar3 = thunk_FUN_03831920(uVar3,uVar6,uVar4);
    uVar4 = thunk_FUN_02dfd288(
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__
                              );
  }
  else {
    iVar2 = FUN_035ff40c();
    if (iVar2 < 2) {
      uVar3 = FUN_03604ee0();
      FUN_03604ee0();
      uVar4 = thunk_FUN_02dd3144(*unaff_x23);
      FUN_060119d8(uVar4,uVar3,extraout_x1);
      return uVar4;
    }
    lVar5 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
    uVar4 = thunk_FUN_02dfd288(
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                              );
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar1 = Method_UnityEngine_UIElements_Button_OnNavigationSubmit__;
      lVar5 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      thunk_FUN_02dfd288(
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                        );
      uVar6 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(Method_ButtonBehavior_<DisablePopOut>b__11_0__);
      FUN_03b745c8(uVar6,uVar8,uVar7,0);
      lVar5 = thunk_FUN_02dfd288(puVar1);
      *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8) = uVar6;
      lVar5 = thunk_FUN_02dfd288(puVar1);
      LeanTween__value(*(long *)(lVar5 + 0xb8) + 8,uVar6);
    }
    thunk_FUN_02dfd288(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp__
                      );
    uVar6 = thunk_FUN_0360ad50();
    uVar7 = thunk_FUN_02dfd288(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
    uVar3 = thunk_FUN_03831920(uVar3,uVar6,uVar7);
  }
  uVar3 = FUN_05362cb4(uVar4,uVar3,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0eb68);
  uVar4 = thunk_FUN_02dd3144();
  FUN_060104cc(uVar4,uVar3);
  uVar3 = thunk_FUN_02dfd288(Method_ButtonBehavior_<SlideOut>b__7_0__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar3);
}


