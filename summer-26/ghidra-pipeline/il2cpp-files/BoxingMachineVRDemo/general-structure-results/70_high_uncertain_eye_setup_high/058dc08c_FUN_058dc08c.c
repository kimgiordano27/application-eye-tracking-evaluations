/*
FUNCTION_NAME: FUN_058dc08c
ENTRY_POINT: 058dc08c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_058dc08c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0675e1b8;
  if ((DAT_06b80b2c & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b80b2c = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x3b0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_058dc280;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x40), lVar3 == 0)) goto LAB_058dc280;
  plVar4 = (long *)FUN_033f3478(lVar3,*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar2 = UnityEngine_Font__add_textureRebuilt(plVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (param_2 == 0) goto LAB_058dc280;
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    if (plVar4 == (long *)0x0) goto LAB_058dc280;
    pcVar5 = *(code **)(*plVar4 + 0x2e8);
    uVar6 = *(undefined8 *)(*plVar4 + 0x2f0);
    break;
  case 1:
    if (plVar4 == (long *)0x0) goto LAB_058dc280;
    pcVar5 = *(code **)(*plVar4 + 0x308);
    uVar6 = *(undefined8 *)(*plVar4 + 0x310);
    break;
  case 2:
    if (plVar4 == (long *)0x0) goto LAB_058dc280;
    pcVar5 = *(code **)(*plVar4 + 0x2f8);
    uVar6 = *(undefined8 *)(*plVar4 + 0x300);
    break;
  case 3:
    if (plVar4 == (long *)0x0) goto LAB_058dc280;
    pcVar5 = *(code **)(*plVar4 + 0x318);
    uVar6 = *(undefined8 *)(*plVar4 + 800);
    break;
  default:
    lVar3 = 0;
    goto LAB_058dc200;
  }
  lVar3 = (*pcVar5)(plVar4,uVar6);
LAB_058dc200:
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = UnityEngine_Font__add_textureRebuilt(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (lVar3 != 0) {
    lVar3 = FUN_06066c74(lVar3,0);
    if ((*(long *)(param_1 + 0x3b0) != 0) &&
       (uVar6 = FUN_0606a288(*(long *)(param_1 + 0x3b0),0), lVar3 != 0)) {
      uVar6 = FUN_0607af70(lVar3,uVar6,0);
      return uVar6;
    }
  }
LAB_058dc280:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


