/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$FindNextSeperator
ENTRY_POINT: 05bf9ee0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_7;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_TextSelectingUtilities__FindNextSeperator
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    thunk_FUN_02bb0e9c();
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                              );
    FUN_037a5cd0(lVar4,*(undefined8 *)
                        Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
    FUN_05b9af48(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = *unaff_x29;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(lVar5 + 0x10) = *unaff_x19;
      thunk_FUN_02bb0e9c();
      if (lVar4 != 0) {
        lVar8 = *(long *)(lVar4 + 0x10);
        lVar9 = *unaff_x27;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        puVar2 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar5;
            thunk_FUN_02bb0e9c(plVar6,lVar5);
          }
          else {
            FUN_037a6538(lVar4,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x22 + 0x28) = lVar4;
          thunk_FUN_02bb0e9c((long *)(unaff_x22 + 0x28),lVar4);
          lVar4 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
              thunk_FUN_02bb0e9c();
            }
            else {
              FUN_037a6538();
            }
            lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_05b9af50(lVar4,0);
            puVar3 = 
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Matrix4x4>__
            ;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) =
                   *(undefined8 *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
              ;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
              uVar7 = *unaff_x25;
              *(undefined4 *)(lVar4 + 0x18) = 0;
              lVar5 = thunk_FUN_02b79644(uVar7);
              FUN_037a5cd0(lVar5,*(undefined8 *)PTR_DAT_063145b8);
              if (lVar5 != 0) {
                lVar8 = *(long *)(lVar5 + 0x10);
                uVar7 = *(undefined8 *)
                         Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__;
                lVar9 = *unaff_x26;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                    thunk_FUN_02bb0e9c();
                  }
                  else {
                    FUN_037a6538(lVar5,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar4 + 0x30) = lVar5;
                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar5);
                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                              Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                            );
                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                      Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                              );
                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                              Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
                  FUN_05b9af48(lVar8,0);
                  if (lVar8 != 0) {
                    *(undefined8 *)(lVar8 + 0x18) =
                         *(undefined8 *)
                          Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                    thunk_FUN_02bb0e9c();
                    if (lVar5 != 0) {
                      lVar9 = *(long *)(lVar5 + 0x10);
                      lVar10 = *unaff_x27;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar6 = lVar8;
                          thunk_FUN_02bb0e9c(plVar6,lVar8);
                        }
                        else {
                          FUN_037a6538(lVar5,lVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar4 + 0x28) = lVar5;
                        thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar5);
                        lVar5 = *(long *)(unaff_x21 + 0x10);
                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                        if (lVar5 != 0) {
                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                            plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar6 = lVar4;
                            thunk_FUN_02bb0e9c(plVar6,lVar4);
                          }
                          else {
                            FUN_037a6538();
                          }
                          lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_05b9af50(lVar4,0);
                          puVar3 = 
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                          ;
                          if (lVar4 != 0) {
                            *(undefined8 *)(lVar4 + 0x10) =
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                            ;
                            thunk_FUN_02bb0e9c();
                            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                            uVar7 = *unaff_x25;
                            *(undefined4 *)(lVar4 + 0x18) = 0;
                            lVar5 = thunk_FUN_02b79644(uVar7);
                            FUN_037a5cd0(lVar5,*(undefined8 *)PTR_DAT_063145b8);
                            if (lVar5 != 0) {
                              lVar8 = *(long *)(lVar5 + 0x10);
                              uVar7 = *(undefined8 *)
                                       Method_System_Linq_Enumerable_Select<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>__
                              ;
                              lVar9 = *unaff_x26;
                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar1 = *(uint *)(lVar5 + 0x18);
                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                  thunk_FUN_02bb0e9c();
                                }
                                else {
                                  FUN_037a6538(lVar5,uVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar4 + 0x30) = lVar5;
                                thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar5);
                                lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                        
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                            );
                                lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                FUN_05b9af48(lVar8,0);
                                if (lVar8 != 0) {
                                  *(undefined8 *)(lVar8 + 0x18) =
                                       *(undefined8 *)
                                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                                  ;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                  thunk_FUN_02bb0e9c();
                                  if (lVar5 != 0) {
                                    lVar9 = *(long *)(lVar5 + 0x10);
                                    lVar10 = *unaff_x27;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar9 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar6 = lVar8;
                                        thunk_FUN_02bb0e9c(plVar6,lVar8);
                                      }
                                      else {
                                        FUN_037a6538(lVar5,lVar8,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar4 + 0x28) = lVar5;
                                      thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar5);
                                      lVar5 = *(long *)(unaff_x21 + 0x10);
                                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                      if (lVar5 != 0) {
                                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar6 = lVar4;
                                          thunk_FUN_02bb0e9c(plVar6,lVar4);
                                        }
                                        else {
                                          FUN_037a6538();
                                        }
                                        lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                        FUN_05b9af50(lVar4,0);
                                        puVar3 = 
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LODFadeMode>__
                                        ;
                                        if (lVar4 != 0) {
                                          *(undefined8 *)(lVar4 + 0x10) =
                                               *(undefined8 *)
                                                Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                                          ;
                                          thunk_FUN_02bb0e9c();
                                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                          uVar7 = *unaff_x25;
                                          *(undefined4 *)(lVar4 + 0x18) = 0;
                                          lVar5 = thunk_FUN_02b79644(uVar7);
                                          FUN_037a5cd0(lVar5,*(undefined8 *)PTR_DAT_063145b8);
                                          if (lVar5 != 0) {
                                            lVar8 = *(long *)(lVar5 + 0x10);
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                            ;
                                            lVar9 = *unaff_x26;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar7;
                                                thunk_FUN_02bb0e9c();
                                              }
                                              else {
                                                FUN_037a6538(lVar5,uVar7,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar4 + 0x30) = lVar5;
                                              thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar5);
                                              lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                    
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                              FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                    
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                              lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                    
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                              FUN_05b9af48(lVar8,0);
                                              if (lVar8 != 0) {
                                                *(undefined8 *)(lVar8 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                ;
                                                thunk_FUN_02bb0e9c();
                                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                thunk_FUN_02bb0e9c();
                                                if (lVar5 != 0) {
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar10 = *unaff_x27;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05b9af50(lVar4,0);
                                                    puVar3 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x25;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02b79644(uVar7);
                                                    FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                        PTR_DAT_063145b8);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar9 = *unaff_x26;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05b9af50(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x25;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02b79644(uVar7);
                                                    FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                        PTR_DAT_063145b8);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar9 = *unaff_x26;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *unaff_x27;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          plVar6 = (long *)(lVar9 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar6 = lVar8;
                                                          thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar5,lVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05b9af50(lVar4,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x25;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02b79644(uVar7);
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar9 = *unaff_x26;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x27;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_02bb0e9c();
                                                    FUN_05b9ad1c(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


