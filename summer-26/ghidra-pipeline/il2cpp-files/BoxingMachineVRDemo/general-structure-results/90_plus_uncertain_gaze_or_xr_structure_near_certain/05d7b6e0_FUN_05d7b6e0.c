/*
FUNCTION_NAME: FUN_05d7b6e0
ENTRY_POINT: 05d7b6e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


void FUN_05d7b6e0(long param_1)

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
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar11 = Method_OVRResult<OVRColocationSession_Result>_From__;
  puVar10 = Method_OVRResult<OVRAnchor_ShareResult>_get_Success__;
  puVar6 = Method_OVRResult<OVRAnchor_ShareResult>_get_Status__;
  puVar5 = Method_OVRResult<OVRAnchor_SaveResult>_get_Success__;
  puVar4 = Method_OVRResult<OVRAnchor_SaveResult>_get_Status__;
  puVar3 = Method_OVRResult<OVRAnchor_EraseResult>_get_Success__;
  puVar9 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__;
  puVar8 = PTR_DAT_06769400;
  puVar7 = PTR_DAT_067693f8;
  if ((DAT_06b82cd3 & 1) == 0) {
    FUN_02d6084c(Method_OVRResult<OVRColocationSession_Result>_get_Status__);
    FUN_02d6084c(PTR_DAT_0676e908);
    FUN_02d6084c(PTR_DAT_067693f8);
    FUN_02d6084c(Method_OVRResult<OVRAnchor_EraseResult>_get_Success__);
    FUN_02d6084c(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__);
    FUN_02d6084c(PTR_DAT_0676e900);
    FUN_02d6084c(PTR_DAT_06768ca8);
    FUN_02d6084c(Method_OVRResult<OVRPlugin_Result>_From__);
    FUN_02d6084c(PTR_DAT_06769400);
    FUN_02d6084c(PTR_DAT_0677fd08);
    FUN_02d6084c(PTR_DAT_0677fd10);
    FUN_02d6084c(PTR_DAT_0677fd18);
    FUN_02d6084c(PTR_DAT_0677fe38);
    FUN_02d6084c(PTR_DAT_06766e48);
    FUN_02d6084c(PTR_DAT_06768cf0);
    FUN_02d6084c(Method_OVRResult<OVRPlugin_Result>_get_Status__);
    FUN_02d6084c(Method_OVRResult<OVRPlugin_Result>_get_Success__);
    FUN_02d6084c(PTR_DAT_0677fd30);
    FUN_02d6084c(Method_OVRResult<OVRAnchor_ShareResult>_get_Success__);
    FUN_02d6084c(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__);
    FUN_02d6084c(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__);
    FUN_02d6084c(Method_OVRResult<OVRAnchor_ShareResult>_get_Status__);
    FUN_02d6084c(PTR_DAT_067670c0);
    FUN_02d6084c(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__);
    FUN_02d6084c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<MeshInfo>_get_Count__);
    FUN_02d6084c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                );
    FUN_02d6084c(Method_System_Nullable<MetadataPropertyHandling>_get_HasValue__);
    FUN_02d6084c(Method_OVRResult<OVRAnchor_SaveResult>_get_Status__);
    FUN_02d6084c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    FUN_02d6084c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
                );
    FUN_02d6084c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Value__
                );
    FUN_02d6084c(Method_OVRResult<Guid,_OVRColocationSession_Result>_From__);
    FUN_02d6084c(Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Status__);
    FUN_02d6084c(Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Value__);
    FUN_02d6084c(Method_OVRResult<OVRAnchor_SaveResult>_get_Success__);
    FUN_02d6084c(Method_OVRResult<OVRColocationSession_Result>_From__);
    FUN_02d6084c(Method_OVRResult<ulong,_OVRPlugin_Result>_From__);
    FUN_02d6084c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
    FUN_02d6084c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__);
    FUN_02d6084c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02d6084c(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                );
    DAT_06b82cd3 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_0504920c(param_1,0);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_04894d4c(uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x40),uVar13);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_04894d4c(uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x48),uVar13);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_04894d4c(uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x50) = uVar13;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x50),uVar13);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_05d7c500();
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x28),uVar13);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_05d7c610();
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x30),uVar13);
  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_03aabc60(lVar14,*(undefined8 *)puVar10);
  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
  FUN_05d6db50(lVar15,0);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 0x10) = param_1;
    thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
    puVar7 = Method_OVRResult<OVRPlugin_Result>_get_Status__;
    if (lVar14 != 0) {
      lVar20 = *(long *)(lVar14 + 0x10);
      lVar21 = *(long *)Method_OVRResult<OVRPlugin_Result>_get_Status__;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      puVar8 = Method_OVRResult<Guid,_OVRColocationSession_Result>_From__;
      if (lVar20 != 0) {
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
          *plVar16 = lVar15;
          thunk_FUN_02dd37b4(plVar16,lVar15);
        }
        else {
          FUN_03aac494(lVar14,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
        FUN_05d6c3bc(lVar15,0);
        if (lVar15 != 0) {
          *(long *)(lVar15 + 0x10) = param_1;
          thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
          lVar20 = *(long *)(lVar14 + 0x10);
          lVar21 = *(long *)puVar7;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          puVar8 = Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
          if (lVar20 != 0) {
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
              *plVar16 = lVar15;
              thunk_FUN_02dd37b4(plVar16,lVar15);
            }
            else {
              FUN_03aac494(lVar14,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
            FUN_05d6f6a8(lVar15,0);
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x10) = param_1;
              thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
              lVar20 = *(long *)(lVar14 + 0x10);
              lVar21 = *(long *)puVar7;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              puVar8 = 
              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
              ;
              if (lVar20 != 0) {
                uVar2 = *(uint *)(lVar14 + 0x18);
                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar16 = lVar15;
                  thunk_FUN_02dd37b4(plVar16,lVar15);
                }
                else {
                  FUN_03aac494(lVar14,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                FUN_05d68da8(lVar15,0);
                if (lVar15 != 0) {
                  *(long *)(lVar15 + 0x10) = param_1;
                  thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                  lVar20 = *(long *)(lVar14 + 0x10);
                  lVar21 = *(long *)puVar7;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  puVar8 = 
                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Value__
                  ;
                  if (lVar20 != 0) {
                    uVar2 = *(uint *)(lVar14 + 0x18);
                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar16 = lVar15;
                      thunk_FUN_02dd37b4(plVar16,lVar15);
                    }
                    else {
                      FUN_03aac494(lVar14,lVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                    FUN_05d6b918(lVar15,0);
                    if (lVar15 != 0) {
                      *(long *)(lVar15 + 0x10) = param_1;
                      thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                      lVar20 = *(long *)(lVar14 + 0x10);
                      lVar21 = *(long *)puVar7;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      puVar8 = Method_OVRResult<ulong,_OVRPlugin_Result>_From__;
                      if (lVar20 != 0) {
                        uVar2 = *(uint *)(lVar14 + 0x18);
                        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar16 = lVar15;
                          thunk_FUN_02dd37b4(plVar16,lVar15);
                        }
                        else {
                          FUN_03aac494(lVar14,lVar15,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                        FUN_05d6edc8(lVar15,0);
                        if (lVar15 != 0) {
                          *(long *)(lVar15 + 0x10) = param_1;
                          thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                          lVar20 = *(long *)(lVar14 + 0x10);
                          lVar21 = *(long *)puVar7;
                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                          puVar8 = 
                          Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__;
                          if (lVar20 != 0) {
                            uVar2 = *(uint *)(lVar14 + 0x18);
                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar16 = lVar15;
                              thunk_FUN_02dd37b4(plVar16,lVar15);
                            }
                            else {
                              FUN_03aac494(lVar14,lVar15,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                            FUN_05d68128(lVar15,0);
                            if (lVar15 != 0) {
                              *(long *)(lVar15 + 0x10) = param_1;
                              thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                              lVar20 = *(long *)(lVar14 + 0x10);
                              lVar21 = *(long *)puVar7;
                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                              puVar8 = 
                              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
                              ;
                              if (lVar20 != 0) {
                                uVar2 = *(uint *)(lVar14 + 0x18);
                                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                  *plVar16 = lVar15;
                                  thunk_FUN_02dd37b4(plVar16,lVar15);
                                }
                                else {
                                  FUN_03aac494(lVar14,lVar15,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                                FUN_05d6a9c8(lVar15,0);
                                if (lVar15 != 0) {
                                  *(long *)(lVar15 + 0x10) = param_1;
                                  thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                                  lVar20 = *(long *)(lVar14 + 0x10);
                                  lVar21 = *(long *)puVar7;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  puVar8 = 
                                  Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Status__;
                                  if (lVar20 != 0) {
                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                      *plVar16 = lVar15;
                                      thunk_FUN_02dd37b4(plVar16,lVar15);
                                    }
                                    else {
                                      FUN_03aac494(lVar14,lVar15,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                                    FUN_05d6d2b0(lVar15,0);
                                    if (lVar15 != 0) {
                                      *(long *)(lVar15 + 0x10) = param_1;
                                      thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                                      lVar20 = *(long *)(lVar14 + 0x10);
                                      lVar21 = *(long *)puVar7;
                                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                      puVar8 = 
                                      Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Value__
                                      ;
                                      if (lVar20 != 0) {
                                        uVar2 = *(uint *)(lVar14 + 0x18);
                                        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                          *plVar16 = lVar15;
                                          thunk_FUN_02dd37b4(plVar16,lVar15);
                                        }
                                        else {
                                          FUN_03aac494(lVar14,lVar15,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                                        FUN_05d6d9c0(lVar15,0);
                                        if (lVar15 != 0) {
                                          *(long *)(lVar15 + 0x10) = param_1;
                                          thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                                          lVar20 = *(long *)(lVar14 + 0x10);
                                          lVar21 = *(long *)puVar7;
                                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                          puVar8 = 
                                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                                          ;
                                          if (lVar20 != 0) {
                                            uVar2 = *(uint *)(lVar14 + 0x18);
                                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                              *plVar16 = lVar15;
                                              thunk_FUN_02dd37b4(plVar16,lVar15);
                                            }
                                            else {
                                              FUN_03aac494(lVar14,lVar15,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar21 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                                            FUN_05d6fcb8(lVar15,0);
                                            if (lVar15 != 0) {
                                              *(long *)(lVar15 + 0x10) = param_1;
                                              thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1);
                                              lVar20 = *(long *)(lVar14 + 0x10);
                                              lVar21 = *(long *)puVar7;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              puVar8 = 
                                              Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__
                                              ;
                                              if (lVar20 != 0) {
                                                uVar2 = *(uint *)(lVar14 + 0x18);
                                                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                    0x20);
                                                  *plVar16 = lVar15;
                                                  thunk_FUN_02dd37b4(plVar16,lVar15);
                                                }
                                                else {
                                                  FUN_03aac494(lVar14,lVar15,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar21 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                                                FUN_05d6f368(lVar15,0);
                                                if (lVar15 != 0) {
                                                  *(long *)(lVar15 + 0x10) = param_1;
                                                  thunk_FUN_02dd37b4((long *)(lVar15 + 0x10),param_1
                                                                    );
                                                  lVar20 = *(long *)(lVar14 + 0x10);
                                                  lVar21 = *(long *)puVar7;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar4 = 
                                                  Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__
                                                  ;
                                                  puVar3 = 
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__
                                                  ;
                                                  puVar9 = 
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__
                                                  ;
                                                  puVar8 = Method_OVRResult<OVRPlugin_Result>_From__
                                                  ;
                                                  puVar7 = 
                                                  Method_OVRResult<OVRColocationSession_Result>_get_Status__
                                                  ;
                                                  if (lVar20 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar16 = lVar15;
                                                      thunk_FUN_02dd37b4(plVar16,lVar15);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar21 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(param_1 + 0x10) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(param_1 + 0x10),lVar14
                                                                    );
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_04894d4c(uVar13,*(undefined8 *)puVar7);
                                                  *(undefined8 *)(param_1 + 0x18) = uVar13;
                                                  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x18),
                                                                     uVar13);
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar9);
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  UnityEngine_XR_Hands_MetaAimHand__set_aimFlags
                                                            (uVar13,0);
                                                  puVar7 = 
                                                  Method_OVRResult<OVRPlugin_Result>_get_Success__;
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar20 = *(long *)
                                                  Method_OVRResult<OVRPlugin_Result>_get_Success__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar8 = 
                                                  Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      puVar17 = (undefined8 *)
                                                                (lVar15 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                                      *puVar17 = uVar13;
                                                      thunk_FUN_02dd37b4(puVar17,uVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar16 = (long *)(param_1 + 0x20);
                                                  *plVar16 = lVar14;
                                                  thunk_FUN_02dd37b4(plVar16,lVar14);
                                                  lVar14 = *plVar16;
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_05d776a8(uVar13,0);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar20 = *(long *)puVar7;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar9 = PTR_DAT_0677fe38;
                                                    puVar8 = PTR_DAT_0676e908;
                                                    puVar7 = PTR_DAT_0676e900;
                                                    if (lVar15 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        puVar17 = (undefined8 *)
                                                                  (lVar15 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar17 = uVar13;
                                                        thunk_FUN_02dd37b4(puVar17,uVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar12 = 
                                                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                                                  ;
                                                  puVar11 = 
                                                  Method_System_Nullable<MetadataPropertyHandling>_get_HasValue__
                                                  ;
                                                  puVar10 = 
                                                  Method_System_Collections_Generic_List<MeshInfo>_get_Count__
                                                  ;
                                                  puVar6 = PTR_DAT_06768cf0;
                                                  puVar5 = PTR_DAT_06768ca8;
                                                  puVar4 = PTR_DAT_067670c0;
                                                  puVar3 = PTR_DAT_06766e48;
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_04894d4c(uVar13,*(undefined8 *)puVar8);
                                                  *(undefined8 *)(param_1 + 0x38) = uVar13;
                                                  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x38),
                                                                     uVar13);
                                                  uVar13 = *(undefined8 *)puVar9;
                                                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) +
                                                              0xe4) == 0) {
                                                    thunk_FUN_02dbd7b4();
                                                  }
                                                  uVar13 = FUN_05015c2c(uVar13,0);
                                                  uVar18 = FUN_05015c2c(*(undefined8 *)puVar4,0);
                                                  FUN_05d7c6ec(param_1,uVar13,uVar18);
                                                  uVar13 = FUN_05015c2c(*(undefined8 *)puVar6,0);
                                                  uVar18 = FUN_05015c2c(*(undefined8 *)puVar4,0);
                                                  FUN_05d7c6ec(param_1,uVar13,uVar18);
                                                  uVar13 = FUN_05015c2c(*(undefined8 *)puVar3,0);
                                                  uVar18 = FUN_05015c2c(*(undefined8 *)puVar5,0);
                                                  FUN_05d7c6ec(param_1,uVar13,uVar18);
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar12
                                                                             );
                                                  Unity_XR_CoreUtils_Datums_AnimationCurveDatumProperty___ctor
                                                            (uVar13,0);
                                                  *(undefined8 *)(param_1 + 0x58) = uVar13;
                                                  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x58),
                                                                     uVar13);
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar10
                                                                             );
                                                  FUN_05d75b68(uVar13,0);
                                                  *(undefined8 *)(param_1 + 0x60) = uVar13;
                                                  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x60),
                                                                     uVar13);
                                                  lVar14 = *(long *)puVar11;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_02dbd7b4();
                                                    lVar14 = *(long *)puVar11;
                                                  }
                                                  puVar9 = 
                                                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                                                  ;
                                                  puVar8 = PTR_DAT_0677fd10;
                                                  puVar7 = PTR_DAT_0677fd08;
                                                  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x50
                                                                    );
                                                  if (lVar14 != 0) {
                                                    FUN_03aaceb0(&local_78,lVar14,
                                                                 *(undefined8 *)PTR_DAT_0677fd30);
                                                    do {
                                                      uVar19 = FUN_04a7a4a0(&local_78,
                                                                            *(undefined8 *)puVar8);
                                                      if ((uVar19 & 1) == 0) {
                                                        FUN_04a7a49c(&local_78,*(undefined8 *)puVar7
                                                                    );
                                                        return;
                                                      }
                                                      plVar16 = (long *)FUN_05031494(local_68,0);
                                                      if (plVar16 != (long *)0x0) {
                                                        bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
                                                        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                                                           (*(long *)(*(long *)(*plVar16 + 200) +
                                                                      (ulong)bVar1 * 8 + -8) !=
                                                            *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
                                                          FUN_02d60e88(plVar16);
                                                        }
                                                      }
                                                      FUN_05d7c7f4(param_1,plVar16);
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


