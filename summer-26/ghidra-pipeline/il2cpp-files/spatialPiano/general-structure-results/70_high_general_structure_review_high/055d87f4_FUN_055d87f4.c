/*
FUNCTION_NAME: FUN_055d87f4
ENTRY_POINT: 055d87f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_055d87f4(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  undefined8 local_48;
  
  if ((DAT_06bbfbaf & 1) == 0) {
    FUN_02f08768(UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(
                UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection_00000190_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(System_EventHandler<Result<ColocationState>>_TypeInfo);
    FUN_02f08768(PTR_DAT_067d8b28);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                );
    FUN_02f08768(Method_System_Xml_ArrayHelper<string,_bool>__ctor__);
    FUN_02f08768(
                Method_Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>__ctor__
                );
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>__ctor__);
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TryGetValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_set_Item__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__);
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>__ctor__);
    FUN_02f08768(PTR_DAT_067cab38);
    FUN_02f08768(
                Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_TryGetValue__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__);
    DAT_06bbfbaf = 1;
  }
  puVar1 = PTR_DAT_067c9338;
  local_48 = 0;
  if (param_2 == 0) goto LAB_055d8ddc;
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  lVar8 = *(long *)(PTR_DAT_067c9338 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
  uVar4 = FUN_050e4454(lVar8 + 0x20,0);
  uVar5 = FUN_050edfb8(uVar7,uVar4,0);
  if ((uVar5 & 1) != 0) {
    lVar8 = FUN_055ce110(*(undefined8 *)(param_2 + 0x38));
    if (*(char *)(param_2 + 0x90) == '\0') {
LAB_055d897c:
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
      ;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050e4454(uVar7,0);
      uVar5 = FUN_050ed374(uVar7,*(undefined8 *)(param_2 + 0x38),0);
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_2 + 0x38);
        uVar4 = *(undefined8 *)System_EventHandler<Result<ColocationState>>_TypeInfo;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar4 = FUN_050e4454(uVar4,0);
        uVar5 = FUN_050ed374(uVar7,uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar7 = *(undefined8 *)(param_2 + 0x38);
          uVar4 = *(undefined8 *)
                   UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo;
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar4 = FUN_050e4454(uVar4,0);
          uVar5 = FUN_050ed374(uVar7,uVar4,0);
          puVar2 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
          if ((uVar5 & 1) == 0) {
            if (lVar8 == 0) goto LAB_055d8ddc;
            if (((*(int *)(lVar8 + 0x10) == 0) || (*(char *)(param_2 + 0x91) != '\0')) ||
               ((uVar5 = thunk_FUN_04f6d944(lVar8,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                            ,0), (uVar5 & 1) != 0 &&
                (uVar5 = FUN_04f6dc3c(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)puVar2,0),
                (uVar5 & 1) != 0)))) {
              FUN_055cecb4(param_1,param_3,*(undefined8 *)(param_2 + 0x38));
            }
            goto LAB_055d8a78;
          }
        }
      }
    }
    else {
      if (lVar8 == 0) goto LAB_055d8ddc;
      if ((*(int *)(lVar8 + 0x10) != 0) && (*(char *)(param_2 + 0x91) == '\0')) goto LAB_055d897c;
    }
    plVar6 = *(long **)(param_2 + 0x38);
    if ((plVar6 == (long *)0x0) ||
       (uVar7 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0)),
       param_3 == (long *)0x0)) goto LAB_055d8ddc;
    (**(code **)(*param_3 + 0x558))
              (param_3,*(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__,
               *(undefined8 *)puVar3,uVar7,*(undefined8 *)(*param_3 + 0x560));
  }
LAB_055d8a78:
  puVar2 = PTR_DAT_067cab38;
  if (*(char *)(param_2 + 0x68) != '\0') {
    if (param_3 == (long *)0x0) goto LAB_055d8ddc;
    (**(code **)(*param_3 + 0x558))
              (param_3,*(undefined8 *)
                        Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>__ctor__,
               *(undefined8 *)puVar3,*(undefined8 *)PTR_DAT_067cab38,
               *(undefined8 *)(*param_3 + 0x560));
  }
  lVar8 = FUN_0555f7d8(param_2,0);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar7 = FUN_0555f7d8(param_2,0);
      if (param_3 == (long *)0x0) goto LAB_055d8ddc;
      (**(code **)(*param_3 + 0x558))
                (param_3,*(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__,
                 *(undefined8 *)puVar3,uVar7,*(undefined8 *)(*param_3 + 0x560));
    }
    uVar5 = FUN_0555d30c(param_2,0);
    if ((uVar5 & 1) != 0) {
      if (param_3 == (long *)0x0) goto LAB_055d8ddc;
      (**(code **)(*param_3 + 0x558))
                (param_3,*(undefined8 *)
                          Method_Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>__ctor__
                 ,*(undefined8 *)puVar3,*(undefined8 *)puVar2,*(undefined8 *)(*param_3 + 0x560));
    }
    puVar2 = PTR_DAT_067c9fd8;
    lVar8 = FUN_0555e0d8(param_2,0);
    if (lVar8 != 0) {
      local_48 = FUN_0555e0d8(param_2,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar8);
      }
      uVar7 = FUN_050656a0(0);
      uVar7 = FUN_050d409c(&local_48,uVar7,0);
      if (param_3 == (long *)0x0) goto LAB_055d8ddc;
      (**(code **)(*param_3 + 0x558))
                (param_3,*(undefined8 *)
                          Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>__ctor__
                 ,*(undefined8 *)puVar3,uVar7,*(undefined8 *)(*param_3 + 0x560));
    }
    lVar8 = FUN_0555e3cc(param_2,0);
    if (lVar8 != 1) {
      local_48 = FUN_0555e3cc(param_2,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar8);
      }
      uVar7 = FUN_050656a0(0);
      uVar7 = FUN_050d409c(&local_48,uVar7,0);
      if (param_3 == (long *)0x0) goto LAB_055d8ddc;
      (**(code **)(*param_3 + 0x558))
                (param_3,*(undefined8 *)
                          Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_set_Item__
                 ,*(undefined8 *)puVar3,uVar7,*(undefined8 *)(*param_3 + 0x560));
    }
    uVar7 = FUN_0555e4e0(param_2,0);
    uVar5 = FUN_04f6dc3c(uVar7,*(undefined8 *)(param_2 + 0x30),0);
    if ((uVar5 & 1) != 0) {
      uVar7 = FUN_0555e4e0(param_2,0);
      if (param_3 == (long *)0x0) goto LAB_055d8ddc;
      (**(code **)(*param_3 + 0x558))
                (param_3,*(undefined8 *)
                          Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TryGetValue__
                 ,*(undefined8 *)puVar3,uVar7,*(undefined8 *)(*param_3 + 0x560));
    }
    lVar8 = *(long *)(param_2 + 0xc0);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x10) != 0) {
        if (param_3 == (long *)0x0) goto LAB_055d8ddc;
        (**(code **)(*param_3 + 0x558))
                  (param_3,*(undefined8 *)Method_System_Xml_ArrayHelper<string,_bool>__ctor__,
                   *(undefined8 *)puVar3,lVar8,*(undefined8 *)(*param_3 + 0x560));
      }
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      uVar4 = *(undefined8 *)PTR_DAT_067d8b28;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar4 = FUN_050e4454(uVar4,0);
      uVar5 = FUN_050ed374(uVar7,uVar4,0);
      if (((uVar5 & 1) != 0) && (local_58 = *(int *)(param_2 + 0x50), local_58 != 3)) {
        local_68 = *(undefined8 *)
                    UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection_00000190_PostfixBurstDelegate_TypeInfo
        ;
        uStack_60 = 0xffffffffffffffff;
        uVar7 = FUN_0510aa48(&local_68,0);
        if (param_3 == (long *)0x0) goto LAB_055d8ddc;
        (**(code **)(*param_3 + 0x558))
                  (param_3,*(undefined8 *)
                            Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_TryGetValue__
                   ,*(undefined8 *)puVar3,uVar7,*(undefined8 *)(*param_3 + 0x560));
      }
      return;
    }
  }
LAB_055d8ddc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


