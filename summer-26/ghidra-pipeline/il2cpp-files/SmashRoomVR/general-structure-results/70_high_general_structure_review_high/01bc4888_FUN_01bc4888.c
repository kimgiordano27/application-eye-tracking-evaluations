/*
FUNCTION_NAME: FUN_01bc4888
ENTRY_POINT: 01bc4888
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void FUN_01bc4888(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__8_3__;
  if ((DAT_03fed1aa & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__8_4__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__8_3__
                      );
    DAT_03fed1aa = 1;
  }
  uVar2 = thunk_FUN_02ee6388(param_2,*(undefined8 *)puVar1,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = thunk_FUN_02ee6388(param_2,*(undefined8 *)
                                        Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__8_4__
                               ,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01bc498c;
    FUN_0391fb70(*(long *)(param_1 + 0x28),0,0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01bc498c;
    FUN_0391fb70(*(long *)(param_1 + 0x30),1,0);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01bc498c;
    FUN_0391fb70(*(long *)(param_1 + 0x20),0,0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01bc498c;
    FUN_0391fb70(*(long *)(param_1 + 0x28),1,0);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  if (lVar3 != 0) {
    FUN_0391fb70(lVar3,0,0);
    return;
  }
LAB_01bc498c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


