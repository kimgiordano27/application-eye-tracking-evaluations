/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 07a2298c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  puVar1 = (undefined8 *)FUN_040b1e00();
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x28);
  uVar2 = thunk_FUN_040b4efc(*unaff_x24);
  FUN_075d444c();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
        goto LAB_07a22a30;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x22,0xd);
LAB_07a22a30:
  (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  return;
}


