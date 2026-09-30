/*
FUNCTION_NAME: FUN_051dfa94
ENTRY_POINT: 051dfa94
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_4
*/


void FUN_051dfa94(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int local_34;
  
  local_34 = param_3;
  if ((DAT_06a51f21 & 1) == 0) {
    FUN_02d4dc40(PlayFab_EconomyModels_SearchItemsRequest_var);
    FUN_02d4dc40(System_Net_TransportType_var);
    FUN_02d4dc40(System_Data_SqlTypes_SqlInt32_var);
    FUN_02d4dc40(System_Runtime_Serialization_SerializationEventHandler_var);
    FUN_02d4dc40(
                UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                );
    FUN_02d4dc40(UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var);
    FUN_02d4dc40(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var);
    DAT_06a51f21 = 1;
  }
  if (param_2 == 0) {
    cVar3 = FUN_051afd2c(param_1,0);
    if (cVar3 == '\0') {
      return;
    }
    FUN_051afd44(param_1,1,
                 *(undefined8 *)
                  UnityEngine_InputSystem_OnScreen_OnScreenControl_OnScreenDeviceInfo_var,0);
    return;
  }
  uVar4 = FUN_051b2544();
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  param_1[0x13] = param_1[0x13] + (long)(param_3 + 7);
  uVar5 = FUN_051aed3c(param_1,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_051b5bfc(param_1,0);
    if (lVar6 == 0) goto LAB_051dfe08;
    *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
    lVar6 = FUN_051b5bfc(param_1,0);
    if (lVar6 == 0) goto LAB_051dfe08;
    *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
  }
  puVar2 = System_Net_TransportType_var;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 == 0) {
LAB_051dfe04:
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  cVar3 = *(char *)(param_2 + 0x20);
  if (cVar3 == -0x10) {
    lVar6 = FUN_051b5bfc(param_1,0);
    if (lVar6 != 0) {
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + param_3;
      *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
      FUN_051dfe64(param_1,param_2);
      return;
    }
LAB_051dfe08:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (cVar3 == -0xd) {
    if ((uVar1 == 1) || (uVar1 < 3)) goto LAB_051dfe04;
    if ((*(byte *)(param_2 + 0x21) & 0x7f) == 7) {
      cVar3 = *(char *)(param_2 + 0x22);
      lVar6 = *(long *)System_Net_TransportType_var;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar6 = *(long *)puVar2;
      }
      if (cVar3 == *(char *)(*(long *)(lVar6 + 0xb8) + 4)) {
        lVar6 = thunk_FUN_02d8a638(*(undefined8 *)
                                    System_Runtime_Serialization_SerializationEventHandler_var);
        FUN_05044d4c(lVar6,0);
        *(long *)(lVar6 + 0x18) = param_2;
        thunk_FUN_02dc1ef0((long *)(lVar6 + 0x18),param_2);
        *(int *)(lVar6 + 0x14) = (int)*(undefined8 *)(param_2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x051dfc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x278))(param_1,lVar6,*(undefined8 *)(*param_1 + 0x280));
        return;
      }
    }
    if (*(int *)(*(long *)PlayFab_EconomyModels_SearchItemsRequest_var + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar6 = FUN_051b4148(0);
    if (lVar6 == 0) goto LAB_051dfe08;
    FUN_051d455c(lVar6,param_2,0,param_3);
    *(undefined4 *)(lVar6 + 0x10) = 0;
    if (*(int *)(lVar6 + 0x14) < 0) {
      *(undefined4 *)(lVar6 + 0x14) = 0;
      FUN_051db040(lVar6,0);
    }
    lVar9 = param_1[0x24];
    thunk_FUN_02d5b8bc(lVar9,0);
    if (param_1[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_03a8badc(param_1[0x24],lVar6,*(undefined8 *)System_Data_SqlTypes_SqlInt32_var);
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(lVar9,0);
  }
  else {
    cVar3 = FUN_051afd2c(param_1,0);
    if ((cVar3 != '\0') && (0 < param_3)) {
      if (*(int *)(param_2 + 0x18) == 0) goto LAB_051dfe04;
      uVar7 = FUN_04f73bf4((char *)(param_2 + 0x20),0);
      uVar8 = FUN_05000654(&local_34,0);
      uVar7 = FUN_04e80bdc(*(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                           ,uVar7,*(undefined8 *)
                                   UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_var,uVar8,0
                          );
      FUN_051afd44(param_1,1,uVar7,0);
    }
  }
  return;
}


