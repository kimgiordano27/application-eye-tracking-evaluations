/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$OverlapCapsuleNonAlloc_Internal
ENTRY_POINT: 0606fbb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void UnityEngine_PhysicsScene__OverlapCapsuleNonAlloc_Internal(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  lVar4 = thunk_FUN_02f45270(**(undefined8 **)(param_1 + 0xc80));
  FUN_06051fbc(lVar4,0);
  puVar3 = 
  Method_UnityEngine_Android_AndroidAssetPacks_AssetPackManagerDownloadStatusCallback_<>c_<_ctor>b__2_0__
  ;
  puVar2 = Method_System_Xml_XmlUrlResolver_<GetEntityAsync>d__15_MoveNext__;
  if (lVar4 != 0) {
    uVar5 = *unaff_x29;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    uVar8 = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar3;
    *(undefined8 *)(lVar4 + 0x20) = uVar8;
    lVar6 = thunk_FUN_02f45270(uVar5);
    FUN_03abf108(lVar6,*unaff_x27);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      uVar5 = *(undefined8 *)
               Method_System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_ResolveType__
      ;
      lVar9 = *unaff_x19;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        }
        else {
          FUN_03abf904(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        puVar2 = 
        Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
        ;
        *(long *)(lVar4 + 0x30) = lVar6;
        lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_03abf108(lVar6,*(undefined8 *)
                            Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__)
        ;
        lVar7 = thunk_FUN_02f45270(*unaff_x28);
        FUN_06051fb4(lVar7,0);
        if (lVar7 != 0) {
          uVar5 = *(undefined8 *)
                   Method_System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_ReadObject__
          ;
          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
          *(undefined8 *)(lVar7 + 0x18) = uVar5;
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar10 = *unaff_x20;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
              }
              else {
                FUN_03abf904(lVar6,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar4 + 0x28) = lVar6;
              lVar6 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                }
                else {
                  FUN_03abf904();
                }
                lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                            Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                          );
                FUN_06051fbc(lVar4,0);
                if (lVar4 != 0) {
                  uVar5 = *unaff_x29;
                  uVar8 = *(undefined8 *)
                           Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__;
                  *(undefined8 *)(lVar4 + 0x10) =
                       *(undefined8 *)
                        Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__;
                  *(undefined8 *)(lVar4 + 0x20) = uVar8;
                  *(undefined4 *)(lVar4 + 0x18) = 3;
                  lVar6 = thunk_FUN_02f45270(uVar5);
                  FUN_03abf108(lVar6,*unaff_x27);
                  if (lVar6 != 0) {
                    lVar7 = *(long *)(lVar6 + 0x10);
                    uVar5 = *(undefined8 *)
                             Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__;
                    lVar9 = *unaff_x19;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                      }
                      else {
                        FUN_03abf904(lVar6,uVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar2 = 
                      Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                      ;
                      *(long *)(lVar4 + 0x30) = lVar6;
                      lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                      FUN_03abf108(lVar6,*(undefined8 *)
                                          Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                  );
                      lVar7 = thunk_FUN_02f45270(*unaff_x28);
                      FUN_06051fb4(lVar7,0);
                      if (lVar7 != 0) {
                        uVar5 = *(undefined8 *)
                                 Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                        ;
                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                        *(undefined8 *)(lVar7 + 0x18) = uVar5;
                        if (lVar6 != 0) {
                          lVar9 = *(long *)(lVar6 + 0x10);
                          lVar10 = *unaff_x20;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar9 != 0) {
                            uVar1 = *(uint *)(lVar6 + 0x18);
                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                              *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                            }
                            else {
                              FUN_03abf904(lVar6,lVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar4 + 0x28) = lVar6;
                            lVar6 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
                              }
                              else {
                                FUN_03abf904();
                              }
                              lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                              FUN_06051fbc(lVar4,0);
                              if (lVar4 != 0) {
                                uVar5 = *unaff_x29;
                                uVar8 = *(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                ;
                                *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_067de050;
                                *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                *(undefined4 *)(lVar4 + 0x18) = 3;
                                lVar6 = thunk_FUN_02f45270(uVar5);
                                FUN_03abf108(lVar6,*unaff_x27);
                                if (lVar6 != 0) {
                                  lVar7 = *(long *)(lVar6 + 0x10);
                                  uVar5 = *(undefined8 *)
                                           Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__;
                                  lVar9 = *unaff_x19;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar7 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                    }
                                    else {
                                      FUN_03abf904(lVar6,uVar5,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    puVar2 = 
                                    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                    ;
                                    *(long *)(lVar4 + 0x30) = lVar6;
                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                    FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                );
                                    lVar7 = thunk_FUN_02f45270(*unaff_x28);
                                    FUN_06051fb4(lVar7,0);
                                    if (lVar7 != 0) {
                                      uVar5 = *(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                      ;
                                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                      *(undefined8 *)(lVar7 + 0x18) = uVar5;
                                      if (lVar6 != 0) {
                                        lVar9 = *(long *)(lVar6 + 0x10);
                                        lVar10 = *unaff_x20;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        if (lVar9 != 0) {
                                          uVar1 = *(uint *)(lVar6 + 0x18);
                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                            *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                                          }
                                          else {
                                            FUN_03abf904(lVar6,lVar7,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar4 + 0x28) = lVar6;
                                          lVar6 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar6 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4
                                              ;
                                            }
                                            else {
                                              FUN_03abf904();
                                            }
                                            lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                            FUN_06051fbc(lVar4,0);
                                            if (lVar4 != 0) {
                                              uVar5 = *unaff_x29;
                                              uVar8 = *(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                              ;
                                              *(undefined8 *)(lVar4 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                              ;
                                              *(undefined8 *)(lVar4 + 0x20) = uVar8;
                                              *(undefined4 *)(lVar4 + 0x18) = 4;
                                              lVar6 = thunk_FUN_02f45270(uVar5);
                                              FUN_03abf108(lVar6,*unaff_x27);
                                              if (lVar6 != 0) {
                                                lVar7 = *(long *)(lVar6 + 0x10);
                                                uVar5 = *(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                ;
                                                lVar9 = *unaff_x19;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar7 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                                  }
                                                  else {
                                                    FUN_03abf904(lVar6,uVar5,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar4 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x28);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar10 = *unaff_x20;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


