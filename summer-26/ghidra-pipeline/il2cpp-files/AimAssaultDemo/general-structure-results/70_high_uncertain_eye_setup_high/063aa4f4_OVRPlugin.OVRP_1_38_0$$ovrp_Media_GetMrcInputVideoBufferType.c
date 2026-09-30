/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 063aa4f4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  
  piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
      goto LAB_063aa600;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_063aa600:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_063aa66c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07db6c00,9);
LAB_063aa66c:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db6c88 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07db6c88))
      {
        FUN_068d2224(plVar3,0);
        return plVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


