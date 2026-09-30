/*
FUNCTION_NAME: FUN_0261c6e8
ENTRY_POINT: 0261c6e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0261c6e8(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long local_48;
  
  if ((DAT_037834b0 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__);
    thunk_FUN_00d48444(System_Action<byte[],_int,_Decimal>_TypeInfo);
    thunk_FUN_00d48444(Method_System_ComponentModel_TypeConverter_GetConvertToException__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
                      );
    thunk_FUN_00d48444(Meta_WitAi_WitService_<>c__DisplayClass81_0_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<Animation>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LinkedList<__Il2CppFullySharedGenericType>_OnDeserialization__
                      );
    thunk_FUN_00d48444(OVRPlugin_SkeletonType_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_037834b0 = 1;
  }
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_70 = 0;
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x48);
    uVar10 = *(undefined4 *)(param_1 + 0x4c);
    uVar7 = *(undefined8 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar5 + 0x48);
    uVar1 = *(undefined4 *)(lVar5 + 0x20);
    uVar2 = *(undefined4 *)(lVar5 + 0x24);
    if (*(int *)(*(long *)Method_UnityEngine_GameObject_GetComponentInChildren<Animation>__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02618e2c(uVar9,uVar10,uVar7,uVar8,&local_80,uVar1,uVar2);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_026f10f4(&local_80,0);
      puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (lVar5 == 0) goto LAB_0261c89c;
      lVar5 = FUN_0268fd4c(lVar5,0);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
      }
      uVar4 = FUN_02681b9c(lVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar5 == 0) goto LAB_0261c89c;
        FUN_010e5dd8(lVar5,&local_48,
                     *(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_02681b9c(local_48,0,0);
        if ((uVar4 & 1) != 0) {
          if (local_48 == 0) goto LAB_0261c89c;
          uVar7 = FUN_0268fd4c(local_48,0);
          *(undefined8 *)(param_1 + 0x30) = uVar7;
        }
      }
    }
    return;
  }
LAB_0261c89c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


