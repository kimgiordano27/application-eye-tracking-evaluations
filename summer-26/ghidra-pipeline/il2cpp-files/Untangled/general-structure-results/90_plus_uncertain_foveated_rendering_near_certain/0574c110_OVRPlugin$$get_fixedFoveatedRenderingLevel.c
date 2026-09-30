/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 0574c110
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  long unaff_x22;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d02350);
  *(undefined1 *)(unaff_x21 + 0xa05) = 1;
  puVar1 = PTR_DAT_06d3b0a0;
  if (*(long *)(unaff_x22 + 0x38) == 0) {
    return **(undefined8 **)(*(long *)PTR_DAT_06d02350 + 0xb8);
  }
  plVar2 = (long *)thunk_FUN_02ef170c(*(long *)(unaff_x22 + 0x38),*(undefined8 *)PTR_DAT_06d3b0a0);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(unaff_x22 + 0x38);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0574c1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0574c1d8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar2,*(long *)puVar1,0);
LAB_0574c1d8:
                    /* WARNING: Could not recover jumptable at 0x0574c1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2);
  return uVar4;
}


