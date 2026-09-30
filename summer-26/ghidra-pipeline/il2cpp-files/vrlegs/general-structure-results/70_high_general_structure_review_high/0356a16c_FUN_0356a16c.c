/*
FUNCTION_NAME: FUN_0356a16c
ENTRY_POINT: 0356a16c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


void FUN_0356a16c(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_0412dfb7 & 1) == 0) {
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderShort_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrByte_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000A5E_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrInt32_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo);
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000A5C_PostfixBurstDelegate_var
                );
    DAT_0412dfb7 = 1;
  }
  plVar11 = (long *)(param_1 + 0xb8);
  if (*plVar11 == 0) {
    lVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                 System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo)
    ;
    FUN_0219a4f0(lVar13,*(undefined8 *)
                         System_Linq_Expressions_Interpreter_OrInstruction_OrByte_TypeInfo);
    *plVar11 = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar13);
  }
  else {
    FUN_0219c0c4(*plVar11,*(undefined8 *)Photon_Voice_OpusCodec_EncoderShort_TypeInfo);
  }
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
  ;
  lVar13 = *(long *)(param_1 + 0x1d8);
  plVar1 = (long *)(param_1 + 0x1d8);
  if (lVar13 == 0) {
    lVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000A5C_PostfixBurstDelegate_var
                               );
    Animancer_AnimancerState__OnSetIsPlaying
              (lVar13,*(undefined8 *)
                       UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000A5E_PostfixBurstDelegate_var
              );
    *plVar1 = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar13);
  }
  else {
    lVar10 = *(long *)
              UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
    ;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar8 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar2 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar2) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar2,0);
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x1e0);
  if (lVar13 == 0) {
    uVar9 = thunk_FUN_01a89e68(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000A5C_PostfixBurstDelegate_var
                              );
    Animancer_AnimancerState__OnSetIsPlaying
              (uVar9,*(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000A5E_PostfixBurstDelegate_var
              );
    *(undefined8 *)(param_1 + 0x1e0) = uVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x1e0),uVar9);
  }
  else {
    lVar10 = *(long *)puVar3;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar8 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar2 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar2) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar2,0);
      }
    }
  }
  puVar6 = System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo;
  puVar5 = System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo;
  puVar4 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
  puVar3 = 
  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var;
  lVar13 = *(long *)(param_1 + 0xb0);
  if (lVar13 != 0) {
    iVar2 = *(int *)(lVar13 + 0x18);
    if (iVar2 < 1) {
      return;
    }
    iVar12 = 0;
    do {
      FUN_02215a88(lVar13,iVar12,&local_68,*(undefined8 *)puVar6);
      lVar13 = CONCAT44(uStack_64,local_68);
      if (lVar13 == 0) break;
      uVar7 = FUN_03776e5c(lVar13,0);
      if (*plVar11 == 0) break;
      local_68 = uVar7;
      uVar8 = FUN_0219c130(*plVar11,&local_68,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        if (*plVar11 == 0) break;
        local_68 = uVar7;
        FUN_0219b9a4(*plVar11,&local_68,lVar13,*(undefined8 *)puVar4);
        if (*plVar1 == 0) break;
        local_68 = uVar7;
        FUN_01b5f01c(*plVar1,&local_68,*(undefined8 *)puVar3);
      }
      iVar12 = iVar12 + 1;
      if (iVar2 == iVar12) {
        return;
      }
      lVar13 = *(long *)(param_1 + 0xb0);
    } while (lVar13 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


