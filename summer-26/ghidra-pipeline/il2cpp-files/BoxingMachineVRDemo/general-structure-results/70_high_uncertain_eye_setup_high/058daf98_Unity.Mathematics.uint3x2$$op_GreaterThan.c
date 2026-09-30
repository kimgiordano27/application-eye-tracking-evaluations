/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_GreaterThan
ENTRY_POINT: 058daf98
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


undefined8 Unity_Mathematics_uint3x2__op_GreaterThan(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x21;
  long *plVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    *(undefined1 *)(unaff_x21 + 0xb26) = 1;
  }
  plVar4 = *(long **)(unaff_x20 + 0x38);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_47_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_1_47_0_TypeInfo)) {
      lVar3 = plVar4[0xc];
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0606a004(lVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if ((plVar4[0xc] == 0) || (FUN_0606a288(plVar4[0xc],0), unaff_x19 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar2 = FUN_0607af70();
        if ((uVar2 & 1) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


