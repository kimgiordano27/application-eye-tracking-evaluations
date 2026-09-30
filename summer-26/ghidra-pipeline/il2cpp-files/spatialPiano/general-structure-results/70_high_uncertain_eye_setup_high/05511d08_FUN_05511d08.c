/*
FUNCTION_NAME: FUN_05511d08
ENTRY_POINT: 05511d08
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_05511d08(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_06bbf5be & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf5be = 1;
  }
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x40), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar6 = *(long **)(lVar3 + (long)(int)*(uint *)(param_1 + 0x10) * 8 + 0x20);
    uVar1 = FUN_054fc9fc(param_2,0);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)OVRPlugin_OVRP_1_86_0_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_05511dc8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)OVRPlugin_OVRP_1_86_0_TypeInfo,1);
LAB_05511dc8:
      (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


