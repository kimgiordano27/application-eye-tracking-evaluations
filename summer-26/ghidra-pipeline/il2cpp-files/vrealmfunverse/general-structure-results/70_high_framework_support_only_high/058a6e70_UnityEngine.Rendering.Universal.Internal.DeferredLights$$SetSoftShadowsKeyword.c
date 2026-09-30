/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$SetSoftShadowsKeyword
ENTRY_POINT: 058a6e70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_15;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_12
*/


long UnityEngine_Rendering_Universal_Internal_DeferredLights__SetSoftShadowsKeyword
               (undefined1 param_1 [16],undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar15;
  void *unaff_x24;
  long lVar16;
  long unaff_x27;
  undefined8 uVar17;
  undefined4 uStack00000000000001f0;
  
  uStack00000000000001f0 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar15 = *param_2;
  uVar5 = *(undefined4 *)(param_2 + 1);
  *(long *)(unaff_x27 + 0x158) = param_1._8_8_;
  *(long *)(unaff_x27 + 0x150) = param_1._0_8_;
  puVar8 = Method_OVRTaskBuilder<bool>_SetStateMachine__;
  puVar7 = Method_OVRTaskBuilder<bool>_SetResult__;
  puVar6 = Method_OVRTaskBuilder<bool>_Create__;
  if (unaff_x20 != 0) {
    FUN_058ab2a4();
    memcpy(&stack0x00000090,unaff_x24,0x44);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar9 = (uint *)FUN_0499d774(&stack0x00000090,unaff_w19,*(undefined8 *)puVar6);
    lVar10 = *(long *)puVar8;
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *(long *)puVar8;
    }
    puVar8 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
    ;
    puVar7 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
    ;
    puVar6 = PTR_DAT_06324338;
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_058a7204:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar10 = *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
      if (-1 < (int)uVar2) {
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_058a7200;
        puVar11 = (undefined8 *)
                  FUN_0463ca1c(*(long *)(unaff_x20 + 0x28),uVar2,
                               *(undefined8 *)
                                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                              );
        uVar12 = FUN_04c0a5c4(*(undefined8 *)puVar7,*puVar11,*(undefined8 *)puVar6,0);
        if (lVar10 == 0) goto LAB_058a7200;
        lVar10 = FUN_04c0c4b0(lVar10,*(undefined8 *)puVar8,uVar12,0);
      }
      puVar8 = Method_OVRTaskBuilder<bool>_get_Task__;
      puVar7 = Method_OVRTaskBuilder<bool>_SetException__;
      puVar6 = 
      Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
      ;
      memcpy(&stack0x0000000c,(void *)((long)unaff_x24 + 0x44),0x84);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar9 = (uint *)FUN_0499e208(&stack0x0000000c,unaff_w19,*(undefined8 *)puVar6);
      lVar13 = *(long *)puVar8;
      uVar1 = *puVar9;
      uVar3 = puVar9[1];
      uVar2 = puVar9[2];
      uVar4 = puVar9[3];
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar13 = *(long *)puVar8;
      }
      lVar13 = **(long **)(lVar13 + 0xb8);
      if (lVar13 == 0) goto LAB_058a7200;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_058a7204;
      lVar13 = *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
      if (-1 < (int)uVar3) {
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_058a7200;
        puVar11 = (undefined8 *)
                  FUN_0463ca1c(*(long *)(unaff_x20 + 0x28),uVar3,
                               *(undefined8 *)
                                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                              );
        uVar12 = FUN_04c0a5c4(*(undefined8 *)
                               Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,*puVar11,*(undefined8 *)PTR_DAT_06324338,0);
        if (lVar13 == 0) goto LAB_058a7200;
        lVar13 = FUN_04c0c4b0(lVar13,*(undefined8 *)
                                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                              ,uVar12,0);
      }
      lVar16 = **(long **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8);
      if ((uVar2 != 0) && (uVar2 != 6)) {
        lVar16 = *(long *)puVar8;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar16 = *(long *)puVar8;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_058a7200;
        if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_058a7204;
        lVar16 = *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
        if (-1 < (int)uVar4) {
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_058a7200;
          puVar11 = (undefined8 *)
                    FUN_0463ca1c(*(long *)(unaff_x20 + 0x28),uVar4,
                                 *(undefined8 *)
                                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                                );
          uVar12 = FUN_04c0a5c4(*(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,*puVar11,*(undefined8 *)PTR_DAT_06324338,0);
          if (lVar16 == 0) goto LAB_058a7200;
          lVar16 = FUN_04c0c4b0(lVar16,*(undefined8 *)
                                        Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                                ,uVar12,0);
        }
      }
      lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                                 );
      FUN_0588d2c8(lVar14,0);
      uVar12 = FUN_058ab078();
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
        thunk_FUN_02bb0e9c();
        *(undefined4 *)(lVar14 + 0x30) = unaff_w19;
        *(long *)(lVar14 + 0x18) = lVar10;
        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x18),lVar10);
        *(long *)(lVar14 + 0x20) = lVar13;
        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar13);
        *(long *)(lVar14 + 0x28) = lVar16;
        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x28),lVar16);
        uVar17 = *(undefined8 *)(unaff_x27 + 0x158);
        uVar12 = *(undefined8 *)(unaff_x27 + 0x150);
        *(undefined8 *)(lVar14 + 0x34) = uVar15;
        *(undefined4 *)(lVar14 + 0x3c) = uVar5;
        *(undefined8 *)(lVar14 + 0x48) = uVar17;
        *(undefined8 *)(lVar14 + 0x40) = uVar12;
        *(undefined4 *)(lVar14 + 0x50) = uStack00000000000001f0;
        return lVar14;
      }
    }
  }
LAB_058a7200:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


