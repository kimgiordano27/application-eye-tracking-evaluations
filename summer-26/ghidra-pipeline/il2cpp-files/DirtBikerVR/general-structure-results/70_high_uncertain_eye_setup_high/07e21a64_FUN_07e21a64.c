/*
FUNCTION_NAME: FUN_07e21a64
ENTRY_POINT: 07e21a64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_07e21a64(long param_1,int param_2,int *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_0899a59c & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_Quatf_TypeInfo);
    DAT_0899a59c = 1;
  }
  *param_3 = 0;
  puVar3 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  uStack_50 = 0;
  iStack_4c = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_60 = 0;
  local_5c = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar5 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    FUN_04e9b100(&local_70,*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
    do {
      uVar4 = FUN_061dc36c(&local_70,*(undefined8 *)puVar3);
      if ((uVar4 & 1) == 0) {
        FUN_061dc368(&local_70,*(undefined8 *)puVar2);
        uVar5 = 0;
        goto LAB_07e21b6c;
      }
    } while (local_60 != param_2);
    *param_3 = param_2;
    *(ulong *)(param_3 + 3) = CONCAT44(uStack_50,uStack_54);
    *(ulong *)(param_3 + 1) = CONCAT44(uStack_58,local_5c);
    param_3[5] = iStack_4c;
    FUN_061dc368(&local_70,*(undefined8 *)puVar2);
    uVar5 = 1;
LAB_07e21b6c:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


