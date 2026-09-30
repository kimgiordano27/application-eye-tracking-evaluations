/*
FUNCTION_NAME: FUN_058ae018
ENTRY_POINT: 058ae018
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_20
*/


bool FUN_058ae018(long param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  short *psVar16;
  undefined1 auStack_124 [192];
  int local_64;
  
  if ((DAT_066d31ea & 1) == 0) {
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
    FUN_02b3c81c(Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    DAT_066d31ea = 1;
  }
  memset(auStack_124,0,0xc4);
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  if ((*(int *)(param_3 + 0x3c) == 0) && (*(int *)(param_3 + 0x44) == 0)) {
    bVar6 = true;
  }
  else {
    if (*(int *)(param_2 + 0x2a8) != 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = FUN_03ab7248(param_1 + 0x68,
                            *(int *)(param_2 + 0x2a8) + *(int *)(param_2 + 0x2a4) + -1,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
      cVar2 = *(char *)(param_3 + 0x7d);
      iVar15 = *(int *)(param_3 + 0x3c);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar7 = FUN_05cc0738(lVar10 + 0x24,0);
      if (iVar15 + -(uint)(cVar2 != '\0') == iVar7) {
        iVar15 = *(int *)(param_3 + 0x44);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar7 = FUN_05cc0738(lVar10,0);
        if (iVar15 == iVar7) {
          if ((cVar2 == '\0') && (*(char *)(param_2 + 0x2c0) != '\0')) {
            uVar8 = FUN_058ad150(param_2);
          }
          else {
            uVar8 = 0;
          }
          if (DAT_066d31dd == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                        );
            DAT_066d31dd = '\x01';
          }
          iVar15 = *(int *)(param_3 + 0x38);
          uVar1 = *(uint *)(param_3 + 0x3c);
          lVar14 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
          ;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_02b76274(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = FUN_0322b7a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x10));
          puVar5 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
          ;
          puVar4 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
          ;
          puVar3 = PTR_DAT_06322b80;
          if ((int)uVar1 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar1 != 0) {
            lVar12 = lVar12 + (long)iVar15 * 0x18;
            uVar13 = 0;
            do {
              if ((cVar2 == '\0') || ((int)uVar13 != 0)) {
                iVar15 = 0;
                lVar14 = lVar12 + uVar13 * 0x18;
                while( true ) {
                  memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (local_64 <= iVar15) goto LAB_058ae36c;
                  memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  psVar16 = (short *)FUN_0499dea4(auStack_124,iVar15,*(undefined8 *)puVar4);
                  if (DAT_066d3287 == '\0') {
                    FUN_02b3c81c(puVar3);
                    DAT_066d3287 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (((*(short *)(lVar12 + uVar13 * 0x18) == *psVar16) &&
                      (*(int *)(psVar16 + 8) == *(int *)(lVar14 + 0x10))) &&
                     (*(int *)(psVar16 + 10) == *(int *)(lVar14 + 0x14))) break;
                  iVar15 = iVar15 + 1;
                }
                if (iVar15 < 0) goto LAB_058ae36c;
                if (*(int *)(*(long *)
                              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                            + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                iVar7 = FUN_05cc05c8(lVar10 + 0x24,(int)uVar13 + -(uint)(cVar2 != '\0'),0);
                if (iVar7 != iVar15) goto LAB_058ae36c;
              }
              else {
                uVar8 = (*(uint *)(lVar12 + uVar13 * 0x18 + 0xc) ^ 0xffffffff) & 2;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar1);
          }
          if (DAT_066d31da == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                        );
            DAT_066d31da = '\x01';
          }
          iVar15 = *(int *)(param_3 + 0x40);
          uVar1 = *(uint *)(param_3 + 0x44);
          lVar14 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
          ;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_02b76274(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = FUN_0322b7a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 0x10));
          puVar5 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
          ;
          puVar4 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
          ;
          puVar3 = PTR_DAT_06322b80;
          if ((int)uVar1 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar1 != 0) {
            uVar13 = 0;
            do {
              psVar16 = (short *)(lVar12 + (long)iVar15 * 0x18 + uVar13 * 0x18);
              iVar7 = 0;
              while( true ) {
                memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (local_64 <= iVar7) goto LAB_058ae36c;
                memcpy(auStack_124,(void *)(param_2 + 0xd0),0xc4);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                psVar11 = (short *)FUN_0499dea4(auStack_124,iVar7,*(undefined8 *)puVar4);
                if (DAT_066d3287 == '\0') {
                  FUN_02b3c81c(puVar3);
                  DAT_066d3287 = '\x01';
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (((*psVar16 == *psVar11) && (*(int *)(psVar11 + 8) == *(int *)(psVar16 + 8))) &&
                   (*(int *)(psVar11 + 10) == *(int *)(psVar16 + 10))) break;
                iVar7 = iVar7 + 1;
              }
              if (*(int *)(*(long *)
                            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              iVar9 = FUN_05cc05c8(lVar10,uVar13 & 0xffffffff,0);
              if (iVar9 != iVar7) goto LAB_058ae36c;
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar1);
          }
          return uVar8 == *(uint *)(lVar10 + 0x48);
        }
      }
    }
LAB_058ae36c:
    bVar6 = false;
  }
  return bVar6;
}


