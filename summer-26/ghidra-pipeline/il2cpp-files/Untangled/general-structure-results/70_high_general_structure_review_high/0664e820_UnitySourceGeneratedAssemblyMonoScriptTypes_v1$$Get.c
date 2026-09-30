/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
ENTRY_POINT: 0664e820
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x25;
  uint *puVar18;
  
  puVar8 = Language_Lua_LuaFunctionCallException_TypeInfo;
  puVar7 = PlayFab_ClientModels_LoginWithIOSDeviceIDRequest_TypeInfo;
  puVar6 = System_Xml_Linq_LineInfoEndElementAnnotation_TypeInfo;
  puVar3 = RootMotion_FinalIK_LimbIK_TypeInfo;
  puVar5 = UnityEngine_LightShadows_TypeInfo;
  puVar4 = PTR_DAT_06d5eef0;
  puVar2 = PTR_DAT_06d02130;
  *(undefined8 *)(unaff_x25 + 0x10) = *param_1;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x25 + 0x18) = *(undefined8 *)puVar7;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)puVar8;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x25 + 0x38) = *(undefined8 *)puVar4;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x25 + 0x40) = *(undefined8 *)puVar2;
  thunk_FUN_02f411dc();
  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
  FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
  FUN_05645a04(lVar10,0);
  puVar2 = PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x10) = 0x164;
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc();
    puVar2 = UnityEngine_LightType_TypeInfo;
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)UnityEngine_LightType_TypeInfo;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar10;
          thunk_FUN_02f411dc(plVar11,lVar10);
        }
        else {
          FUN_03fd0c9c(lVar9,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
        FUN_05645a04(lVar10,0);
        puVar4 = PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + 0x10) = 0x264;
          *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar4;
          thunk_FUN_02f411dc();
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar5 = UnityEngine_InputSystem_LinearAccelerationSensor_TypeInfo;
          puVar4 = System_Data_LikeNode_TypeInfo;
          puVar2 = UnityEngine_Rendering_LightShadowResolution_TypeInfo;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *plVar11 = lVar10;
              thunk_FUN_02f411dc(plVar11,lVar10);
            }
            else {
              FUN_03fd0c9c(lVar9,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x25 + 0x20) = lVar9;
            thunk_FUN_02f411dc((long *)(unaff_x25 + 0x20),lVar9);
            lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
            FUN_03fd0468(lVar9,*(undefined8 *)puVar4);
            lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
            FUN_05645a04(lVar10,0);
            puVar3 = PixelCrushers_DialogueSystem_Localization_TypeInfo;
            puVar5 = PTR_DAT_06d02348;
            puVar4 = PTR_DAT_06d02340;
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_DAT_06d5e5d0;
              thunk_FUN_02f411dc();
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar3;
              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
              *(undefined4 *)(lVar10 + 0x18) = 2;
              lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
              FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
              puVar3 = PTR_DAT_06d02330;
              if (lVar13 != 0) {
                uVar12 = *(undefined8 *)PTR_DAT_06d03ba0;
                lVar14 = *(long *)(lVar13 + 0x10);
                lVar15 = *(long *)PTR_DAT_06d02330;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                    thunk_FUN_02f411dc();
                  }
                  else {
                    FUN_03fd0c9c(lVar13,uVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar10 + 0x30) = lVar13;
                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13);
                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                               System_Net_Sockets_LingerOption_TypeInfo);
                  FUN_03fd0468(lVar13,*(undefined8 *)System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)
                                               UnityEngine_InputSystem_LightSensor_TypeInfo);
                  FUN_05645a04(lVar14,0);
                  if (lVar14 != 0) {
                    *(undefined8 *)(lVar14 + 0x18) =
                         *(undefined8 *)UnityEngine_Rendering_LocalKeywordSpace_TypeInfo;
                    thunk_FUN_02f411dc();
                    *(undefined8 *)(lVar14 + 0x10) =
                         *(undefined8 *)Language_Lua_LuaFunctionCallException_TypeInfo;
                    thunk_FUN_02f411dc();
                    if (lVar13 != 0) {
                      lVar15 = *(long *)(lVar13 + 0x10);
                      lVar16 = *(long *)UnityEngine_LightmapData_TypeInfo;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar13 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                          plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar11 = lVar14;
                          thunk_FUN_02f411dc(plVar11,lVar14);
                        }
                        else {
                          FUN_03fd0c9c(lVar13,lVar14,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar10 + 0x28) = lVar13;
                        thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13);
                        if (lVar9 != 0) {
                          lVar13 = *(long *)
                                    UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                          ;
                          piVar17 = (int *)(lVar9 + 0x1c);
                          *piVar17 = *piVar17 + 1;
                          lVar14 = *(long *)(lVar9 + 0x10);
                          puVar18 = (uint *)(lVar9 + 0x18);
                          uVar1 = *puVar18;
                          if (lVar14 != 0) {
                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                              *puVar18 = uVar1 + 1;
                              plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar11 = lVar10;
                              thunk_FUN_02f411dc(plVar11,lVar10);
                            }
                            else {
                              FUN_03fd0c9c(lVar9,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                            FUN_05645a04(lVar10,0);
                            puVar2 = PTR_DAT_06d03bc0;
                            if (lVar10 != 0) {
                              *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_DAT_06d8fb88;
                              thunk_FUN_02f411dc();
                              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
                              *(undefined4 *)(lVar10 + 0x18) = 1;
                              lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                              FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                              if (lVar13 != 0) {
                                uVar12 = *(undefined8 *)puVar2;
                                lVar14 = *(long *)(lVar13 + 0x10);
                                lVar15 = *(long *)puVar3;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar14 != 0) {
                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                    thunk_FUN_02f411dc();
                                  }
                                  else {
                                    FUN_03fd0c9c(lVar13,uVar12,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar10 + 0x30) = lVar13;
                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13);
                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                  FUN_03fd0468(lVar13,*(undefined8 *)
                                                       System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                  FUN_05645a04(lVar14,0);
                                  puVar2 = System_LocalDataStoreMgr_TypeInfo;
                                  if (lVar14 != 0) {
                                    *(undefined8 *)(lVar14 + 0x18) =
                                         *(undefined8 *)System_LocalDataStoreMgr_TypeInfo;
                                    thunk_FUN_02f411dc();
                                    *(undefined8 *)(lVar14 + 0x10) =
                                         *(undefined8 *)
                                          Language_Lua_LuaFunctionCallException_TypeInfo;
                                    thunk_FUN_02f411dc();
                                    if (lVar13 != 0) {
                                      lVar15 = *(long *)(lVar13 + 0x10);
                                      lVar16 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                      if (lVar15 != 0) {
                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                          plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar11 = lVar14;
                                          thunk_FUN_02f411dc(plVar11,lVar14);
                                        }
                                        else {
                                          FUN_03fd0c9c(lVar13,lVar14,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar10 + 0x28) = lVar13;
                                        thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13);
                                        lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                        ;
                                        *piVar17 = *piVar17 + 1;
                                        lVar14 = *(long *)(lVar9 + 0x10);
                                        if (lVar14 != 0) {
                                          uVar1 = *puVar18;
                                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                            *puVar18 = uVar1 + 1;
                                            plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar11 = lVar10;
                                            thunk_FUN_02f411dc(plVar11,lVar10);
                                          }
                                          else {
                                            FUN_03fd0c9c(lVar9,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_Rendering_LightShadowResolution_TypeInfo
                                                  );
                                          FUN_05645a04(lVar9,0);
                                          puVar6 = 
                                          UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo;
                                          if (lVar9 != 0) {
                                            *(undefined8 *)(lVar9 + 0x10) =
                                                 *(undefined8 *)PTR_DAT_06d8fb68;
                                            thunk_FUN_02f411dc();
                                            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar6;
                                            thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x20));
                                            *(undefined4 *)(lVar9 + 0x18) = 0;
                                            lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                                            FUN_03fd0468(lVar10,*(undefined8 *)puVar4);
                                            if (lVar10 != 0) {
                                              lVar14 = *(long *)puVar3;
                                              uVar12 = *(undefined8 *)
                                                        Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                                              lVar13 = *(long *)(lVar10 + 0x10);
                                              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                              if (lVar13 != 0) {
                                                uVar1 = *(uint *)(lVar10 + 0x18);
                                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                                  thunk_FUN_02f411dc();
                                                }
                                                else {
                                                  FUN_03fd0c9c(lVar10,uVar12,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar9 + 0x30) = lVar10;
                                                thunk_FUN_02f411dc((long *)(lVar9 + 0x30),lVar10);
                                                lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                FUN_03fd0468(lVar9,*(undefined8 *)
                                                                                                                                        
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                          
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                FUN_05645a04(lVar10,0);
                                                if (lVar10 != 0) {
                                                  *(undefined8 *)(lVar10 + 0x18) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Language_Lua_LuaFunctionCallException_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    FUN_06932054(*(undefined8 *)(lVar9 + 0x10));
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


