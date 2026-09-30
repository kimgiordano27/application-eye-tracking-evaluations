/*
FUNCTION_NAME: FUN_03238d24
ENTRY_POINT: 03238d24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03238d24(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_50 [16];
  
  if ((DAT_04532935 & 1) == 0) {
    FUN_01c5d288(UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04532935 = 1;
  }
  puVar2 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar4 = thunk_FUN_01c496e0();
    uVar5 = thunk_FUN_01c273e8(PTR_DAT_0422fa88);
    uVar3 = thunk_FUN_01c273e8(System_Net_TimerThread_TimerQueue_TypeInfo);
    FUN_03247d68(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 < 0) {
      thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
      uVar4 = thunk_FUN_01c496e0();
      puVar2 = PTR_DAT_04234640;
    }
    else {
      if (-1 < (int)param_4) {
        uVar1 = *(uint *)(param_2 + 0x18) - param_3;
        if ((int)param_4 <= (int)uVar1) {
          if ((*(uint *)(param_2 + 0x18) < param_3) || (uVar1 < param_4)) {
            FUN_032f1cb4(0);
          }
          local_50 = (**(code **)(*param_1 + 0x318))
                               (param_1,param_2,CONCAT44(param_4,param_3),param_5,
                                *(undefined8 *)(*param_1 + 800));
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_03344cb8(local_50,0);
          return;
        }
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar4 = thunk_FUN_01c496e0();
        uVar5 = thunk_FUN_01c273e8(OVR_OpenVR_IVRChaperoneSetup_TypeInfo);
        FUN_032467a0(uVar4,uVar5,0);
        goto LAB_03238ef8;
      }
      thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
      uVar4 = thunk_FUN_01c496e0();
      puVar2 = UnityEngine_ResourceManagement_IUpdateReceiver_TypeInfo;
    }
    uVar5 = thunk_FUN_01c273e8(puVar2);
    uVar3 = thunk_FUN_01c273e8(OVR_OpenVR_IVRApplications_TypeInfo);
    FUN_03243400(uVar4,uVar5,uVar3,0);
  }
LAB_03238ef8:
  uVar5 = thunk_FUN_01c273e8(WeaponHotbar_<RemoveButton>d__28_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar5);
}


