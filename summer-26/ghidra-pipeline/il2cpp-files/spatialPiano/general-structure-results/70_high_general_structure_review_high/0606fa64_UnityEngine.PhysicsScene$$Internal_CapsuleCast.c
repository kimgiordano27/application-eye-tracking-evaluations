/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Internal_CapsuleCast
ENTRY_POINT: 0606fa64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_PhysicsScene__Internal_CapsuleCast
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
    }
    else {
      FUN_03abf904();
    }
    puVar2 = 
    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
    ;
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_03abf108(lVar4,*(undefined8 *)
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
    lVar5 = thunk_FUN_02f45270(*unaff_x28);
    FUN_06051fb4(lVar5,0);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)
               Method_System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_get_Value__;
      *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
      *(undefined8 *)(lVar5 + 0x18) = uVar6;
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *unaff_x20;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
          }
          else {
            FUN_03abf904(lVar4,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x22 + 0x28) = lVar4;
          lVar4 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            }
            else {
              FUN_03abf904();
            }
            lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                      );
            FUN_06051fbc(lVar4,0);
            puVar3 = 
            Method_UnityEngine_Android_AndroidAssetPacks_AssetPackManagerDownloadStatusCallback_<>c_<_ctor>b__2_0__
            ;
            puVar2 = Method_System_Xml_XmlUrlResolver_<GetEntityAsync>d__15_MoveNext__;
            if (lVar4 != 0) {
              uVar6 = *unaff_x29;
              *(undefined4 *)(lVar4 + 0x18) = 0;
              uVar9 = *(undefined8 *)puVar2;
              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar3;
              *(undefined8 *)(lVar4 + 0x20) = uVar9;
              lVar5 = thunk_FUN_02f45270(uVar6);
              FUN_03abf108(lVar5,*unaff_x27);
              if (lVar5 != 0) {
                lVar7 = *(long *)(lVar5 + 0x10);
                uVar6 = *(undefined8 *)
                         Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_ResolveType__
                ;
                lVar8 = *unaff_x19;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  }
                  else {
                    FUN_03abf904(lVar5,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  puVar2 = 
                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                  ;
                  *(long *)(lVar4 + 0x30) = lVar5;
                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                  FUN_03abf108(lVar5,*(undefined8 *)
                                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                              );
                  lVar7 = thunk_FUN_02f45270(*unaff_x28);
                  FUN_06051fb4(lVar7,0);
                  if (lVar7 != 0) {
                    uVar6 = *(undefined8 *)
                             Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_ReadObject__
                    ;
                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                    *(undefined8 *)(lVar7 + 0x18) = uVar6;
                    if (lVar5 != 0) {
                      lVar8 = *(long *)(lVar5 + 0x10);
                      lVar10 = *unaff_x20;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                        }
                        else {
                          FUN_03abf904(lVar5,lVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar4 + 0x28) = lVar5;
                        lVar5 = *(long *)(unaff_x21 + 0x10);
                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                        if (lVar5 != 0) {
                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                            *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                          }
                          else {
                            FUN_03abf904();
                          }
                          lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                          FUN_06051fbc(lVar4,0);
                          if (lVar4 != 0) {
                            uVar6 = *unaff_x29;
                            uVar9 = *(undefined8 *)
                                     Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                            ;
                            *(undefined8 *)(lVar4 + 0x10) =
                                 *(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                            ;
                            *(undefined8 *)(lVar4 + 0x20) = uVar9;
                            *(undefined4 *)(lVar4 + 0x18) = 3;
                            lVar5 = thunk_FUN_02f45270(uVar6);
                            FUN_03abf108(lVar5,*unaff_x27);
                            if (lVar5 != 0) {
                              lVar7 = *(long *)(lVar5 + 0x10);
                              uVar6 = *(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                              ;
                              lVar8 = *unaff_x19;
                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                              if (lVar7 != 0) {
                                uVar1 = *(uint *)(lVar5 + 0x18);
                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                }
                                else {
                                  FUN_03abf904(lVar5,uVar6,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                puVar2 = 
                                Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                ;
                                *(long *)(lVar4 + 0x30) = lVar5;
                                lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                FUN_03abf108(lVar5,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                            );
                                lVar7 = thunk_FUN_02f45270(*unaff_x28);
                                FUN_06051fb4(lVar7,0);
                                if (lVar7 != 0) {
                                  uVar6 = *(undefined8 *)
                                           Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                  ;
                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                  if (lVar5 != 0) {
                                    lVar8 = *(long *)(lVar5 + 0x10);
                                    lVar10 = *unaff_x20;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar8 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                                      }
                                      else {
                                        FUN_03abf904(lVar5,lVar7,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar4 + 0x28) = lVar5;
                                      lVar5 = *(long *)(unaff_x21 + 0x10);
                                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                      if (lVar5 != 0) {
                                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                          *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                                        }
                                        else {
                                          FUN_03abf904();
                                        }
                                        lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                        FUN_06051fbc(lVar4,0);
                                        if (lVar4 != 0) {
                                          uVar6 = *unaff_x29;
                                          uVar9 = *(undefined8 *)
                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                          ;
                                          *(undefined8 *)(lVar4 + 0x10) =
                                               *(undefined8 *)PTR_DAT_067de050;
                                          *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                          *(undefined4 *)(lVar4 + 0x18) = 3;
                                          lVar5 = thunk_FUN_02f45270(uVar6);
                                          FUN_03abf108(lVar5,*unaff_x27);
                                          if (lVar5 != 0) {
                                            lVar7 = *(long *)(lVar5 + 0x10);
                                            uVar6 = *(undefined8 *)
                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                            ;
                                            lVar8 = *unaff_x19;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            if (lVar7 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar6;
                                              }
                                              else {
                                                FUN_03abf904(lVar5,uVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              puVar2 = 
                                              Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                              ;
                                              *(long *)(lVar4 + 0x30) = lVar5;
                                              lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                              FUN_03abf108(lVar5,*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                              lVar7 = thunk_FUN_02f45270(*unaff_x28);
                                              FUN_06051fb4(lVar7,0);
                                              if (lVar7 != 0) {
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                ;
                                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                if (lVar5 != 0) {
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar10 = *unaff_x20;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar4,0);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *unaff_x29;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02f45270(uVar6);
                                                  FUN_03abf108(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar8 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_03abf108(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x28);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar5,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar4;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    FUN_06051d9c(in_stack_00000000,in_stack_00000008
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


