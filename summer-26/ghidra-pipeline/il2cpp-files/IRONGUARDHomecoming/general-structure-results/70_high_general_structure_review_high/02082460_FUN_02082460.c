/*
FUNCTION_NAME: FUN_02082460
ENTRY_POINT: 02082460
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


bool FUN_02082460(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_0482f70b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplinePath<Spline>_GetLength__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_StackFormatter<Stack<int>,_int>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>__ctor__
                      );
                    /* try { // try from 020824b4 to 021824b7 has its CatchHandler @ 02082628 */
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Pop__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<AppDownloadResult>__ctor__);
                    /* try { // try from 020824d0 to 0218252b has its CatchHandler @ 02082678 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<VisibleLight>_GetSubArray__);
    DAT_0482f70b = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 2) {
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x48) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0307e184(&local_70,*(long *)(lVar8 + 0x48),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Pop__);
    puVar3 = Method_Sirenix_Serialization_StackFormatter<Stack<int>,_int>__ctor__;
    puVar2 = Method_Oculus_Platform_Request<AppDownloadResult>__ctor__;
    while (uVar5 = FUN_02c69e64(&local_70,*(undefined8 *)puVar3), uVar4 = uStack_58,
          uVar7 = local_60, (uVar5 & 1) != 0) {
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_035ac8e8(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x10),uVar7);
      FUN_020816dc(lVar6,uVar4,0);
    }
    FUN_02c69e60(&local_70,*(undefined8 *)Method_UnityEngine_Splines_SplinePath<Spline>_GetLength__)
    ;
    uVar9 = *(undefined4 *)(lVar8 + 0x40);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<VisibleLight>_GetSubArray__);
    FUN_0407829c(uVar9,uVar7,0);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar7);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return uVar1 < 2;
}


