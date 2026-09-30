/*
FUNCTION_NAME: FUN_058d8f08
ENTRY_POINT: 058d8f08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int FUN_058d8f08(long param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_06b80b20 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769ce0);
    FUN_02d6084c(OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo);
    DAT_06b80b20 = 1;
  }
  puVar4 = PTR_DAT_06769ce0;
  if ((param_1 != 0) && (plVar6 = *(long **)(param_1 + 0x78), plVar6 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)
                       Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo +
                     0x130);
    if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo)) {
      iVar5 = FUN_03524324(plVar6[0x38],plVar6[0x39],param_1,
                           *(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo);
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *(long *)puVar4;
      }
      iVar3 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x10) + -1;
      if (iVar5 <= iVar3) {
        iVar3 = iVar5;
      }
      iVar1 = 0;
      if (-1 < iVar5) {
        iVar1 = iVar3;
      }
      return iVar1 + *(int *)(*(long *)(lVar7 + 0xb8) + 0xc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


