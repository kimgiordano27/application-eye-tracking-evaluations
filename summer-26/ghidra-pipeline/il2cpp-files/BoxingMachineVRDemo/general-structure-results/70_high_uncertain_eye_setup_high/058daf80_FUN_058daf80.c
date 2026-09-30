/*
FUNCTION_NAME: FUN_058daf80
ENTRY_POINT: 058daf80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_058daf80(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_06b80b26 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b80b26 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_47_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_1_47_0_TypeInfo)) {
      lVar4 = plVar5[0xc];
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0606a004(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if ((plVar5[0xc] == 0) || (uVar3 = FUN_0606a288(plVar5[0xc],0), param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar2 = FUN_0607af70(param_2,uVar3,0);
        if ((uVar2 & 1) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


