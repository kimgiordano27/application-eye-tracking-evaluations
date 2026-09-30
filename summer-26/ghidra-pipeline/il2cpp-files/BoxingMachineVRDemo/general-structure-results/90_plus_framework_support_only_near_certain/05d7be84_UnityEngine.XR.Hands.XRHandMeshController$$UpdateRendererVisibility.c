/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandMeshController$$UpdateRendererVisibility
ENTRY_POINT: 05d7be84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Hands_XRHandMeshController__UpdateRendererVisibility(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000018;
  
  lVar13 = thunk_FUN_02d9d534(*unaff_x23);
  FUN_05d6d2b0(lVar13,0);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 0x10) = unaff_x19;
    thunk_FUN_02dd37b4();
    lVar18 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar7 = Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Value__;
    if (lVar18 != 0) {
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
        *plVar14 = lVar13;
        thunk_FUN_02dd37b4(plVar14,lVar13);
      }
      else {
        FUN_03aac494();
      }
      lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
      FUN_05d6d9c0(lVar13,0);
      if (lVar13 != 0) {
        *(long *)(lVar13 + 0x10) = unaff_x19;
        thunk_FUN_02dd37b4();
        lVar18 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        puVar7 = 
        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
        ;
        if (lVar18 != 0) {
          uVar2 = *(uint *)(unaff_x20 + 0x18);
          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
            plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
            *plVar14 = lVar13;
            thunk_FUN_02dd37b4(plVar14,lVar13);
          }
          else {
            FUN_03aac494();
          }
          lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
          FUN_05d6fcb8(lVar13,0);
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x10) = unaff_x19;
            thunk_FUN_02dd37b4();
            lVar18 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            puVar7 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__;
            if (lVar18 != 0) {
              uVar2 = *(uint *)(unaff_x20 + 0x18);
              if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                *plVar14 = lVar13;
                thunk_FUN_02dd37b4(plVar14,lVar13);
              }
              else {
                FUN_03aac494();
              }
              lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
              FUN_05d6f368(lVar13,0);
              if (lVar13 != 0) {
                *(long *)(lVar13 + 0x10) = unaff_x19;
                thunk_FUN_02dd37b4();
                lVar18 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                puVar4 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__;
                puVar3 = Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__;
                puVar9 = Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__;
                puVar8 = Method_OVRResult<OVRPlugin_Result>_From__;
                puVar7 = Method_OVRResult<OVRColocationSession_Result>_get_Status__;
                if (lVar18 != 0) {
                  uVar2 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                    plVar14 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar14 = lVar13;
                    thunk_FUN_02dd37b4(plVar14,lVar13);
                  }
                  else {
                    FUN_03aac494();
                  }
                  *(long *)(unaff_x19 + 0x10) = unaff_x20;
                  thunk_FUN_02dd37b4();
                  uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                  FUN_04894d4c(uVar15,*(undefined8 *)puVar7);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
                  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x18),uVar15);
                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                  FUN_03aabc60(lVar13,*(undefined8 *)puVar9);
                  uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                  UnityEngine_XR_Hands_MetaAimHand__set_aimFlags(uVar15,0);
                  puVar7 = Method_OVRResult<OVRPlugin_Result>_get_Success__;
                  if (lVar13 != 0) {
                    lVar18 = *(long *)(lVar13 + 0x10);
                    lVar19 = *(long *)Method_OVRResult<OVRPlugin_Result>_get_Success__;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    puVar8 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
                    if (lVar18 != 0) {
                      uVar2 = *(uint *)(lVar13 + 0x18);
                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                        puVar16 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar16 = uVar15;
                        thunk_FUN_02dd37b4(puVar16,uVar15);
                      }
                      else {
                        FUN_03aac494(lVar13,uVar15,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                      }
                      plVar14 = (long *)(unaff_x19 + 0x20);
                      *plVar14 = lVar13;
                      thunk_FUN_02dd37b4(plVar14,lVar13);
                      lVar13 = *plVar14;
                      uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                      FUN_05d776a8(uVar15,0);
                      if (lVar13 != 0) {
                        lVar18 = *(long *)(lVar13 + 0x10);
                        lVar19 = *(long *)puVar7;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        puVar9 = PTR_DAT_0677fe38;
                        puVar8 = PTR_DAT_0676e908;
                        puVar7 = PTR_DAT_0676e900;
                        if (lVar18 != 0) {
                          uVar2 = *(uint *)(lVar13 + 0x18);
                          if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                            puVar16 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                            *puVar16 = uVar15;
                            thunk_FUN_02dd37b4(puVar16,uVar15);
                          }
                          else {
                            FUN_03aac494(lVar13,uVar15,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                          }
                          puVar12 = 
                          Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                          ;
                          puVar11 = Method_System_Nullable<MetadataPropertyHandling>_get_HasValue__;
                          puVar10 = Method_System_Collections_Generic_List<MeshInfo>_get_Count__;
                          puVar6 = PTR_DAT_06768cf0;
                          puVar5 = PTR_DAT_06768ca8;
                          puVar4 = PTR_DAT_067670c0;
                          puVar3 = PTR_DAT_06766e48;
                          uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
                          FUN_04894d4c(uVar15,*(undefined8 *)puVar8);
                          *(undefined8 *)(unaff_x19 + 0x38) = uVar15;
                          thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x38),uVar15);
                          uVar15 = *(undefined8 *)puVar9;
                          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          FUN_05015c2c(uVar15,0);
                          FUN_05015c2c(*(undefined8 *)puVar4,0);
                          FUN_05d7c6ec();
                          FUN_05015c2c(*(undefined8 *)puVar6,0);
                          FUN_05015c2c(*(undefined8 *)puVar4,0);
                          FUN_05d7c6ec();
                          FUN_05015c2c(*(undefined8 *)puVar3,0);
                          FUN_05015c2c(*(undefined8 *)puVar5,0);
                          FUN_05d7c6ec();
                          uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar12);
                          Unity_XR_CoreUtils_Datums_AnimationCurveDatumProperty___ctor(uVar15,0);
                          *(undefined8 *)(unaff_x19 + 0x58) = uVar15;
                          thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x58),uVar15);
                          uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
                          FUN_05d75b68(uVar15,0);
                          *(undefined8 *)(unaff_x19 + 0x60) = uVar15;
                          thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x60),uVar15);
                          lVar13 = *(long *)puVar11;
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                            lVar13 = *(long *)puVar11;
                          }
                          puVar9 = 
                          Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                          ;
                          puVar8 = PTR_DAT_0677fd10;
                          puVar7 = PTR_DAT_0677fd08;
                          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x50);
                          if (lVar13 != 0) {
                            FUN_03aaceb0(&stack0x00000008,lVar13,*(undefined8 *)PTR_DAT_0677fd30);
                            do {
                              uVar17 = FUN_04a7a4a0(&stack0x00000008,*(undefined8 *)puVar8);
                              if ((uVar17 & 1) == 0) {
                                FUN_04a7a49c(&stack0x00000008,*(undefined8 *)puVar7);
                                return;
                              }
                              plVar14 = (long *)FUN_05031494(in_stack_00000018,0);
                              if (plVar14 != (long *)0x0) {
                                bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
                                if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                                    *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02d60e88(plVar14);
                                }
                              }
                              FUN_05d7c7f4();
                            } while( true );
                          }
                        }
                      }
                    }
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
  FUN_02d60ae8();
}


