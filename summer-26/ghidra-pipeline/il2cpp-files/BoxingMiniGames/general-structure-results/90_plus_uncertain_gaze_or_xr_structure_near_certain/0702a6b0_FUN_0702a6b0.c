/*
FUNCTION_NAME: FUN_0702a6b0
ENTRY_POINT: 0702a6b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_11;validity_or_gating_hits_14;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0702aa9c) */

void FUN_0702a6b0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  long local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo;
  local_50 = param_3;
  uStack_48 = param_4;
  if ((DAT_07eebdba & 1) == 0) {
    FUN_03642964(OVRPermissionsRequester_<>c_TypeInfo);
    FUN_03642964(OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(OVRPermissionsRequester_Permission_TypeInfo);
    FUN_03642964(OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    FUN_03642964(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    FUN_03642964(OVRPlugin_<>c_TypeInfo);
    FUN_03642964(OVRPlugin_<>c__DisplayClass542_0_TypeInfo);
    DAT_07eebdba = 1;
  }
  local_60 = 0;
  local_58 = (long *)0x0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar2 = (long *)FUN_03eb3b14(param_1,param_5,&local_60,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                                param_6,param_7,
                                *(undefined8 *)
                                 UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
  local_58 = plVar2;
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined4 *)(local_60 + 0x20) = param_2;
  *(undefined8 *)(local_60 + 0x18) = uStack_48;
  *(undefined8 *)(local_60 + 0x10) = local_50;
  puVar1 = OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo)
      {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0702a81c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_0367cd30(plVar2,*(long *)OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo,0);
LAB_0702a81c:
  (*(code *)*puVar3)(plVar2,&local_50,1,puVar3[1]);
  plVar2 = local_58;
  if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar6 = *local_58;
  lVar5 = *(long *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_0702a888;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30(local_58,lVar5,0xc);
LAB_0702a888:
  (*(code *)*puVar3)(plVar2,1,puVar3[1]);
  plVar2 = local_58;
  if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar6 = *local_58;
  lVar5 = *(long *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_0702a8f0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30(local_58,lVar5,3);
LAB_0702a8f0:
  (*(code *)*puVar3)(plVar2,&local_50,param_2,puVar3[1]);
  plVar2 = local_58;
  puVar1 = OVRPlugin_<>c__DisplayClass542_0_TypeInfo;
  lVar5 = *(long *)OVRPlugin_<>c__DisplayClass542_0_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar5 + 0xb8);
  lVar6 = puVar3[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar3;
    lVar6 = thunk_FUN_0367fe20(*(undefined8 *)OVRPermissionsRequester_<>c_TypeInfo);
    UnityEngine_Pool_CollectionPool<object,_KeyValuePair<int,_object>>___cctor
              (lVar6,uVar9,*(undefined8 *)OVRPlugin_<>c_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_036b7ad0(plVar4,lVar6);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *plVar2;
  lVar10 = *(long *)OVRPermissionsRequester_Permission_TypeInfo;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_0702a9e8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar5 = FUN_0367cd30(plVar2);
LAB_0702a9e8:
  lVar5 = thunk_FUN_03661d64(*(undefined8 *)(lVar5 + 8),lVar10);
  (**(code **)(lVar5 + 8))(plVar2,lVar6,lVar5);
  plVar2 = local_58;
  if (local_58 != (long *)0x0) {
    lVar5 = *local_58;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0702aa6c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(local_58,*(long *)PTR_DAT_079f4598,0);
LAB_0702aa6c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  return;
}


