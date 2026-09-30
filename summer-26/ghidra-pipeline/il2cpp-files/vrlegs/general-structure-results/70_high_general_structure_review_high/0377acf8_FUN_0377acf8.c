/*
FUNCTION_NAME: FUN_0377acf8
ENTRY_POINT: 0377acf8
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


void FUN_0377acf8(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_0413748e & 1) == 0) {
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
    DAT_0413748e = 1;
  }
  plVar1 = (long *)(param_1 + 0x120);
  if (*(long *)(param_1 + 0x120) == 0) {
    lVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                 System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo)
    ;
    FUN_0219a4f0(lVar13,*(undefined8 *)
                         System_Linq_Expressions_Interpreter_OrInstruction_OrByte_TypeInfo);
    *plVar1 = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar13);
  }
  else {
    FUN_0219c0c4(*(long *)(param_1 + 0x120),
                 *(undefined8 *)Photon_Voice_OpusCodec_EncoderShort_TypeInfo);
  }
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
  ;
  lVar13 = *(long *)(param_1 + 0x1b0);
  plVar2 = (long *)(param_1 + 0x1b0);
  if (lVar13 == 0) {
    lVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000A5C_PostfixBurstDelegate_var
                               );
    Animancer_AnimancerState__OnSetIsPlaying
              (lVar13,*(undefined8 *)
                       UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000A5E_PostfixBurstDelegate_var
              );
    *plVar2 = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar13);
  }
  else {
    lVar11 = *(long *)
              UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
    ;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar3 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar3) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar3,0);
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x1b8);
  if (lVar13 == 0) {
    uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000A5C_PostfixBurstDelegate_var
                               );
    Animancer_AnimancerState__OnSetIsPlaying
              (uVar10,*(undefined8 *)
                       UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000A5E_PostfixBurstDelegate_var
              );
    *(undefined8 *)(param_1 + 0x1b8) = uVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x1b8),uVar10);
  }
  else {
    lVar11 = *(long *)puVar4;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar3 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar3) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar3,0);
      }
    }
  }
  puVar7 = System_Linq_Expressions_Interpreter_OrInstruction_OrInt64_TypeInfo;
  puVar6 = System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo;
  puVar5 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
  puVar4 = 
  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var;
  lVar13 = *(long *)(param_1 + 0x118);
  if (lVar13 != 0) {
    iVar3 = *(int *)(lVar13 + 0x18);
    if (iVar3 < 1) {
      return;
    }
    iVar12 = 0;
    do {
      FUN_02215a88(lVar13,iVar12,&local_68,*(undefined8 *)puVar7);
      lVar13 = CONCAT44(uStack_64,local_68);
      if (lVar13 == 0) break;
      uVar8 = FUN_03776e5c(lVar13,0);
      if (*plVar1 == 0) break;
      local_68 = uVar8;
      uVar9 = FUN_0219c130(*plVar1,&local_68,*(undefined8 *)puVar6);
      if ((uVar9 & 1) == 0) {
        if (*plVar1 == 0) break;
        local_68 = uVar8;
        FUN_0219b9a4(*plVar1,&local_68,lVar13,*(undefined8 *)puVar5);
        if (*plVar2 == 0) break;
        local_68 = uVar8;
        FUN_01b5f01c(*plVar2,&local_68,*(undefined8 *)puVar4);
      }
      iVar12 = iVar12 + 1;
      if (iVar3 == iVar12) {
        return;
      }
      lVar13 = *(long *)(param_1 + 0x118);
    } while (lVar13 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


