/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandJoint$$op_Inequality
ENTRY_POINT: 05d7bda8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_XR_Hands_XRHandJoint__op_Inequality(void)

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
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 in_stack_00000018;
  
  thunk_FUN_02dd37b4();
  lVar17 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  puVar7 = 
  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
  ;
  if (lVar17 != 0) {
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = unaff_x21;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
    FUN_05d6a9c8(lVar17,0);
    if (lVar17 != 0) {
      *(long *)(lVar17 + 0x10) = unaff_x19;
      thunk_FUN_02dd37b4();
      lVar18 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      puVar7 = Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Status__;
      if (lVar18 != 0) {
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          plVar13 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
          *plVar13 = lVar17;
          thunk_FUN_02dd37b4(plVar13,lVar17);
        }
        else {
          FUN_03aac494();
        }
        lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_05d6d2b0(lVar17,0);
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x10) = unaff_x19;
          thunk_FUN_02dd37b4();
          lVar18 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          puVar7 = Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Value__;
          if (lVar18 != 0) {
            uVar2 = *(uint *)(unaff_x20 + 0x18);
            if (uVar2 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
              plVar13 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
              *plVar13 = lVar17;
              thunk_FUN_02dd37b4(plVar13,lVar17);
            }
            else {
              FUN_03aac494();
            }
            lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
            FUN_05d6d9c0(lVar17,0);
            if (lVar17 != 0) {
              *(long *)(lVar17 + 0x10) = unaff_x19;
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
                  plVar13 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar13 = lVar17;
                  thunk_FUN_02dd37b4(plVar13,lVar17);
                }
                else {
                  FUN_03aac494();
                }
                lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
                FUN_05d6fcb8(lVar17,0);
                if (lVar17 != 0) {
                  *(long *)(lVar17 + 0x10) = unaff_x19;
                  thunk_FUN_02dd37b4();
                  lVar18 = *(long *)(unaff_x20 + 0x10);
                  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                  puVar7 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__;
                  if (lVar18 != 0) {
                    uVar2 = *(uint *)(unaff_x20 + 0x18);
                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                      plVar13 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar13 = lVar17;
                      thunk_FUN_02dd37b4(plVar13,lVar17);
                    }
                    else {
                      FUN_03aac494();
                    }
                    lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
                    FUN_05d6f368(lVar17,0);
                    if (lVar17 != 0) {
                      *(long *)(lVar17 + 0x10) = unaff_x19;
                      thunk_FUN_02dd37b4();
                      lVar18 = *(long *)(unaff_x20 + 0x10);
                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                      puVar4 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__;
                      puVar3 = 
                      Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__;
                      puVar9 = Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__
                      ;
                      puVar8 = Method_OVRResult<OVRPlugin_Result>_From__;
                      puVar7 = Method_OVRResult<OVRColocationSession_Result>_get_Status__;
                      if (lVar18 != 0) {
                        uVar2 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
                          plVar13 = (long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar13 = lVar17;
                          thunk_FUN_02dd37b4(plVar13,lVar17);
                        }
                        else {
                          FUN_03aac494();
                        }
                        *(long *)(unaff_x19 + 0x10) = unaff_x20;
                        thunk_FUN_02dd37b4();
                        uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                        FUN_04894d4c(uVar14,*(undefined8 *)puVar7);
                        *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
                        thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x18),uVar14);
                        lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                        FUN_03aabc60(lVar17,*(undefined8 *)puVar9);
                        uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                        UnityEngine_XR_Hands_MetaAimHand__set_aimFlags(uVar14,0);
                        puVar7 = Method_OVRResult<OVRPlugin_Result>_get_Success__;
                        if (lVar17 != 0) {
                          lVar18 = *(long *)(lVar17 + 0x10);
                          lVar19 = *(long *)Method_OVRResult<OVRPlugin_Result>_get_Success__;
                          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                          puVar8 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
                          if (lVar18 != 0) {
                            uVar2 = *(uint *)(lVar17 + 0x18);
                            if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                              *(uint *)(lVar17 + 0x18) = uVar2 + 1;
                              puVar15 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                              *puVar15 = uVar14;
                              thunk_FUN_02dd37b4(puVar15,uVar14);
                            }
                            else {
                              FUN_03aac494(lVar17,uVar14,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                            }
                            plVar13 = (long *)(unaff_x19 + 0x20);
                            *plVar13 = lVar17;
                            thunk_FUN_02dd37b4(plVar13,lVar17);
                            lVar17 = *plVar13;
                            uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                            FUN_05d776a8(uVar14,0);
                            if (lVar17 != 0) {
                              lVar18 = *(long *)(lVar17 + 0x10);
                              lVar19 = *(long *)puVar7;
                              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                              puVar9 = PTR_DAT_0677fe38;
                              puVar8 = PTR_DAT_0676e908;
                              puVar7 = PTR_DAT_0676e900;
                              if (lVar18 != 0) {
                                uVar2 = *(uint *)(lVar17 + 0x18);
                                if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                  *(uint *)(lVar17 + 0x18) = uVar2 + 1;
                                  puVar15 = (undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20);
                                  *puVar15 = uVar14;
                                  thunk_FUN_02dd37b4(puVar15,uVar14);
                                }
                                else {
                                  FUN_03aac494(lVar17,uVar14,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                puVar12 = 
                                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                                ;
                                puVar11 = 
                                Method_System_Nullable<MetadataPropertyHandling>_get_HasValue__;
                                puVar10 = 
                                Method_System_Collections_Generic_List<MeshInfo>_get_Count__;
                                puVar6 = PTR_DAT_06768cf0;
                                puVar5 = PTR_DAT_06768ca8;
                                puVar4 = PTR_DAT_067670c0;
                                puVar3 = PTR_DAT_06766e48;
                                uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
                                FUN_04894d4c(uVar14,*(undefined8 *)puVar8);
                                *(undefined8 *)(unaff_x19 + 0x38) = uVar14;
                                thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x38),uVar14);
                                uVar14 = *(undefined8 *)puVar9;
                                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                }
                                FUN_05015c2c(uVar14,0);
                                FUN_05015c2c(*(undefined8 *)puVar4,0);
                                FUN_05d7c6ec();
                                FUN_05015c2c(*(undefined8 *)puVar6,0);
                                FUN_05015c2c(*(undefined8 *)puVar4,0);
                                FUN_05d7c6ec();
                                FUN_05015c2c(*(undefined8 *)puVar3,0);
                                FUN_05015c2c(*(undefined8 *)puVar5,0);
                                FUN_05d7c6ec();
                                uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar12);
                                Unity_XR_CoreUtils_Datums_AnimationCurveDatumProperty___ctor
                                          (uVar14,0);
                                *(undefined8 *)(unaff_x19 + 0x58) = uVar14;
                                thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x58),uVar14);
                                uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
                                FUN_05d75b68(uVar14,0);
                                *(undefined8 *)(unaff_x19 + 0x60) = uVar14;
                                thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x60),uVar14);
                                lVar17 = *(long *)puVar11;
                                if (*(int *)(lVar17 + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                  lVar17 = *(long *)puVar11;
                                }
                                puVar9 = 
                                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                                ;
                                puVar8 = PTR_DAT_0677fd10;
                                puVar7 = PTR_DAT_0677fd08;
                                lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x50);
                                if (lVar17 != 0) {
                                  FUN_03aaceb0(&stack0x00000008,lVar17,
                                               *(undefined8 *)PTR_DAT_0677fd30);
                                  do {
                                    uVar16 = FUN_04a7a4a0(&stack0x00000008,*(undefined8 *)puVar8);
                                    if ((uVar16 & 1) == 0) {
                                      FUN_04a7a49c(&stack0x00000008,*(undefined8 *)puVar7);
                                      return;
                                    }
                                    plVar13 = (long *)FUN_05031494(in_stack_00000018,0);
                                    if (plVar13 != (long *)0x0) {
                                      bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
                                      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                                         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 +
                                                   -8) != *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02d60e88(plVar13);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


