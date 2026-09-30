/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 08a29118
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__get_IsSupported(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_0b32c327 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac4c7d8);
    DAT_0b32c327 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_08a29198;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac4c7d8,0);
LAB_08a29198:
  uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  lVar2 = 0x98;
  if ((uVar3 & 1) == 0) {
    lVar2 = 0x90;
  }
  return *(undefined8 *)(param_1 + lVar2);
}


