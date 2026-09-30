/*
FUNCTION_NAME: FUN_06c5ced0
ENTRY_POINT: 06c5ced0
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


void FUN_06c5ced0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_07a505af & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f4668);
    FUN_031f20f4(PTR_DAT_075f4670);
    FUN_031f20f4(System_Func<Vector3,_int,_float>_TypeInfo);
    FUN_031f20f4(System_Func<Vector4,_int,_float>_TypeInfo);
    FUN_031f20f4(
                System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
                );
    DAT_07a505af = 1;
  }
  puVar2 = System_Func<Vector3,_int,_float>_TypeInfo;
  puVar1 = PTR_DAT_075f4668;
  plVar5 = (long *)(param_1 + 0x68);
  if (*plVar5 == 0) {
LAB_06c5d0f8:
    FUN_06c5ce74(param_1,*(undefined8 *)(param_1 + 0x70),0);
    FUN_06c5ce74(param_1,*(undefined8 *)(param_1 + 0x78),0);
    return;
  }
  plVar6 = (long *)(*plVar5 + 0xc0);
  lVar7 = *plVar6;
  uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f4668);
  FUN_056fddbc(uVar3,param_1,*(undefined8 *)puVar2,0);
  lVar7 = FUN_05e4761c(lVar7,uVar3,0);
  if (lVar7 == 0) {
    lVar4 = 0;
    *plVar6 = 0;
  }
  else {
    uVar3 = *(undefined8 *)puVar1;
    lVar4 = thunk_FUN_0322f04c(lVar7,uVar3);
    if (lVar4 == 0) goto LAB_06c5d0cc;
    *plVar6 = lVar4;
    uVar3 = *(undefined8 *)puVar1;
    lVar4 = thunk_FUN_0322f04c(lVar7,uVar3);
    if (lVar4 == 0) goto LAB_06c5d0cc;
  }
  thunk_FUN_0329bf60(plVar6,lVar4);
  puVar2 = System_Func<Vector4,_int,_float>_TypeInfo;
  if (*plVar5 != 0) {
    plVar6 = (long *)(*plVar5 + 200);
    lVar7 = *plVar6;
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_056fddbc(uVar3,param_1,*(undefined8 *)puVar2,0);
    lVar7 = FUN_05e4761c(lVar7,uVar3,0);
    if (lVar7 == 0) {
      lVar4 = 0;
      *plVar6 = 0;
    }
    else {
      uVar3 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0322f04c(lVar7,uVar3);
      if (lVar4 == 0) goto LAB_06c5d0cc;
      *plVar6 = lVar4;
      uVar3 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0322f04c(lVar7,uVar3);
      if (lVar4 == 0) goto LAB_06c5d0cc;
    }
    thunk_FUN_0329bf60(plVar6,lVar4);
    puVar2 = 
    System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
    ;
    puVar1 = PTR_DAT_075f4670;
    if (*plVar5 != 0) {
      plVar6 = (long *)(*plVar5 + 0xb8);
      lVar7 = *plVar6;
      uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f4670);
      FUN_057d08c4(uVar3,param_1,*(undefined8 *)puVar2,0);
      lVar7 = FUN_05e4761c(lVar7,uVar3,0);
      if (lVar7 == 0) {
        lVar4 = 0;
        *plVar6 = 0;
      }
      else {
        uVar3 = *(undefined8 *)puVar1;
        lVar4 = thunk_FUN_0322f04c(lVar7,uVar3);
        if (lVar4 == 0) {
LAB_06c5d0cc:
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(lVar7,uVar3);
        }
        *plVar6 = lVar4;
        uVar3 = *(undefined8 *)puVar1;
        lVar4 = thunk_FUN_0322f04c(lVar7,uVar3);
        if (lVar4 == 0) goto LAB_06c5d0cc;
      }
      thunk_FUN_0329bf60(plVar6,lVar4);
      *plVar5 = 0;
      thunk_FUN_0329bf60(plVar5,0);
      goto LAB_06c5d0f8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


