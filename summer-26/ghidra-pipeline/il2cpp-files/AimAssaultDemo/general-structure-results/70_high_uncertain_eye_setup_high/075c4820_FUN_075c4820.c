/*
FUNCTION_NAME: FUN_075c4820
ENTRY_POINT: 075c4820
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_075c4820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_07d97418;
  if ((DAT_0826e84c & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d97418);
    FUN_0373b518(OVRPlugin_OVRP_1_52_0_TypeInfo);
    DAT_0826e84c = 1;
  }
  uVar2 = FUN_0623d4dc(param_2,param_3,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                       (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1],0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar5 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_58_0_TypeInfo);
    uVar7 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_59_0_TypeInfo);
    FUN_061a1bb8(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_70_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar6);
  }
  plVar3 = (long *)FUN_075c3bec();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar8 = *plVar3;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_52_0_TypeInfo) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_075c48f0;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c(plVar3,*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo,3);
LAB_075c48f0:
                    /* WARNING: Could not recover jumptable at 0x075c4914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,param_2,param_3,param_4,0,puVar4[1]);
  return;
}


