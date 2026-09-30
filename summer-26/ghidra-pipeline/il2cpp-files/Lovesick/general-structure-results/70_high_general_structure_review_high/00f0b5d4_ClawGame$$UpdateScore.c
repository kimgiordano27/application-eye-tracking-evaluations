/*
FUNCTION_NAME: ClawGame$$UpdateScore
ENTRY_POINT: 00f0b5d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void ClawGame__UpdateScore(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(UnityEngine_SliderState_var);
  thunk_FUN_00d48444(StringLiteral_9852);
                    /* try { // try from 00f0b5f0 to 0100b5fb has its CatchHandler @ 00f0b804 */
  thunk_FUN_00d48444(StringLiteral_33);
  thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<DestructibleMeshComponent>_Invoke__);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField<int>__ctor__);
  thunk_FUN_00d48444(PTR_DAT_033f6278);
  thunk_FUN_00d48444(PTR_DAT_033f00b0);
  thunk_FUN_00d48444(StringLiteral_3941);
  *(undefined1 *)(unaff_x20 + 0x49f) = 1;
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if (*(char *)(unaff_x19 + 0x130) == '\0') {
    return;
  }
  uVar4 = FUN_015f5b28(*(undefined8 *)StringLiteral_3941,*(undefined8 *)(unaff_x19 + 0x80),0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar3 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
  if (lVar5 != 0) {
    FUN_016f27fc();
    FUN_00fe0764(uVar4,lVar5,0);
    uVar4 = FUN_015f5b28(*(undefined8 *)puVar3,*(undefined8 *)(unaff_x19 + 0x80),0);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      FUN_016f27fc();
      FUN_00fe0764(uVar4,lVar5,0);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_033f6278;
      if (lVar5 != 0) {
        FUN_016f27fc();
        FUN_00fe0764(*(undefined8 *)puVar3,lVar5,0);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
        puVar2 = PTR_DAT_033f00b0;
        if (lVar5 != 0) {
          FUN_016f27fc();
          FUN_00fe0764(*(undefined8 *)puVar2,lVar5,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_03774e19 == '\0') {
            thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
            DAT_03774e19 = '\x01';
          }
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *(long *)puVar3;
          }
          if ((**(long **)(lVar5 + 0xb8) != 0) &&
             (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x18), lVar5 != 0)) {
            lVar6 = *(long *)(lVar5 + 0xd0);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)Method_Newtonsoft_Json_JsonConvert_ToString__)
            ;
            if ((lVar5 != 0) && (FUN_013df2bc(), lVar6 != 0)) {
              FUN_013df7e0(lVar6,lVar5,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<StylePropertyName>_Add__);
              cVar1 = *(char *)(unaff_x19 + 0x70);
              lVar5 = FUN_00ed46bc(0);
              puVar3 = 
              Method_System_Runtime_Serialization_SerializationEventsCache_<>c_<GetSerializationEventsForType>b__1_0__
              ;
              puVar2 = Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__;
              if (lVar5 != 0) {
                if (cVar1 == '\0') {
                  lVar6 = *(long *)(lVar5 + 0x130);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                              Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__
                                            );
                  if ((lVar5 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_00f0b9e8;
                  FUN_013df7e0(lVar6,lVar5,*(undefined8 *)puVar3);
                  lVar5 = FUN_00ed46bc(0);
                  if (lVar5 == 0) goto LAB_00f0b9e8;
                  lVar5 = *(long *)(lVar5 + 0x138);
                }
                else {
                  lVar6 = *(long *)(lVar5 + 0x120);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                              Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__
                                            );
                  if ((lVar5 == 0) || (FUN_013df2bc(), lVar6 == 0)) goto LAB_00f0b9e8;
                  FUN_013df7e0(lVar6,lVar5,*(undefined8 *)puVar3);
                  lVar5 = FUN_00ed46bc(0);
                  if (lVar5 == 0) goto LAB_00f0b9e8;
                  lVar5 = *(long *)(lVar5 + 0x128);
                }
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar6 != 0) && (FUN_013df2bc(), lVar5 != 0)) {
                  FUN_013df7e0(lVar5,lVar6,*(undefined8 *)puVar3);
                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
                  if (*(long *)(unaff_x19 + 0xf0) != 0) {
                    lVar6 = *(long *)(*(long *)(unaff_x19 + 0xf0) + 0x70);
                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__)
                    ;
                    if ((lVar5 != 0) && (FUN_026c8404(), lVar6 != 0)) {
                      FUN_026c8574(lVar6,lVar5,0);
                      if (*(long *)(unaff_x19 + 0xf0) != 0) {
                        lVar6 = *(long *)(*(long *)(unaff_x19 + 0xf0) + 0x80);
                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        if ((lVar5 != 0) && (FUN_026c8404(), lVar6 != 0)) {
                          FUN_026c8574(lVar6,lVar5,0);
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


