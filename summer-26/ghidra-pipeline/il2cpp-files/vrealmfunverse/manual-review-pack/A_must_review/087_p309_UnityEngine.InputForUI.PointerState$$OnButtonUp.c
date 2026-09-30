/*
FUNCTION_NAME: UnityEngine.InputForUI.PointerState$$OnButtonUp
ENTRY_POINT: 05c01fdc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_InputForUI_PointerState__OnButtonUp(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  *(undefined8 *)(unaff_x24 + 0x18) = **(undefined8 **)(param_1 + 0x340);
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x24 + 0x10) = *unaff_x28;
  thunk_FUN_02bb0e9c();
  if (unaff_x23 != 0) {
    lVar6 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538();
      }
      *(long *)(unaff_x22 + 0x28) = unaff_x23;
      thunk_FUN_02bb0e9c();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538();
        }
        lVar6 = thunk_FUN_02b79644(*unaff_x29);
        FUN_05b9af50(lVar6,0);
        puVar2 = 
        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
        ;
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x10) =
               *(undefined8 *)
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
          ;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
          puVar2 = PTR_DAT_063145b0;
          *(undefined4 *)(lVar6 + 0x18) = 0;
          lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          FUN_037a5cd0(lVar3,*unaff_x26);
          puVar2 = PTR_DAT_063173b8;
          if (lVar3 != 0) {
            lVar7 = *(long *)(lVar3 + 0x10);
            uVar5 = *(undefined8 *)Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                thunk_FUN_02bb0e9c();
              }
              else {
                FUN_037a6538(lVar3,uVar5,
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar6 + 0x30) = lVar3;
              thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
              lVar3 = thunk_FUN_02b79644(*unaff_x20);
              FUN_037a5cd0(lVar3,*unaff_x25);
              lVar7 = thunk_FUN_02b79644(*unaff_x19);
              FUN_05b9af48(lVar7,0);
              if (lVar7 != 0) {
                *(undefined8 *)(lVar7 + 0x18) =
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                ;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                thunk_FUN_02bb0e9c();
                if (lVar3 != 0) {
                  lVar8 = *(long *)(lVar3 + 0x10);
                  lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar4 = lVar7;
                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                    }
                    else {
                      FUN_037a6538(lVar3,lVar7,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar6 + 0x28) = lVar3;
                    thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                    lVar3 = *(long *)(unaff_x21 + 0x10);
                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    if (lVar3 != 0) {
                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                        plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar4 = lVar6;
                        thunk_FUN_02bb0e9c(plVar4,lVar6);
                      }
                      else {
                        FUN_037a6538();
                      }
                      lVar6 = thunk_FUN_02b79644(*unaff_x29);
                      FUN_05b9af50(lVar6,0);
                      puVar2 = 
                      Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                      ;
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 0x10) =
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                        ;
                        thunk_FUN_02bb0e9c();
                        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                        puVar2 = PTR_DAT_063145b0;
                        *(undefined4 *)(lVar6 + 0x18) = 0;
                        lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                        FUN_037a5cd0(lVar3,*unaff_x26);
                        puVar2 = PTR_DAT_063173b8;
                        if (lVar3 != 0) {
                          lVar7 = *(long *)(lVar3 + 0x10);
                          uVar5 = *(undefined8 *)
                                   Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                              thunk_FUN_02bb0e9c();
                            }
                            else {
                              FUN_037a6538(lVar3,uVar5,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) +
                                            0x70));
                            }
                            *(long *)(lVar6 + 0x30) = lVar3;
                            thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                            lVar3 = thunk_FUN_02b79644(*unaff_x20);
                            FUN_037a5cd0(lVar3,*unaff_x25);
                            lVar7 = thunk_FUN_02b79644(*unaff_x19);
                            FUN_05b9af48(lVar7,0);
                            if (lVar7 != 0) {
                              *(undefined8 *)(lVar7 + 0x18) =
                                   *(undefined8 *)
                                    Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__
                              ;
                              thunk_FUN_02bb0e9c();
                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                              thunk_FUN_02bb0e9c();
                              if (lVar3 != 0) {
                                lVar8 = *(long *)(lVar3 + 0x10);
                                lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                    plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar4 = lVar7;
                                    thunk_FUN_02bb0e9c(plVar4,lVar7);
                                  }
                                  else {
                                    FUN_037a6538(lVar3,lVar7,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar6 + 0x28) = lVar3;
                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                  if (lVar3 != 0) {
                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar4 = lVar6;
                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                    }
                                    else {
                                      FUN_037a6538();
                                    }
                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                    FUN_05b9af50(lVar6,0);
                                    puVar2 = Method_System_Linq_Enumerable_Empty<Type>__;
                                    if (lVar6 != 0) {
                                      *(undefined8 *)(lVar6 + 0x10) =
                                           *(undefined8 *)
                                            System_Collections_Generic_Queue<JobHandle>_TypeInfo;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                      puVar2 = PTR_DAT_063145b0;
                                      *(undefined4 *)(lVar6 + 0x18) = 2;
                                      lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                      FUN_037a5cd0(lVar3,*unaff_x26);
                                      puVar2 = PTR_DAT_063173b8;
                                      if (lVar3 != 0) {
                                        lVar7 = *(long *)(lVar3 + 0x10);
                                        uVar5 = *(undefined8 *)
                                                 Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                        ;
                                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar5;
                                            thunk_FUN_02bb0e9c();
                                          }
                                          else {
                                            FUN_037a6538(lVar3,uVar5,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(*(long *)puVar2 +
                                                                              0x20) + 0xc0) + 0x70))
                                            ;
                                          }
                                          *(long *)(lVar6 + 0x30) = lVar3;
                                          thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                          lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                          FUN_037a5cd0(lVar3,*unaff_x25);
                                          lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                          FUN_05b9af48(lVar7,0);
                                          if (lVar7 != 0) {
                                            *(undefined8 *)(lVar7 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                            ;
                                            thunk_FUN_02bb0e9c();
                                            *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                            thunk_FUN_02bb0e9c();
                                            if (lVar3 != 0) {
                                              lVar8 = *(long *)(lVar3 + 0x10);
                                              lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                              if (lVar8 != 0) {
                                                uVar1 = *(uint *)(lVar3 + 0x18);
                                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                  plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar4 = lVar7;
                                                  thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                }
                                                else {
                                                  FUN_037a6538(lVar3,lVar7,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                *(long *)(lVar6 + 0x28) = lVar3;
                                                thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                lVar3 = *(long *)(unaff_x21 + 0x10);
                                                *(int *)(unaff_x21 + 0x1c) =
                                                     *(int *)(unaff_x21 + 0x1c) + 1;
                                                if (lVar3 != 0) {
                                                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                    plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar4 = lVar6;
                                                    thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                  FUN_05b9af50(lVar6,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_MatchValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar6 + 0x18) = 2;
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_063145b0;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_037a5cd0(lVar3,*unaff_x26);
                                                    puVar2 = PTR_DAT_063173b8;
                                                    if (lVar3 != 0) {
                                                      lVar7 = *(long *)(lVar3 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_063145b0;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_037a5cd0(lVar3,*unaff_x26);
                                                    puVar2 = PTR_DAT_063173b8;
                                                    if (lVar3 != 0) {
                                                      lVar7 = *(long *)(lVar3 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar3 != 0) {
                                                      lVar8 = *(long *)(lVar3 + 0x10);
                                                      lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar3,*unaff_x25);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    thunk_FUN_02bb0e9c();
                                                    FUN_05b9ad1c(in_stack_00000000,in_stack_00000008
                                                                 ,0);
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
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


