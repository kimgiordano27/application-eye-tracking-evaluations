/*
FUNCTION_NAME: FUN_068c7998
ENTRY_POINT: 068c7998
PROGRAM: waitwhat-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_068c7998(long param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_075591f7 & 1) == 0) {
    FUN_03188a78(PersistentPlayersSession_<>c_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_34_0_TypeInfo);
    DAT_075591f7 = 1;
  }
  puVar1 = PTR_DAT_070c1b68;
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x168);
    if (*(int *)(*(long *)OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x3b0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_069d69b8(uVar6,uVar5,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)puVar1;
      *(undefined8 *)(param_1 + 0x3b0) = uVar5;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_069d69b8(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        bVar2 = 0;
      }
      else {
        uVar7 = FUN_069e3174(0);
        *(undefined4 *)(param_1 + 0x3b8) = uVar7;
        if (*(long *)(param_1 + 0x3b0) == 0) goto LAB_068c7b00;
        uVar5 = FUN_03ac2f28(*(long *)(param_1 + 0x3b0),
                             *(undefined8 *)PersistentPlayersSession_<>c_TypeInfo);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)puVar1);
        }
        bVar2 = FUN_069d69b8(uVar5,0,0);
        bVar2 = bVar2 & 1;
      }
      *(byte *)(param_1 + 0x3bd) = bVar2;
      *(undefined1 *)(param_1 + 0x3bc) = 0;
    }
    if (*(long *)(param_1 + 0x310) != 0) {
      FUN_04cd85e8(*(long *)(param_1 + 0x310),param_2,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo)
      ;
      return;
    }
    return;
  }
LAB_068c7b00:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


