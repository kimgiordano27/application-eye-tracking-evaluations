/*
FUNCTION_NAME: FUN_0562eaf0
ENTRY_POINT: 0562eaf0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_0562eaf0(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_06a54619 & 1) == 0) {
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<GravityAccountsDiscordRoleFetcher_<UserHasRole>d__1>__
                );
    FUN_02d4dc40(UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_TypeInfo);
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<GravityAccountsLinkingHandlerDefualt_<IsTokenValid>d__11>__
                );
    FUN_02d4dc40(Newtonsoft_Json_Schema_JsonSchemaNode_<>c_TypeInfo);
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<GravityAccountsLinkingHandlerTextDefualt_<IsTokenValid>d__11>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<MoveToContentFromNonContentAsync>d__14>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<ReadAndMoveToContentAsync>d__12>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<DoReadAsync>d__3>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<MatchValueAsync>d__19>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<MatchValueWithTrailingSeparatorAsync>d__20>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParseObjectAsync>d__15>__
                );
    FUN_02d4dc40(
                UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_EqualityComparer_TypeInfo
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParsePostValueAsync>d__4>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParsePropertyAsync>d__31>__
                );
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_000017C3_BurstDirectCall_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_06657e38);
    DAT_06a54619 = 1;
  }
  puVar3 = PTR_DAT_06657e38;
  if (param_2 == 0) {
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar5 = thunk_FUN_02d8a638();
    uVar8 = thunk_FUN_02db45e8(PTR_DAT_06659b10);
    FUN_04f681bc(uVar5,uVar8,0);
    uVar8 = thunk_FUN_02db45e8(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParseValueAsync>d__8>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar5,uVar8);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  uVar6 = thunk_FUN_04e7e884(uVar5,*(undefined8 *)puVar3,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if ((uVar6 & 1) == 0) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x30) == 1) {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<MatchValueWithTrailingSeparatorAsync>d__20>__
                                             );
          FUN_05615254(plVar4,param_2,param_1,0);
        }
        else {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParseObjectAsync>d__15>__
                                             );
          FUN_0560e070(plVar4,param_2,param_1,0);
        }
      }
      else {
        if (iVar1 != 1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x30) == 1) {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<GravityAccountsDiscordRoleFetcher_<UserHasRole>d__1>__
                                             );
          FUN_05541ac0(plVar4,param_2,param_1,0);
        }
        else {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_TypeInfo
                                             );
          FUN_05540720(plVar4,param_2,param_1,0);
        }
      }
      goto LAB_0562ee30;
    }
    if (iVar1 == 2) {
      plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<MoveToContentFromNonContentAsync>d__14>__
                                         );
      thunk_FUN_0560e070(plVar4,param_2,param_1,0);
      goto LAB_0562ee30;
    }
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x30) == 1) {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParsePostValueAsync>d__4>__
                                             );
          FUN_05624678(plVar4,param_2,param_1,0);
        }
        else {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParsePropertyAsync>d__31>__
                                             );
          FUN_05621838(plVar4,param_2,param_1,0);
        }
      }
      else {
        if (iVar1 != 1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x30) == 1) {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<GravityAccountsLinkingHandlerDefualt_<IsTokenValid>d__11>__
                                             );
          FUN_0560c734(plVar4,param_2,param_1,0);
        }
        else {
          plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               Newtonsoft_Json_Schema_JsonSchemaNode_<>c_TypeInfo);
          FUN_05541fb8(plVar4,param_2,param_1,0);
        }
      }
      goto LAB_0562ee30;
    }
    if (iVar1 == 2) {
      plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<ReadAndMoveToContentAsync>d__12>__
                                         );
      FUN_0560e500(plVar4,param_2,param_1,0);
      goto LAB_0562ee30;
    }
  }
  if (iVar1 != 3) {
    return 0;
  }
  plVar4 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<MatchValueAsync>d__19>__
                                     );
  FUN_05610d3c(plVar4,param_2,param_1,0);
LAB_0562ee30:
  plVar7 = plVar4;
  if ((*(int *)(param_1 + 0x50) != 3) && (uVar6 = FUN_0562f870(param_1), (uVar6 & 1) != 0)) {
    plVar7 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<GravityAccountsLinkingHandlerTextDefualt_<IsTokenValid>d__11>__
                                       );
    if (plVar4 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)
                         UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_EqualityComparer_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_EqualityComparer_TypeInfo
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar4);
      }
    }
    FUN_0560cde4(plVar7,plVar4,param_1,0);
  }
  uVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_000017C3_BurstDirectCall_TypeInfo
                            );
  FUN_05626684(uVar8,plVar7,param_1,0);
  uVar5 = uVar8;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<DoReadAsync>d__3>__
                              );
    FUN_056103d0(uVar5,uVar8,0);
  }
  return uVar5;
}


