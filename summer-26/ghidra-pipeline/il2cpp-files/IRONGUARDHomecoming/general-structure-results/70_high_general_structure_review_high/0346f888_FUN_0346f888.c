/*
FUNCTION_NAME: FUN_0346f888
ENTRY_POINT: 0346f888
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_0346f888(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = Method_System_Reflection_SignatureByRefType_GetArrayRank__;
  puVar3 = Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__;
  puVar2 = Method_System_RuntimeType_CreateInstanceImpl__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_048329e2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureByRefType_GetArrayRank__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_CreateInstanceImpl__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureConstructedGenericType__ctor__);
    DAT_048329e2 = 1;
  }
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_03546db4(uVar5,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar5;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar5);
  uVar5 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_03579868(uVar5,0);
  if (lVar6 != 0) {
    uVar5 = FUN_03584c60(lVar6,*(undefined8 *)
                                Method_System_Reflection_SignatureConstructedGenericType__ctor__,
                         0x28,0);
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *puVar7 = uVar5;
    thunk_FUN_01f51358(puVar7,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


