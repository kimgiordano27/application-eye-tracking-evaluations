/*
FUNCTION_NAME: FUN_0702ad24
ENTRY_POINT: 0702ad24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x0702b318) */

void FUN_0702ad24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,ulong param_6,undefined8 param_7,ulong param_8,undefined8 param_9,
                 undefined4 param_10)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long local_88;
  
  puVar2 = OVRNetwork_OVRNetworkTcpServer_TypeInfo;
  if ((DAT_07eebdbe & 1) == 0) {
    FUN_03642964(OVRPlugin_BodyJointSet_TypeInfo);
    FUN_03642964(OVRNetwork_OVRNetworkTcpServer_TypeInfo);
    FUN_03642964(OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    FUN_03642964(FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo);
    FUN_03642964(OVRPlugin_EnvironmentRaycastStatus_TypeInfo);
    FUN_03642964(System_Runtime_Serialization_KnownTypeDataContractResolver_TypeInfo);
    FUN_03642964(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_03642964(OVRPlugin_GUID_TypeInfo);
    FUN_03642964(OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo);
    FUN_03642964(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    DAT_07eebdbe = 1;
  }
  local_88 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar3 = System_Runtime_Serialization_KnownTypeDataContractResolver_TypeInfo;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar4 = (long *)FUN_03eb3b14(param_5,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo,
                                &local_88,**(undefined8 **)(*(long *)puVar2 + 0xb8),
                                *(undefined8 *)OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo,
                                0x800,*(undefined8 *)OVRPlugin_EnvironmentRaycastStatus_TypeInfo);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07eeb029 == '\0') {
    FUN_03642964(PTR_DAT_079ffde0);
    DAT_07eeb029 = '\x01';
  }
  puVar2 = PTR_DAT_079ffde0;
  if (*(int *)(*(long *)PTR_DAT_079ffde0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07eeb02a == '\0') {
    FUN_03642964(PTR_DAT_079ffde0);
    DAT_07eeb02a = '\x01';
  }
  uVar1 = (uint)param_6 & 0xffff0000;
  if ((param_6 & 0xffff0000) != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar2;
    }
    puVar8 = *(uint **)(lVar5 + 0xb8);
    if (uVar1 != *puVar8) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar8 = *(uint **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 != puVar8[1]) goto LAB_0702afc8;
    }
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(ulong *)(local_88 + 0x10) = param_6;
    *(undefined8 *)(local_88 + 0x18) = param_7;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0702afac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_0367cd30(plVar4,*(long *)FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo,0);
LAB_0702afac:
    (*(code *)*puVar6)(plVar4,param_6,param_7,0,2,puVar6[1]);
  }
LAB_0702afc8:
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07eeb029 == '\0') {
    FUN_03642964(PTR_DAT_079ffde0);
    DAT_07eeb029 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07eeb02a == '\0') {
    FUN_03642964(PTR_DAT_079ffde0);
    DAT_07eeb02a = '\x01';
  }
  uVar1 = (uint)param_8 & 0xffff0000;
  if ((param_8 & 0xffff0000) != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar2;
    }
    puVar8 = *(uint **)(lVar5 + 0xb8);
    if (uVar1 != *puVar8) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar8 = *(uint **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 != puVar8[1]) goto LAB_0702b0f0;
    }
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(ulong *)(local_88 + 0x20) = param_8;
    *(undefined8 *)(local_88 + 0x28) = param_9;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0702b0d8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_0367cd30(plVar4,*(long *)FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo,4);
LAB_0702b0d8:
    (*(code *)*puVar6)(plVar4,param_8,param_9,2,puVar6[1]);
  }
LAB_0702b0f0:
  if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined4 *)(local_88 + 0x30) = param_10;
  *(undefined4 *)(local_88 + 0x34) = param_1;
  *(undefined4 *)(local_88 + 0x38) = param_2;
  *(undefined4 *)(local_88 + 0x3c) = param_3;
  *(undefined4 *)(local_88 + 0x40) = param_4;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo
         ) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
        goto LAB_0702b164;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_0367cd30(plVar4,*(long *)OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo,0xb);
LAB_0702b164:
  (*(code *)*puVar6)(plVar4,0,puVar6[1]);
  puVar2 = OVRPlugin_GUID_TypeInfo;
  lVar5 = *(long *)OVRPlugin_GUID_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar11 = puVar6[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar12 = *puVar6;
    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)OVRPlugin_BodyJointSet_TypeInfo);
    UnityEngine_Pool_CollectionPool<object,_KeyValuePair<int,_object>>___cctor
              (lVar11,uVar12,*(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar7 = lVar11;
    thunk_FUN_036b7ad0(plVar7,lVar11);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *plVar4;
  lVar13 = *(long *)OVRPlugin_BodyTrackingFidelity2_TypeInfo;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_0702b258;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar5 = FUN_0367cd30(plVar4);
LAB_0702b258:
  lVar5 = thunk_FUN_03661d64(*(undefined8 *)(lVar5 + 8),lVar13);
  (**(code **)(lVar5 + 8))(plVar4,lVar11,lVar5);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0702b2dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)PTR_DAT_079f4598,0);
LAB_0702b2dc:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return;
}


