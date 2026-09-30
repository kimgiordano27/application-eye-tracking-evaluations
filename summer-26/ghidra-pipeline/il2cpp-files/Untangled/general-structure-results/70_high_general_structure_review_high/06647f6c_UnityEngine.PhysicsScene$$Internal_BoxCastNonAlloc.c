/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Internal_BoxCastNonAlloc
ENTRY_POINT: 06647f6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_5;telemetry_or_network_hits_4
*/


void UnityEngine_PhysicsScene__Internal_BoxCastNonAlloc
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  FUN_03fd0c9c(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x22;
  thunk_FUN_02f411dc();
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)System_Net_Sockets_LingerOption_TypeInfo);
  FUN_03fd0468(lVar4,*unaff_x23);
  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_InputSystem_LightSensor_TypeInfo);
  FUN_05645a04(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)PixelCrushers_DialogueSystem_Location_TypeInfo;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x27;
    thunk_FUN_02f411dc();
    lVar6 = thunk_FUN_02ef1808(*unaff_x28);
    FUN_03fd0468(lVar6,*unaff_x26);
    if (lVar6 != 0) {
      lVar10 = *unaff_x29;
      uVar8 = *(undefined8 *)PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
      lVar9 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_02f411dc();
        }
        else {
          FUN_03fd0c9c(lVar6,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar5 + 0x20) = lVar6;
        thunk_FUN_02f411dc((long *)(lVar5 + 0x20),lVar6);
        if (lVar4 != 0) {
          lVar6 = *(long *)(lVar4 + 0x10);
          lVar9 = *(long *)UnityEngine_LightmapData_TypeInfo;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar5;
              thunk_FUN_02f411dc(plVar7,lVar5);
            }
            else {
              FUN_03fd0c9c(lVar4,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar5 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_InputSystem_LightSensor_TypeInfo);
            FUN_05645a04(lVar5,0);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x18) =
                   *(undefined8 *)Photon_Voice_LocalVoiceAudioFloat_TypeInfo;
              thunk_FUN_02f411dc();
              *(undefined8 *)(lVar5 + 0x10) = *unaff_x27;
              thunk_FUN_02f411dc();
              lVar6 = thunk_FUN_02ef1808(*unaff_x28);
              FUN_03fd0468(lVar6,*unaff_x26);
              if (lVar6 != 0) {
                lVar10 = *unaff_x29;
                uVar8 = *(undefined8 *)
                         PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
                lVar9 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                    thunk_FUN_02f411dc();
                  }
                  else {
                    FUN_03fd0c9c(lVar6,uVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar5 + 0x20) = lVar6;
                  thunk_FUN_02f411dc((long *)(lVar5 + 0x20),lVar6);
                  lVar6 = *(long *)(lVar4 + 0x10);
                  lVar9 = *(long *)UnityEngine_LightmapData_TypeInfo;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  puVar3 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar7 = lVar5;
                      thunk_FUN_02f411dc(plVar7,lVar5);
                    }
                    else {
                      FUN_03fd0c9c(lVar4,lVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(unaff_x21 + 0x28) = lVar4;
                    thunk_FUN_02f411dc((long *)(unaff_x21 + 0x28),lVar4);
                    if (unaff_x20 != 0) {
                      lVar4 = *(long *)(unaff_x20 + 0x10);
                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                          *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                          thunk_FUN_02f411dc();
                        }
                        else {
                          FUN_03fd0c9c();
                        }
                        lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                        FUN_05645a04(lVar4,0);
                        puVar2 = UnityEngine_Rendering_Universal_LocalMinima_TypeInfo;
                        if (lVar4 != 0) {
                          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d8fbc0;
                          thunk_FUN_02f411dc();
                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                          *(undefined4 *)(lVar4 + 0x18) = 0;
                          lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                          FUN_03fd0468(lVar5,*unaff_x26);
                          if (lVar5 != 0) {
                            lVar9 = *unaff_x29;
                            uVar8 = *(undefined8 *)PTR_DAT_06d03be8;
                            lVar6 = *(long *)(lVar5 + 0x10);
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                thunk_FUN_02f411dc();
                              }
                              else {
                                FUN_03fd0c9c(lVar5,uVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar4 + 0x30) = lVar5;
                              thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar5);
                              lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                          System_Net_Sockets_LingerOption_TypeInfo);
                              FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                              lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                              FUN_05645a04(lVar6,0);
                              if (lVar6 != 0) {
                                *(undefined8 *)(lVar6 + 0x18) =
                                     *(undefined8 *)
                                      System_ComponentModel_LocalizableAttribute_TypeInfo;
                                thunk_FUN_02f411dc();
                                *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                thunk_FUN_02f411dc();
                                lVar9 = thunk_FUN_02ef1808(*unaff_x28);
                                FUN_03fd0468(lVar9,*unaff_x26);
                                if (lVar9 != 0) {
                                  lVar11 = *unaff_x29;
                                  uVar8 = *(undefined8 *)
                                           PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo
                                  ;
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                      thunk_FUN_02f411dc();
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar9,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar6 + 0x20) = lVar9;
                                    thunk_FUN_02f411dc((long *)(lVar6 + 0x20),lVar9);
                                    if (lVar5 != 0) {
                                      lVar9 = *(long *)(lVar5 + 0x10);
                                      lVar10 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                      if (lVar9 != 0) {
                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                          plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar7 = lVar6;
                                          thunk_FUN_02f411dc(plVar7,lVar6);
                                        }
                                        else {
                                          FUN_03fd0c9c(lVar5,lVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                        FUN_05645a04(lVar6,0);
                                        if (lVar6 != 0) {
                                          *(undefined8 *)(lVar6 + 0x18) =
                                               *(undefined8 *)
                                                System_Linq_Expressions_Interpreter_LocalVariables_TypeInfo
                                          ;
                                          thunk_FUN_02f411dc();
                                          *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                          thunk_FUN_02f411dc();
                                          lVar9 = thunk_FUN_02ef1808(*unaff_x28);
                                          FUN_03fd0468(lVar9,*unaff_x26);
                                          if (lVar9 != 0) {
                                            lVar11 = *unaff_x29;
                                            uVar8 = *(undefined8 *)
                                                                                                          
                                                  PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo
                                            ;
                                            lVar10 = *(long *)(lVar9 + 0x10);
                                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                            if (lVar10 != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)
                                                 (lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                                thunk_FUN_02f411dc();
                                              }
                                              else {
                                                FUN_03fd0c9c(lVar9,uVar8,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar6 + 0x20) = lVar9;
                                              thunk_FUN_02f411dc((long *)(lVar6 + 0x20),lVar9);
                                              lVar9 = *(long *)(lVar5 + 0x10);
                                              lVar10 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                              puVar3 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                              if (lVar9 != 0) {
                                                uVar1 = *(uint *)(lVar5 + 0x18);
                                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                  plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar7 = lVar6;
                                                  thunk_FUN_02f411dc(plVar7,lVar6);
                                                }
                                                else {
                                                  FUN_03fd0c9c(lVar5,lVar6,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar10 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar4 + 0x28) = lVar5;
                                                thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                lVar5 = *(long *)(unaff_x20 + 0x10);
                                                *(int *)(unaff_x20 + 0x1c) =
                                                     *(int *)(unaff_x20 + 0x1c) + 1;
                                                if (lVar5 != 0) {
                                                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                    plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar7 = lVar4;
                                                    thunk_FUN_02f411dc(plVar7,lVar4);
                                                  }
                                                  else {
                                                    FUN_03fd0c9c();
                                                  }
                                                  lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar4,0);
                                                  puVar2 = PTR_DAT_06d10538;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d39cb8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar8 = *(undefined8 *)PTR_DAT_06d03bd0;
                                                      lVar6 = *(long *)(lVar5 + 0x10);
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar6 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar5,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar5;
                                                        thunk_FUN_02f411dc((long *)(lVar4 + 0x30),
                                                                           lVar5);
                                                        lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreHolder_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = PTR_DAT_06d03bc0;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_06d8fb88;
                                                      thunk_FUN_02f411dc();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 1;
                                                      lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                      FUN_03fd0468(lVar5,*unaff_x26);
                                                      if (lVar5 != 0) {
                                                        uVar8 = *(undefined8 *)puVar2;
                                                        lVar6 = *(long *)(lVar5 + 0x10);
                                                        lVar9 = *unaff_x29;
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar8;
                                                            thunk_FUN_02f411dc();
                                                          }
                                                          else {
                                                            FUN_03fd0c9c(lVar5,uVar8,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  puVar3 = System_LocalDataStoreMgr_TypeInfo;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreMgr_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fb68;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  puVar3 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = PTR_DAT_06d03bc8;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_06d04858;
                                                      thunk_FUN_02f411dc();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 1;
                                                      lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                      FUN_03fd0468(lVar5,*unaff_x26);
                                                      if (lVar5 != 0) {
                                                        uVar8 = *(undefined8 *)puVar2;
                                                        lVar6 = *(long *)(lVar5 + 0x10);
                                                        lVar9 = *unaff_x29;
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar8;
                                                            thunk_FUN_02f411dc();
                                                          }
                                                          else {
                                                            FUN_03fd0c9c(lVar5,uVar8,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  puVar3 = 
                                                  Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LocalVoiceAudioShort_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = System_Threading_LockQueue_TypeInfo;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_06d8fb98;
                                                      thunk_FUN_02f411dc();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 0;
                                                      lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                      FUN_03fd0468(lVar5,*unaff_x26);
                                                      if (lVar5 != 0) {
                                                        lVar9 = *unaff_x29;
                                                        uVar8 = *(undefined8 *)
                                                                 Language_Lua_LocalVar_TypeInfo;
                                                        lVar6 = *(long *)(lVar5 + 0x10);
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar8;
                                                            thunk_FUN_02f411dc();
                                                          }
                                                          else {
                                                            FUN_03fd0c9c(lVar5,uVar8,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  puVar3 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  PixelCrushers_DialogueSystem_Localization_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d5e5d0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 2;
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar8 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar6 = *(long *)(lVar5 + 0x10);
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar6 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar5,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar5;
                                                        thunk_FUN_02f411dc((long *)(lVar4 + 0x30),
                                                                           lVar5);
                                                        lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_LocalKeywordSpace_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbd0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar8 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                      lVar6 = *(long *)(lVar5 + 0x10);
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar6 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar5,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar5;
                                                        thunk_FUN_02f411dc((long *)(lVar4 + 0x30),
                                                                           lVar5);
                                                        lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                          Language_Lua_LocalFunc_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                  FUN_03fd0468(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *unaff_x29;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar8 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar6 = *(long *)(lVar5 + 0x10);
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar6 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar8;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar5,uVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar5;
                                                        thunk_FUN_02f411dc((long *)(lVar4 + 0x30),
                                                                           lVar5);
                                                        lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 4;
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
                                                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02f411dc(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_02f411dc(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_02f411dc();
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


