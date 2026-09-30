/*
FUNCTION_NAME: FUN_07811100
ENTRY_POINT: 07811100
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_07811100(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_08272319 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    DAT_08272319 = 1;
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  puVar1 = (undefined8 *)(param_1 + 0x4c8);
  uStack_68 = *(undefined8 *)(param_1 + 0x4d0);
  local_70 = *puVar1;
  uStack_58 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_60 = *(undefined8 *)(param_1 + 0x4d8);
  uVar4 = FUN_0787e64c(&local_50,&local_70,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar4 = FUN_0787e564(param_2,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x510) == 0) goto LAB_078113f0;
    FUN_077e77a0(*(long *)(param_1 + 0x510),0,0);
    if (*(long *)(param_1 + 0x510) == 0) goto LAB_078113f0;
    FUN_077e78f0(*(long *)(param_1 + 0x510),0,0);
    if (*(long *)(param_1 + 0x510) == 0) goto LAB_078113f0;
    FUN_077e7a2c(*(long *)(param_1 + 0x510),0,0);
    puVar2 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
    lVar6 = *(long *)(param_1 + 0x510);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (lVar6 == 0) goto LAB_078113f0;
    FUN_0771878c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1e0),0);
    if (*(long *)(param_1 + 0x510) == 0) goto LAB_078113f0;
    FUN_07718664(*(long *)(param_1 + 0x510),
                 *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1e8),0);
    goto LAB_078113a8;
  }
  uVar5 = FUN_0787df3c(param_2,0);
  puVar2 = PTR_DAT_07d86398;
  if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07d86398);
  }
  uVar4 = FUN_075b0180(uVar5,0);
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_0787e004(param_2,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar6);
    }
    uVar4 = FUN_075b0180(uVar5,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_0787e0d0(param_2,0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar6);
      }
      uVar4 = FUN_075b0180(uVar5,0);
      lVar6 = *(long *)(param_1 + 0x510);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_0787e0d0(param_2,0);
        goto joined_r0x07811314;
      }
      uVar5 = FUN_0787c8c0(param_2,0);
      if (lVar6 == 0) goto LAB_078113f0;
      FUN_077e7a2c(lVar6,uVar5,0);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x510);
      uVar5 = FUN_0787e004(param_2,0);
      if (lVar6 == 0) goto LAB_078113f0;
      FUN_077e78f0(lVar6,uVar5,0);
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x510);
    uVar5 = FUN_0787df3c(param_2,0);
joined_r0x07811314:
    if (lVar6 == 0) goto LAB_078113f0;
    FUN_077e77a0(lVar6,uVar5,0);
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  lVar6 = *(long *)(param_1 + 0x510);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__ +
              0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (lVar6 != 0) {
    FUN_07718664(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1e0),0);
    lVar6 = *(long *)(param_1 + 0x510);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1e8);
    uVar3 = FUN_060c08a0(*(undefined8 *)(param_1 + 0x4c0),0);
    if (lVar6 != 0) {
      FUN_077189b0(lVar6,uVar5,uVar3 & 1,0);
LAB_078113a8:
      uVar8 = *param_2;
      uVar7 = param_2[3];
      uVar5 = param_2[2];
      *(undefined8 *)(param_1 + 0x4d0) = param_2[1];
      *puVar1 = uVar8;
      *(undefined8 *)(param_1 + 0x4e0) = uVar7;
      *(undefined8 *)(param_1 + 0x4d8) = uVar5;
      thunk_FUN_037aeb94(puVar1,0);
      FUN_0783aeb0(param_1,*(long *)(*(long *)
                                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                                    + 0xb8) + 0x98,0);
      return;
    }
  }
LAB_078113f0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


