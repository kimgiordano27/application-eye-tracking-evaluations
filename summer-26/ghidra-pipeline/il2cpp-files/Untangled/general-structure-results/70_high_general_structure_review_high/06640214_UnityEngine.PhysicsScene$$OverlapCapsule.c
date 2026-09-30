/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$OverlapCapsule
ENTRY_POINT: 06640214
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_21
*/


void UnityEngine_PhysicsScene__OverlapCapsule(long param_1)

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
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0xb20));
  FUN_02f07e70(PTR_DAT_06d02130);
  FUN_02f07e70(PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkOpenIdConnectRequest_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkPSNAccountRequest_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkPSNAccountResult_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkSteamAccountRequest_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkSteamAccountResult_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkTwitchAccountRequest_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkTwitchAccountResult_TypeInfo);
  FUN_02f07e70(PlayFab_ClientModels_LinkXboxAccountRequest_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x6a3) = 1;
  lVar9 = thunk_FUN_02ef1808(*unaff_x20);
  FUN_05645a04(lVar9,0);
  puVar6 = PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo;
  puVar5 = System_Xml_Linq_LineInfoEndElementAnnotation_TypeInfo;
  puVar7 = RootMotion_FinalIK_LimbIK_TypeInfo;
  puVar4 = UnityEngine_LightShadows_TypeInfo;
  puVar3 = UnityEngine_Rendering_LightProbeUsage_TypeInfo;
  puVar2 = PTR_DAT_06d02130;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_TypeInfo;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar3;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar6;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc();
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
    FUN_03fd0468(lVar10,*(undefined8 *)puVar7);
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
    FUN_05645a04(lVar11,0);
    puVar2 = PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x10) = 0x164;
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_02f411dc();
      puVar2 = UnityEngine_LightType_TypeInfo;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)UnityEngine_LightType_TypeInfo;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_02f411dc(plVar12,lVar11);
          }
          else {
            FUN_03fd0c9c(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
          FUN_05645a04(lVar11,0);
          puVar3 = PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x10) = 0x264;
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_02f411dc();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar4 = UnityEngine_InputSystem_LinearAccelerationSensor_TypeInfo;
            puVar3 = System_Data_LikeNode_TypeInfo;
            puVar2 = UnityEngine_Rendering_LightShadowResolution_TypeInfo;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_02f411dc(plVar12,lVar11);
              }
              else {
                FUN_03fd0c9c(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_02f411dc((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
              FUN_03fd0468(lVar10,*(undefined8 *)puVar3);
              lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
              FUN_05645a04(lVar11,0);
              puVar5 = PlayFab_ClientModels_LinkIOSDeviceIDResult_TypeInfo;
              puVar7 = System_Net_Sockets_LingerOption_TypeInfo;
              puVar4 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
              puVar3 = UnityEngine_InputSystem_LightSensor_TypeInfo;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) =
                     *(undefined8 *)PlayFab_ClientModels_LinkSteamAccountResult_TypeInfo;
                thunk_FUN_02f411dc();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
                thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                *(undefined4 *)(lVar11 + 0x18) = 0;
                lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                FUN_05645a04(lVar16,0);
                if (lVar16 != 0) {
                  *(undefined8 *)(lVar16 + 0x18) =
                       *(undefined8 *)PlayFab_ClientModels_LinkGoogleAccountResult_TypeInfo;
                  thunk_FUN_02f411dc();
                  *(undefined8 *)(lVar16 + 0x10) =
                       *(undefined8 *)
                        PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo;
                  thunk_FUN_02f411dc();
                  puVar5 = UnityEngine_LightmapData_TypeInfo;
                  if (lVar14 != 0) {
                    lVar15 = *(long *)(lVar14 + 0x10);
                    lVar17 = *(long *)UnityEngine_LightmapData_TypeInfo;
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    if (lVar15 != 0) {
                      uVar1 = *(uint *)(lVar14 + 0x18);
                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                        plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar12 = lVar16;
                        thunk_FUN_02f411dc(plVar12,lVar16);
                      }
                      else {
                        FUN_03fd0c9c(lVar14,lVar16,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar11 + 0x28) = lVar14;
                      thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14);
                      *(undefined1 *)(lVar11 + 0x38) = 1;
                      puVar6 = UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo;
                      if (lVar10 != 0) {
                        lVar14 = *(long *)(lVar10 + 0x10);
                        lVar16 = *(long *)
                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar10 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar12 = lVar11;
                            thunk_FUN_02f411dc(plVar12,lVar11);
                          }
                          else {
                            FUN_03fd0c9c(lVar10,lVar11,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                          FUN_05645a04(lVar11,0);
                          puVar8 = PlayFab_ClientModels_LinkGoogleAccountRequest_TypeInfo;
                          if (lVar11 != 0) {
                            *(undefined8 *)(lVar11 + 0x10) =
                                 *(undefined8 *)PlayFab_ClientModels_LinkPSNAccountResult_TypeInfo;
                            thunk_FUN_02f411dc();
                            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar8;
                            thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                            *(undefined4 *)(lVar11 + 0x18) = 0;
                            lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                            FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                            lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                            FUN_05645a04(lVar16,0);
                            if (lVar16 != 0) {
                              *(undefined8 *)(lVar16 + 0x18) =
                                   *(undefined8 *)
                                    PlayFab_ClientModels_LinkKongregateAccountRequest_TypeInfo;
                              thunk_FUN_02f411dc();
                              *(undefined8 *)(lVar16 + 0x10) =
                                   *(undefined8 *)
                                    PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                              ;
                              thunk_FUN_02f411dc();
                              if (lVar14 != 0) {
                                lVar15 = *(long *)(lVar14 + 0x10);
                                lVar17 = *(long *)puVar5;
                                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                if (lVar15 != 0) {
                                  uVar1 = *(uint *)(lVar14 + 0x18);
                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                    plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar12 = lVar16;
                                    thunk_FUN_02f411dc(plVar12,lVar16);
                                  }
                                  else {
                                    FUN_03fd0c9c(lVar14,lVar16,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar11 + 0x28) = lVar14;
                                  thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14);
                                  *(undefined1 *)(lVar11 + 0x38) = 1;
                                  lVar14 = *(long *)(lVar10 + 0x10);
                                  lVar16 = *(long *)puVar6;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar14 != 0) {
                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar12 = lVar11;
                                      thunk_FUN_02f411dc(plVar12,lVar11);
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar10,lVar11,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                    FUN_05645a04(lVar11,0);
                                    puVar8 = PlayFab_ClientModels_LinkFacebookAccountResult_TypeInfo
                                    ;
                                    if (lVar11 != 0) {
                                      *(undefined8 *)(lVar11 + 0x10) =
                                           *(undefined8 *)
                                            PlayFab_ClientModels_LinkPSNAccountRequest_TypeInfo;
                                      thunk_FUN_02f411dc();
                                      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar8;
                                      thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                                      *(undefined4 *)(lVar11 + 0x18) = 0;
                                      lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                                      FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                                      lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                                      FUN_05645a04(lVar16,0);
                                      if (lVar16 != 0) {
                                        *(undefined8 *)(lVar16 + 0x18) =
                                             *(undefined8 *)
                                              PlayFab_ClientModels_LinkGameCenterAccountRequest_TypeInfo
                                        ;
                                        thunk_FUN_02f411dc();
                                        *(undefined8 *)(lVar16 + 0x10) =
                                             *(undefined8 *)
                                              PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                        ;
                                        thunk_FUN_02f411dc();
                                        if (lVar14 != 0) {
                                          lVar15 = *(long *)(lVar14 + 0x10);
                                          lVar17 = *(long *)puVar5;
                                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                          if (lVar15 != 0) {
                                            uVar1 = *(uint *)(lVar14 + 0x18);
                                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                              plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar12 = lVar16;
                                              thunk_FUN_02f411dc(plVar12,lVar16);
                                            }
                                            else {
                                              FUN_03fd0c9c(lVar14,lVar16,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar11 + 0x28) = lVar14;
                                            thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14);
                                            *(undefined1 *)(lVar11 + 0x38) = 1;
                                            lVar14 = *(long *)(lVar10 + 0x10);
                                            lVar16 = *(long *)puVar6;
                                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                            if (lVar14 != 0) {
                                              uVar1 = *(uint *)(lVar10 + 0x18);
                                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar12 = lVar11;
                                                thunk_FUN_02f411dc(plVar12,lVar11);
                                              }
                                              else {
                                                FUN_03fd0c9c(lVar10,lVar11,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                              FUN_05645a04(lVar11,0);
                                              puVar8 = 
                                              PlayFab_ClientModels_LinkIOSDeviceIDRequest_TypeInfo;
                                              if (lVar11 != 0) {
                                                *(undefined8 *)(lVar11 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  PlayFab_ClientModels_LinkKongregateAccountResult_TypeInfo
                                                ;
                                                thunk_FUN_02f411dc();
                                                *(undefined8 *)(lVar11 + 0x20) =
                                                     *(undefined8 *)puVar8;
                                                thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                                                *(undefined4 *)(lVar11 + 0x18) = 0;
                                                lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                                                FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                                                lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                                                FUN_05645a04(lVar16,0);
                                                if (lVar16 != 0) {
                                                  *(undefined8 *)(lVar16 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkFacebookAccountRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar16;
                                                        thunk_FUN_02f411dc(plVar12,lVar16);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar14,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  *(undefined1 *)(lVar11 + 0x38) = 1;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02f411dc(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  puVar8 = 
                                                  PlayFab_ClientModels_LinkAndroidDeviceIDRequest_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkCustomIDRequest_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                                                  lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkOpenIdConnectRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar16;
                                                        thunk_FUN_02f411dc(plVar12,lVar16);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar14,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  *(undefined1 *)(lVar11 + 0x38) = 1;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02f411dc(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  puVar8 = 
                                                  PlayFab_ClientModels_LinkXboxAccountRequest_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          PixelCrushers_DialogueSystem_Link_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar14 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar7);
                                                    FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                                                    lVar16 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05645a04(lVar16,0);
                                                    if (lVar16 != 0) {
                                                      *(undefined8 *)(lVar16 + 0x18) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  PlayFab_ClientModels_LinkTwitchAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar16;
                                                        thunk_FUN_02f411dc(plVar12,lVar16);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar14,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  *(undefined1 *)(lVar11 + 0x38) = 1;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02f411dc(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  puVar8 = 
                                                  PlayFab_ClientModels_LinkAndroidDeviceIDResult_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkCustomIDResult_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                                                  lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar16;
                                                        thunk_FUN_02f411dc(plVar12,lVar16);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar14,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  *(undefined1 *)(lVar11 + 0x38) = 1;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02f411dc(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  puVar8 = 
                                                  PlayFab_ClientModels_LinkNintendoServiceAccountRequest_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                                                  lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkTwitchAccountRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar16;
                                                        thunk_FUN_02f411dc(plVar12,lVar16);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar14,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  *(undefined1 *)(lVar11 + 0x38) = 1;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02f411dc(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  puVar2 = 
                                                  PlayFab_ClientModels_LinkSteamAccountRequest_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkAppleRequest_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03fd0468(lVar14,*(undefined8 *)puVar4);
                                                  lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkGameCenterAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar16;
                                                        thunk_FUN_02f411dc(plVar12,lVar16);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar14,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02f411dc((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  *(undefined1 *)(lVar11 + 0x38) = 1;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02f411dc(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  uVar13 = thunk_FUN_02f411dc((long *)(lVar9 + 0x28)
                                                                              ,lVar10);
                                                  FUN_0663f8fc(uVar13,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


