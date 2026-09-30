/*
FUNCTION_NAME: Unity.Properties.PropertyMember$$get_Name
ENTRY_POINT: 066488e0
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


void Unity_Properties_PropertyMember__get_Name(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  FUN_03fd0468();
  if (param_1 != 0) {
    uVar5 = *unaff_x23;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar8 = *unaff_x29;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(param_1,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
      }
      *(long *)(unaff_x21 + 0x30) = param_1;
      thunk_FUN_02f411dc((long *)(unaff_x21 + 0x30),param_1);
      lVar6 = thunk_FUN_02ef1808(*(undefined8 *)System_Net_Sockets_LingerOption_TypeInfo);
      FUN_03fd0468(lVar6,*unaff_x24);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_InputSystem_LightSensor_TypeInfo);
      FUN_05645a04(lVar8,0);
      puVar3 = System_LocalDataStoreMgr_TypeInfo;
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)System_LocalDataStoreMgr_TypeInfo;
        thunk_FUN_02f411dc();
        *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
        thunk_FUN_02f411dc();
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar9 = *(long *)UnityEngine_LightmapData_TypeInfo;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *plVar4 = lVar8;
              thunk_FUN_02f411dc(plVar4,lVar8);
            }
            else {
              FUN_03fd0c9c(lVar6,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x21 + 0x28) = lVar6;
            thunk_FUN_02f411dc((long *)(unaff_x21 + 0x28),lVar6);
            lVar6 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                thunk_FUN_02f411dc();
              }
              else {
                FUN_03fd0c9c();
              }
              lVar6 = thunk_FUN_02ef1808(*unaff_x25);
              FUN_05645a04(lVar6,0);
              puVar2 = UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo;
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_06d8fb68;
                thunk_FUN_02f411dc();
                *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20));
                *(undefined4 *)(lVar6 + 0x18) = 0;
                lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                FUN_03fd0468(lVar8,*unaff_x26);
                if (lVar8 != 0) {
                  lVar9 = *unaff_x29;
                  uVar5 = *(undefined8 *)Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                  lVar7 = *(long *)(lVar8 + 0x10);
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                      thunk_FUN_02f411dc();
                    }
                    else {
                      FUN_03fd0c9c(lVar8,uVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar6 + 0x30) = lVar8;
                    thunk_FUN_02f411dc((long *)(lVar6 + 0x30),lVar8);
                    lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                System_Net_Sockets_LingerOption_TypeInfo);
                    FUN_03fd0468(lVar8,*(undefined8 *)System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                UnityEngine_InputSystem_LightSensor_TypeInfo);
                    FUN_05645a04(lVar7,0);
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)puVar3;
                      thunk_FUN_02f411dc();
                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                      thunk_FUN_02f411dc();
                      if (lVar8 != 0) {
                        lVar9 = *(long *)(lVar8 + 0x10);
                        lVar10 = *(long *)UnityEngine_LightmapData_TypeInfo;
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        puVar3 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar8 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                            plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar7;
                            thunk_FUN_02f411dc(plVar4,lVar7);
                          }
                          else {
                            FUN_03fd0c9c(lVar8,lVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar6 + 0x28) = lVar8;
                          thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                          lVar8 = *(long *)(unaff_x20 + 0x10);
                          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                              plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar4 = lVar6;
                              thunk_FUN_02f411dc(plVar4,lVar6);
                            }
                            else {
                              FUN_03fd0c9c();
                            }
                            lVar6 = thunk_FUN_02ef1808(*unaff_x25);
                            FUN_05645a04(lVar6,0);
                            puVar2 = PTR_DAT_06d03bc8;
                            if (lVar6 != 0) {
                              *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_06d04858;
                              thunk_FUN_02f411dc();
                              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20));
                              *(undefined4 *)(lVar6 + 0x18) = 1;
                              lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                              FUN_03fd0468(lVar8,*unaff_x26);
                              if (lVar8 != 0) {
                                uVar5 = *(undefined8 *)puVar2;
                                lVar7 = *(long *)(lVar8 + 0x10);
                                lVar9 = *unaff_x29;
                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                if (lVar7 != 0) {
                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                    thunk_FUN_02f411dc();
                                  }
                                  else {
                                    FUN_03fd0c9c(lVar8,uVar5,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar6 + 0x30) = lVar8;
                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x30),lVar8);
                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                  FUN_03fd0468(lVar8,*(undefined8 *)puVar3);
                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                  FUN_05645a04(lVar7,0);
                                  puVar3 = Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                                  if (lVar7 != 0) {
                                    *(undefined8 *)(lVar7 + 0x18) =
                                         *(undefined8 *)Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                                    thunk_FUN_02f411dc();
                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                    thunk_FUN_02f411dc();
                                    if (lVar8 != 0) {
                                      lVar9 = *(long *)(lVar8 + 0x10);
                                      lVar10 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                      if (lVar9 != 0) {
                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                          plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar4 = lVar7;
                                          thunk_FUN_02f411dc(plVar4,lVar7);
                                        }
                                        else {
                                          FUN_03fd0c9c(lVar8,lVar7,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar6 + 0x28) = lVar8;
                                        thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                                        lVar8 = *(long *)(unaff_x20 + 0x10);
                                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                            plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar4 = lVar6;
                                            thunk_FUN_02f411dc(plVar4,lVar6);
                                          }
                                          else {
                                            FUN_03fd0c9c();
                                          }
                                          lVar6 = thunk_FUN_02ef1808(*unaff_x25);
                                          FUN_05645a04(lVar6,0);
                                          puVar2 = System_Threading_LockQueue_TypeInfo;
                                          if (lVar6 != 0) {
                                            *(undefined8 *)(lVar6 + 0x10) =
                                                 *(undefined8 *)PTR_DAT_06d8fb98;
                                            thunk_FUN_02f411dc();
                                            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                            thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20));
                                            *(undefined4 *)(lVar6 + 0x18) = 0;
                                            lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                                            FUN_03fd0468(lVar8,*unaff_x26);
                                            if (lVar8 != 0) {
                                              lVar9 = *unaff_x29;
                                              uVar5 = *(undefined8 *)Language_Lua_LocalVar_TypeInfo;
                                              lVar7 = *(long *)(lVar8 + 0x10);
                                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                              if (lVar7 != 0) {
                                                uVar1 = *(uint *)(lVar8 + 0x18);
                                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                                  thunk_FUN_02f411dc();
                                                }
                                                else {
                                                  FUN_03fd0c9c(lVar8,uVar5,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                *(long *)(lVar6 + 0x30) = lVar8;
                                                thunk_FUN_02f411dc((long *)(lVar6 + 0x30),lVar8);
                                                lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                FUN_03fd0468(lVar8,*(undefined8 *)
                                                                                                                                        
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                                lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                FUN_05645a04(lVar7,0);
                                                if (lVar7 != 0) {
                                                  *(undefined8 *)(lVar7 + 0x18) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02f411dc(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02f411dc(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar6 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar6,0);
                                                    puVar2 = 
                                                  PixelCrushers_DialogueSystem_Localization_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d5e5d0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 2;
                                                    lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar8,*unaff_x26);
                                                    if (lVar8 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar5 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar7 = *(long *)(lVar8 + 0x10);
                                                      *(int *)(lVar8 + 0x1c) =
                                                           *(int *)(lVar8 + 0x1c) + 1;
                                                      if (lVar7 != 0) {
                                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar5;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar8,uVar5,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x30) = lVar8;
                                                        thunk_FUN_02f411dc((long *)(lVar6 + 0x30),
                                                                           lVar8);
                                                        lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar8,*(undefined8 *)puVar3);
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_LocalKeywordSpace_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02f411dc(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02f411dc(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar6 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar6,0);
                                                    puVar2 = 
                                                  System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbd0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 0;
                                                    lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar8,*unaff_x26);
                                                    if (lVar8 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar5 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                      lVar7 = *(long *)(lVar8 + 0x10);
                                                      *(int *)(lVar8 + 0x1c) =
                                                           *(int *)(lVar8 + 0x1c) + 1;
                                                      if (lVar7 != 0) {
                                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar5;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar8,uVar5,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x30) = lVar8;
                                                        thunk_FUN_02f411dc((long *)(lVar6 + 0x30),
                                                                           lVar8);
                                                        lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar8,*(undefined8 *)puVar3);
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Language_Lua_LocalFunc_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar8 != 0) {
                                                      lVar9 = *(long *)(lVar8 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02f411dc(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02f411dc(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar6 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar6,0);
                                                    puVar2 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                                                  FUN_03fd0468(lVar8,*unaff_x26);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *unaff_x29;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar8,*(undefined8 *)puVar3);
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02f411dc(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02f411dc(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar6 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar6,0);
                                                    puVar2 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar8,*unaff_x26);
                                                    if (lVar8 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar5 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar7 = *(long *)(lVar8 + 0x10);
                                                      *(int *)(lVar8 + 0x1c) =
                                                           *(int *)(lVar8 + 0x1c) + 1;
                                                      if (lVar7 != 0) {
                                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar5;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar8,uVar5,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x30) = lVar8;
                                                        thunk_FUN_02f411dc((long *)(lVar6 + 0x30),
                                                                           lVar8);
                                                        lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar8,*(undefined8 *)puVar3);
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02f411dc(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02f411dc(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar6 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar6,0);
                                                    puVar2 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 4;
                                                    lVar8 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar8,*unaff_x26);
                                                    if (lVar8 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar7 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar8,*(undefined8 *)puVar3);
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar8 != 0) {
                                                      lVar9 = *(long *)(lVar8 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02f411dc(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar8,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  thunk_FUN_02f411dc((long *)(lVar6 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02f411dc(plVar4,lVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


