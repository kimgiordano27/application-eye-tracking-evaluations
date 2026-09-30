/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem$$TryRequestSceneCapture
ENTRY_POINT: 06c5e180
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem__TryRequestSceneCapture
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x48));
  FUN_031f20f4(System_Func<Vector4,_int,_float>_TypeInfo);
  FUN_031f20f4(
              System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x5b1) = 1;
  puVar1 = PTR_DAT_075f4668;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
    return;
  }
  plVar4 = (long *)(*(long *)(unaff_x19 + 0x68) + 0xc0);
  lVar5 = *plVar4;
  uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f4668);
  FUN_056fddbc();
  lVar5 = FUN_05e47444(lVar5,uVar2,0);
  if (lVar5 == 0) {
    lVar3 = 0;
    *plVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_0322f04c(lVar5,uVar2);
    if (lVar3 == 0) goto FUN_06c5e2bc;
    *plVar4 = lVar3;
    uVar2 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_0322f04c(lVar5,uVar2);
    if (lVar3 == 0) goto FUN_06c5e2bc;
  }
  thunk_FUN_0329bf60(plVar4,lVar3);
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    plVar4 = (long *)(*(long *)(unaff_x19 + 0x68) + 200);
    lVar5 = *plVar4;
    uVar2 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_056fddbc();
    lVar5 = FUN_05e47444(lVar5,uVar2,0);
    if (lVar5 == 0) {
      lVar3 = 0;
      *plVar4 = 0;
    }
    else {
      uVar2 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_0322f04c(lVar5,uVar2);
      if (lVar3 == 0) {
FUN_06c5e2bc:
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(lVar5,uVar2);
      }
      *plVar4 = lVar3;
      uVar2 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_0322f04c(lVar5,uVar2);
      if (lVar3 == 0) goto FUN_06c5e2bc;
    }
    thunk_FUN_0329bf60(plVar4,lVar3);
    puVar1 = PTR_DAT_075f4670;
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      plVar4 = (long *)(*(long *)(unaff_x19 + 0x68) + 0xb8);
      lVar5 = *plVar4;
      uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f4670);
      FUN_057d08c4();
      lVar5 = FUN_05e47444(lVar5,uVar2,0);
      if (lVar5 == 0) {
        lVar3 = 0;
        *plVar4 = 0;
LAB_06c5e368:
        thunk_FUN_0329bf60(plVar4,lVar3);
        return;
      }
      uVar2 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_0322f04c(lVar5,uVar2);
      if (lVar3 != 0) {
        *plVar4 = lVar3;
        uVar2 = *(undefined8 *)puVar1;
        lVar3 = thunk_FUN_0322f04c(lVar5,uVar2);
        if (lVar3 != 0) goto LAB_06c5e368;
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar5,uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


