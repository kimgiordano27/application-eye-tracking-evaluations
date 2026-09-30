/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$CreateSphereMesh
ENTRY_POINT: 058a6f50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


long UnityEngine_Rendering_Universal_Internal_DeferredLights__CreateSphereMesh
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar14;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 in_stack_000001f0;
  
  puVar8 = (undefined8 *)FUN_0463ca1c(param_2,param_3,**(undefined8 **)(param_1 + 0xeb8));
  FUN_04c0a5c4(*unaff_x28,*puVar8,*unaff_x29,0);
  if (unaff_x23 != 0) {
    uVar9 = FUN_04c0c4b0();
    puVar7 = Method_OVRTaskBuilder<bool>_get_Task__;
    puVar6 = Method_OVRTaskBuilder<bool>_SetException__;
    puVar5 = 
    Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
    ;
    memcpy(&stack0x0000000c,(void *)(unaff_x24 + 0x44),0x84);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar10 = (uint *)FUN_0499e208(&stack0x0000000c,unaff_w19,*(undefined8 *)puVar5);
    lVar11 = *(long *)puVar7;
    uVar1 = *puVar10;
    uVar3 = puVar10[1];
    uVar2 = puVar10[2];
    uVar4 = puVar10[3];
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar11 = *(long *)puVar7;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= uVar1) {
LAB_058a7204:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      if (-1 < (int)uVar3) {
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_058a7200;
        puVar8 = (undefined8 *)
                 FUN_0463ca1c(*(long *)(unaff_x20 + 0x28),uVar3,
                              *(undefined8 *)
                               Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                             );
        uVar12 = FUN_04c0a5c4(*(undefined8 *)
                               Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,*puVar8,*(undefined8 *)PTR_DAT_06324338,0);
        if (lVar11 == 0) goto LAB_058a7200;
        lVar11 = FUN_04c0c4b0(lVar11,*(undefined8 *)
                                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                              ,uVar12,0);
      }
      lVar14 = **(long **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8);
      if ((uVar2 != 0) && (uVar2 != 6)) {
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar14 = *(long *)puVar7;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_058a7200;
        if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_058a7204;
        lVar14 = *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
        if (-1 < (int)uVar4) {
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_058a7200;
          puVar8 = (undefined8 *)
                   FUN_0463ca1c(*(long *)(unaff_x20 + 0x28),uVar4,
                                *(undefined8 *)
                                 Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                               );
          uVar12 = FUN_04c0a5c4(*(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,*puVar8,*(undefined8 *)PTR_DAT_06324338,0);
          if (lVar14 == 0) goto LAB_058a7200;
          lVar14 = FUN_04c0c4b0(lVar14,*(undefined8 *)
                                        Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                                ,uVar12,0);
        }
      }
      lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                                 );
      FUN_0588d2c8(lVar13,0);
      uVar12 = FUN_058ab078();
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
        thunk_FUN_02bb0e9c();
        *(undefined4 *)(lVar13 + 0x30) = unaff_w19;
        *(undefined8 *)(lVar13 + 0x18) = uVar9;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x18),uVar9);
        *(long *)(lVar13 + 0x20) = lVar11;
        thunk_FUN_02bb0e9c((long *)(lVar13 + 0x20),lVar11);
        *(long *)(lVar13 + 0x28) = lVar14;
        thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar14);
        uVar12 = *(undefined8 *)(unaff_x27 + 0x158);
        uVar9 = *(undefined8 *)(unaff_x27 + 0x150);
        *(undefined8 *)(lVar13 + 0x34) = unaff_x22;
        *(undefined4 *)(lVar13 + 0x3c) = unaff_w21;
        *(undefined8 *)(lVar13 + 0x48) = uVar12;
        *(undefined8 *)(lVar13 + 0x40) = uVar9;
        *(undefined4 *)(lVar13 + 0x50) = in_stack_000001f0;
        return lVar13;
      }
    }
  }
LAB_058a7200:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


