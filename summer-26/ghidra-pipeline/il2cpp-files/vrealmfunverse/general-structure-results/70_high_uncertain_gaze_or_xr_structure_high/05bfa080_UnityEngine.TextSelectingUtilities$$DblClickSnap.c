/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$DblClickSnap
ENTRY_POINT: 05bfa080
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


void UnityEngine_TextSelectingUtilities__DblClickSnap(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Matrix4x4>__
  ;
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) =
         *(undefined8 *)
          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x22 + 0x20));
    uVar3 = *unaff_x25;
    *(undefined4 *)(unaff_x22 + 0x18) = 0;
    lVar4 = thunk_FUN_02b79644(uVar3);
    FUN_037a5cd0(lVar4,*(undefined8 *)PTR_DAT_063145b8);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + 0x10);
      uVar3 = *(undefined8 *)Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__;
      lVar7 = *unaff_x26;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x30) = lVar4;
        thunk_FUN_02bb0e9c((long *)(unaff_x22 + 0x30),lVar4);
        lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__);
        FUN_037a5cd0(lVar4,*(undefined8 *)
                            Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
        lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
        FUN_05b9af48(lVar6,0);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x18) =
               *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar6 + 0x10) = *unaff_x29;
          thunk_FUN_02bb0e9c();
          if (lVar4 != 0) {
            lVar7 = *(long *)(lVar4 + 0x10);
            lVar8 = *unaff_x27;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar5 = lVar6;
                thunk_FUN_02bb0e9c(plVar5,lVar6);
              }
              else {
                FUN_037a6538(lVar4,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
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
                lVar4 = thunk_FUN_02b79644(*unaff_x19);
                FUN_05b9af50(lVar4,0);
                puVar2 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                ;
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar4 + 0x10) =
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                  ;
                  thunk_FUN_02bb0e9c();
                  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                  uVar3 = *unaff_x25;
                  *(undefined4 *)(lVar4 + 0x18) = 0;
                  lVar6 = thunk_FUN_02b79644(uVar3);
                  FUN_037a5cd0(lVar6,*(undefined8 *)PTR_DAT_063145b8);
                  if (lVar6 != 0) {
                    lVar7 = *(long *)(lVar6 + 0x10);
                    uVar3 = *(undefined8 *)
                             Method_System_Linq_Enumerable_Select<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>__
                    ;
                    lVar8 = *unaff_x26;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                        thunk_FUN_02bb0e9c();
                      }
                      else {
                        FUN_037a6538(lVar6,uVar3,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar4 + 0x30) = lVar6;
                      thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar6);
                      lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                );
                      FUN_037a5cd0(lVar6,*(undefined8 *)
                                          Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                  );
                      lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                );
                      FUN_05b9af48(lVar7,0);
                      if (lVar7 != 0) {
                        *(undefined8 *)(lVar7 + 0x18) =
                             *(undefined8 *)
                              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                        ;
                        thunk_FUN_02bb0e9c();
                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                        thunk_FUN_02bb0e9c();
                        if (lVar6 != 0) {
                          lVar8 = *(long *)(lVar6 + 0x10);
                          lVar9 = *unaff_x27;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar1 = *(uint *)(lVar6 + 0x18);
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar5 = lVar7;
                              thunk_FUN_02bb0e9c(plVar5,lVar7);
                            }
                            else {
                              FUN_037a6538(lVar6,lVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar4 + 0x28) = lVar6;
                            thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar6);
                            lVar6 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar4;
                                thunk_FUN_02bb0e9c(plVar5,lVar4);
                              }
                              else {
                                FUN_037a6538();
                              }
                              lVar4 = thunk_FUN_02b79644(*unaff_x19);
                              FUN_05b9af50(lVar4,0);
                              puVar2 = 
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LODFadeMode>__
                              ;
                              if (lVar4 != 0) {
                                *(undefined8 *)(lVar4 + 0x10) =
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                                ;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                uVar3 = *unaff_x25;
                                *(undefined4 *)(lVar4 + 0x18) = 0;
                                lVar6 = thunk_FUN_02b79644(uVar3);
                                FUN_037a5cd0(lVar6,*(undefined8 *)PTR_DAT_063145b8);
                                if (lVar6 != 0) {
                                  lVar7 = *(long *)(lVar6 + 0x10);
                                  uVar3 = *(undefined8 *)
                                           Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                  ;
                                  lVar8 = *unaff_x26;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar7 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                                      thunk_FUN_02bb0e9c();
                                    }
                                    else {
                                      FUN_037a6538(lVar6,uVar3,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar4 + 0x30) = lVar6;
                                    thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar6);
                                    lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                    FUN_037a5cd0(lVar6,*(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                );
                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                    FUN_05b9af48(lVar7,0);
                                    if (lVar7 != 0) {
                                      *(undefined8 *)(lVar7 + 0x18) =
                                           *(undefined8 *)
                                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                      ;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                      thunk_FUN_02bb0e9c();
                                      if (lVar6 != 0) {
                                        lVar8 = *(long *)(lVar6 + 0x10);
                                        lVar9 = *unaff_x27;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(lVar6 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                            plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar5 = lVar7;
                                            thunk_FUN_02bb0e9c(plVar5,lVar7);
                                          }
                                          else {
                                            FUN_037a6538(lVar6,lVar7,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar4 + 0x28) = lVar6;
                                          thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar6);
                                          lVar6 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar6 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar4;
                                              thunk_FUN_02bb0e9c(plVar5,lVar4);
                                            }
                                            else {
                                              FUN_037a6538();
                                            }
                                            lVar4 = thunk_FUN_02b79644(*unaff_x19);
                                            FUN_05b9af50(lVar4,0);
                                            puVar2 = 
                                            Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                            ;
                                            if (lVar4 != 0) {
                                              *(undefined8 *)(lVar4 + 0x10) =
                                                   *(undefined8 *)Method_LitJson_JsonData__ctor__;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                              uVar3 = *unaff_x25;
                                              *(undefined4 *)(lVar4 + 0x18) = 3;
                                              lVar6 = thunk_FUN_02b79644(uVar3);
                                              FUN_037a5cd0(lVar6,*(undefined8 *)PTR_DAT_063145b8);
                                              if (lVar6 != 0) {
                                                lVar7 = *(long *)(lVar6 + 0x10);
                                                uVar3 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                ;
                                                lVar8 = *unaff_x26;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar7 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                                                    thunk_FUN_02bb0e9c();
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar6,uVar3,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar6,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*unaff_x19);
                                                    FUN_05b9af50(lVar4,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar3 = *unaff_x25;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar6 = thunk_FUN_02b79644(uVar3);
                                                    FUN_037a5cd0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_063145b8);
                                                    if (lVar6 != 0) {
                                                      lVar7 = *(long *)(lVar6 + 0x10);
                                                      uVar3 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar8 = *unaff_x26;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar6 != 0) {
                                                      lVar8 = *(long *)(lVar6 + 0x10);
                                                      lVar9 = *unaff_x27;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar8 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar5 = lVar7;
                                                          thunk_FUN_02bb0e9c(plVar5,lVar7);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar6,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x28) = lVar6;
                                                        thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),
                                                                           lVar6);
                                                        lVar6 = *(long *)(unaff_x21 + 0x10);
                                                        *(int *)(unaff_x21 + 0x1c) =
                                                             *(int *)(unaff_x21 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                            plVar5 = (long *)(lVar6 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar4;
                                                  thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x19);
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
                                                  uVar3 = *unaff_x25;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar6 = thunk_FUN_02b79644(uVar3);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar8 = *unaff_x26;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar6,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


