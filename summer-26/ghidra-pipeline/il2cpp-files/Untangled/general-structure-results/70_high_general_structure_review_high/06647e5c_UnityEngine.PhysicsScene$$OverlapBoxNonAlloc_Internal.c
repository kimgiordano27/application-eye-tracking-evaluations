/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$OverlapBoxNonAlloc_Internal
ENTRY_POINT: 06647e5c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4
*/


void UnityEngine_PhysicsScene__OverlapBoxNonAlloc_Internal
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  FUN_03fd0c9c(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  thunk_FUN_02f411dc();
  lVar7 = thunk_FUN_02ef1808(*unaff_x23);
  FUN_03fd0468(lVar7,*unaff_x22);
  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
  FUN_05645a04(lVar8,0);
  puVar2 = System_Linq_Expressions_Interpreter_LocalVariable_TypeInfo;
  puVar4 = PTR_DAT_06d02348;
  puVar3 = PTR_DAT_06d02340;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)PTR_DAT_06d8fbb8;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
    *(undefined4 *)(lVar8 + 0x18) = 0;
    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_06d02330;
    if (lVar9 != 0) {
      uVar11 = *(undefined8 *)PTR_DAT_06d03bb0;
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_06d02330;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      puVar6 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          thunk_FUN_02f411dc();
        }
        else {
          FUN_03fd0c9c(lVar9,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar8 + 0x30) = lVar9;
        thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
        lVar9 = thunk_FUN_02ef1808(*(undefined8 *)System_Net_Sockets_LingerOption_TypeInfo);
        FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_InputSystem_LightSensor_TypeInfo);
        FUN_05645a04(lVar12,0);
        if (lVar12 != 0) {
          *(undefined8 *)(lVar12 + 0x18) =
               *(undefined8 *)PixelCrushers_DialogueSystem_Location_TypeInfo;
          thunk_FUN_02f411dc();
          *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
          thunk_FUN_02f411dc();
          lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
          FUN_03fd0468(lVar14,*(undefined8 *)puVar3);
          if (lVar14 != 0) {
            lVar15 = *(long *)puVar2;
            uVar11 = *(undefined8 *)PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
            lVar13 = *(long *)(lVar14 + 0x10);
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar14 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                thunk_FUN_02f411dc();
              }
              else {
                FUN_03fd0c9c(lVar14,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar12 + 0x20) = lVar14;
              thunk_FUN_02f411dc((long *)(lVar12 + 0x20),lVar14);
              if (lVar9 != 0) {
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar13 = *(long *)UnityEngine_LightmapData_TypeInfo;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar10 = lVar12;
                    thunk_FUN_02f411dc(plVar10,lVar12);
                  }
                  else {
                    FUN_03fd0c9c(lVar9,lVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                               UnityEngine_InputSystem_LightSensor_TypeInfo);
                  FUN_05645a04(lVar12,0);
                  if (lVar12 != 0) {
                    *(undefined8 *)(lVar12 + 0x18) =
                         *(undefined8 *)Photon_Voice_LocalVoiceAudioFloat_TypeInfo;
                    thunk_FUN_02f411dc();
                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                    thunk_FUN_02f411dc();
                    lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                    FUN_03fd0468(lVar14,*(undefined8 *)puVar3);
                    if (lVar14 != 0) {
                      lVar15 = *(long *)puVar2;
                      uVar11 = *(undefined8 *)
                                PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
                      lVar13 = *(long *)(lVar14 + 0x10);
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar14 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                          thunk_FUN_02f411dc();
                        }
                        else {
                          FUN_03fd0c9c(lVar14,uVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar12 + 0x20) = lVar14;
                        thunk_FUN_02f411dc((long *)(lVar12 + 0x20),lVar14);
                        lVar14 = *(long *)(lVar9 + 0x10);
                        lVar13 = *(long *)UnityEngine_LightmapData_TypeInfo;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        puVar6 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar9 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                            plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar10 = lVar12;
                            thunk_FUN_02f411dc(plVar10,lVar12);
                          }
                          else {
                            FUN_03fd0c9c(lVar9,lVar12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar8 + 0x28) = lVar9;
                          thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                          if (lVar7 != 0) {
                            lVar9 = *(long *)(lVar7 + 0x10);
                            lVar12 = *(long *)
                                      UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                            ;
                            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar7 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar10 = lVar8;
                                thunk_FUN_02f411dc(plVar10,lVar8);
                              }
                              else {
                                FUN_03fd0c9c(lVar7,lVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                              FUN_05645a04(lVar8,0);
                              puVar5 = UnityEngine_Rendering_Universal_LocalMinima_TypeInfo;
                              if (lVar8 != 0) {
                                *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)PTR_DAT_06d8fbc0;
                                thunk_FUN_02f411dc();
                                *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar5;
                                thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                                *(undefined4 *)(lVar8 + 0x18) = 0;
                                lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                if (lVar9 != 0) {
                                  lVar14 = *(long *)puVar2;
                                  uVar11 = *(undefined8 *)PTR_DAT_06d03be8;
                                  lVar12 = *(long *)(lVar9 + 0x10);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar12 != 0) {
                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11
                                      ;
                                      thunk_FUN_02f411dc();
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar9,uVar11,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar8 + 0x30) = lVar9;
                                    thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                    lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                  
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                    FUN_05645a04(lVar12,0);
                                    if (lVar12 != 0) {
                                      *(undefined8 *)(lVar12 + 0x18) =
                                           *(undefined8 *)
                                            System_ComponentModel_LocalizableAttribute_TypeInfo;
                                      thunk_FUN_02f411dc();
                                      *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                      thunk_FUN_02f411dc();
                                      lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                      FUN_03fd0468(lVar14,*(undefined8 *)puVar3);
                                      if (lVar14 != 0) {
                                        lVar15 = *(long *)puVar2;
                                        uVar11 = *(undefined8 *)
                                                  PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo
                                        ;
                                        lVar13 = *(long *)(lVar14 + 0x10);
                                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                        if (lVar13 != 0) {
                                          uVar1 = *(uint *)(lVar14 + 0x18);
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar11;
                                            thunk_FUN_02f411dc();
                                          }
                                          else {
                                            FUN_03fd0c9c(lVar14,uVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar12 + 0x20) = lVar14;
                                          thunk_FUN_02f411dc((long *)(lVar12 + 0x20),lVar14);
                                          if (lVar9 != 0) {
                                            lVar14 = *(long *)(lVar9 + 0x10);
                                            lVar13 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                            if (lVar14 != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar10 = lVar12;
                                                thunk_FUN_02f411dc(plVar10,lVar12);
                                              }
                                              else {
                                                FUN_03fd0c9c(lVar9,lVar12,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar13 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                      
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                              FUN_05645a04(lVar12,0);
                                              if (lVar12 != 0) {
                                                *(undefined8 *)(lVar12 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  System_Linq_Expressions_Interpreter_LocalVariables_TypeInfo
                                                ;
                                                thunk_FUN_02f411dc();
                                                *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                thunk_FUN_02f411dc();
                                                lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                                FUN_03fd0468(lVar14,*(undefined8 *)puVar3);
                                                if (lVar14 != 0) {
                                                  lVar15 = *(long *)puVar2;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo
                                                  ;
                                                  lVar13 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x20) = lVar14;
                                                  thunk_FUN_02f411dc((long *)(lVar12 + 0x20),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar6 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = PTR_DAT_06d10538;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d39cb8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03bd0;
                                                      lVar12 = *(long *)(lVar9 + 0x10);
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreHolder_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)(lVar9 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = PTR_DAT_06d03bc0;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb88;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 1;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      uVar11 = *(undefined8 *)puVar5;
                                                      lVar12 = *(long *)(lVar9 + 0x10);
                                                      lVar14 = *(long *)puVar2;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  puVar6 = System_LocalDataStoreMgr_TypeInfo;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreMgr_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)(lVar9 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = 
                                                  UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb68;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)(lVar9 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar6 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = PTR_DAT_06d03bc8;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d04858;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 1;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      uVar11 = *(undefined8 *)puVar5;
                                                      lVar12 = *(long *)(lVar9 + 0x10);
                                                      lVar14 = *(long *)puVar2;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  puVar6 = 
                                                  Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LocalVoiceAudioShort_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)(lVar9 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = System_Threading_LockQueue_TypeInfo;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb98;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                Language_Lua_LocalVar_TypeInfo;
                                                      lVar12 = *(long *)(lVar9 + 0x10);
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)(lVar9 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar6 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = 
                                                  PixelCrushers_DialogueSystem_Localization_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d5e5d0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 2;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar12 = *(long *)(lVar9 + 0x10);
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_LocalKeywordSpace_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = 
                                                  System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbd0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                      lVar12 = *(long *)(lVar9 + 0x10);
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                          Language_Lua_LocalFunc_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)(lVar9 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 3;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar12 = *(long *)(lVar9 + 0x10);
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar5 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 4;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)(lVar9 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02f411dc(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar12 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02f411dc(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x19 + 0x28) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(unaff_x19 + 0x28),
                                                                     lVar7);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


