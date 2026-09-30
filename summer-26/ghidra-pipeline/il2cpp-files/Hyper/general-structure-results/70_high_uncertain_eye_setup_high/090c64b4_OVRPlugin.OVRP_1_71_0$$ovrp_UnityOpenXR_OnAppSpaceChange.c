/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 090c64b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange
                (long param_1,undefined1 param_2 [16],float param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x10;
  int *piVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == **(long **)(in_x10 + 0xb78)) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_090c6500;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_090c6500:
  fVar4 = (float)(*(code *)*puVar1)();
  if (DAT_0b32c7d3 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32c7d3 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (*(float *)(unaff_x19 + 0x34) <= SQRT(fVar4 * fVar4 + param_3 * param_3)) {
    fVar5 = 0.0;
    if ((*(char *)(unaff_x19 + 0x38) != '\0') &&
       (fVar5 = fVar4, *(char *)(unaff_x19 + 0x3a) != '\0')) {
      fVar5 = -fVar4;
    }
    fVar5 = fVar5 * *(float *)(unaff_x19 + 0x30);
  }
  else {
    if (DAT_0b31f48a == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0e740);
      DAT_0b31f48a = '\x01';
    }
    fVar5 = **(float **)(*(long *)PTR_DAT_0ac0e740 + 0xb8);
  }
  return fVar5;
}


