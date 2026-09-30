/*
FUNCTION_NAME: FUN_01fd79a4
ENTRY_POINT: 01fd79a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


long FUN_01fd79a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_0378072b & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10757);
    thunk_FUN_00d48444(StringLiteral_3680);
    thunk_FUN_00d48444(Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0378072b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01789ac0(param_5,0,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar11 = thunk_FUN_00d48444(StringLiteral_6417);
    FUN_016ec5b8(uVar12,uVar11,0);
    uVar11 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<Vector2>>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar12,uVar11);
  }
  uVar12 = *(undefined8 *)StringLiteral_10757;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_01780344(uVar12,0);
  uVar4 = FUN_01789ac0(param_5,uVar12,0);
  puVar1 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
  if (((param_4 == (long *)0x0) || ((uVar4 & 1) == 0)) ||
     (*param_4 != *(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo)) {
    lVar5 = FUN_01fd0350(param_1,param_2,param_3,param_4,param_5);
    return lVar5;
  }
  plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar5);
    lVar5 = *(long *)puVar1;
  }
  if (*(long *)(*param_4 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(param_4);
  }
  puVar7 = (undefined8 *)thunk_FUN_00d624a0();
  lVar5 = FUN_017cff30(*puVar7,puVar7[1],0);
  if (plVar6 == (long *)0x0) goto Unity_Burst_BurstCompileAttribute__get_Debug;
  if ((lVar5 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_01fd7cbc:
    uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar12,0);
  }
  if ((int)plVar6[3] == 0) {
LAB_01fd7cb8:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar6[4] = lVar5;
  puVar2 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  puVar1 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  uVar12 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = FUN_01780344(uVar12,0);
  plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
  lVar8 = FUN_01780344(*(undefined8 *)puVar1,0);
  if (plVar9 == (long *)0x0) goto Unity_Burst_BurstCompileAttribute__get_Debug;
  if ((lVar8 != 0) &&
     (lVar10 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
  goto LAB_01fd7cbc;
  if ((int)plVar9[3] == 0) goto LAB_01fd7cb8;
  plVar9[4] = lVar8;
  if (lVar5 != 0) {
    uVar12 = FUN_0178c180(lVar5,plVar9,0);
    uVar4 = FUN_0169ad7c(uVar12,0,0);
    lVar5 = 0;
    if ((uVar4 & 1) != 0) {
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3680);
      if (lVar5 == 0) goto Unity_Burst_BurstCompileAttribute__get_Debug;
      FUN_0200789c(lVar5,uVar12,plVar6,0);
    }
    return lVar5;
  }
Unity_Burst_BurstCompileAttribute__get_Debug:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


