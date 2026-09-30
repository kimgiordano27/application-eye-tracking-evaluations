/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 060d6554
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


long * OVRPlugin__get_useDynamicFoveatedRendering(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long in_x9;
  int *piVar4;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 6) * 0x10 + 0x138);
        goto LAB_060d6598;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060d6598:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_079fa4d8 + 0x130);
    if (*(byte *)(*plVar3 + 0x130) < bVar1) {
      plVar3 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_079fa4d8) {
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


