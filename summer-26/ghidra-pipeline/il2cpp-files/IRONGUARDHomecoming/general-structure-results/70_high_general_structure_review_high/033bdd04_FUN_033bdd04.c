/*
FUNCTION_NAME: FUN_033bdd04
ENTRY_POINT: 033bdd04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_033bdd04(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__;
  if ((DAT_04832412 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Globalization_JapaneseCalendar_set_TwoDigitYearMax__);
    thunk_FUN_01efb3a4(Method_Unity_Jobs_JobParallelIndexListExtensions_CheckReflectionDataCorrect__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_PoseDetection_JointDeltaProvider_UpdateData__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_JsonConvert_DeserializeIntoObject<WitIntentData>__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_JsonConvert_DeserializeObject<Manifest>__);
    thunk_FUN_01efb3a4(
                      Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
                      );
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_JsonConvert_DeserializeObject<TTSWitVoiceSettings>__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Json_JsonConvert_SerializeObject<Dictionary<string,_string>>__
                      );
    thunk_FUN_01efb3a4(Method_OVRSimpleJSON_JSONNode_Parse__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Json_JsonConvert_SerializeObject<Manifest>__);
    thunk_FUN_01efb3a4(Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__);
    DAT_04832412 = 1;
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar2,0);
  puVar1 = Method_OVRSimpleJSON_JSONNode_Parse__;
  if (param_1 != 0) {
    plVar3 = (long *)thunk_FUN_01ecaf38(param_1,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
      lVar6 = *(long *)puVar1;
    }
    if (**(long **)(lVar6 + 0xb8) != 0) {
      uVar4 = FUN_02b6b4d8(**(long **)(lVar6 + 0xb8),plVar3,
                           *(undefined8 *)
                            Method_System_Globalization_JapaneseCalendar_set_TwoDigitYearMax__);
      if ((uVar4 & 1) == 0) {
        if (plVar3 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar3 + 0x6d8))(plVar3,0x14,*(undefined8 *)(*plVar3 + 0x6e0));
          uVar7 = *(undefined8 *)
                   Method_Meta_WitAi_Json_JsonConvert_SerializeObject<Dictionary<string,_string>>__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          }
          uVar7 = FUN_03579868(uVar7,0);
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x10) = uVar7;
            thunk_FUN_01f51358();
            lVar6 = FUN_0230ab8c(uVar5,*(undefined8 *)
                                        Method_Meta_WitAi_Json_JsonConvert_DeserializeIntoObject<WitIntentData>__
                                );
            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Meta_WitAi_Json_JsonConvert_DeserializeObject<TTSWitVoiceSettings>__
                                      );
            FUN_025f2a84(uVar5,lVar2,
                         *(undefined8 *)
                          Method_Meta_WitAi_Json_JsonConvert_SerializeObject<Manifest>__,0);
            if ((lVar6 != 0) &&
               (lVar2 = FUN_030f32c4(lVar6,uVar5,
                                     *(undefined8 *)
                                      Method_Meta_WitAi_Json_JsonConvert_DeserializeObject<Manifest>__
                                    ), lVar2 != 0)) {
              uVar5 = FUN_030f4630(lVar2,*(undefined8 *)
                                          Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
                                  );
              lVar2 = *(long *)puVar1;
              if (*(int *)(lVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar2);
                lVar2 = *(long *)puVar1;
              }
              if (**(long **)(lVar2 + 0xb8) != 0) {
                FUN_02b6b2d0(**(long **)(lVar2 + 0xb8),plVar3,uVar5,
                             *(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_JointDeltaProvider_UpdateData__
                            );
                return uVar5;
              }
            }
          }
        }
      }
      else {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar2 = *(long *)puVar1;
        }
        if (**(long **)(lVar2 + 0xb8) != 0) {
          uVar5 = FUN_02b6b264(**(long **)(lVar2 + 0xb8),plVar3,
                               *(undefined8 *)
                                Method_Unity_Jobs_JobParallelIndexListExtensions_CheckReflectionDataCorrect__
                              );
          return uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


