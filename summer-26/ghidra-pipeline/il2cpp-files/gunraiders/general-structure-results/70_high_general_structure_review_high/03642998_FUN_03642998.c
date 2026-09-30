/*
FUNCTION_NAME: FUN_03642998
ENTRY_POINT: 03642998
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03642998(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = Method_Newtonsoft_Json_Utilities_CollectionUtils_IndexOfReference<JToken>__;
  if ((DAT_045382c5 & 1) == 0) {
    FUN_01c5d288(Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__);
    FUN_01c5d288(
                Method_Newtonsoft_Json_Utilities_CollectionUtils_CopyFromJaggedToMultidimensionalArray__
                );
    FUN_01c5d288(Method_UnityEngine_Collision_GetContact__);
    FUN_01c5d288(Method_UnityEngine_Color_get_Item__);
    FUN_01c5d288(Method_Ara_ColorFromSpeed_SetColorFromSpeed__);
    FUN_01c5d288(Method_OculusSampleFramework_ColorGrabbable_Awake__);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_ColorPalette_SetColors__);
    FUN_01c5d288(Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<string,_Type>>>_TryGetValue__
                );
    FUN_01c5d288(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanUInt64_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__);
    FUN_01c5d288(Method_Unity_Services_Analytics_Internal_AnalyticsForgetter_UploadComplete__);
    FUN_01c5d288(Method_Newtonsoft_Json_Utilities_CollectionUtils_IndexOfReference<JToken>__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                );
    DAT_045382c5 = 1;
  }
  puVar2 = Method_UnityEngine_ProBuilder_ColorPalette_SetColors__;
  uVar3 = thunk_FUN_03152714(param_1,*(undefined8 *)puVar1,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = thunk_FUN_03152714(param_1,*(undefined8 *)
                                        Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                               ,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_03152714(param_1,*(undefined8 *)
                                          Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                 ,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_03152714(param_1,*(undefined8 *)
                                            System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanUInt64_TypeInfo
                                   ,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = thunk_FUN_03152714(param_1,*(undefined8 *)
                                              Method_Unity_Services_Analytics_Internal_AnalyticsForgetter_UploadComplete__
                                     ,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = thunk_FUN_03152714(param_1,*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<string,_Type>>>_TryGetValue__
                                       ,0);
            if ((uVar3 & 1) == 0) {
              uVar4 = FUN_0364cdc8(0);
              uVar5 = thunk_FUN_01c273e8(
                                        Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar4,uVar5);
            }
            lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
            if (lVar6 == 0) {
              lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                          Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                        );
              FUN_03614850(lVar6,0);
              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar6;
            }
          }
          else if (param_2 == 0) {
            lVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_UnityEngine_Color_get_Item__);
            FUN_03642cfc(lVar6,param_3);
          }
          else {
            lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
            if (lVar6 == 0) {
              lVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_UnityEngine_Collision_GetContact__);
              FUN_03614850(lVar6,0);
              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar6;
            }
          }
        }
        else {
          lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          if (lVar6 == 0) {
            lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_Newtonsoft_Json_Utilities_CollectionUtils_CopyFromJaggedToMultidimensionalArray__
                                      );
            FUN_03614850(lVar6,0);
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar6;
          }
        }
      }
      else {
        lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        if (lVar6 == 0) {
          lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                                    );
          FUN_03614850(lVar6,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar6;
        }
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      if (lVar6 == 0) {
        lVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_Ara_ColorFromSpeed_SetColorFromSpeed__);
        FUN_03614850(lVar6,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
      }
    }
  }
  else {
    lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)Method_OculusSampleFramework_ColorGrabbable_Awake__)
      ;
      FUN_03614850(lVar6,0);
      **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
    }
  }
  return lVar6;
}


