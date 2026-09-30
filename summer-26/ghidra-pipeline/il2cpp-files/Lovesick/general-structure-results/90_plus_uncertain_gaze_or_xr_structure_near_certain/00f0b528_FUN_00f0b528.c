/*
FUNCTION_NAME: FUN_00f0b528
ENTRY_POINT: 00f0b528
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_00f0b528(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 00f0b540 to 0100b543 has its CatchHandler @ 00f0b800 */
  if ((DAT_0377549f & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConvert_ToString__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StylePropertyName>_Add__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_SerializationEventsCache_<>c_<GetSerializationEventsForType>b__1_0__
                      );
    thunk_FUN_00d48444(StringLiteral_13954);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_u32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_set_Item__
                      );
    thunk_FUN_00d48444(OVRPlugin_Media_InputVideoBufferType_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<PlayerPlatform,_int>_set_Item__)
    ;
    thunk_FUN_00d48444(UnityEngine_SliderState_var);
    thunk_FUN_00d48444(StringLiteral_9852);
    thunk_FUN_00d48444(StringLiteral_33);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<DestructibleMeshComponent>_Invoke__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField<int>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f6278);
    thunk_FUN_00d48444(PTR_DAT_033f00b0);
    thunk_FUN_00d48444(StringLiteral_3941);
    DAT_0377549f = 1;
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if (*(char *)(param_1 + 0x130) == '\0') {
    return;
  }
  uVar6 = FUN_015f5b28(*(undefined8 *)StringLiteral_3941,*(undefined8 *)(param_1 + 0x80),0);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar3 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
  if (lVar7 != 0) {
    FUN_016f27fc(lVar7,param_1,*(undefined8 *)StringLiteral_33,0);
    FUN_00fe0764(uVar6,lVar7,0);
    uVar6 = FUN_015f5b28(*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x80),0);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar7 != 0) {
      FUN_016f27fc(lVar7,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<DestructibleMeshComponent>_Invoke__,0);
      FUN_00fe0764(uVar6,lVar7,0);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_033f6278;
      if (lVar7 != 0) {
        FUN_016f27fc(lVar7,param_1,*(undefined8 *)OVRPlugin_Media_InputVideoBufferType_TypeInfo,0);
        FUN_00fe0764(*(undefined8 *)puVar3,lVar7,0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
        puVar2 = PTR_DAT_033f00b0;
        if (lVar7 != 0) {
          FUN_016f27fc(lVar7,param_1,*(undefined8 *)StringLiteral_9852,0);
          FUN_00fe0764(*(undefined8 *)puVar2,lVar7,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_03774e19 == '\0') {
            thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
            DAT_03774e19 = '\x01';
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar3;
          }
          if ((**(long **)(lVar7 + 0xb8) != 0) &&
             (lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x18), lVar7 != 0)) {
            lVar8 = *(long *)(lVar7 + 0xd0);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_Newtonsoft_Json_JsonConvert_ToString__)
            ;
            if ((lVar7 != 0) &&
               (FUN_013df2bc(lVar7,param_1,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<PlayerPlatform,_int>_set_Item__
                             ,0), lVar8 != 0)) {
              FUN_013df7e0(lVar8,lVar7,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<StylePropertyName>_Add__);
              cVar1 = *(char *)(param_1 + 0x70);
              lVar7 = FUN_00ed46bc(0);
              puVar5 = StringLiteral_13954;
              puVar4 = 
              Method_System_Runtime_Serialization_SerializationEventsCache_<>c_<GetSerializationEventsForType>b__1_0__
              ;
              puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_u32__;
              puVar2 = Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__;
              if (lVar7 != 0) {
                if (cVar1 == '\0') {
                  lVar8 = *(long *)(lVar7 + 0x130);
                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                              Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__
                                            );
                  if ((lVar7 == 0) ||
                     (FUN_013df2bc(lVar7,param_1,*(undefined8 *)puVar5,0), lVar8 == 0))
                  goto LAB_00f0b9e8;
                  FUN_013df7e0(lVar8,lVar7,*(undefined8 *)puVar4);
                  lVar7 = FUN_00ed46bc(0);
                  if (lVar7 == 0) goto LAB_00f0b9e8;
                  lVar7 = *(long *)(lVar7 + 0x138);
                }
                else {
                  lVar8 = *(long *)(lVar7 + 0x120);
                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                              Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__
                                            );
                  if ((lVar7 == 0) ||
                     (FUN_013df2bc(lVar7,param_1,*(undefined8 *)puVar5,0), lVar8 == 0))
                  goto LAB_00f0b9e8;
                  FUN_013df7e0(lVar8,lVar7,*(undefined8 *)puVar4);
                  lVar7 = FUN_00ed46bc(0);
                  if (lVar7 == 0) goto LAB_00f0b9e8;
                  lVar7 = *(long *)(lVar7 + 0x128);
                }
                lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar8 != 0) &&
                   (FUN_013df2bc(lVar8,param_1,*(undefined8 *)puVar3,0), lVar7 != 0)) {
                  FUN_013df7e0(lVar7,lVar8,*(undefined8 *)puVar4);
                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
                  if (*(long *)(param_1 + 0xf0) != 0) {
                    lVar8 = *(long *)(*(long *)(param_1 + 0xf0) + 0x70);
                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__)
                    ;
                    if ((lVar7 != 0) &&
                       (FUN_026c8404(lVar7,param_1,*(undefined8 *)UnityEngine_SliderState_var,0),
                       lVar8 != 0)) {
                      FUN_026c8574(lVar8,lVar7,0);
                      if (*(long *)(param_1 + 0xf0) != 0) {
                        lVar8 = *(long *)(*(long *)(param_1 + 0xf0) + 0x80);
                        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        if ((lVar7 != 0) &&
                           (FUN_026c8404(lVar7,param_1,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_set_Item__
                                         ,0), lVar8 != 0)) {
                          FUN_026c8574(lVar8,lVar7,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00f0b9e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


