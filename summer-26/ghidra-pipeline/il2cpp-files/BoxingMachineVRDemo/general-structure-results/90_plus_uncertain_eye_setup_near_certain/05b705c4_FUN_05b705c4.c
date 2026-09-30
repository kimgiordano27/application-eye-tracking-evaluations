/*
FUNCTION_NAME: FUN_05b705c4
ENTRY_POINT: 05b705c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;telemetry_or_network_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05b705c4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 auStack_1d0 [120];
  undefined1 auStack_158 [120];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo;
  if ((DAT_06b81c78 & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<DebugPanel,_Toggle>_TryGetValue__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<DataTable,_List<DataTable>>_get_Item__
                );
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                );
    DAT_06b81c78 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b80ff8 == '\0') {
    FUN_02d6084c(PTR_DAT_0676c4a8);
    DAT_06b80ff8 = '\x01';
  }
  puVar2 = PTR_DAT_0676c4a8;
  lVar3 = *(long *)PTR_DAT_0676c4a8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    lVar3 = thunk_FUN_02dbd7b4();
  }
  if (DAT_06b80ff9 == '\0') {
    lVar3 = FUN_02d6084c(PTR_DAT_0676c4a8);
    DAT_06b80ff9 = '\x01';
  }
  uVar1 = (uint)param_3 & 0xffff0000;
  if ((param_3 & 0xffff0000) == 0) {
LAB_05b707a8:
    FUN_05b70b50(lVar3,param_2,param_5,param_6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
                );
  }
  else {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar4 = *(uint **)(lVar3 + 0xb8);
    if (uVar1 != *puVar4) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        lVar3 = thunk_FUN_02dbd7b4();
        puVar4 = *(uint **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 != puVar4[1]) goto LAB_05b707a8;
    }
    if ((param_7 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x348);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<DebugPanel,_Toggle>_TryGetValue__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a8aeec(&local_e0,param_3,param_4,param_5,param_6,uVar5,0,0);
      memcpy(auStack_158,&local_e0,0x78);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<DataTable,_List<DataTable>>_get_Item__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      memcpy(auStack_1d0,auStack_158,0x78);
      FUN_05a8a3c8(param_2,auStack_1d0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
                   ,*(undefined8 *)
                     Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                   ,0x104,0);
    }
    else {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<DataTable,_List<DataTable>>_get_Item__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a8940c(param_2,param_3,param_4,param_5,param_6,0,0,0,0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                   ,*(undefined8 *)
                     Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                   ,0xfb,0);
    }
  }
  return;
}


