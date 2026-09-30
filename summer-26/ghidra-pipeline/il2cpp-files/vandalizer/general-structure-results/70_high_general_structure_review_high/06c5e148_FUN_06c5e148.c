/*
FUNCTION_NAME: FUN_06c5e148
ENTRY_POINT: 06c5e148
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_06c5e148(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_07a505b1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f4668);
    FUN_031f20f4(PTR_DAT_075f4670);
    FUN_031f20f4(System_Func<Vector3,_int,_float>_TypeInfo);
    FUN_031f20f4(System_Func<Vector4,_int,_float>_TypeInfo);
    FUN_031f20f4(
                System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
                );
    DAT_07a505b1 = 1;
  }
  puVar2 = System_Func<Vector3,_int,_float>_TypeInfo;
  puVar1 = PTR_DAT_075f4668;
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x68) + 0xc0);
  lVar6 = *plVar5;
  uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f4668);
  FUN_056fddbc(uVar3,param_1,*(undefined8 *)puVar2,0);
  lVar6 = FUN_05e47444(lVar6,uVar3,0);
  if (lVar6 == 0) {
    lVar4 = 0;
    *plVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)puVar1;
    lVar4 = thunk_FUN_0322f04c(lVar6,uVar3);
    if (lVar4 == 0) goto FUN_06c5e2bc;
    *plVar5 = lVar4;
    uVar3 = *(undefined8 *)puVar1;
    lVar4 = thunk_FUN_0322f04c(lVar6,uVar3);
    if (lVar4 == 0) goto FUN_06c5e2bc;
  }
  thunk_FUN_0329bf60(plVar5,lVar4);
  puVar2 = System_Func<Vector4,_int,_float>_TypeInfo;
  if (*(long *)(param_1 + 0x68) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x68) + 200);
    lVar6 = *plVar5;
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_056fddbc(uVar3,param_1,*(undefined8 *)puVar2,0);
    lVar6 = FUN_05e47444(lVar6,uVar3,0);
    if (lVar6 == 0) {
      lVar4 = 0;
      *plVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0322f04c(lVar6,uVar3);
      if (lVar4 == 0) {
FUN_06c5e2bc:
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(lVar6,uVar3);
      }
      *plVar5 = lVar4;
      uVar3 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0322f04c(lVar6,uVar3);
      if (lVar4 == 0) goto FUN_06c5e2bc;
    }
    thunk_FUN_0329bf60(plVar5,lVar4);
    puVar2 = 
    System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
    ;
    puVar1 = PTR_DAT_075f4670;
    if (*(long *)(param_1 + 0x68) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 0x68) + 0xb8);
      lVar6 = *plVar5;
      uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f4670);
      FUN_057d08c4(uVar3,param_1,*(undefined8 *)puVar2,0);
      lVar6 = FUN_05e47444(lVar6,uVar3,0);
      if (lVar6 == 0) {
        lVar4 = 0;
        *plVar5 = 0;
LAB_06c5e368:
        thunk_FUN_0329bf60(plVar5,lVar4);
        return;
      }
      uVar3 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0322f04c(lVar6,uVar3);
      if (lVar4 != 0) {
        *plVar5 = lVar4;
        uVar3 = *(undefined8 *)puVar1;
        lVar4 = thunk_FUN_0322f04c(lVar6,uVar3);
        if (lVar4 != 0) goto LAB_06c5e368;
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar6,uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


