/*
FUNCTION_NAME: FUN_053d6800
ENTRY_POINT: 053d6800
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_053d6800(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
  if ((DAT_066d09e2 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_50_0_TypeInfo);
    DAT_066d09e2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_053d65b0(param_1,param_2);
  if (param_2 != (long *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x428))(param_2,*(undefined8 *)(*param_2 + 0x430));
    if (1 < iVar2) {
      uVar3 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_48_0_TypeInfo);
      uVar3 = FUN_0540c734(uVar3,0);
      thunk_FUN_02ba3594(PTR_DAT_06312c98);
      uVar4 = thunk_FUN_02b79644();
      FUN_04d76a30(uVar4,uVar3,0);
      uVar3 = FUN_0540c738(uVar4,0);
      uVar4 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_51_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,uVar4);
    }
    if (((param_3 != 0) && (*(long *)(param_3 + 0x20) != 0)) &&
       (lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0x28), lVar5 != 0)) {
      uVar3 = FUN_04bffdac(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,
                           *(undefined8 *)(lVar5 + 0x10),0);
      if ((*(long *)(param_3 + 0x20) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0x28), lVar5 != 0)) {
        uVar3 = FUN_053d69b4(uVar3,*(undefined8 *)(lVar5 + 0x18));
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar5);
        }
        *(undefined8 *)(param_1 + 0x28) = uVar3;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar3);
        *(long *)(param_1 + 0x80) = param_3;
        thunk_FUN_02bb0e9c((long *)(param_1 + 0x80),param_3);
        uVar3 = (**(code **)(*param_2 + 0x418))(param_2,*(undefined8 *)(*param_2 + 0x420));
        FUN_053d5b38(param_1,9,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


