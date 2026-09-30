/*
FUNCTION_NAME: FUN_05f5d64c
ENTRY_POINT: 05f5d64c
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05f5d64c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar5 = Oculus_Interaction_DeprecatedPrefab_TypeInfo;
  puVar3 = Firebase_DependencyStatus_TypeInfo;
  puVar2 = PTR_DAT_065c9440;
  puVar1 = PTR_DAT_065c9438;
  if ((DAT_06a819f5 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Rendering_Universal_DepthOfFieldModeParameter_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9448);
    AkMIDIEventCallbackInfo__get_byProgramNum(Oculus_Interaction_DeprecatedPrefab_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9440);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Firebase_DependencyStatus_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9438);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_DepthRaycastResult_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Rendering_DepthState_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Func<HttpRequestMessage,_X509Certificate2,_X509Chain,_SslPolicyErrors,_bool>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Security_Cryptography_DerSequenceReader_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_ComponentModel_DescriptionAttribute_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Net_Http_Headers_TryParseListDelegate<WarningHeaderValue>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<string,_int,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_Reflection_DescriptorDeclaration_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_Reflection_DescriptorPool_TypeInfo);
    DAT_06a819f5 = 1;
  }
  lVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_03b31408(lVar9,*(undefined8 *)puVar5);
  lVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (lVar10,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_065c9448;
  if (lVar10 != 0) {
    lVar17 = *(long *)(lVar10 + 0x10);
    uVar11 = *(undefined8 *)Google_Protobuf_Reflection_DescriptorDeclaration_TypeInfo;
    lVar15 = *(long *)PTR_DAT_065c9448;
    iVar12 = *(int *)(lVar10 + 0x1c) + 1;
    *(int *)(lVar10 + 0x1c) = iVar12;
    puVar5 = System_ComponentModel_DescriptionAttribute_TypeInfo;
    if (lVar17 != 0) {
      uVar13 = *(uint *)(lVar10 + 0x18);
      if (uVar13 < *(uint *)(lVar17 + 0x18)) {
        uVar14 = uVar13 + 1;
        *(uint *)(lVar10 + 0x18) = uVar14;
        *(undefined8 *)(lVar17 + (long)(int)uVar13 * 8 + 0x20) = uVar11;
      }
      else {
        FUN_039683cc(lVar10,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        uVar14 = *(uint *)(lVar10 + 0x18);
        iVar12 = *(int *)(lVar10 + 0x1c);
      }
      uVar11 = *(undefined8 *)puVar5;
      lVar15 = *(long *)(lVar10 + 0x10);
      lVar17 = *(long *)puVar3;
      iVar12 = iVar12 + 1;
      *(int *)(lVar10 + 0x1c) = iVar12;
      puVar5 = Google_Protobuf_Reflection_DescriptorPool_TypeInfo;
      if (lVar15 != 0) {
        if (uVar14 < *(uint *)(lVar15 + 0x18)) {
          uVar13 = uVar14 + 1;
          *(uint *)(lVar10 + 0x18) = uVar13;
          *(undefined8 *)(lVar15 + (long)(int)uVar14 * 8 + 0x20) = uVar11;
        }
        else {
          FUN_039683cc(lVar10,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          uVar13 = *(uint *)(lVar10 + 0x18);
          iVar12 = *(int *)(lVar10 + 0x1c);
        }
        uVar11 = *(undefined8 *)puVar5;
        lVar17 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)puVar3;
        iVar12 = iVar12 + 1;
        *(int *)(lVar10 + 0x1c) = iVar12;
        puVar5 = System_Security_Cryptography_DerSequenceReader_TypeInfo;
        if (lVar17 != 0) {
          if (uVar13 < *(uint *)(lVar17 + 0x18)) {
            uVar14 = uVar13 + 1;
            *(uint *)(lVar10 + 0x18) = uVar14;
            *(undefined8 *)(lVar17 + (long)(int)uVar13 * 8 + 0x20) = uVar11;
          }
          else {
            FUN_039683cc(lVar10,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            uVar14 = *(uint *)(lVar10 + 0x18);
            iVar12 = *(int *)(lVar10 + 0x1c);
          }
          uVar11 = *(undefined8 *)puVar5;
          lVar17 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)puVar3;
          iVar12 = iVar12 + 1;
          *(int *)(lVar10 + 0x1c) = iVar12;
          puVar5 = UnityEngine_Rendering_DepthState_TypeInfo;
          if (lVar17 != 0) {
            if (uVar14 < *(uint *)(lVar17 + 0x18)) {
              uVar13 = uVar14 + 1;
              *(uint *)(lVar10 + 0x18) = uVar13;
              *(undefined8 *)(lVar17 + (long)(int)uVar14 * 8 + 0x20) = uVar11;
            }
            else {
              FUN_039683cc(lVar10,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              uVar13 = *(uint *)(lVar10 + 0x18);
              iVar12 = *(int *)(lVar10 + 0x1c);
            }
            uVar11 = *(undefined8 *)puVar5;
            lVar15 = *(long *)(lVar10 + 0x10);
            lVar17 = *(long *)puVar3;
            *(int *)(lVar10 + 0x1c) = iVar12 + 1;
            puVar8 = Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo;
            puVar5 = UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_TypeInfo;
            if (lVar15 != 0) {
              if (uVar13 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar13 + 1;
                *(undefined8 *)(lVar15 + (long)(int)uVar13 * 8 + 0x20) = uVar11;
              }
              else {
                FUN_039683cc(lVar10,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar15 = thunk_FUN_02cea894(*(undefined8 *)puVar8);
              FUN_03920118(lVar15,*(undefined8 *)puVar5);
              puVar6 = UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo;
              if (lVar15 != 0) {
                lVar17 = *(long *)(lVar15 + 0x10);
                lVar16 = *(long *)
                          UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar17 != 0) {
                  uVar13 = *(uint *)(lVar15 + 0x18);
                  if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) = 0;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  }
                  else {
                    FUN_03920910(lVar15,0,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar17 = *(long *)(lVar15 + 0x10);
                    lVar16 = *(long *)puVar6;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_05f5df3c;
                  }
                  uVar13 = *(uint *)(lVar15 + 0x18);
                  if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) = 1;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  }
                  else {
                    FUN_03920910(lVar15,1,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar17 = *(long *)(lVar15 + 0x10);
                    lVar16 = *(long *)puVar6;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_05f5df3c;
                  }
                  uVar13 = *(uint *)(lVar15 + 0x18);
                  if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) = 2;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  }
                  else {
                    FUN_03920910(lVar15,2,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar17 = *(long *)(lVar15 + 0x10);
                    lVar16 = *(long *)puVar6;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_05f5df3c;
                  }
                  uVar13 = *(uint *)(lVar15 + 0x18);
                  if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) = 3;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  }
                  else {
                    FUN_03920910(lVar15,3,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar17 = *(long *)(lVar15 + 0x10);
                    lVar16 = *(long *)puVar6;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_05f5df3c;
                  }
                  uVar13 = *(uint *)(lVar15 + 0x18);
                  if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) = 6;
                  }
                  else {
                    FUN_03920910(lVar15,6,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                  }
                  puVar7 = UnityEngine_Rendering_Universal_DepthOfFieldModeParameter_TypeInfo;
                  if (lVar9 != 0) {
                    lVar17 = *(long *)(lVar9 + 0x10);
                    lVar16 = *(long *)
                              UnityEngine_Rendering_Universal_DepthOfFieldModeParameter_TypeInfo;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar17 != 0) {
                      uVar13 = *(uint *)(lVar9 + 0x18);
                      if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                        lVar17 = lVar17 + (long)(int)uVar13 * 0x10;
                        *(uint *)(lVar9 + 0x18) = uVar13 + 1;
                        *(long *)(lVar17 + 0x20) = lVar10;
                        *(long *)(lVar17 + 0x28) = lVar15;
                      }
                      else {
                        FUN_03b31c14(lVar9,lVar10,lVar15,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
                      System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                (lVar10,*(undefined8 *)puVar2);
                      if (lVar10 != 0) {
                        lVar17 = *(long *)(lVar10 + 0x10);
                        lVar15 = *(long *)puVar3;
                        uVar11 = *(undefined8 *)
                                  System_Func<HttpRequestMessage,_X509Certificate2,_X509Chain,_SslPolicyErrors,_bool>_TypeInfo
                        ;
                        iVar12 = *(int *)(lVar10 + 0x1c) + 1;
                        *(int *)(lVar10 + 0x1c) = iVar12;
                        puVar4 = 
                        System_Func<string,_int,_AsyncCallback,_object,_IAsyncResult>_TypeInfo;
                        if (lVar17 != 0) {
                          uVar13 = *(uint *)(lVar10 + 0x18);
                          if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                            uVar14 = uVar13 + 1;
                            *(uint *)(lVar10 + 0x18) = uVar14;
                            *(undefined8 *)(lVar17 + (long)(int)uVar13 * 8 + 0x20) = uVar11;
                          }
                          else {
                            FUN_039683cc(lVar10,uVar11,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                            uVar14 = *(uint *)(lVar10 + 0x18);
                            iVar12 = *(int *)(lVar10 + 0x1c);
                          }
                          uVar11 = *(undefined8 *)puVar4;
                          lVar15 = *(long *)(lVar10 + 0x10);
                          lVar17 = *(long *)puVar3;
                          *(int *)(lVar10 + 0x1c) = iVar12 + 1;
                          if (lVar15 != 0) {
                            if (uVar14 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar14 + 1;
                              *(undefined8 *)(lVar15 + (long)(int)uVar14 * 8 + 0x20) = uVar11;
                            }
                            else {
                              FUN_039683cc(lVar10,uVar11,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar15 = thunk_FUN_02cea894(*(undefined8 *)puVar8);
                            FUN_03920118(lVar15,*(undefined8 *)puVar5);
                            if (lVar15 != 0) {
                              lVar17 = *(long *)(lVar15 + 0x10);
                              lVar16 = *(long *)puVar6;
                              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                              if (lVar17 != 0) {
                                uVar13 = *(uint *)(lVar15 + 0x18);
                                if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                                  *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                                  *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) = 4;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                }
                                else {
                                  FUN_03920910(lVar15,4,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                         + 0x70));
                                  lVar17 = *(long *)(lVar15 + 0x10);
                                  lVar16 = *(long *)puVar6;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar17 == 0) goto LAB_05f5df3c;
                                }
                                uVar13 = *(uint *)(lVar15 + 0x18);
                                if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                                  *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                                  *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) = 5;
                                }
                                else {
                                  FUN_03920910(lVar15,5,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                         + 0x70));
                                }
                                lVar17 = *(long *)(lVar9 + 0x10);
                                lVar16 = *(long *)puVar7;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar17 != 0) {
                                  uVar13 = *(uint *)(lVar9 + 0x18);
                                  if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                                    lVar17 = lVar17 + (long)(int)uVar13 * 0x10;
                                    *(uint *)(lVar9 + 0x18) = uVar13 + 1;
                                    *(long *)(lVar17 + 0x20) = lVar10;
                                    *(long *)(lVar17 + 0x28) = lVar15;
                                  }
                                  else {
                                    FUN_03b31c14(lVar9,lVar10,lVar15,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                            (lVar10,*(undefined8 *)puVar2);
                                  if (lVar10 != 0) {
                                    lVar17 = *(long *)puVar3;
                                    uVar11 = *(undefined8 *)
                                              System_Net_Http_Headers_TryParseListDelegate<WarningHeaderValue>_TypeInfo
                                    ;
                                    lVar15 = *(long *)(lVar10 + 0x10);
                                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                    if (lVar15 != 0) {
                                      uVar13 = *(uint *)(lVar10 + 0x18);
                                      if (uVar13 < *(uint *)(lVar15 + 0x18)) {
                                        *(uint *)(lVar10 + 0x18) = uVar13 + 1;
                                        *(undefined8 *)(lVar15 + (long)(int)uVar13 * 8 + 0x20) =
                                             uVar11;
                                      }
                                      else {
                                        FUN_039683cc(lVar10,uVar11,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar15 = thunk_FUN_02cea894(*(undefined8 *)puVar8);
                                      FUN_03920118(lVar15,*(undefined8 *)puVar5);
                                      if (lVar15 != 0) {
                                        lVar17 = *(long *)(lVar15 + 0x10);
                                        lVar16 = *(long *)puVar6;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar17 != 0) {
                                          uVar13 = *(uint *)(lVar15 + 0x18);
                                          if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                                            *(undefined4 *)(lVar17 + (long)(int)uVar13 * 4 + 0x20) =
                                                 10;
                                          }
                                          else {
                                            FUN_03920910(lVar15,10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar17 = *(long *)(lVar9 + 0x10);
                                          lVar16 = *(long *)puVar7;
                                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                          puVar1 = Meta_XR_DepthRaycastResult_TypeInfo;
                                          if (lVar17 != 0) {
                                            uVar13 = *(uint *)(lVar9 + 0x18);
                                            if (uVar13 < *(uint *)(lVar17 + 0x18)) {
                                              lVar17 = lVar17 + (long)(int)uVar13 * 0x10;
                                              *(uint *)(lVar9 + 0x18) = uVar13 + 1;
                                              *(long *)(lVar17 + 0x20) = lVar10;
                                              *(long *)(lVar17 + 0x28) = lVar15;
                                            }
                                            else {
                                              FUN_03b31c14(lVar9,lVar10,lVar15,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            **(long **)(*(long *)puVar1 + 0xb8) = lVar9;
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
LAB_05f5df3c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


