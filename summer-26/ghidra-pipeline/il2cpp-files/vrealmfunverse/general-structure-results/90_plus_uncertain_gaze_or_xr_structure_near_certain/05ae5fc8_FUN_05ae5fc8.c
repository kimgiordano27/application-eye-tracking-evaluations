/*
FUNCTION_NAME: FUN_05ae5fc8
ENTRY_POINT: 05ae5fc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05ae5fc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  puVar9 = Method_Firebase_Firestore_FirebaseFirestoreSettings_WithReadLock<long>__;
  puVar8 = Method_Firebase_Firestore_FirebaseFirestoreSettings_WithReadLock<bool>__;
  puVar7 = Method_Firebase_Firestore_FirebaseFirestore_SnapshotsInSyncHandler__;
  puVar6 = Method_System_Nullable<AsyncGPUReadbackRequest>_get_HasValue__;
  puVar5 = Method_System_Nullable<AsyncGPUReadbackRequest>__ctor__;
  puVar4 = OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo;
  puVar3 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
  puVar2 = PTR_DAT_06312c50;
  puVar1 = PTR_DAT_06312c40;
  if ((DAT_066d44d5 & 1) == 0) {
    FUN_02b3c81c(Method_Firebase_Firestore_FirebaseFirestoreSettings_WithReadLock<string>__);
    FUN_02b3c81c(Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_CacheSizeBytes>b__19_0__);
    FUN_02b3c81c(Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_Host>b__10_0__);
    FUN_02b3c81c(
                Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_PersistenceEnabled>b__16_0__
                );
    FUN_02b3c81c(Method_Firebase_Firestore_FirebaseFirestoreSettings_WithReadLock<bool>__);
    FUN_02b3c81c(Method_Firebase_Firestore_FirebaseFirestore_SnapshotsInSyncHandler__);
    FUN_02b3c81c(Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_SslEnabled>b__13_0__);
    FUN_02b3c81c(Method_System_Nullable<AsyncGPUReadbackRequest>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<AsyncGPUReadbackRequest>_get_HasValue__);
    FUN_02b3c81c(Method_Firebase_Platform_FirebaseHandler_RunOnMainThread<bool>__);
    FUN_02b3c81c(Method_Firebase_Firestore_FirebaseFirestoreSettings_WithReadLock<long>__);
    FUN_02b3c81c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312c40);
    FUN_02b3c81c(PTR_DAT_06312c50);
    FUN_02b3c81c(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    DAT_066d44d5 = 1;
  }
  uVar12 = *(undefined8 *)puVar2;
  *(undefined1 *)(param_1 + 0x178) = 1;
  *(undefined4 *)(param_1 + 300) = 0x1010101;
  *(undefined1 *)(param_1 + 0x130) = 1;
  *(undefined8 *)(param_1 + 0x180) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)puVar1;
  thunk_FUN_02bb0e9c(param_1 + 0x188);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)puVar3;
  thunk_FUN_02bb0e9c(param_1 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)puVar4;
  thunk_FUN_02bb0e9c(param_1 + 0x198);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  uVar12 = thunk_FUN_02b79644(uVar12);
  FUN_03f07ce0(uVar12,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x1a8) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x1a8,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_0399d0d8(uVar12,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x3f0) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x3f0,uVar12);
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_SslEnabled>b__13_0__
                             );
  FUN_0399a210(uVar12,*(undefined8 *)
                       Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_PersistenceEnabled>b__16_0__
              );
  *(undefined8 *)(param_1 + 0x3f8) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x3f8,uVar12);
  lVar10 = *(long *)puVar9;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *(long *)puVar9;
  }
  puVar2 = Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_Host>b__10_0__;
  puVar1 = Method_Firebase_Firestore_FirebaseFirestoreSettings_<get_CacheSizeBytes>b__19_0__;
  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
  lVar14 = puVar13[1];
  if (lVar14 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar13 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
    }
    uVar12 = *puVar13;
    lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_Firebase_Firestore_FirebaseFirestoreSettings_WithReadLock<string>__
                               );
    FUN_049b7e3c(lVar14,uVar12,
                 *(undefined8 *)Method_Firebase_Platform_FirebaseHandler_RunOnMainThread<bool>__,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
    *plVar11 = lVar14;
    thunk_FUN_02bb0e9c(plVar11,lVar14);
  }
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03630a2c(uVar12,lVar14,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x400) = uVar12;
  thunk_FUN_02bb0e9c(param_1 + 0x400,uVar12);
  FUN_05ae3ff4(param_1);
  return;
}


