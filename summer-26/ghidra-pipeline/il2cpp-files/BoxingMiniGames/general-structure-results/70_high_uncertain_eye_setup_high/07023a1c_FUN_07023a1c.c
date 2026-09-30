/*
FUNCTION_NAME: FUN_07023a1c
ENTRY_POINT: 07023a1c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x07023d94) */

void FUN_07023a1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long **pplVar13;
  long local_40;
  long *local_38;
  
  if ((DAT_07eebd94 & 1) == 0) {
    FUN_03642964(OVRManager_MrcCameraType_TypeInfo);
    FUN_03642964(OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(OVRManager_PassthroughCapabilities_TypeInfo);
    FUN_03642964(FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo);
    FUN_03642964(OVRManager_SystemHeadsetType_TypeInfo);
    FUN_03642964(OVRManager_XrApi_TypeInfo);
    FUN_03642964(OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo);
    FUN_03642964(OVRManager_<>c_TypeInfo);
    DAT_07eebd94 = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar2 = (long *)FUN_03eb3ab0(param_2,param_5,&local_40,*(undefined8 *)OVRManager_<>c_TypeInfo,
                                0x10f,*(undefined8 *)OVRManager_SystemHeadsetType_TypeInfo);
  lVar5 = *(long *)(param_2 + 0x58);
  pplVar13 = &local_38;
  uVar12 = 0;
  local_38 = plVar2;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar11 = *(undefined8 *)(lVar5 + 0x30);
  uVar10 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(local_40 + 0x20) = param_3;
  *(undefined8 *)(local_40 + 0x28) = param_4;
  *(undefined8 *)(local_40 + 0x18) = uVar11;
  *(undefined8 *)(local_40 + 0x10) = uVar10;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo)
      {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07023b74;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_0367cd30(plVar2,*(long *)FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo,0);
LAB_07023b74:
  (*(code *)*puVar3)(plVar2,param_3,param_4,0,2,puVar3[1],param_7,param_8,uVar12,pplVar13);
  plVar2 = local_38;
  if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *local_38;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo)
      {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_07023bf0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_0367cd30(local_38,*(long *)OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo,0xb
                       );
LAB_07023bf0:
  (*(code *)*puVar3)(plVar2,0,puVar3[1]);
  plVar2 = local_38;
  puVar1 = OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
  lVar5 = *(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar3[3];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar12 = *puVar3;
    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)OVRManager_MrcCameraType_TypeInfo);
    UnityEngine_Pool_CollectionPool<object,_KeyValuePair<int,_object>>___cctor
              (lVar8,uVar12,*(undefined8 *)OVRManager_XrApi_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar4 = lVar8;
    thunk_FUN_036b7ad0(plVar4,lVar8);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *plVar2;
  lVar9 = *(long *)OVRManager_PassthroughCapabilities_TypeInfo;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_07023ce4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_0367cd30(plVar2);
LAB_07023ce4:
  lVar5 = thunk_FUN_03661d64(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))(plVar2,lVar8,lVar5);
  plVar2 = local_38;
  if (local_38 != (long *)0x0) {
    lVar5 = *local_38;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07023d68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(local_38,*(long *)PTR_DAT_079f4598,0);
LAB_07023d68:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  return;
}


