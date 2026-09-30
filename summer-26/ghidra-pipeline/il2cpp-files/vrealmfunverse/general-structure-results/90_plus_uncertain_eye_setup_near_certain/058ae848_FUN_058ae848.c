/*
FUNCTION_NAME: FUN_058ae848
ENTRY_POINT: 058ae848
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_15
*/


undefined8 FUN_058ae848(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  short *psVar16;
  int iVar17;
  ulong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_066d31ed & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    FUN_02b3c81c(Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d31ed = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar7 = FUN_058ad664(param_1,param_2,param_3);
  if ((int)uVar7 == 0xd) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar8 = FUN_03ab2128(param_1 + 0x18,param_3,
                         *(undefined8 *)
                          Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    puVar4 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
    lVar9 = FUN_03ab1904(param_1 + 0x60,param_2,
                         *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    *(undefined4 *)(lVar8 + 0x1c) = 1;
    if (-1 < *(int *)(lVar8 + 0x20)) {
      FUN_03ab1904(param_1 + 0x60,*(int *)(lVar8 + 0x20),*(undefined8 *)puVar4);
      FUN_058ad238();
    }
    *(undefined4 *)(lVar8 + 0x20) = param_2;
    *(undefined4 *)(lVar9 + 0x29c) = param_3;
    *(int *)(lVar9 + 0x2a0) = *(int *)(lVar9 + 0x2a0) + 1;
    if ((*(char *)(lVar9 + 0x2c0) == '\0') && (*(char *)(lVar8 + 0x7d) != '\0')) {
      iVar17 = *(int *)(lVar8 + 0x38);
      plVar13 = *(long **)(param_1 + 0x40);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      puVar11 = (undefined8 *)(*plVar13 + (long)iVar17 * 0x18);
      local_70 = puVar11[2];
      uStack_78 = puVar11[1];
      local_80 = *puVar11;
      FUN_058ae55c(lVar9,param_1,&local_80);
    }
    if (DAT_066d31dd == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  );
      DAT_066d31dd = '\x01';
    }
    iVar17 = *(int *)(lVar8 + 0x38);
    uVar1 = *(uint *)(lVar8 + 0x3c);
    lVar15 = *(long *)
              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    lVar12 = *(long *)(lVar15 + 0x38);
    if (lVar12 == 0) {
      FUN_02b76274(lVar15);
      lVar12 = *(long *)(lVar15 + 0x38);
    }
    lVar12 = FUN_0322b7a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x10));
    puVar6 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
    ;
    puVar5 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
    ;
    puVar4 = PTR_DAT_06322b80;
    if ((int)uVar1 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (uVar1 != 0) {
      lVar12 = lVar12 + (long)iVar17 * 0x18;
      uVar14 = 0;
      do {
        psVar16 = (short *)(lVar12 + uVar14 * 0x18);
        iVar17 = 0;
        while( true ) {
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar2 = *(int *)(*(long *)puVar6 + 0xe4);
          if (*(int *)(lVar9 + 400) <= iVar17) {
            if (iVar2 == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_0499de70(lVar9 + 0xd0,psVar16,
                         *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
            goto LAB_058aeb54;
          }
          if (iVar2 == 0) {
            thunk_FUN_02b9ad44();
          }
          psVar10 = (short *)FUN_0499dea4(lVar9 + 0xd0,iVar17,*(undefined8 *)puVar5);
          if (DAT_066d3287 == '\0') {
            FUN_02b3c81c(puVar4);
            DAT_066d3287 = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (((*psVar16 == *psVar10) && (*(int *)(psVar10 + 8) == *(int *)(psVar16 + 8))) &&
             (*(int *)(psVar10 + 10) == *(int *)(psVar16 + 10))) break;
          iVar17 = iVar17 + 1;
        }
        uVar3 = *(uint *)(lVar12 + uVar14 * 0x18 + 0xc);
        if ((*(byte *)(psVar10 + 6) & 4) != 0) {
          uVar3 = uVar3 & 0xfffffffe;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        local_88 = 0;
        local_90 = 0;
        FUN_05897340(&local_90,psVar10,*(undefined4 *)(psVar16 + 2),0);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = local_b8 & 0xffffffff00000000 | (ulong)local_88;
        local_98 = 0;
        FUN_058a0cbc(&local_a8,local_90,local_b8,*(uint *)(psVar10 + 6) | uVar3,
                     *(undefined4 *)(psVar10 + 8),*(undefined4 *)(psVar10 + 10),0);
        *(undefined8 *)(psVar10 + 8) = local_98;
        *(undefined8 *)(psVar10 + 4) = uStack_a0;
        *(undefined8 *)psVar10 = local_a8;
LAB_058aeb54:
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar1);
    }
    if (DAT_066d31da == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  );
      DAT_066d31da = '\x01';
    }
    lVar15 = *(long *)
              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    iVar17 = *(int *)(lVar8 + 0x40);
    uVar1 = *(uint *)(lVar8 + 0x44);
    lVar12 = *(long *)(lVar15 + 0x38);
    if (lVar12 == 0) {
      FUN_02b76274(lVar15);
      lVar12 = *(long *)(lVar15 + 0x38);
    }
    lVar12 = FUN_0322b7a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x10));
    puVar6 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
    ;
    puVar5 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
    ;
    puVar4 = PTR_DAT_06322b80;
    if ((int)uVar1 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (uVar1 != 0) {
      lVar12 = lVar12 + (long)iVar17 * 0x18;
      uVar14 = 0;
      do {
        iVar17 = 0;
                    /* try { // try from 058aeca8 to 059aee7f has its CatchHandler @ 058aeca8
                       catch() { ... } // from try @ 058aeca8 with catch @ 058aeca8
                       catch() { ... } // from try @ 058aee98 with catch @ 058aeca8
                       catch() { ... } // from try @ 058af3c0 with catch @ 058aeca8
                       catch() { ... } // from try @ 058af500 with catch @ 058aeca8 */
        psVar16 = (short *)(lVar12 + uVar14 * 0x18);
        while( true ) {
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar2 = *(int *)(*(long *)puVar6 + 0xe4);
          if (*(int *)(lVar9 + 400) <= iVar17) {
            if (iVar2 == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_0499de70(lVar9 + 0xd0,psVar16,
                         *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
            goto LAB_058aed68;
          }
          if (iVar2 == 0) {
            thunk_FUN_02b9ad44();
          }
          psVar10 = (short *)FUN_0499dea4(lVar9 + 0xd0,iVar17,*(undefined8 *)puVar5);
          if (DAT_066d3287 == '\0') {
            FUN_02b3c81c(puVar4);
            DAT_066d3287 = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (((*psVar16 == *psVar10) && (*(int *)(psVar10 + 8) == *(int *)(psVar16 + 8))) &&
             (*(int *)(psVar10 + 10) == *(int *)(psVar16 + 10))) break;
          iVar17 = iVar17 + 1;
        }
        uVar3 = *(uint *)(lVar12 + uVar14 * 0x18 + 0xc);
        if ((*(byte *)(psVar10 + 6) & 4) != 0) {
          uVar3 = uVar3 & 0xfffffffe;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        local_88 = 0;
        local_90 = 0;
        FUN_05897340(&local_90,psVar10,*(undefined4 *)(psVar16 + 2),0);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = local_b8 & 0xffffffff00000000 | (ulong)local_88;
        local_98 = 0;
        FUN_058a0cbc(&local_a8,local_90,local_b8,*(uint *)(psVar10 + 6) | uVar3,
                     *(undefined4 *)(psVar10 + 8),*(undefined4 *)(psVar10 + 10),0);
        *(undefined8 *)(psVar10 + 8) = local_98;
        *(undefined8 *)(psVar10 + 4) = uStack_a0;
        *(undefined8 *)psVar10 = local_a8;
LAB_058aed68:
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar1);
    }
    FUN_058acb64(param_1,lVar9,lVar8);
    FUN_058ab15c(param_1,param_2,0);
  }
  return uVar7;
}


