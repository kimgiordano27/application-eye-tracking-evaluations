/*
FUNCTION_NAME: FUN_098ec504
ENTRY_POINT: 098ec504
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_098ec504(long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                 uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  if ((DAT_0a549016 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f22de8);
    FUN_04447ba8(OVRTask<OVRAnchor>_TypeInfo);
    FUN_04447ba8(OVRTask<object>_TypeInfo);
    FUN_04447ba8(OVRTask<MRUK_LoadDeviceResult>_TypeInfo);
    FUN_04447ba8(OVRTask<Int32Enum>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f21a78);
    FUN_04447ba8(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_04447ba8(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_04447ba8(OVRTask<OVRSceneManager_Metrics>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f89328);
    DAT_0a549016 = 1;
  }
  FUN_07a80df4(param_1,0);
  *(long *)(param_1 + 0x28) = param_2;
  thunk_FUN_044bb4b4((long *)(param_1 + 0x28),param_2);
  if ((param_3 & 1) != 0) {
    if ((param_2 == 0) || (param_5 == 0)) goto LAB_098ec858;
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    uVar5 = FUN_099093f8(param_5,0);
    if (*(int *)(*(long *)OVRTask<Int32Enum>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)OVRTask<Int32Enum>_TypeInfo);
    }
    lVar6 = FUN_098ec8a4(uVar4,param_4,uVar5);
    if (lVar6 == 0) {
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f929a0);
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar8 = thunk_FUN_0448520c();
      FUN_0799d598(uVar8,uVar5,0);
      uVar5 = thunk_FUN_044adef4(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar8,uVar5);
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo);
    FUN_09909288(lVar7,param_5,0);
    plVar11 = (long *)(param_1 + 0x48);
    *plVar11 = lVar7;
    thunk_FUN_044bb4b4(plVar11,lVar7);
    if (*plVar11 == 0) goto LAB_098ec858;
    FUN_09909400(*plVar11,lVar6,0);
  }
  puVar3 = OVRTask<OVRPlugin_Result>_TypeInfo;
  puVar2 = OVRTask<object>_TypeInfo;
  puVar1 = OVRTask<OVRAnchor>_TypeInfo;
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
  FUN_05bad610(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x30),uVar5);
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_07441bc0(uVar5,*(undefined8 *)puVar1);
  puVar12 = (undefined8 *)(param_1 + 0x18);
  *puVar12 = uVar5;
  thunk_FUN_044bb4b4(puVar12,uVar5);
  plVar11 = (long *)*puVar12;
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f21a78) {
          puVar12 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_098ec744;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f21a78,2);
LAB_098ec744:
    uVar5 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    thunk_FUN_044bb4b4();
    puVar1 = PTR_DAT_09f89328;
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      uVar4 = FUN_088366b0(*(long *)(param_2 + 0x10),0);
      lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
      FUN_08795540(lVar6,uVar4,1,6,0);
      plVar11 = (long *)(param_1 + 0x40);
      *plVar11 = lVar6;
      thunk_FUN_044bb4b4(plVar11,lVar6);
      if ((param_6 & 1) != 0) {
        if (*plVar11 == 0) goto LAB_098ec858;
        FUN_0879ccdc(*plVar11,0xffff,4,1,0);
      }
      if (*plVar11 != 0) {
        FUN_087993c8(*plVar11,param_2,0);
        puVar2 = OVRTask<MRUK_LoadDeviceResult>_TypeInfo;
        puVar1 = PTR_DAT_09f22de8;
        if (*plVar11 != 0) {
          FUN_0879972c(*plVar11,500,0);
          lVar6 = *plVar11;
          uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
          System_Decimal_DecCalc__Div96By64(uVar5,0,*(undefined8 *)puVar2,0);
          if (lVar6 != 0) {
            FUN_08798ffc(lVar6,uVar5,param_1,0);
            return;
          }
        }
      }
    }
  }
LAB_098ec858:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


