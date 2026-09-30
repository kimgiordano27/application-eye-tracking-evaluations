/*
FUNCTION_NAME: FUN_058acb64
ENTRY_POINT: 058acb64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 127
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_058acb64(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short *psVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  ulong uVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  if ((DAT_066d31eb & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_ObjectListPool<string>_Release__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    DAT_066d31eb = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (*(int *)(param_2 + 0x2a8) == 0) {
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (0 < *(int *)(param_2 + 400)) {
      if (param_1 == 0) goto LAB_058ad14c;
      lVar8 = *(long *)(param_1 + 0x68);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_UnityEngine_UIElements_ObjectListPool<string>_Release__ +
                      0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      *(undefined4 *)(param_2 + 0x2a4) = *(undefined4 *)(lVar8 + 8);
    }
  }
  iVar10 = *(int *)(param_3 + 0x3c);
  uStack_6c._0_4_ = 0;
  uStack_6c._4_4_ = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if ((iVar10 == 0) && (*(int *)(param_3 + 0x44) == 0)) {
    iVar10 = *(int *)(param_2 + 0x2a8);
    *(undefined1 *)(param_3 + 0x7b) = 0;
    *(int *)(param_3 + 0x24) = iVar10 + -1;
    return;
  }
  if (*(char *)(param_3 + 0x7d) == '\0') {
    cVar7 = '\0';
    if (*(char *)(param_2 + 0x2c0) != '\0') {
      uStack_6c._4_4_ = FUN_058ad150(param_2);
      cVar7 = *(char *)(param_3 + 0x7d);
      iVar10 = *(int *)(param_3 + 0x3c);
    }
  }
  else {
    cVar7 = '\x01';
  }
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_05cc0534(&local_e0,iVar10 + -cVar7,0);
  uStack_84 = (undefined4)uStack_d8;
  uStack_80 = (undefined4)((ulong)uStack_d8 >> 0x20);
  uStack_8c = (undefined4)local_e0;
  uStack_88 = (undefined4)((ulong)local_e0 >> 0x20);
  local_74 = (undefined4)uStack_c8;
  uStack_70 = (undefined4)((ulong)uStack_c8 >> 0x20);
  uStack_7c = (undefined4)uStack_d0;
  uStack_78 = (undefined4)((ulong)uStack_d0 >> 0x20);
  uStack_6c = CONCAT44(uStack_6c._4_4_,local_c0);
  if (DAT_066d31dd == '\0') {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31dd = '\x01';
  }
  if (param_1 == 0) {
LAB_058ad14c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar10 = *(int *)(param_3 + 0x38);
  uVar1 = *(uint *)(param_3 + 0x3c);
  lVar9 = *(long *)
           Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02b76274(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = FUN_0322b7a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar8 + 0x10));
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  puVar2 = PTR_DAT_06322b80;
  if ((int)uVar1 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar1 != 0) {
    lVar8 = lVar8 + (long)iVar10 * 0x18;
    uVar13 = 0;
    do {
      if (((int)uVar13 == 0) && (*(char *)(param_3 + 0x7d) != '\0')) {
        uStack_6c = (CONCAT44(*(undefined4 *)(lVar8 + uVar13 * 0x18 + 0xc),(undefined4)uStack_6c) ^
                    0xffffffff00000000) & 0x2ffffffff;
      }
      else {
        iVar10 = 0;
        lVar9 = lVar8 + uVar13 * 0x18;
        while( true ) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (*(int *)(param_2 + 400) <= iVar10) break;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          psVar12 = (short *)FUN_0499dea4(param_2 + 0xd0,iVar10,*(undefined8 *)puVar3);
          if (DAT_066d3287 == '\0') {
            FUN_02b3c81c(puVar2);
            DAT_066d3287 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (((*(short *)(lVar8 + uVar13 * 0x18) == *psVar12) &&
              (*(int *)(psVar12 + 8) == *(int *)(lVar9 + 0x10))) &&
             (*(int *)(psVar12 + 10) == *(int *)(lVar9 + 0x14))) goto LAB_058ace6c;
          iVar10 = iVar10 + 1;
        }
        iVar10 = -1;
LAB_058ace6c:
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05cc0680(&uStack_8c,(int)uVar13 + (int)-cVar7,iVar10,0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar1);
  }
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_05cc0534(&local_e0,*(undefined4 *)(param_3 + 0x44),0);
  uStack_a8 = uStack_d8;
  local_b0 = local_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  local_90 = local_c0;
  if (DAT_066d31da == '\0') {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31da = '\x01';
  }
  iVar10 = *(int *)(param_3 + 0x40);
  uVar1 = *(uint *)(param_3 + 0x44);
  lVar9 = *(long *)
           Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02b76274(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = FUN_0322b7a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar8 + 0x10));
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  puVar2 = PTR_DAT_06322b80;
  if ((int)uVar1 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar1 != 0) {
    uVar13 = 0;
    do {
      iVar11 = 0;
      psVar12 = (short *)(lVar8 + (long)iVar10 * 0x18 + uVar13 * 0x18);
      while( true ) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*(int *)(param_2 + 400) <= iVar11) break;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        psVar5 = (short *)FUN_0499dea4(param_2 + 0xd0,iVar11,*(undefined8 *)puVar3);
        if (DAT_066d3287 == '\0') {
          FUN_02b3c81c(puVar2);
          DAT_066d3287 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (((*psVar12 == *psVar5) && (*(int *)(psVar5 + 8) == *(int *)(psVar12 + 8))) &&
           (*(int *)(psVar5 + 10) == *(int *)(psVar12 + 10))) goto LAB_058ad034;
        iVar11 = iVar11 + 1;
      }
      iVar11 = -1;
LAB_058ad034:
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc0680(&local_b0,uVar13 & 0xffffffff,iVar11,0);
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar1);
  }
  uVar13 = FUN_058aa534(param_3,0);
  if ((uVar13 & 1) != 0) {
    uStack_6c = uStack_6c | 0x800000000;
  }
  if (*(int *)(param_2 + 0x2a8) != 0) {
    uVar6 = FUN_03ab7248(param_1 + 0x68,*(int *)(param_2 + 0x2a8) + *(int *)(param_2 + 0x2a4) + -1,
                         *(undefined8 *)Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    uVar13 = FUN_058a4b2c(&local_b0,uVar6,0);
    if ((uVar13 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x7b) = 0;
      iVar10 = *(int *)(param_2 + 0x2a8) + -1;
      goto LAB_058ad114;
    }
  }
  FUN_03ab7378(param_1 + 0x68,&local_b0,
               *(undefined8 *)
                Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release__);
  iVar10 = *(int *)(param_2 + 0x2a8);
  *(int *)(param_2 + 0x2a8) = iVar10 + 1;
  *(undefined1 *)(param_3 + 0x7b) = 1;
LAB_058ad114:
  *(int *)(param_3 + 0x24) = iVar10;
  return;
}


