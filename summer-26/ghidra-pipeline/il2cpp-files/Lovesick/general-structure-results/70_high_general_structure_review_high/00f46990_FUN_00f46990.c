/*
FUNCTION_NAME: FUN_00f46990
ENTRY_POINT: 00f46990
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined1  [16] FUN_00f46990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar9 = StringLiteral_232;
  if ((DAT_037756b2 & 1) == 0) {
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass14_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    thunk_FUN_00d48444(Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_55);
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractor>_Add__)
    ;
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AudioClipAudioSource_<TransmitAudio>d__38>__
                      );
    thunk_FUN_00d48444(StringLiteral_232);
    DAT_037756b2 = 1;
  }
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AudioClipAudioSource_<TransmitAudio>d__38>__
  ;
  puVar7 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
  ;
  puVar6 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractor>_Add__;
  puVar5 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass14_0_TypeInfo;
  puVar4 = Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo;
  puVar3 = System_Collections_Generic_List<HashSet<Face>>_TypeInfo;
  lVar10 = *(long *)puVar9;
  local_68 = 0;
  local_70 = 0;
  local_74 = 0;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar9;
  }
  uVar1 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
  uVar2 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
  uVar11 = FUN_0265f78c(param_3,0);
  local_68._4_4_ = uVar11;
  auVar12 = FUN_0115ea0c(param_1,param_2,0,*(undefined8 *)puVar4,(long)&local_68 + 4,
                         *(undefined8 *)puVar8);
  auVar12 = FUN_00f2f724(uVar1,uVar2,auVar12._0_8_,auVar12._8_8_,0);
  FUN_0265f794(local_68._4_4_,param_3,0);
  uVar11 = FUN_0265f79c(param_3,0);
  local_68 = CONCAT44(local_68._4_4_,uVar11);
  auVar13 = FUN_0115ea0c(param_1,param_2,0,*(undefined8 *)puVar3,&local_68,*(undefined8 *)puVar8);
  auVar12 = FUN_00f2f724(auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,auVar13._8_8_,0);
  FUN_0265f7a4((undefined4)local_68,param_3,0);
  uVar11 = FUN_0265f7dc(param_3,0);
  local_70._4_4_ = uVar11;
  auVar13 = FUN_0115ea0c(param_1,param_2,0,*(undefined8 *)puVar5,(long)&local_70 + 4,
                         *(undefined8 *)puVar6);
  auVar12 = FUN_00f2f724(auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,auVar13._8_8_,0);
  FUN_0265f7ec(param_3,local_70._4_4_,0);
  uVar11 = FUN_0265f7ac(param_3,0);
  local_70 = CONCAT44(local_70._4_4_,uVar11);
  auVar13 = FUN_0115ea0c(param_1,param_2,0,*(undefined8 *)puVar7,&local_70,*(undefined8 *)puVar8);
  auVar12 = FUN_00f2f724(auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,auVar13._8_8_,0);
  FUN_0265f7b4((undefined4)local_70,param_3,0);
  local_74 = FUN_0265f7bc(param_3,0);
  auVar13 = FUN_0115ea0c(param_1,param_2,0,*(undefined8 *)StringLiteral_55,&local_74,
                         *(undefined8 *)puVar8);
  auVar12 = FUN_00f2f724(auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,auVar13._8_8_,0);
  FUN_0265f7c4(local_74,param_3,0);
  return auVar12;
}


