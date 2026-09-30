/*
FUNCTION_NAME: Unity.Properties.Internal.ColorPropertyBag$$.ctor
ENTRY_POINT: 0664a8c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


void Unity_Properties_Internal_ColorPropertyBag___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar12 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c();
    }
    lVar12 = thunk_FUN_02ef1808(*unaff_x22);
    FUN_05645a04(lVar12,0);
    puVar7 = PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 0x10) = 0x264;
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar7;
      thunk_FUN_02f411dc();
      lVar13 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      puVar3 = UnityEngine_InputSystem_LinearAccelerationSensor_TypeInfo;
      puVar2 = System_Data_LikeNode_TypeInfo;
      puVar7 = UnityEngine_Rendering_LightShadowResolution_TypeInfo;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 0664a98c to 0674a9b3 has its CatchHandler @ 0664ab40 */
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar12;
          thunk_FUN_02f411dc(plVar9,lVar12);
        }
        else {
          FUN_03fd0c9c();
        }
        *(long *)(unaff_x28 + 0x20) = unaff_x20;
        thunk_FUN_02f411dc();
                    /* try { // try from 0664a9e8 to 0674aa0f has its CatchHandler @ 0664ab3c */
        lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
        FUN_03fd0468(lVar12,*(undefined8 *)puVar2);
        lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
        FUN_05645a04(lVar13,0);
        puVar5 = PTR_DAT_06d03bc0;
        puVar3 = PTR_DAT_06d02348;
        puVar2 = PTR_DAT_06d02340;
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)PTR_DAT_06d8fb88;
          thunk_FUN_02f411dc();
          *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar5;
          thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
          *(undefined4 *)(lVar13 + 0x18) = 1;
          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
          FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
          if (lVar10 != 0) {
            uVar11 = *(undefined8 *)puVar5;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)PTR_DAT_06d02330;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar8 = System_Net_Sockets_LingerOption_TypeInfo;
            puVar5 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
            puVar3 = UnityEngine_InputSystem_LightSensor_TypeInfo;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                thunk_FUN_02f411dc();
              }
              else {
                FUN_03fd0c9c(lVar10,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar13 + 0x30) = lVar10;
              thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10);
              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
              FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
              lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
              FUN_05645a04(lVar14,0);
              puVar4 = UnityEngine_Logger_TypeInfo;
              if (lVar14 != 0) {
                *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)UnityEngine_Logger_TypeInfo;
                thunk_FUN_02f411dc();
                *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                thunk_FUN_02f411dc();
                if (lVar10 != 0) {
                  lVar15 = *(long *)(lVar10 + 0x10);
                  lVar16 = *(long *)UnityEngine_LightmapData_TypeInfo;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar9 = lVar14;
                      thunk_FUN_02f411dc(plVar9,lVar14);
                    }
                    else {
                      FUN_03fd0c9c(lVar10,lVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar13 + 0x28) = lVar10;
                    thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10);
                    if (lVar12 != 0) {
                      lVar10 = *(long *)(lVar12 + 0x10);
                      lVar14 = *(long *)
                                UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar10 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar9 = lVar13;
                          thunk_FUN_02f411dc(plVar9,lVar13);
                        }
                        else {
                          FUN_03fd0c9c(lVar12,lVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                        FUN_05645a04(lVar13,0);
                        puVar6 = UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo;
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)PTR_DAT_06d8fb68;
                          thunk_FUN_02f411dc();
                          *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar6;
                          thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
                          *(undefined4 *)(lVar13 + 0x18) = 0;
                          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d02348);
                          FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                          if (lVar10 != 0) {
                            uVar11 = *(undefined8 *)Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                            lVar14 = *(long *)(lVar10 + 0x10);
                            lVar15 = *(long *)PTR_DAT_06d02330;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                thunk_FUN_02f411dc();
                              }
                              else {
                                FUN_03fd0c9c(lVar10,uVar11,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar13 + 0x30) = lVar10;
                              thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10);
                              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
                              FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                              lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                              FUN_05645a04(lVar14,0);
                              if (lVar14 != 0) {
                                *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar4;
                                thunk_FUN_02f411dc();
                                *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                thunk_FUN_02f411dc();
                                if (lVar10 != 0) {
                                  lVar15 = *(long *)(lVar10 + 0x10);
                                  lVar16 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar9 = lVar14;
                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar10,lVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    puVar4 = PTR_DAT_06d02348;
                                    *(long *)(lVar13 + 0x28) = lVar10;
                                    thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10);
                                    lVar10 = *(long *)(lVar12 + 0x10);
                                    lVar14 = *(long *)
                                              UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                    ;
                                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                    if (lVar10 != 0) {
                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                        plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar9 = lVar13;
                                        thunk_FUN_02f411dc(plVar9,lVar13);
                                      }
                                      else {
                                        FUN_03fd0c9c(lVar12,lVar13,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
                                      FUN_05645a04(lVar13,0);
                                      puVar6 = PTR_DAT_06d10538;
                                      if (lVar13 != 0) {
                                        *(undefined8 *)(lVar13 + 0x10) =
                                             *(undefined8 *)PTR_DAT_06d39cb8;
                                        thunk_FUN_02f411dc();
                                        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar6;
                                        thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
                                        *(undefined4 *)(lVar13 + 0x18) = 0;
                                        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                        FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                        if (lVar10 != 0) {
                                          uVar11 = *(undefined8 *)PTR_DAT_06d03bd0;
                                          lVar14 = *(long *)(lVar10 + 0x10);
                                          lVar15 = *(long *)PTR_DAT_06d02330;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar10 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20)
                                                   = uVar11;
                                              thunk_FUN_02f411dc();
                                            }
                                            else {
                                              FUN_03fd0c9c(lVar10,uVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar13 + 0x30) = lVar10;
                                            thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10);
                                            lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
                                            FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                            lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                                            FUN_05645a04(lVar14,0);
                                            if (lVar14 != 0) {
                                              *(undefined8 *)(lVar14 + 0x18) =
                                                   *(undefined8 *)
                                                    System_LocalDataStoreHolder_TypeInfo;
                                              thunk_FUN_02f411dc();
                                              *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                              thunk_FUN_02f411dc();
                                              if (lVar10 != 0) {
                                                lVar15 = *(long *)(lVar10 + 0x10);
                                                lVar16 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                                *(int *)(lVar10 + 0x1c) =
                                                     *(int *)(lVar10 + 0x1c) + 1;
                                                if (lVar15 != 0) {
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                    plVar9 = (long *)(lVar15 + (long)(int)uVar1 * 8
                                                                     + 0x20);
                                                    *plVar9 = lVar14;
                                                    thunk_FUN_02f411dc(plVar9,lVar14);
                                                  }
                                                  else {
                                                    FUN_03fd0c9c(lVar10,lVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = Fusion_LogType_TypeInfo;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d0ecb8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Unity_VisualScripting_LogicalNegationHandler_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)PTR_DAT_06d02330;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)Fusion_LogLevel_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = PTR_DAT_06d03bc8;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d04858;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar13 + 0x18) = 1;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      lVar14 = *(long *)(lVar10 + 0x10);
                                                      lVar15 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LocalVoiceAudioShort_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = System_Threading_LockQueue_TypeInfo;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb98;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)
                                                                Language_Lua_LocalVar_TypeInfo;
                                                      lVar14 = *(long *)(lVar10 + 0x10);
                                                      lVar15 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_Dependencies_NCalc_LogicalExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = 
                                                  System_Runtime_Remoting_Messaging_LogicalCallContext_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbb0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar13 + 0x18) = 2;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar14 = *(long *)(lVar10 + 0x10);
                                                      lVar15 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LogLevel_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = 
                                                  Meta_XR_MultiplayerBlocks_Colocation_LogLevel_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fba8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar13 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d03be0;
                                                      lVar14 = *(long *)(lVar10 + 0x10);
                                                      lVar15 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          PlayFab_ClientModels_LoginResult_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = Fusion_LogFlags_TypeInfo;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_LogicalBinaryExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                  if (lVar10 != 0) {
                                                    uVar11 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)PTR_DAT_06d02330;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02f411dc();
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar10,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          PlayFab_ClientModels_LogStatement_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                  if (lVar10 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)PTR_DAT_06d02330;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar6 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar13 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar14 = *(long *)(lVar10 + 0x10);
                                                      lVar15 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05645a04(lVar13,0);
                                                  puVar7 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar13 + 0x18) = 4;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar2);
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)PTR_DAT_06d02330;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x30),lVar10)
                                                  ;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05645a04(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar16 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar14;
                                                      thunk_FUN_02f411dc(plVar9,lVar14);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar13 + 0x28),lVar10)
                                                  ;
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar14 = *(long *)
                                                  UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar13;
                                                      thunk_FUN_02f411dc(plVar9,lVar13);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar12;
                                                  uVar11 = thunk_FUN_02f411dc((long *)(unaff_x28 +
                                                                                      0x28),lVar12);
                                                  FUN_0663f8fc(uVar11,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


