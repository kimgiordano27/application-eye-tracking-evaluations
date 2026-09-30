/*
FUNCTION_NAME: thunk_FUN_068565f4
ENTRY_POINT: 068591e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void thunk_FUN_068565f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  if ((DAT_071d6b3e & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39ca8);
    FUN_02f07e70(OVRPlugin_OVRP_1_107_0_TypeInfo);
    DAT_071d6b3e = 1;
  }
  lStack_30 = 0;
  uStack_28 = 0;
  uStack_18 = 0;
  if ((*(long *)(param_1 + 0x3d8) != 0) &&
     (lVar2 = FUN_068c2b24(*(long *)(param_1 + 0x3d8),0), *(long *)(lVar2 + 0x38) != 0)) {
    if (*(long *)(param_1 + 0x3d8) == 0) {
LAB_068566fc:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = FUN_068c2b24(*(long *)(param_1 + 0x3d8),0);
    if (*(long *)(lVar2 + 0x38) == 0) goto LAB_068566fc;
    uVar3 = FUN_04c8610c(*(long *)(lVar2 + 0x38),*(undefined8 *)OVRPlugin_OVRP_1_107_0_TypeInfo,
                         &lStack_30,*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
    if ((uVar3 & 1) != 0) {
      if (lStack_30 == 0) goto LAB_068566fc;
      uVar3 = FUN_068e1c7c(lStack_30,uStack_28,&uStack_18,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      puVar4 = (undefined4 *)((ulong)&uStack_18 | 4);
      goto LAB_068566e4;
    }
  }
  puVar1 = PTR_DAT_06d39ca8;
  lVar2 = *(long *)PTR_DAT_06d39ca8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = (undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x28);
LAB_068566e4:
  *(undefined4 *)(param_1 + 0x3e0) = *puVar4;
  return;
}


