/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 060d6500
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


long * OVRPlugin__set_fixedFoveatedRenderingLevel(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_07ee0abf & 1) == 0) {
    FUN_03642964(PTR_DAT_079fa4d8);
    FUN_03642964(PTR_DAT_07a20878);
    DAT_07ee0abf = 1;
  }
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a20878) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_060d6598;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a20878,6);
LAB_060d6598:
  plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_079fa4d8 + 0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar1) {
      plVar6 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_079fa4d8) {
      plVar6 = (long *)0x0;
    }
  }
  return plVar6;
}


