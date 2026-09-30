/*
FUNCTION_NAME: ClawGame$$StopGame
ENTRY_POINT: 00f0b098
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void ClawGame__StopGame(ulong param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar10;
  
  puVar8 = *(undefined8 **)(unaff_x20 + 0x880);
  puVar10 = *(undefined8 **)(unaff_x22 + 0xfd8);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConvert_ToString__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_Autohand_HandPublicEvents_OnReleaseEvent__);
    thunk_FUN_00d48444(Oculus_Interaction_HandGrab_Visuals_JointCollection_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13954);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_u32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_set_Item__
                      );
                    /* try { // try from 00f0b128 to 0100b153 has its CatchHandler @ 00f0b498 */
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
                    /* try { // try from 00f0b194 to 0100b237 has its CatchHandler @ 00f0b4a4 */
    thunk_FUN_00d48444(StringLiteral_3941);
    *(undefined1 *)(unaff_x21 + 0x49e) = 1;
  }
  *(undefined1 *)(param_2 + 0x130) = 1;
  uVar6 = FUN_015f5b28(*puVar8,*(undefined8 *)(param_2 + 0x80),0);
  lVar7 = thunk_FUN_00d62348(*puVar10);
  puVar2 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
  if (lVar7 != 0) {
    FUN_016f27fc(lVar7,param_2,*(undefined8 *)StringLiteral_33,0);
    FUN_00fe0700(uVar6,lVar7,0);
    uVar6 = FUN_015f5b28(*(undefined8 *)puVar2,*(undefined8 *)(param_2 + 0x80),0);
    lVar7 = thunk_FUN_00d62348(*puVar10);
    if (lVar7 != 0) {
      FUN_016f27fc(lVar7,param_2,
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<DestructibleMeshComponent>_Invoke__,0);
      FUN_00fe0700(uVar6,lVar7,0);
      lVar7 = thunk_FUN_00d62348(*puVar10);
      puVar2 = PTR_DAT_033f6278;
      if (lVar7 != 0) {
        FUN_016f27fc(lVar7,param_2,*(undefined8 *)OVRPlugin_Media_InputVideoBufferType_TypeInfo,0);
        FUN_00fe0700(*(undefined8 *)puVar2,lVar7,0);
                    /* try { // try from 00f0b290 to 0100b297 has its CatchHandler @ 00f0b49c */
        lVar7 = thunk_FUN_00d62348(*puVar10);
        puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
        puVar2 = PTR_DAT_033f00b0;
        if (lVar7 != 0) {
                    /* try { // try from 00f0b2b4 to 0100b433 has its CatchHandler @ 00f0b4a4 */
          FUN_016f27fc(lVar7,param_2,*(undefined8 *)StringLiteral_9852,0);
          FUN_00fe0700(*(undefined8 *)puVar2,lVar7,0);
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
            lVar9 = *(long *)(lVar7 + 0xd0);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_Newtonsoft_Json_JsonConvert_ToString__)
            ;
            if ((lVar7 != 0) &&
               (FUN_013df2bc(lVar7,param_2,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<PlayerPlatform,_int>_set_Item__
                             ,0), lVar9 != 0)) {
              FUN_013df780(lVar9,lVar7,
                           *(undefined8 *)
                            Oculus_Interaction_HandGrab_Visuals_JointCollection_TypeInfo);
              cVar1 = *(char *)(param_2 + 0x70);
              lVar7 = FUN_00ed46bc(0);
              puVar5 = StringLiteral_13954;
              puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_u32__;
              puVar3 = Method_Autohand_HandPublicEvents_OnReleaseEvent__;
              puVar2 = Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__;
              if (lVar7 != 0) {
                if (cVar1 == '\0') {
                  lVar9 = *(long *)(lVar7 + 0x130);
                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                              Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__
                                            );
                  if ((lVar7 == 0) ||
                     (FUN_013df2bc(lVar7,param_2,*(undefined8 *)puVar5,0), lVar9 == 0))
                  goto LAB_00f0b524;
                  FUN_013df780(lVar9,lVar7,*(undefined8 *)puVar3);
                  lVar7 = FUN_00ed46bc(0);
                  if (lVar7 == 0) goto LAB_00f0b524;
                  lVar7 = *(long *)(lVar7 + 0x138);
                }
                else {
                  lVar9 = *(long *)(lVar7 + 0x120);
                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                              Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__
                                            );
                  if ((lVar7 == 0) ||
                     (FUN_013df2bc(lVar7,param_2,*(undefined8 *)puVar5,0), lVar9 == 0))
                  goto LAB_00f0b524;
                  FUN_013df780(lVar9,lVar7,*(undefined8 *)puVar3);
                  lVar7 = FUN_00ed46bc(0);
                  if (lVar7 == 0) goto LAB_00f0b524;
                  lVar7 = *(long *)(lVar7 + 0x128);
                }
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar9 != 0) &&
                   (FUN_013df2bc(lVar9,param_2,*(undefined8 *)puVar4,0), lVar7 != 0)) {
                  FUN_013df780(lVar7,lVar9,*(undefined8 *)puVar3);
                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
                  if (*(long *)(param_2 + 0xf0) != 0) {
                    lVar9 = *(long *)(*(long *)(param_2 + 0xf0) + 0x70);
                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__)
                    ;
                    if ((lVar7 != 0) &&
                       (FUN_026c8404(lVar7,param_2,*(undefined8 *)UnityEngine_SliderState_var,0),
                       lVar9 != 0)) {
                      FUN_026c84dc(lVar9,lVar7,0);
                      if (*(long *)(param_2 + 0xf0) != 0) {
                        lVar9 = *(long *)(*(long *)(param_2 + 0xf0) + 0x80);
                        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        if ((lVar7 != 0) &&
                           (FUN_026c8404(lVar7,param_2,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<InputControlLayout_ControlItem>_set_Item__
                                         ,0), lVar9 != 0)) {
                          FUN_026c84dc(lVar9,lVar7,0);
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
LAB_00f0b524:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


