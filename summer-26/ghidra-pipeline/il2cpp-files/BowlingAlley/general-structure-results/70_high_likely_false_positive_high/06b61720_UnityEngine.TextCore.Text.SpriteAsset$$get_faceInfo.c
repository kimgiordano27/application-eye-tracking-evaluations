/*
FUNCTION_NAME: UnityEngine.TextCore.Text.SpriteAsset$$get_faceInfo
ENTRY_POINT: 06b61720
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextCore_Text_SpriteAsset__get_faceInfo(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
      thunk_FUN_0333a630();
    }
    else {
      FUN_041e2c78();
    }
    lVar3 = thunk_FUN_032a56a0(*unaff_x25);
    FUN_059660a0(lVar3,0);
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRAnchor_Tracker_<Dispose>d__10>__
    ;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)Method_System_Attribute_GetCustomAttribute__;
      thunk_FUN_0333a630();
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x20));
      *(undefined4 *)(lVar3 + 0x18) = 0;
      lVar4 = thunk_FUN_032a56a0(*unaff_x28);
      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(lVar4,*unaff_x27);
      lVar5 = thunk_FUN_032a56a0(*unaff_x26);
      FUN_059660a0(lVar5,0);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x18) =
             *(undefined8 *)Method_AttachablesAuthoringSceneManager_<Awake>b__28_0__;
        thunk_FUN_0333a630();
        *(undefined8 *)(lVar5 + 0x10) =
             *(undefined8 *)Method_AttachablesAuthoringSceneManager_<Awake>b__28_2__;
        thunk_FUN_0333a630();
        if (lVar4 != 0) {
          lVar7 = *(long *)(lVar4 + 0x10);
          lVar8 = *unaff_x29;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar5;
              thunk_FUN_0333a630(plVar6,lVar5);
            }
            else {
              FUN_041e2c78(lVar4,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar3 + 0x28) = lVar4;
            thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
            *(undefined1 *)(lVar3 + 0x38) = 1;
            lVar4 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar3;
                thunk_FUN_0333a630(plVar6,lVar3);
              }
              else {
                FUN_041e2c78();
              }
              lVar3 = thunk_FUN_032a56a0(*unaff_x25);
              FUN_059660a0(lVar3,0);
              puVar2 = Method_AttachablesAuthoringSceneManager_<Awake>b__28_3__;
              if (lVar3 != 0) {
                *(undefined8 *)(lVar3 + 0x10) =
                     *(undefined8 *)Method_AttachablesAuthoringSceneManager_<Awake>b__28_6__;
                thunk_FUN_0333a630();
                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x20));
                *(undefined4 *)(lVar3 + 0x18) = 0;
                lVar4 = thunk_FUN_032a56a0(*unaff_x28);
                System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(lVar4,*unaff_x27);
                lVar5 = thunk_FUN_032a56a0(*unaff_x26);
                FUN_059660a0(lVar5,0);
                if (lVar5 != 0) {
                  *(undefined8 *)(lVar5 + 0x18) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<WebOperation_<Run>d__58>__
                  ;
                  thunk_FUN_0333a630();
                  *(undefined8 *)(lVar5 + 0x10) =
                       *(undefined8 *)Method_AttachablesAuthoringSceneManager_<Awake>b__28_2__;
                  thunk_FUN_0333a630();
                  if (lVar4 != 0) {
                    lVar7 = *(long *)(lVar4 + 0x10);
                    lVar8 = *unaff_x29;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar6 = lVar5;
                        thunk_FUN_0333a630(plVar6,lVar5);
                      }
                      else {
                        FUN_041e2c78(lVar4,lVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x28) = lVar4;
                      thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
                      *(undefined1 *)(lVar3 + 0x38) = 1;
                      lVar4 = *(long *)(unaff_x20 + 0x10);
                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                          plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar6 = lVar3;
                          thunk_FUN_0333a630(plVar6,lVar3);
                        }
                        else {
                          FUN_041e2c78();
                        }
                        lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                        FUN_059660a0(lVar3,0);
                        puVar2 = 
                        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<TemplateSelectionElement_<LoadAndCreateButtons>d__9>__
                        ;
                        if (lVar3 != 0) {
                          *(undefined8 *)(lVar3 + 0x10) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<VoiceHandler_<CheckAndroidMicrophonePermission>d__27>__
                          ;
                          thunk_FUN_0333a630();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x20));
                          *(undefined4 *)(lVar3 + 0x18) = 0;
                          lVar4 = thunk_FUN_032a56a0(*unaff_x28);
                          System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                    (lVar4,*unaff_x27);
                          lVar5 = thunk_FUN_032a56a0(*unaff_x26);
                          FUN_059660a0(lVar5,0);
                          if (lVar5 != 0) {
                            *(undefined8 *)(lVar5 + 0x18) =
                                 *(undefined8 *)
                                  Method_AttachablesAuthoringSceneManager_ResetToInitialValues__;
                            thunk_FUN_0333a630();
                            *(undefined8 *)(lVar5 + 0x10) =
                                 *(undefined8 *)
                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_2__;
                            thunk_FUN_0333a630();
                            if (lVar4 != 0) {
                              lVar7 = *(long *)(lVar4 + 0x10);
                              lVar8 = *unaff_x29;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar7 != 0) {
                                uVar1 = *(uint *)(lVar4 + 0x18);
                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                  plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar6 = lVar5;
                                  thunk_FUN_0333a630(plVar6,lVar5);
                                }
                                else {
                                  FUN_041e2c78(lVar4,lVar5,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar3 + 0x28) = lVar4;
                                thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
                                *(undefined1 *)(lVar3 + 0x38) = 1;
                                lVar4 = *(long *)(unaff_x20 + 0x10);
                                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                if (lVar4 != 0) {
                                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                    plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar6 = lVar3;
                                    thunk_FUN_0333a630(plVar6,lVar3);
                                  }
                                  else {
                                    FUN_041e2c78();
                                  }
                                  lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                                  FUN_059660a0(lVar3,0);
                                  puVar2 = Method_System_Attribute_GetCustomAttributes__;
                                  if (lVar3 != 0) {
                                    *(undefined8 *)(lVar3 + 0x10) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
                                    ;
                                    thunk_FUN_0333a630();
                                    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                    thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x20));
                                    *(undefined4 *)(lVar3 + 0x18) = 0;
                                    lVar4 = thunk_FUN_032a56a0(*unaff_x28);
                                    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                              (lVar4,*unaff_x27);
                                    lVar5 = thunk_FUN_032a56a0(*unaff_x26);
                                    FUN_059660a0(lVar5,0);
                                    if (lVar5 != 0) {
                                      *(undefined8 *)(lVar5 + 0x18) =
                                           *(undefined8 *)
                                            Method_System_Attribute_GetCustomAttributes__;
                                      thunk_FUN_0333a630();
                                      *(undefined8 *)(lVar5 + 0x10) =
                                           *(undefined8 *)
                                            Method_AttachablesAuthoringSceneManager_<Awake>b__28_2__
                                      ;
                                      thunk_FUN_0333a630();
                                      if (lVar4 != 0) {
                                        lVar7 = *(long *)(lVar4 + 0x10);
                                        lVar8 = *unaff_x29;
                                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar6 = lVar5;
                                            thunk_FUN_0333a630(plVar6,lVar5);
                                          }
                                          else {
                                            FUN_041e2c78(lVar4,lVar5,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar3 + 0x28) = lVar4;
                                          thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
                                          *(undefined1 *)(lVar3 + 0x38) = 1;
                                          lVar4 = *(long *)(unaff_x20 + 0x10);
                                          *(int *)(unaff_x20 + 0x1c) =
                                               *(int *)(unaff_x20 + 0x1c) + 1;
                                          if (lVar4 != 0) {
                                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                              plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar6 = lVar3;
                                              thunk_FUN_0333a630(plVar6,lVar3);
                                            }
                                            else {
                                              FUN_041e2c78();
                                            }
                                            lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                                            FUN_059660a0(lVar3,0);
                                            puVar2 = 
                                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<UserAvatarElement_<SetupButton>d__4>__
                                            ;
                                            if (lVar3 != 0) {
                                              *(undefined8 *)(lVar3 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<VoiceServiceRequest_<SimulateResponse>d__5>__
                                              ;
                                              thunk_FUN_0333a630();
                                              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                              thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x20));
                                              *(undefined4 *)(lVar3 + 0x18) = 0;
                                              lVar4 = thunk_FUN_032a56a0(*unaff_x28);
                                              System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                        (lVar4,*unaff_x27);
                                              lVar5 = thunk_FUN_032a56a0(*unaff_x26);
                                              FUN_059660a0(lVar5,0);
                                              if (lVar5 != 0) {
                                                *(undefined8 *)(lVar5 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_12__
                                                ;
                                                thunk_FUN_0333a630();
                                                *(undefined8 *)(lVar5 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_2__
                                                ;
                                                thunk_FUN_0333a630();
                                                if (lVar4 != 0) {
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_0333a630(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar4,lVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
                                                  *(undefined1 *)(lVar3 + 0x38) = 1;
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_0333a630(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                                                    FUN_059660a0(lVar3,0);
                                                    puVar2 = 
                                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_7__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_8__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_032a56a0(*unaff_x28);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar4,*unaff_x27);
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x26);
                                                  FUN_059660a0(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Attribute_GetCustomAttributes__;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_2__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar7 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar5;
                                                        thunk_FUN_0333a630(plVar6,lVar5);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar4,lVar5,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
                                                  *(undefined1 *)(lVar3 + 0x38) = 1;
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_0333a630(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x25);
                                                    FUN_059660a0(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Attribute_GetCustomAttributes__;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<UserManager_<Start>d__1>__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_032a56a0(*unaff_x28);
                                                  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                            (lVar4,*unaff_x27);
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x26);
                                                  FUN_059660a0(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_1__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_AttachablesAuthoringSceneManager_<Awake>b__28_2__
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar7 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar5;
                                                        thunk_FUN_0333a630(plVar6,lVar5);
                                                      }
                                                      else {
                                                        FUN_041e2c78(lVar4,lVar5,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
                                                  *(undefined1 *)(lVar3 + 0x38) = 1;
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_0333a630(plVar6,lVar3);
                                                    }
                                                    else {
                                                      FUN_041e2c78();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_0333a630();
                                                    FUN_06b60ab0();
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


