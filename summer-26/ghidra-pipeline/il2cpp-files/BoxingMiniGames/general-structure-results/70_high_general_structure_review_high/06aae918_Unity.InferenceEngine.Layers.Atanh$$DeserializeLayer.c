/*
FUNCTION_NAME: Unity.InferenceEngine.Layers.Atanh$$DeserializeLayer
ENTRY_POINT: 06aae918
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Unity_InferenceEngine_Layers_Atanh__DeserializeLayer(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  uVar2 = thunk_FUN_0367fe20(**(undefined8 **)(param_1 + 0x168));
  FUN_06c5b8ec(uVar2,unaff_w22,0,0);
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    lVar3 = FUN_04f57acc(*(long *)(unaff_x21 + 0x10),*(undefined8 *)System_EmptyArray<Type>_TypeInfo
                        );
    if (lVar3 == 0) {
      in_stack_00000038 = unaff_x19[1];
      in_stack_00000030 = *unaff_x19;
      in_stack_00000048 = unaff_x19[3];
      in_stack_00000040 = unaff_x19[2];
      in_stack_00000050 = unaff_x19[4];
      lVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a33940);
      FUN_04f5c478(lVar3,&stack0x00000030,0,
                   *(undefined8 *)
                    System_Dynamic_Utils_EmptyReadOnlyCollection<ParameterExpression>_TypeInfo);
      uStack0000000000000008 = unaff_x19[1];
      uStack0000000000000000 = *unaff_x19;
      uStack0000000000000018 = unaff_x19[3];
      uStack0000000000000010 = unaff_x19[2];
      uStack0000000000000020 = unaff_x19[4];
      if (lVar3 == 0) goto LAB_06aaea10;
    }
    else {
      uStack0000000000000008 = unaff_x19[1];
      uStack0000000000000000 = *unaff_x19;
      uStack0000000000000018 = unaff_x19[3];
      uStack0000000000000010 = unaff_x19[2];
      uStack0000000000000020 = unaff_x19[4];
    }
    *(undefined8 *)(lVar3 + 0x20) = uStack0000000000000008;
    *(undefined8 *)(lVar3 + 0x18) = uStack0000000000000000;
    *(undefined8 *)(lVar3 + 0x30) = uStack0000000000000018;
    *(undefined8 *)(lVar3 + 0x28) = uStack0000000000000010;
    *(undefined8 *)(lVar3 + 0x38) = uStack0000000000000020;
    uVar1 = FUN_06ae539c();
    *(undefined4 *)(lVar3 + 0x44) = uVar1;
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x10),uVar2);
    return lVar3;
  }
LAB_06aaea10:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


