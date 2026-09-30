/*
FUNCTION_NAME: MotelScalePuzzle$$Awake
ENTRY_POINT: 00f46704
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void MotelScalePuzzle__Awake(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 local_64;
  
  puVar9 = StringLiteral_232;
  if ((DAT_037756b1 & 1) == 0) {
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass14_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    thunk_FUN_00d48444(Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_55);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetAttribute<SerializableAttribute>__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_VisitChildren__);
    thunk_FUN_00d48444(StringLiteral_232);
    DAT_037756b1 = 1;
  }
  puVar8 = Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetAttribute<SerializableAttribute>__;
  puVar7 = Method_System_Linq_Expressions_Expression_VisitChildren__;
  puVar6 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
  ;
  puVar5 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass14_0_TypeInfo;
  puVar4 = Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo;
  puVar3 = System_Collections_Generic_List<HashSet<Face>>_TypeInfo;
  lVar10 = *(long *)puVar9;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar9;
  }
  uVar1 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
  uVar2 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
  local_64 = FUN_0265f78c(param_2,0);
  auVar11 = FUN_0115ec6c(param_1,param_3,0,*(undefined8 *)puVar4,&local_64,*(undefined8 *)puVar7);
  auVar11 = FUN_00f2f724(uVar1,uVar2,auVar11._0_8_,auVar11._8_8_,0);
  local_64 = FUN_0265f79c(param_2,0);
  auVar12 = FUN_0115ec6c(param_1,param_3,0,*(undefined8 *)puVar3,&local_64,*(undefined8 *)puVar7);
  auVar11 = FUN_00f2f724(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,0);
  local_64 = FUN_0265f7dc(param_2,0);
  auVar12 = FUN_0115ec6c(param_1,param_3,0,*(undefined8 *)puVar5,&local_64,*(undefined8 *)puVar8);
  auVar11 = FUN_00f2f724(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,0);
  local_64 = FUN_0265f7ac(param_2,0);
  auVar12 = FUN_0115ec6c(param_1,param_3,0,*(undefined8 *)puVar6,&local_64,*(undefined8 *)puVar7);
  auVar11 = FUN_00f2f724(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,0);
  local_64 = FUN_0265f7bc(param_2,0);
  auVar12 = FUN_0115ec6c(param_1,param_3,0,*(undefined8 *)StringLiteral_55,&local_64,
                         *(undefined8 *)puVar7);
  FUN_00f2f724(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,0);
  return;
}


