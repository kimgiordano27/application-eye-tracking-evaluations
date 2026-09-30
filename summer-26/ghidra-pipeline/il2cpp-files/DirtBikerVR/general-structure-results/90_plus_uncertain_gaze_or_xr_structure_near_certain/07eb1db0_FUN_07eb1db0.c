/*
FUNCTION_NAME: FUN_07eb1db0
ENTRY_POINT: 07eb1db0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07eb1db0(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_60 = param_8;
  local_58 = param_9;
  local_50 = param_6;
  local_48 = param_7;
  local_40 = param_4;
  uStack_38 = param_5;
  if ((DAT_0899ac34 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_SetException__
                );
    DAT_0899ac34 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar1 = FUN_07e2ed04(&uStack_38,0);
  if ((uVar1 < 0xe) && ((1 << (ulong)(uVar1 & 0x1f) & 0x3060U) != 0)) {
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uVar3 = FUN_07eb14a8(param_2,local_40,uStack_38,&local_a0);
    if ((uVar3 & 1) != 0) {
      local_78 = local_a0;
      thunk_FUN_03afed3c(&local_78);
      if (2 < param_3) {
        iVar2 = FUN_07e2ed04(&local_48,0);
        if ((iVar2 == 2) && (iVar2 = FUN_07e2ed04(&local_58,0), iVar2 == 2)) {
          if (local_50 != 0) {
            uVar5 = FUN_07e2ed0c(local_50,local_48,0);
            if (local_60 != 0) {
              uVar6 = FUN_07e2ed0c(local_60,local_58,0);
              uStack_70 = CONCAT44(uVar6,uVar5);
              goto LAB_07eb1f48;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_SetException__
                     ,0);
      }
    }
  }
  else {
    lVar4 = **(long **)(*(long *)OVRPlugin_TrackingConfidence_TypeInfo + 0xb8);
    if (lVar4 != 0) {
      uVar5 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),local_40,uStack_38,
                         *(undefined8 *)(lVar4 + 0x28));
      local_68 = CONCAT44(local_68._4_4_,uVar5);
    }
  }
LAB_07eb1f48:
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = local_68;
  return;
}


