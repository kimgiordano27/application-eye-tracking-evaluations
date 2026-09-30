/*
FUNCTION_NAME: FUN_05848228
ENTRY_POINT: 05848228
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_12;telemetry_or_network_hits_2
*/


long FUN_05848228(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((DAT_06dc0883 & 1) == 0) {
    FUN_02d965b8(System_Random_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a236b8);
    FUN_02d965b8(PTR_DAT_06a0aef0);
    FUN_02d965b8(PTR_DAT_06a15eb8);
    FUN_02d965b8(Unity_Networking_Transport_Utilities_RandomHelpers_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_RangeConditionHeaderValue_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_RangeContentValidator_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_RangeHeaderValue_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_RangeItemHeaderValue_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_RangePositionInfo_TypeInfo);
    FUN_02d965b8(System_RankException_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_RareData_TypeInfo);
    FUN_02d965b8(UnityEngine_Rendering_RasterCommandBuffer_TypeInfo);
    FUN_02d965b8(UnityEngine_Rendering_RenderGraphModule_RasterGraphContext_TypeInfo);
    FUN_02d965b8(UnityEngine_Rendering_RasterState_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_RateLimiter_TypeInfo);
    FUN_02d965b8(UnityEngine_Ray_TypeInfo);
    FUN_02d965b8(
                UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureHandle_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureResource_TypeInfo
                );
    FUN_02d965b8(UnityEngine_RaycastHit_TypeInfo);
    FUN_02d965b8(UnityEngine_RaycastHit2D_TypeInfo);
    FUN_02d965b8(UnityEngine_EventSystems_RaycastResult_TypeInfo);
    FUN_02d965b8(UnityEngine_EventSystems_RaycasterManager_TypeInfo);
    FUN_02d965b8(System_Xml_ReadContentAsBinaryHelper_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo);
    FUN_02d965b8(System_ComponentModel_ReadOnlyAttribute_TypeInfo);
    FUN_02d965b8(System_Data_ReadOnlyException_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_TypeInfo);
    FUN_02d965b8(System_Collections_Specialized_ReadOnlyList_TypeInfo);
    FUN_02d965b8(CsvHelper_ReaderException_TypeInfo);
    FUN_02d965b8(System_Xml_ReaderPositionInfo_TypeInfo);
    FUN_02d965b8(System_Threading_ReaderWriterCount_TypeInfo);
    FUN_02d965b8(System_Threading_ReaderWriterLock_TypeInfo);
    FUN_02d965b8(System_Threading_ReaderWriterLockSlim_TypeInfo);
    FUN_02d965b8(CsvHelper_ReadingContext_TypeInfo);
    FUN_02d965b8(Unity_Netcode_RealTimeProvider_TypeInfo);
    FUN_02d965b8(System_Net_ReceiveState_TypeInfo);
    FUN_02d965b8(Unity_Services_Lobbies_Lobby_ReconnectRequest_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0f8c0);
    FUN_02d965b8(CsvHelper_RecordBuilder_TypeInfo);
    DAT_06dc0883 = 1;
  }
  puVar6 = (undefined8 *)System_Random_TypeInfo;
  if ((param_3 & 1) != 0) goto LAB_05848468;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = (**(code **)(*param_1 + 0x658))(param_1,*(undefined8 *)(*param_1 + 0x660));
  if ((uVar3 & 1) != 0) {
switchD_058484e4_caseD_2:
    puVar6 = (undefined8 *)CsvHelper_RecordBuilder_TypeInfo;
LAB_05848468:
    lVar4 = thunk_FUN_02dd3144(*puVar6);
    FUN_058481b4(lVar4,param_2);
    *(long *)(lVar4 + 0x18) = (long)param_1;
    LeanTween__value((long *)(lVar4 + 0x18),param_1);
    return lVar4;
  }
  if (*(int *)(*(long *)PTR_DAT_06a0f8c0 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_0589238c(param_1,0);
  puVar1 = PTR_DAT_069fb9c0;
  switch(uVar2) {
  case 1:
    lVar4 = *(long *)(PTR_DAT_069fb9c0 + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_054f73b4(lVar4 + 0x20,0);
    uVar3 = FUN_055006dc(param_1,uVar5,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a15eb8);
      FUN_058481b4(lVar4,param_2);
      return lVar4;
    }
    uVar5 = *(undefined8 *)PTR_DAT_06a236b8;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_054f73b4(uVar5,0);
    uVar3 = FUN_055006dc(param_1,uVar5,0);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)PTR_DAT_06a0aef0;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_054f73b4(uVar5,0);
      uVar3 = FUN_055006dc(param_1,uVar5,0);
      if ((uVar3 & 1) == 0) goto switchD_058484e4_caseD_2;
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)CsvHelper_ReaderException_TypeInfo);
      puVar6 = (undefined8 *)System_Xml_Schema_RangeContentValidator_TypeInfo;
    }
    else {
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_ComponentModel_ReadOnlyAttribute_TypeInfo);
      puVar6 = (undefined8 *)System_Net_Http_Headers_RangeConditionHeaderValue_TypeInfo;
    }
    goto LAB_05848714;
  default:
    goto switchD_058484e4_caseD_2;
  case 3:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_TypeInfo);
    FUN_0446adb8(lVar4,param_2,*(undefined8 *)UnityEngine_UIElements_RareData_TypeInfo);
    break;
  case 4:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)Unity_Services_Lobbies_Lobby_ReconnectRequest_TypeInfo
                              );
    FUN_0446ae38(lVar4,param_2,*(undefined8 *)UnityEngine_RaycastHit_TypeInfo);
    break;
  case 5:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)Unity_Netcode_RealTimeProvider_TypeInfo);
    FUN_0446b038(lVar4,param_2,
                 *(undefined8 *)Unity_Networking_Transport_Utilities_RandomHelpers_TypeInfo);
    break;
  case 6:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)UnityEngine_EventSystems_RaycastResult_TypeInfo);
    FUN_0446adf8(lVar4,param_2,
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureResource_TypeInfo
                );
    break;
  case 7:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)UnityEngine_EventSystems_RaycasterManager_TypeInfo);
    System_Collections_ObjectModel_ReadOnlyCollection<GCHandle>__System_Collections_Generic_IList<T>_RemoveAt
              (lVar4,param_2,*(undefined8 *)UnityEngine_RaycastHit2D_TypeInfo);
    break;
  case 8:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)CsvHelper_ReadingContext_TypeInfo);
    FUN_0446b0b8(lVar4,param_2,*(undefined8 *)System_Xml_Schema_RangePositionInfo_TypeInfo);
    break;
  case 9:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo
                              );
    FUN_0446af78(lVar4,param_2,*(undefined8 *)Unity_Services_CloudSave_Internal_RateLimiter_TypeInfo
                );
    break;
  case 10:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_ReaderPositionInfo_TypeInfo);
    System_Collections_ObjectModel_ReadOnlyCollection<GCHandle>__System_Collections_ICollection_CopyTo
              (lVar4,param_2,*(undefined8 *)System_RankException_TypeInfo);
    break;
  case 0xb:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Data_ReadOnlyException_TypeInfo);
    FUN_0446afb8(lVar4,param_2,*(undefined8 *)UnityEngine_Rendering_RasterCommandBuffer_TypeInfo);
    break;
  case 0xc:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Threading_ReaderWriterLockSlim_TypeInfo);
    FUN_0446b138(lVar4,param_2,*(undefined8 *)UnityEngine_Rendering_RasterState_TypeInfo);
    break;
  case 0xd:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_ReadContentAsBinaryHelper_TypeInfo);
    FUN_0446b078(lVar4,param_2,*(undefined8 *)System_Net_Http_Headers_RangeHeaderValue_TypeInfo);
    break;
  case 0xe:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Threading_ReaderWriterCount_TypeInfo);
    System_Collections_ObjectModel_ReadOnlyCollection<GCHandle>__System_Collections_Generic_ICollection<T>_Add
              (lVar4,param_2,
               *(undefined8 *)UnityEngine_Rendering_RenderGraphModule_RasterGraphContext_TypeInfo);
    break;
  case 0xf:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Net_ReceiveState_TypeInfo);
    FUN_0446aeb8(lVar4,param_2,*(undefined8 *)System_Net_Http_Headers_RangeItemHeaderValue_TypeInfo)
    ;
    break;
  case 0x10:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Specialized_ReadOnlyList_TypeInfo);
    FUN_0446ae78(lVar4,param_2,*(undefined8 *)UnityEngine_Ray_TypeInfo);
    break;
  case 0x12:
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Threading_ReaderWriterLock_TypeInfo);
    puVar6 = (undefined8 *)
             UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureHandle_TypeInfo;
LAB_05848714:
    FUN_0446aff8(lVar4,param_2,*puVar6);
  }
  return lVar4;
}


