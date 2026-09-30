/*
FUNCTION_NAME: Unity.Services.Vivox.LoginSession.<>c__DisplayClass153_0$$.ctor
ENTRY_POINT: 06011d94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06011fec) */

undefined8 Unity_Services_Vivox_LoginSession_<>c__DisplayClass153_0___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  long lVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xfb0));
  FUN_02d965b8(UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_var);
  FUN_02d965b8(System_Threading_Volatile_VolatileObject_var);
  FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_var);
  FUN_02d965b8(PTR_DAT_069fe8c8);
  FUN_02d965b8(Method_Unity_Burst_BurstCompiler_Compile__);
  FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_var);
  FUN_02d965b8(
              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizeTransform_00001197_PostfixBurstDelegate>__
              );
  FUN_02d965b8(
              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizePosition_00001198_PostfixBurstDelegate>__
              );
  FUN_02d965b8(Method_Unity_Burst_BurstCompiler_Compile__);
  *(undefined1 *)(unaff_x22 + 0xa76) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  lVar10 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_03f1cd34(lVar10,*unaff_x19);
  lVar11 = *unaff_x23;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar11 = *unaff_x23;
  }
  puVar8 = Method_Unity_Burst_BurstCompiler_Compile__;
  puVar7 = Method_Unity_Burst_BurstCompiler_Compile__;
  puVar6 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_00001981_PostfixBurstDelegate>__
  ;
  puVar5 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate>__
  ;
  puVar4 = System_Threading_Volatile_VolatileObject_var;
  puVar3 = UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_var;
  puVar2 = PTR_DAT_069fe8c8;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&stack0x00000018,lVar11,
               *(undefined8 *)UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_var);
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000018 = 0;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000020 = &stack0x00000040;
  while( true ) {
    uVar12 = FUN_05156804(&stack0x00000040,*(undefined8 *)puVar4);
    uVar15 = in_stack_00000050;
    lVar11 = in_stack_00000018;
    if ((uVar12 & 1) == 0) {
      FUN_05156800(in_stack_00000020,*(undefined8 *)puVar3);
      if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar11);
      }
      iVar9 = FUN_035ff40c(lVar10,*(undefined8 *)puVar5);
      puVar2 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
      ;
      if (iVar9 == 0) {
        thunk_FUN_02dfd288(
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
                          );
        FUN_0297e1b4();
        lVar10 = thunk_FUN_02dfd288(puVar2);
        uVar16 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
        uVar15 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
        uVar13 = thunk_FUN_02dfd288(
                                   Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__
                                   );
        uVar15 = thunk_FUN_03831920(uVar15,uVar16,uVar13);
        uVar13 = thunk_FUN_02dfd288(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__
                                   );
      }
      else {
        iVar9 = FUN_035ff40c(lVar10,*(undefined8 *)puVar5);
        if (iVar9 < 2) {
          uVar15 = FUN_03604ee0(lVar10,*(undefined8 *)puVar6);
          FUN_03604ee0(lVar10,*(undefined8 *)puVar6);
          uVar13 = thunk_FUN_02dd3144(*unaff_x23);
          FUN_060119d8(uVar13,uVar15,extraout_x1);
          return uVar13;
        }
        lVar11 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar11 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        uVar15 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
        uVar13 = thunk_FUN_02dfd288(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                                   );
        if (lVar11 == 0) {
          lVar11 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar2 = Method_UnityEngine_UIElements_Button_OnNavigationSubmit__;
          lVar11 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_Button_OnNavigationSubmit__);
          uVar18 = **(undefined8 **)(lVar11 + 0xb8);
          thunk_FUN_02dfd288(
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                            );
          lVar11 = thunk_FUN_02dd3144();
          uVar16 = thunk_FUN_02dfd288(Method_ButtonBehavior_<DisablePopOut>b__11_0__);
          FUN_03b745c8(lVar11,uVar18,uVar16,0);
          lVar17 = thunk_FUN_02dfd288(puVar2);
          *(long *)(*(long *)(lVar17 + 0xb8) + 8) = lVar11;
          lVar17 = thunk_FUN_02dfd288(puVar2);
          LeanTween__value(*(long *)(lVar17 + 0xb8) + 8,lVar11);
        }
        uVar16 = thunk_FUN_02dfd288(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp__
                                   );
        uVar16 = thunk_FUN_0360ad50(lVar10,lVar11,uVar16);
        uVar18 = thunk_FUN_02dfd288(
                                   Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__
                                   );
        uVar15 = thunk_FUN_03831920(uVar15,uVar16,uVar18);
      }
      uVar15 = FUN_05362cb4(uVar13,uVar15,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0eb68);
      uVar13 = thunk_FUN_02dd3144();
      FUN_060104cc(uVar13,uVar15);
      uVar15 = thunk_FUN_02dfd288(Method_ButtonBehavior_<SlideOut>b__7_0__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar13,uVar15);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar13 = FUN_0556fbfc();
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_04a54b1c(&stack0x00000008,uVar13,uVar15,*(undefined8 *)puVar8);
    if (lVar10 == 0) break;
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar17 = *(long *)puVar7;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      puVar14 = (undefined8 *)(lVar11 + 0x20);
      *puVar14 = in_stack_00000008;
      *(undefined8 *)(lVar11 + 0x28) = in_stack_00000010;
      LeanTween__value(puVar14,0);
    }
    else {
      FUN_03f1d5e0(lVar10,in_stack_00000008,in_stack_00000010,
                   *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


