/*
FUNCTION_NAME: FUN_078cebdc
ENTRY_POINT: 078cebdc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_078cebdc(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 local_28;
  
  if ((DAT_08987a1c & 1) == 0) {
    FUN_03a8a718(UnityEngine_Pool_ObjectPool<GameObject>_TypeInfo);
    FUN_03a8a718(Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo);
    FUN_03a8a718(
                System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                );
    FUN_03a8a718(Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo);
    FUN_03a8a718(Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo);
    FUN_03a8a718(Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo);
    DAT_08987a1c = 1;
  }
  puVar2 = System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TypeInfo;
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x40);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078cecf4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar9,*(long *)
                                  UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo,0)
    ;
LAB_078cecf4:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
           ) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x25) * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_web_call_t_base__get;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar9,*(long *)
                                  System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                          ,0x25);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_web_call_t_base__get:
    lVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_28 = FUN_058b71ec(lVar6,*(undefined8 *)
                                   Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo);
    uVar7 = FUN_0587c6c4(&local_28,
                         *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_28;
      thunk_FUN_03afed3c(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff1198(param_1 + 2,&local_28,param_1,
                   *(undefined8 *)UnityEngine_Pool_ObjectPool<GameObject>_TypeInfo);
      return;
    }
  }
  uVar5 = FUN_0587c704(&local_28,
                       *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo);
  puVar3 = Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


