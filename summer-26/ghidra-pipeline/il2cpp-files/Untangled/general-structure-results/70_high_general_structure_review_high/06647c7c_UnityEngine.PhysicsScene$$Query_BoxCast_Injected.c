/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Query_BoxCast_Injected
ENTRY_POINT: 06647c7c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_5;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_PhysicsScene__Query_BoxCast_Injected(undefined8 *param_1)

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
  long lVar17;
  long unaff_x19;
  
  puVar8 = System_Xml_Schema_LocatedActiveAxis_TypeInfo;
  puVar6 = UnityEngine_Rendering_LocalKeyword_TypeInfo;
  puVar7 = System_LocalDataStore_TypeInfo;
  puVar3 = System_Xml_Linq_LineInfoEndElementAnnotation_TypeInfo;
  puVar5 = RootMotion_FinalIK_LimbIK_TypeInfo;
  puVar4 = UnityEngine_LightShadows_TypeInfo;
  puVar2 = PTR_DAT_06d02130;
  *(undefined8 *)(unaff_x19 + 0x10) = *param_1;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)puVar7;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)puVar8;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)puVar6;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)puVar2;
  thunk_FUN_02f411dc();
  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
  FUN_05645a04(lVar10,0);
  puVar2 = PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x10) = 0x164;
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc();
    puVar2 = UnityEngine_LightType_TypeInfo;
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar15 = *(long *)UnityEngine_LightType_TypeInfo;
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
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
        FUN_05645a04(lVar10,0);
        puVar4 = PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + 0x10) = 0x264;
          *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar4;
          thunk_FUN_02f411dc();
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar15 = *(long *)puVar2;
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
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x19 + 0x20) = lVar9;
            thunk_FUN_02f411dc((long *)(unaff_x19 + 0x20),lVar9);
            lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
            FUN_03fd0468(lVar9,*(undefined8 *)puVar4);
            lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
            FUN_05645a04(lVar10,0);
            puVar3 = System_Linq_Expressions_Interpreter_LocalVariable_TypeInfo;
            puVar5 = PTR_DAT_06d02348;
            puVar4 = PTR_DAT_06d02340;
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_DAT_06d8fbb8;
              thunk_FUN_02f411dc();
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar3;
              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
              *(undefined4 *)(lVar10 + 0x18) = 0;
              lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
              FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
              puVar3 = PTR_DAT_06d02330;
              if (lVar13 != 0) {
                uVar12 = *(undefined8 *)PTR_DAT_06d03bb0;
                lVar15 = *(long *)(lVar13 + 0x10);
                lVar16 = *(long *)PTR_DAT_06d02330;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                puVar7 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                if (lVar15 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                    thunk_FUN_02f411dc();
                  }
                  else {
                    FUN_03fd0c9c(lVar13,uVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar10 + 0x30) = lVar13;
                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13);
                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                               System_Net_Sockets_LingerOption_TypeInfo);
                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                               UnityEngine_InputSystem_LightSensor_TypeInfo);
                  FUN_05645a04(lVar15,0);
                  if (lVar15 != 0) {
                    *(undefined8 *)(lVar15 + 0x18) =
                         *(undefined8 *)PixelCrushers_DialogueSystem_Location_TypeInfo;
                    thunk_FUN_02f411dc();
                    *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)puVar8;
                    thunk_FUN_02f411dc();
                    lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                    FUN_03fd0468(lVar16,*(undefined8 *)puVar4);
                    if (lVar16 != 0) {
                      lVar17 = *(long *)puVar3;
                      uVar12 = *(undefined8 *)
                                PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
                      lVar14 = *(long *)(lVar16 + 0x10);
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar16 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                          thunk_FUN_02f411dc();
                        }
                        else {
                          FUN_03fd0c9c(lVar16,uVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar15 + 0x20) = lVar16;
                        thunk_FUN_02f411dc((long *)(lVar15 + 0x20),lVar16);
                        if (lVar13 != 0) {
                          lVar16 = *(long *)(lVar13 + 0x10);
                          lVar14 = *(long *)UnityEngine_LightmapData_TypeInfo;
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar16 != 0) {
                            uVar1 = *(uint *)(lVar13 + 0x18);
                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                              plVar11 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar11 = lVar15;
                              thunk_FUN_02f411dc(plVar11,lVar15);
                            }
                            else {
                              FUN_03fd0c9c(lVar13,lVar15,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                            FUN_05645a04(lVar15,0);
                            if (lVar15 != 0) {
                              *(undefined8 *)(lVar15 + 0x18) =
                                   *(undefined8 *)Photon_Voice_LocalVoiceAudioFloat_TypeInfo;
                              thunk_FUN_02f411dc();
                              *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)puVar8;
                              thunk_FUN_02f411dc();
                              lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                              FUN_03fd0468(lVar16,*(undefined8 *)puVar4);
                              if (lVar16 != 0) {
                                lVar17 = *(long *)puVar3;
                                uVar12 = *(undefined8 *)
                                          PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo
                                ;
                                lVar14 = *(long *)(lVar16 + 0x10);
                                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                                if (lVar14 != 0) {
                                  uVar1 = *(uint *)(lVar16 + 0x18);
                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                    *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                    thunk_FUN_02f411dc();
                                  }
                                  else {
                                    FUN_03fd0c9c(lVar16,uVar12,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar15 + 0x20) = lVar16;
                                  thunk_FUN_02f411dc((long *)(lVar15 + 0x20),lVar16);
                                  lVar16 = *(long *)(lVar13 + 0x10);
                                  lVar14 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                  puVar7 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                  if (lVar16 != 0) {
                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar11 = lVar15;
                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar13,lVar15,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar10 + 0x28) = lVar13;
                                    thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13);
                                    if (lVar9 != 0) {
                                      lVar13 = *(long *)(lVar9 + 0x10);
                                      lVar15 = *(long *)
                                                UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                      ;
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
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                        FUN_05645a04(lVar10,0);
                                        puVar6 = 
                                        UnityEngine_Rendering_Universal_LocalMinima_TypeInfo;
                                        if (lVar10 != 0) {
                                          *(undefined8 *)(lVar10 + 0x10) =
                                               *(undefined8 *)PTR_DAT_06d8fbc0;
                                          thunk_FUN_02f411dc();
                                          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar6;
                                          thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
                                          *(undefined4 *)(lVar10 + 0x18) = 0;
                                          lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                                          FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                          if (lVar13 != 0) {
                                            lVar16 = *(long *)puVar3;
                                            uVar12 = *(undefined8 *)PTR_DAT_06d03be8;
                                            lVar15 = *(long *)(lVar13 + 0x10);
                                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                            if (lVar15 != 0) {
                                              uVar1 = *(uint *)(lVar13 + 0x18);
                                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)
                                                 (lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                                thunk_FUN_02f411dc();
                                              }
                                              else {
                                                FUN_03fd0c9c(lVar13,uVar12,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar10 + 0x30) = lVar13;
                                              thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13);
                                              lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                      
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                              FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                              lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                      
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                              FUN_05645a04(lVar15,0);
                                              if (lVar15 != 0) {
                                                *(undefined8 *)(lVar15 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  System_ComponentModel_LocalizableAttribute_TypeInfo
                                                ;
                                                thunk_FUN_02f411dc();
                                                *(undefined8 *)(lVar15 + 0x10) =
                                                     *(undefined8 *)puVar8;
                                                thunk_FUN_02f411dc();
                                                lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
                                                FUN_03fd0468(lVar16,*(undefined8 *)puVar4);
                                                if (lVar16 != 0) {
                                                  lVar17 = *(long *)puVar3;
                                                  uVar12 = *(undefined8 *)
                                                                                                                        
                                                  PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar16 + 0x10);
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar16,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar15 + 0x20) = lVar16;
                                                  thunk_FUN_02f411dc((long *)(lVar15 + 0x20),lVar16)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_LocalVariables_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02f411dc();
                                                  lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03fd0468(lVar16,*(undefined8 *)puVar4);
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)puVar3;
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar16 + 0x10);
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar16,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar15 + 0x20) = lVar16;
                                                  thunk_FUN_02f411dc((long *)(lVar15 + 0x20),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar7 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = PTR_DAT_06d10538;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d39cb8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)puVar3;
                                                      uVar12 = *(undefined8 *)PTR_DAT_06d03bd0;
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar12;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar13,uVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreHolder_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = PTR_DAT_06d03bc0;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb88;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 1;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      uVar12 = *(undefined8 *)puVar6;
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      lVar16 = *(long *)puVar3;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar12;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar13,uVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  puVar7 = System_LocalDataStoreMgr_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreMgr_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = 
                                                  UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb68;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)puVar3;
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar7 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = PTR_DAT_06d03bc8;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d04858;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 1;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      uVar12 = *(undefined8 *)puVar6;
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      lVar16 = *(long *)puVar3;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar12;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar13,uVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  puVar7 = 
                                                  Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LocalVoiceAudioShort_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = System_Threading_LockQueue_TypeInfo;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb98;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)puVar3;
                                                      uVar12 = *(undefined8 *)
                                                                Language_Lua_LocalVar_TypeInfo;
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar12;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar13,uVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar7 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = 
                                                  PixelCrushers_DialogueSystem_Localization_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d5e5d0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 2;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)puVar3;
                                                      uVar12 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar12;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar13,uVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_LocalKeywordSpace_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = 
                                                  System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbd0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)puVar3;
                                                      uVar12 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar12;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar13,uVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                          Language_Lua_LocalFunc_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)puVar3;
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar6 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)puVar3;
                                                      uVar12 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar12;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar13,uVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar16 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  puVar2 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 4;
                                                    lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_03fd0468(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)puVar3;
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar13,*(undefined8 *)puVar7);
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar13 != 0) {
                                                      lVar16 = *(long *)(lVar13 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar15;
                                                      thunk_FUN_02f411dc(plVar11,lVar15);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar13,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02f411dc((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x19 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(unaff_x19 + 0x28),
                                                                     lVar9);
                                                  FUN_0663f8fc();
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


