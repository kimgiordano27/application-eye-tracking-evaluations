/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Internal_BoxCast
ENTRY_POINT: 06647d18
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_5;telemetry_or_network_hits_5
*/


void UnityEngine_PhysicsScene__Internal_BoxCast(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x27;
  
  FUN_03fd0468();
  lVar8 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_05645a04(lVar8,0);
  puVar6 = PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x10) = 0x164;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar6;
    thunk_FUN_02f411dc();
    if (unaff_x20 != 0) {
      lVar12 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar8;
          thunk_FUN_02f411dc(plVar9,lVar8);
        }
        else {
          FUN_03fd0c9c();
        }
        lVar8 = thunk_FUN_02ef1808(*unaff_x22);
        FUN_05645a04(lVar8,0);
        puVar6 = PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x10) = 0x264;
          *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar6;
          thunk_FUN_02f411dc();
          lVar12 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          puVar4 = UnityEngine_InputSystem_LinearAccelerationSensor_TypeInfo;
          puVar3 = System_Data_LikeNode_TypeInfo;
          puVar6 = UnityEngine_Rendering_LightShadowResolution_TypeInfo;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar8;
              thunk_FUN_02f411dc(plVar9,lVar8);
            }
            else {
              FUN_03fd0c9c();
            }
            *(long *)(unaff_x19 + 0x20) = unaff_x20;
            thunk_FUN_02f411dc();
            lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
            FUN_03fd0468(lVar8,*(undefined8 *)puVar3);
            lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
            FUN_05645a04(lVar12,0);
            puVar2 = System_Linq_Expressions_Interpreter_LocalVariable_TypeInfo;
            puVar4 = PTR_DAT_06d02348;
            puVar3 = PTR_DAT_06d02340;
            if (lVar12 != 0) {
              *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_06d8fbb8;
              thunk_FUN_02f411dc();
              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20));
              *(undefined4 *)(lVar12 + 0x18) = 0;
              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
              FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
              puVar2 = PTR_DAT_06d02330;
              if (lVar10 != 0) {
                uVar11 = *(undefined8 *)PTR_DAT_06d03bb0;
                lVar13 = *(long *)(lVar10 + 0x10);
                lVar15 = *(long *)PTR_DAT_06d02330;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                puVar7 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                    thunk_FUN_02f411dc();
                  }
                  else {
                    FUN_03fd0c9c(lVar10,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar12 + 0x30) = lVar10;
                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10);
                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                               System_Net_Sockets_LingerOption_TypeInfo);
                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                               UnityEngine_InputSystem_LightSensor_TypeInfo);
                  FUN_05645a04(lVar13,0);
                  if (lVar13 != 0) {
                    *(undefined8 *)(lVar13 + 0x18) =
                         *(undefined8 *)PixelCrushers_DialogueSystem_Location_TypeInfo;
                    thunk_FUN_02f411dc();
                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                    thunk_FUN_02f411dc();
                    lVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                    FUN_03fd0468(lVar15,*(undefined8 *)puVar3);
                    if (lVar15 != 0) {
                      lVar16 = *(long *)puVar2;
                      uVar11 = *(undefined8 *)
                                PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
                      lVar14 = *(long *)(lVar15 + 0x10);
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar15 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                          thunk_FUN_02f411dc();
                        }
                        else {
                          FUN_03fd0c9c(lVar15,uVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar13 + 0x20) = lVar15;
                        thunk_FUN_02f411dc((long *)(lVar13 + 0x20),lVar15);
                        if (lVar10 != 0) {
                          lVar15 = *(long *)(lVar10 + 0x10);
                          lVar14 = *(long *)UnityEngine_LightmapData_TypeInfo;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar15 != 0) {
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              plVar9 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar9 = lVar13;
                              thunk_FUN_02f411dc(plVar9,lVar13);
                            }
                            else {
                              FUN_03fd0c9c(lVar10,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                            FUN_05645a04(lVar13,0);
                            if (lVar13 != 0) {
                              *(undefined8 *)(lVar13 + 0x18) =
                                   *(undefined8 *)Photon_Voice_LocalVoiceAudioFloat_TypeInfo;
                              thunk_FUN_02f411dc();
                              *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                              thunk_FUN_02f411dc();
                              lVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                              FUN_03fd0468(lVar15,*(undefined8 *)puVar3);
                              if (lVar15 != 0) {
                                lVar16 = *(long *)puVar2;
                                uVar11 = *(undefined8 *)
                                          PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo
                                ;
                                lVar14 = *(long *)(lVar15 + 0x10);
                                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                if (lVar14 != 0) {
                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                    thunk_FUN_02f411dc();
                                  }
                                  else {
                                    FUN_03fd0c9c(lVar15,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar13 + 0x20) = lVar15;
                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x20),lVar15);
                                  lVar15 = *(long *)(lVar10 + 0x10);
                                  lVar14 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  puVar7 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar9 = lVar13;
                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar10,lVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar12 + 0x28) = lVar10;
                                    thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10);
                                    if (lVar8 != 0) {
                                      lVar10 = *(long *)(lVar8 + 0x10);
                                      lVar13 = *(long *)
                                                UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                      ;
                                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                          plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar9 = lVar12;
                                          thunk_FUN_02f411dc(plVar9,lVar12);
                                        }
                                        else {
                                          FUN_03fd0c9c(lVar8,lVar12,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                                        FUN_05645a04(lVar12,0);
                                        puVar5 = 
                                        UnityEngine_Rendering_Universal_LocalMinima_TypeInfo;
                                        if (lVar12 != 0) {
                                          *(undefined8 *)(lVar12 + 0x10) =
                                               *(undefined8 *)PTR_DAT_06d8fbc0;
                                          thunk_FUN_02f411dc();
                                          *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5;
                                          thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20));
                                          *(undefined4 *)(lVar12 + 0x18) = 0;
                                          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                          FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                          if (lVar10 != 0) {
                                            lVar15 = *(long *)puVar2;
                                            uVar11 = *(undefined8 *)PTR_DAT_06d03be8;
                                            lVar13 = *(long *)(lVar10 + 0x10);
                                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                            if (lVar13 != 0) {
                                              uVar1 = *(uint *)(lVar10 + 0x18);
                                              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)
                                                 (lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                                thunk_FUN_02f411dc();
                                              }
                                              else {
                                                FUN_03fd0c9c(lVar10,uVar11,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar12 + 0x30) = lVar10;
                                              thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10);
                                              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                      
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                              FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                              lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                      
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                              FUN_05645a04(lVar13,0);
                                              if (lVar13 != 0) {
                                                *(undefined8 *)(lVar13 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  System_ComponentModel_LocalizableAttribute_TypeInfo
                                                ;
                                                thunk_FUN_02f411dc();
                                                *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                thunk_FUN_02f411dc();
                                                lVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                                FUN_03fd0468(lVar15,*(undefined8 *)puVar3);
                                                if (lVar15 != 0) {
                                                  lVar16 = *(long *)puVar2;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar15;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x20),lVar15)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_LocalVariables_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  lVar15 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03fd0468(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar15;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar10 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  puVar7 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = PTR_DAT_06d10538;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d39cb8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03bd0;
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreHolder_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = PTR_DAT_06d03bc0;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb88;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 1;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)puVar5;
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      lVar15 = *(long *)puVar2;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  puVar7 = System_LocalDataStoreMgr_TypeInfo;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreMgr_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = 
                                                  UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb68;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  puVar7 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = PTR_DAT_06d03bc8;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d04858;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 1;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)puVar5;
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      lVar15 = *(long *)puVar2;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  puVar7 = 
                                                  Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LocalVoiceAudioShort_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = System_Threading_LockQueue_TypeInfo;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb98;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                Language_Lua_LocalVar_TypeInfo;
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  puVar7 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = 
                                                  PixelCrushers_DialogueSystem_Localization_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d5e5d0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 2;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_LocalKeywordSpace_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbd0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          Language_Lua_LocalFunc_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar5 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05645a04(lVar12,0);
                                                  puVar6 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 4;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_02f411dc(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x19 + 0x28) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(unaff_x19 + 0x28),
                                                                     lVar8);
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


