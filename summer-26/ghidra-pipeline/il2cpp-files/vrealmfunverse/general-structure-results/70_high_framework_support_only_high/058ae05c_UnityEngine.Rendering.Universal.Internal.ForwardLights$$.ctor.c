/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.ForwardLights$$.ctor
ENTRY_POINT: 058ae05c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_17;validity_or_gating_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor(long param_1)

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
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar14;
  int iVar15;
  short *psVar16;
  undefined8 in_stack_000000f8;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x38));
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
  *(undefined1 *)(unaff_x20 + 0x1ea) = 1;
  memset(&stack0x0000003c,0,0xc4);
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  if ((*(int *)(unaff_x23 + 0x3c) == 0) && (*(int *)(unaff_x23 + 0x44) == 0)) {
    bVar6 = true;
  }
  else {
    if (*(int *)(unaff_x19 + 0x2a8) != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = FUN_03ab7248(unaff_x22 + 0x68,
                            *(int *)(unaff_x19 + 0x2a8) + *(int *)(unaff_x19 + 0x2a4) + -1,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
      cVar2 = *(char *)(unaff_x23 + 0x7d);
      iVar15 = *(int *)(unaff_x23 + 0x3c);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar7 = FUN_05cc0738(lVar10 + 0x24,0);
      if (iVar15 + -(uint)(cVar2 != '\0') == iVar7) {
        iVar15 = *(int *)(unaff_x23 + 0x44);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar7 = FUN_05cc0738(lVar10,0);
        if (iVar15 == iVar7) {
          if ((cVar2 == '\0') && (*(char *)(unaff_x19 + 0x2c0) != '\0')) {
            uVar8 = FUN_058ad150();
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
          iVar15 = *(int *)(unaff_x23 + 0x38);
          uVar1 = *(uint *)(unaff_x23 + 0x3c);
          lVar14 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
          ;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_02b76274(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = FUN_0322b7a0(*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(lVar12 + 0x10));
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
                  memcpy(&stack0x0000003c,(void *)(unaff_x19 + 0xd0),0xc4);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (in_stack_000000f8._4_4_ <= iVar15) goto LAB_058ae36c;
                  memcpy(&stack0x0000003c,(void *)(unaff_x19 + 0xd0),0xc4);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  psVar16 = (short *)FUN_0499dea4(&stack0x0000003c,iVar15,*(undefined8 *)puVar4);
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
          iVar15 = *(int *)(unaff_x23 + 0x40);
          uVar1 = *(uint *)(unaff_x23 + 0x44);
          lVar14 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
          ;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_02b76274(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = FUN_0322b7a0(*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(lVar12 + 0x10));
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
                memcpy(&stack0x0000003c,(void *)(unaff_x19 + 0xd0),0xc4);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (in_stack_000000f8._4_4_ <= iVar7) goto LAB_058ae36c;
                memcpy(&stack0x0000003c,(void *)(unaff_x19 + 0xd0),0xc4);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                psVar11 = (short *)FUN_0499dea4(&stack0x0000003c,iVar7,*(undefined8 *)puVar4);
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


