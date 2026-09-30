/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 05d81bf8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x10;
  int *piVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == **(long **)(in_x10 + 0xa08)) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 2) * 0x10 + 0x138);
        goto LAB_05d81c48;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d81c48:
                    /* WARNING: Could not recover jumptable at 0x05d81c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


