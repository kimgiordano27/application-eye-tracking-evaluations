/*
FUNCTION_NAME: FUN_07801dd8
ENTRY_POINT: 07801dd8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07801dd8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_38;
  
  if ((DAT_0898730a & 1) == 0) {
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_084ad1b8);
    FUN_03a8a718(PTR_DAT_084acef0);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<long,_Material>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<long,_TMP_FontAsset>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    DAT_0898730a = 1;
  }
  puVar2 = PTR_DAT_084acef0;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 8);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                              );
    FUN_0679343c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03afed3c();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar9 = *(long **)(lVar8 + 0x18);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
                              );
    FUN_04957830(uVar5,lVar4,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                 ,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *plVar9;
    lVar8 = *(long *)
             System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
    ;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_07801f80;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_03ac43c4(plVar9);
LAB_07801f80:
    lVar4 = thunk_FUN_03aa9644(*(undefined8 *)(lVar4 + 8),lVar8);
    lVar4 = (**(code **)(lVar4 + 8))(plVar9,uVar5,lVar4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar4,*(undefined8 *)
                                   System_Collections_Generic_Dictionary<long,_TMP_FontAsset>_TypeInfo
                           );
    uVar6 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_TypeInfo)
    ;
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fedd10(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                  );
      return;
    }
  }
  uVar5 = FUN_0587c704(&local_38,
                       *(undefined8 *)System_Collections_Generic_Dictionary<long,_Material>_TypeInfo
                      );
  puVar3 = PTR_DAT_084ad1b8;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


