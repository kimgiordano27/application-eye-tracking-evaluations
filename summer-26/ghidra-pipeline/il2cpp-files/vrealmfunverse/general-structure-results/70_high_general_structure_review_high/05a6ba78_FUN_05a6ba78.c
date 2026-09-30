/*
FUNCTION_NAME: FUN_05a6ba78
ENTRY_POINT: 05a6ba78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05a6ba78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_06312520;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_066d3f90 & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier__
                );
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve__
                );
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_ConverterBase_DeserializeArray__);
    FUN_02b3c81c(UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var);
    FUN_02b3c81c(UnityEngine_XR_Hands_OpenXR_HandTracking_SubsystemCreatedEventArgs_var);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleProjectilePoint__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleQuadraticBezierPoint__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve__
                );
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_06317098);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ControllerInputActionManager_OnUIHoverEntered__
                );
    FUN_02b3c81c(PTR_DAT_0631edd8);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_ComputeFallBackLine__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine__
                );
    DAT_066d3f90 = 1;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar5 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier__
  ;
  puVar4 = PTR_DAT_0631edd8;
  uVar10 = FUN_05c8c45c(uVar18,0,0);
  if ((uVar10 & 1) != 0) {
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
    if (lVar11 == 0) goto LAB_05a6c2a8;
    uVar10 = FUN_04a7168c(lVar11,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)
                           UnityEngine_XR_Hands_OpenXR_HandTracking_SubsystemCreatedEventArgs_var);
    if ((uVar10 & 1) != 0) {
      plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
      lVar11 = thunk_FUN_05c92238(param_1,0);
      if (plVar12 == (long *)0x0) goto LAB_05a6c2a8;
      if ((lVar11 != 0) &&
         (lVar13 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
      goto LAB_05a6c2b0;
      if ((int)plVar12[3] != 0) {
        plVar12[4] = lVar11;
        thunk_FUN_02bb0e9c(plVar12 + 4,lVar11);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c454cc(*(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance__
                     ,plVar12,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar18 = FUN_05ca7528(param_2,param_3,0,0);
        return uVar18;
      }
      goto LAB_05a6c2ac;
    }
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
    if (lVar11 == 0) goto LAB_05a6c2a8;
    FUN_04a7217c(lVar11,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)
                  UnityEngine_XR_Hands_OpenXR_HandTracking_DestroyingSubsystemEventArgs_var);
  }
  puVar7 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve__
  ;
  puVar6 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleQuadraticBezierPoint__
  ;
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve__
  ;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  auVar20 = FUN_05ca74d0(0);
  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_037b0ef0(lVar11,*(undefined8 *)puVar6);
  uVar18 = FUN_05ca814c(&local_70,0);
  lVar13 = FUN_04988598(param_1 + 0x18,uVar18,*(undefined8 *)puVar3);
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar2);
  }
  uVar10 = FUN_05c8c45c(uVar18,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar10 = FUN_05c8c45c(lVar13,0,0);
    uVar18 = 0;
    if ((uVar10 & 1) != 0) {
      if (lVar13 == 0) goto LAB_05a6c2a8;
      uVar18 = FUN_05c8c8e0(lVar13,0);
    }
    local_80 = FUN_05a746b0(local_70,uStack_68,*(undefined8 *)(param_1 + 0x28),uVar18,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_ComputeFallBackLine__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar13 = FUN_03e613b4(local_80,*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve__
                         );
    if (lVar13 == 0) goto LAB_05a6c2a8;
    lVar13 = *(long *)(lVar13 + 0x10);
    auVar21 = FUN_03e61430(local_80._0_8_,local_80._8_8_,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint__
                          );
    if (lVar11 == 0) goto LAB_05a6c2a8;
    lVar16 = *(long *)(lVar11 + 0x10);
    lVar17 = *(long *)
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleProjectilePoint__
    ;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_05a6c2a8;
    uVar9 = *(uint *)(lVar11 + 0x18);
    if (uVar9 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar9 + 1;
      *(undefined1 (*) [16])(lVar16 + (long)(int)uVar9 * 0x10 + 0x20) = auVar21;
    }
    else {
      System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__AsReadOnly
                (lVar11,auVar21._0_8_,auVar21._8_8_,
                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
  }
  puVar3 = PTR_DAT_06317098;
  lVar16 = *(long *)PTR_DAT_06317098;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar3;
  }
  lVar17 = *(long *)(lVar16 + 0xb8);
  lVar16 = *(long *)puVar2;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  uVar18 = *(undefined8 *)(lVar17 + 8);
  *(undefined2 *)(param_1 + 0x58) = 0;
  iVar1 = *(int *)(lVar16 + 0xe4);
  *(undefined8 *)(param_1 + 0x50) = uVar18;
  if (iVar1 == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar10 = FUN_05c8c45c(lVar13,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      lVar16 = *(long *)puVar5;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar16 = *(long *)puVar5;
      }
      uVar18 = **(undefined8 **)(lVar16 + 0xb8);
    }
    else {
      uVar18 = FUN_03178d40(param_1,lVar13,
                            *(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime__
                           );
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      lVar16 = *(long *)puVar5;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar16 = *(long *)puVar5;
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8);
    }
    else {
      uVar14 = FUN_05a6c2bc(param_1,lVar13);
    }
    FUN_05a6c428(param_1,uVar18,uVar14);
    if (param_4 == 0) goto LAB_05a6c2a8;
    lVar16 = FUN_031d80b0(param_4,*(undefined8 *)
                                   Method_Firebase_Firestore_Converters_ConverterBase_DeserializeArray__
                         );
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar2);
    }
    uVar10 = FUN_05c8c45c(lVar16,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar16 == 0) goto LAB_05a6c2a8;
      uVar15 = FUN_05cd4d54(lVar16,0);
      *(undefined8 *)(param_1 + 0x48) = uVar15;
      thunk_FUN_02bb0e9c();
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar10 = FUN_05c8e378(param_4,lVar13,0);
    if ((uVar10 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05c8e378(uVar15,0,0);
      if ((uVar10 & 1) != 0) {
        plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
        lVar16 = thunk_FUN_05c92238(param_1,0);
        if (plVar12 == (long *)0x0) goto LAB_05a6c2a8;
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
LAB_05a6c2b0:
          uVar18 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar18,0);
        }
        if ((int)plVar12[3] == 0) {
LAB_05a6c2ac:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar12[4] = lVar16;
        thunk_FUN_02bb0e9c(plVar12 + 4,lVar16);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c454cc(*(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine__
                     ,plVar12,0);
        *(undefined1 *)(param_1 + 0x3b) = 0;
        if (*(char *)(param_1 + 0x3a) == '\0') {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
      }
    }
    if (*(char *)(param_1 + 0x3b) != '\0') {
      FUN_05a6cc98(param_1,lVar13,local_70,uStack_68,lVar11);
    }
    uVar8 = uStack_68;
    uVar15 = local_70;
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_05c8c45c(uVar19,0,0);
      FUN_05a6cdec(param_1,uVar18,uVar15,uVar8,lVar11,uVar9 & 1);
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_05a6d288(param_1,uVar14,local_70,uStack_68,lVar11);
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_05a6d680(lVar13);
      FUN_05a6d700(uVar18,local_70,uStack_68,lVar11);
    }
    uVar14 = uStack_68;
    uVar18 = local_70;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    auVar20 = FUN_05a6daec(uVar18,uVar14,lVar11);
  }
  uVar18 = auVar20._0_8_;
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar10 = FUN_05c8c45c(uVar14,0,0);
  if ((uVar10 & 1) != 0) {
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
    if (lVar11 == 0) {
LAB_05a6c2a8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04a7185c(lVar11,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint__
                );
  }
  uVar10 = FUN_0329bff4(uVar18,auVar20._8_8_,
                        *(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ControllerInputActionManager_OnUIHoverEntered__
                       );
  uVar15 = uStack_68;
  uVar14 = local_70;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar18 = FUN_05ca7528(uVar14,uVar15,0,0);
  }
  return uVar18;
}


