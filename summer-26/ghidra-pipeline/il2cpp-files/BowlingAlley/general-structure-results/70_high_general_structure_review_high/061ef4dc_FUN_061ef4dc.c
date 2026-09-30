/*
FUNCTION_NAME: FUN_061ef4dc
ENTRY_POINT: 061ef4dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


long FUN_061ef4dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  puVar2 = Unity_AppUI_UI_TouchSlider<int>_TypeInfo;
  puVar1 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>_TypeInfo;
  if ((DAT_076dde78 & 1) == 0) {
    thunk_FUN_032e1da0(Unity_AppUI_UI_TouchSlider<float>_TypeInfo);
    thunk_FUN_032e1da0(Unity_AppUI_UI_TouchSlider<int>_TypeInfo);
    thunk_FUN_032e1da0(
                      Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Runtime_CompilerServices_TrueReadOnlyCollection<ParameterExpression>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Tuple<Action<object>,_object>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07280890);
    thunk_FUN_032e1da0(System_Tuple<TaskCompletionSource<int>,_byte[]>_TypeInfo);
    thunk_FUN_032e1da0(System_Tuple<byte[],_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Tuple<Guid,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07291638);
    thunk_FUN_032e1da0(System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<IUnitRelation,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Tuple<SendOrPostCallback,_object>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<JSONNode>_TypeInfo);
    thunk_FUN_032e1da0(System_Tuple<string,_string>_TypeInfo);
    DAT_076dde78 = 1;
  }
  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_050f1950(lVar11,0xd,*(undefined8 *)puVar2);
  puVar10 = System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo;
  puVar9 = System_Tuple<Guid,_string>_TypeInfo;
  puVar8 = System_Tuple<TaskCompletionSource<int>,_byte[]>_TypeInfo;
  puVar7 = System_Runtime_CompilerServices_TrueReadOnlyCollection<ParameterExpression>_TypeInfo;
  puVar6 = System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo;
  puVar5 = Unity_AppUI_UI_TouchSlider<float>_TypeInfo;
  puVar4 = System_Func<IUnitRelation,_bool>_TypeInfo;
  puVar3 = System_Func<JSONNode>_TypeInfo;
  puVar2 = PTR_DAT_07291638;
  puVar1 = PTR_DAT_07280890;
  if (lVar11 != 0) {
    FUN_050f22ec(lVar11,*(undefined8 *)System_Tuple<SendOrPostCallback,_object>_TypeInfo,0,
                 *(undefined8 *)Unity_AppUI_UI_TouchSlider<float>_TypeInfo);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar9,1,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar3,2,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar2,3,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar10,4,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar7,5,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar8,6,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar6,7,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar4,8,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)puVar1,9,*(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)System_Tuple<byte[],_string>_TypeInfo,10,
                 *(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)System_Tuple<Action<object>,_object>_TypeInfo,0xb,
                 *(undefined8 *)puVar5);
    FUN_050f22ec(lVar11,*(undefined8 *)System_Tuple<string,_string>_TypeInfo,0xc,
                 *(undefined8 *)puVar5);
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


