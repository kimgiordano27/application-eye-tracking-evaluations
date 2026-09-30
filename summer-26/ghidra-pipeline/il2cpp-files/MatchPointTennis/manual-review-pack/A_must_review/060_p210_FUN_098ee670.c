/*
FUNCTION_NAME: FUN_098ee670
ENTRY_POINT: 098ee670
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_098ee670(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if ((DAT_0a549023 & 1) == 0) {
    FUN_04447ba8(OVRTask<Int32Enum>_TypeInfo);
    FUN_04447ba8(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
    FUN_04447ba8(UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>_TypeInfo);
    FUN_04447ba8(UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_Cell>_TypeInfo);
    FUN_04447ba8(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_04447ba8(UnityEngine_Pool_ObjectPool<UITKTextJobSystem_ManagedJobData>_TypeInfo);
    FUN_04447ba8(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f3e038);
    FUN_04447ba8(PTR_DAT_09f305e8);
    DAT_0a549023 = 1;
  }
  puVar2 = PTR_DAT_09f305e8;
  if (param_2 != 0) {
    uVar9 = FUN_09908bc4(param_2,0);
    uVar10 = thunk_FUN_078b3114(uVar9,*(undefined8 *)puVar2,0);
    puVar5 = UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_Cell>_TypeInfo;
    puVar4 = OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo;
    puVar3 = OVRTask<OVRPlugin_Result>_TypeInfo;
    puVar2 = OVRTask<Int32Enum>_TypeInfo;
    if ((uVar10 & 1) == 0) {
      uVar9 = FUN_09908bc4(param_2,0);
      uVar10 = thunk_FUN_078b3114(uVar9,*(undefined8 *)PTR_DAT_09f3e038,0);
      puVar7 = UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_Cell>_TypeInfo;
      puVar6 = UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>_TypeInfo;
      puVar5 = Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo;
      puVar4 = OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo;
      puVar3 = OVRTask<OVRPlugin_Result>_TypeInfo;
      puVar2 = OVRTask<Int32Enum>_TypeInfo;
      if ((uVar10 & 1) == 0) {
        do {
          lVar16 = *(long *)(param_1 + 0x30);
          if (lVar16 == 0) goto LAB_098ee9a0;
          iVar8 = FUN_05baeb04(lVar16,param_2,*(undefined8 *)puVar6);
          if (-1 < iVar8) {
            lVar16 = FUN_05badb74(lVar16,iVar8,
                                  *(undefined8 *)
                                   UnityEngine_Pool_ObjectPool<UITKTextJobSystem_ManagedJobData>_TypeInfo
                                 );
            if (lVar16 != 0) {
              lVar16 = FUN_09908bd4(lVar16,0);
              lVar11 = FUN_09908bd4(param_2,0);
              if (lVar16 == lVar11) {
                return;
              }
              uVar9 = thunk_FUN_044adef4(PTR_DAT_09f92a58);
              uVar9 = FUN_078ab14c(uVar9,param_2,0);
              thunk_FUN_044adef4(UnityEngine_UIElements_ObjectListPool<string>_TypeInfo);
              uVar13 = thunk_FUN_0448520c();
              FUN_098ecd84(uVar13,0x57,uVar9);
              uVar9 = thunk_FUN_044adef4(
                                        UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar13,uVar9);
            }
            goto LAB_098ee9a0;
          }
          lVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
          FUN_05bad738(lVar11,lVar16,*(undefined8 *)puVar7);
          if (lVar11 == 0) goto LAB_098ee9a0;
          lVar14 = *(long *)(lVar11 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_098ee9a0;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = param_2;
            thunk_FUN_044bb4b4(plVar12,param_2);
          }
          else {
            FUN_05bade44(lVar11,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = FUN_044819d0((long *)(param_1 + 0x30),lVar11,lVar16);
        } while (lVar16 != lVar11);
      }
      else {
        do {
          lVar16 = *(long *)(param_1 + 0x10);
          uVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
          if (lVar16 == 0) {
            FUN_05bad610(uVar9,*(undefined8 *)puVar3);
          }
          else {
            FUN_05bad738(uVar9,lVar16,*(undefined8 *)puVar7);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_098ecb40(uVar9,param_2);
          lVar11 = FUN_044819d0((long *)(param_1 + 0x10),uVar9,lVar16);
        } while (lVar16 != lVar11);
      }
    }
    else {
      do {
        lVar16 = *(long *)(param_1 + 0x50);
        uVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
        if (lVar16 == 0) {
          FUN_05bad610(uVar9,*(undefined8 *)puVar3);
        }
        else {
          FUN_05bad738(uVar9,lVar16,*(undefined8 *)puVar5);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_098ecb40(uVar9,param_2);
        lVar11 = FUN_044819d0((long *)(param_1 + 0x50),uVar9,lVar16);
      } while (lVar16 != lVar11);
    }
    return;
  }
LAB_098ee9a0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


