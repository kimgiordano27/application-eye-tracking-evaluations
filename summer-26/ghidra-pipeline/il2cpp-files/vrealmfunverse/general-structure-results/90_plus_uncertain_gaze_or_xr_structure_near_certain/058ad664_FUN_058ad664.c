/*
FUNCTION_NAME: FUN_058ad664
ENTRY_POINT: 058ad664
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


ulong FUN_058ad664(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  uint *puVar11;
  ulong uVar12;
  short *psVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  short *unaff_x25;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  long lVar24;
  undefined1 auVar25 [16];
  uint local_13c [6];
  undefined1 auStack_124 [196];
  
  if ((DAT_066d31e9 & 1) == 0) {
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
    FUN_02b3c81c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                );
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d31e9 = 1;
  }
  memset(auStack_124,0,0xc4);
  if (param_1 == 0) {
LAB_058adf00:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar8 = FUN_03ab2128(param_1 + 0x18,param_3,
                       *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__
                      );
  if (*(int *)(lVar8 + 4) != 2) {
    uVar15 = 4;
    goto LAB_058ad86c;
  }
  lVar9 = FUN_03ab1904(param_1 + 0x60,param_2,
                       *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
  if ((0 < *(int *)(lVar8 + 0x3c)) || (0 < *(int *)(lVar8 + 0x44))) {
    if ((*(int *)(lVar9 + 0x2ac) != *(int *)(lVar8 + 100)) ||
       (((*(int *)(lVar9 + 0x2b0) != *(int *)(lVar8 + 0x68) ||
         (*(int *)(lVar9 + 0x2b4) != *(int *)(lVar8 + 0x6c))) ||
        (*(int *)(lVar9 + 0x2b8) != *(int *)(lVar8 + 0x70))))) {
      uVar15 = 1;
      goto LAB_058ad86c;
    }
    if ((*(char *)(lVar9 + 0x2c0) != '\0') && (*(char *)(lVar8 + 0x7d) != '\0')) {
      unaff_x25 = (short *)FUN_03ab294c(param_1 + 0x40,*(undefined4 *)(lVar8 + 0x38),
                                        *(undefined8 *)
                                         Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                                       );
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                          );
      }
      psVar10 = (short *)FUN_0499dea4(lVar9 + 0xd0,0,
                                      *(undefined8 *)
                                       Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                     );
      if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322b80);
      }
      if (*unaff_x25 != *psVar10) {
        uVar15 = 5;
        goto LAB_058ad86c;
      }
    }
    if (*(char *)(lVar9 + 0x2c1) != *(char *)(lVar8 + 8)) {
      uVar15 = 9;
      goto LAB_058ad86c;
    }
    iVar20 = *(int *)(lVar9 + 700);
    bVar7 = FUN_058aa534(lVar8,0);
    if (((-1 < iVar20 ^ bVar7) & 1) != 0) {
LAB_058ad940:
      uVar15 = 10;
      goto LAB_058ad86c;
    }
    if (-1 < *(int *)(lVar9 + 700)) {
      FUN_058bc494(local_13c,lVar8,param_1,0);
      uVar2 = *(undefined4 *)(lVar9 + 700);
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar11 = (uint *)FUN_0499dea4(lVar9 + 0xd0,uVar2,
                                     *(undefined8 *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                    );
      uVar3 = *puVar11;
      if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (((uVar3 ^ local_13c[0]) & 0xffff) != 0) goto LAB_058ad940;
    }
    if ((*(char *)(lVar9 + 0x2c2) != *(char *)(lVar8 + 0x7f)) ||
       ((*(char *)(lVar9 + 0x2c2) != '\0' &&
        (((*(int *)(lVar9 + 0x2c4) != *(int *)(lVar8 + 0x10) ||
          (*(int *)(lVar9 + 0x2c8) != *(int *)(lVar8 + 0x14))) ||
         (*(int *)(lVar9 + 0x2cc) != *(int *)(lVar8 + 0x18))))))) {
      uVar15 = 0xb;
      goto LAB_058ad86c;
    }
  }
  if (DAT_066d31d0 == '\0') {
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__);
    DAT_066d31d0 = '\x01';
  }
  iVar20 = *(int *)(lVar8 + 0x28);
  uVar3 = *(uint *)(lVar8 + 0x2c);
  uVar15 = (ulong)uVar3;
  uVar18 = *(ulong *)
            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
  lVar16 = *(long *)(uVar18 + 0x38);
  if (lVar16 == 0) {
    FUN_02b76274(uVar18);
    lVar16 = *(long *)(uVar18 + 0x38);
  }
  lVar16 = FUN_0322b7b4(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar16 + 0x10));
  if ((int)uVar3 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar3 != 0) {
    puVar11 = (uint *)(lVar16 + (long)iVar20 * 0xc + 8);
    do {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_058adf00;
      uVar3 = *puVar11;
      uVar22 = *(undefined8 *)(puVar11 + -2);
      uVar18 = uVar18 & 0xffffffff00000000 | (ulong)uVar3;
      lVar16 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                         (*(long *)(param_1 + 0x10),uVar22,uVar18);
      if ((*(int *)(lVar9 + 0x298) <= *(int *)(lVar16 + 4)) &&
         (*(int *)(lVar16 + 4) < *(int *)(lVar9 + 0x29c) + 1)) {
        unaff_x25 = (short *)((ulong)unaff_x25 & 0xffffffff00000000 | (ulong)uVar3);
        uVar12 = FUN_058abd20(lVar8,uVar22,unaff_x25,param_1,0);
        if ((uVar12 & 1) == 0) {
          uVar15 = 2;
          goto LAB_058ad86c;
        }
      }
      uVar15 = uVar15 - 1;
      puVar11 = puVar11 + 3;
    } while (uVar15 != 0);
  }
  memset(auStack_124,0,0xc4);
  puVar6 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar20 = *(int *)(lVar9 + 400);
  if (DAT_066d31dd == '\0') {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31dd = '\x01';
  }
  iVar20 = 8 - iVar20;
  iVar21 = *(int *)(lVar8 + 0x38);
  uVar3 = *(uint *)(lVar8 + 0x3c);
  lVar19 = *(long *)
            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  lVar16 = *(long *)(lVar19 + 0x38);
  if (lVar16 == 0) {
    FUN_02b76274(lVar19);
    lVar16 = *(long *)(lVar19 + 0x38);
  }
  lVar16 = FUN_0322b7a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar16 + 0x10));
  puVar4 = PTR_DAT_06322b80;
  if ((int)uVar3 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar3 != 0) {
    uVar15 = 0;
    do {
      puVar5 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
      ;
      psVar10 = (short *)(lVar16 + (long)iVar21 * 0x18 + uVar15 * 0x18);
      iVar23 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*(int *)(lVar9 + 400) <= iVar23) break;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        psVar13 = (short *)FUN_0499dea4(lVar9 + 0xd0,iVar23,*(undefined8 *)puVar5);
        if (DAT_066d3287 == '\0') {
          FUN_02b3c81c(puVar4);
          DAT_066d3287 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (((*psVar10 == *psVar13) && (*(int *)(psVar13 + 8) == *(int *)(psVar10 + 8))) &&
           (*(int *)(psVar13 + 10) == *(int *)(psVar10 + 10))) goto LAB_058adc28;
        iVar23 = iVar23 + 1;
      }
      if (iVar20 == 0) goto LAB_058aded4;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0499de70(auStack_124,psVar10,
                   *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
      iVar20 = iVar20 + -1;
LAB_058adc28:
      iVar14 = *(int *)(lVar9 + 0x29c);
      for (iVar23 = *(int *)(lVar9 + 0x298); iVar23 <= iVar14; iVar23 = iVar23 + 1) {
        lVar19 = FUN_03ab2128(param_1 + 0x18,iVar23,
                              *(undefined8 *)
                               Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        iVar14 = *(int *)(lVar19 + 0x28);
        uVar1 = *(uint *)(lVar19 + 0x2c);
        uVar18 = (ulong)uVar1;
        lVar24 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar17 = *(long *)(lVar24 + 0x38);
        if (lVar17 == 0) {
          FUN_02b76274(lVar24);
          lVar17 = *(long *)(lVar24 + 0x38);
        }
        lVar17 = FUN_0322b7b4(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar17 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar1 != 0) {
          psVar13 = (short *)(lVar17 + (long)iVar14 * 0xc);
          do {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if ((*psVar10 == *psVar13) &&
               (uVar12 = FUN_058abd20(lVar19,*(undefined8 *)psVar13,*(undefined4 *)(psVar13 + 4),
                                      param_1,0), (uVar12 & 1) == 0)) {
              uVar15 = 3;
              goto LAB_058ad86c;
            }
            uVar18 = uVar18 - 1;
            psVar13 = psVar13 + 6;
          } while (uVar18 != 0);
        }
        iVar14 = *(int *)(lVar9 + 0x29c);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar3);
  }
  auVar25 = FUN_058bc3f8(lVar8,param_1,0);
  puVar5 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  puVar4 = PTR_DAT_06322b80;
  if (0 < auVar25._8_4_) {
    uVar15 = 0;
    do {
      psVar10 = (short *)(auVar25._0_8_ + uVar15 * 0x18);
      iVar21 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*(int *)(lVar9 + 400) <= iVar21) break;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        psVar13 = (short *)FUN_0499dea4(lVar9 + 0xd0,iVar21,*(undefined8 *)puVar5);
        if (DAT_066d3287 == '\0') {
          FUN_02b3c81c(puVar4);
          DAT_066d3287 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (((*psVar10 == *psVar13) && (*(int *)(psVar13 + 8) == *(int *)(psVar10 + 8))) &&
           (*(int *)(psVar13 + 10) == *(int *)(psVar10 + 10))) goto LAB_058ade88;
        iVar21 = iVar21 + 1;
      }
      if (iVar20 == 0) goto LAB_058aded4;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0499de70(auStack_124,psVar10,
                   *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
      iVar20 = iVar20 + -1;
LAB_058ade88:
      uVar15 = uVar15 + 1;
    } while (uVar15 != (auVar25._8_8_ & 0xffffffff));
  }
  if ((*(int *)(lVar9 + 0x2a0) < 8) ||
     (uVar15 = FUN_058ae018(param_1,lVar9,lVar8), (uVar15 & 1) != 0)) {
    uVar15 = 0xd;
  }
  else {
    uVar15 = 7;
  }
LAB_058ad86c:
  return uVar15 | (ulong)param_3 << 0x20;
LAB_058aded4:
  uVar15 = 6;
  goto LAB_058ad86c;
}


