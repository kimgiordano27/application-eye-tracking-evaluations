/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 076cc604
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_foveatedRenderingLevel(undefined4 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 in_stack_00000008;
  
  if ((DAT_095481f0 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fadca0);
    FUN_0403162c(PTR_DAT_08fadca8);
    FUN_0403162c(PTR_DAT_08fadcb0);
    FUN_0403162c(PTR_DAT_08fadcb8);
    FUN_0403162c(PTR_DAT_08fadcc0);
    DAT_095481f0 = 1;
  }
  plVar11 = (long *)*param_2;
  in_stack_00000008 = 0;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar7 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08fadcb0) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_076cc6c4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fadcb0,7);
LAB_076cc6c4:
  puVar3 = PTR_DAT_08fadcc0;
  puVar2 = PTR_DAT_08fadcb8;
  puVar1 = PTR_DAT_08fadca8;
  uVar8 = (*(code *)*puVar5)(plVar11,param_1,&stack0x00000008,puVar5[1]);
  if ((uVar8 & 1) == 0) {
    lVar10 = *(long *)PTR_DAT_08fadca0;
    lVar7 = *(long *)(lVar10 + 0x38);
    if (lVar7 == 0) {
      FUN_0406ab48(lVar10);
      lVar7 = *(long *)(lVar10 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    in_stack_00000008 = **(undefined8 **)(lVar7 + 0xb8);
  }
  uVar4 = in_stack_00000008;
  uVar6 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
  FUN_057d4cdc(uVar6,uVar4,*(undefined8 *)puVar2);
  lVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
  FUN_075273c0(lVar7,0);
  *(undefined8 *)(lVar7 + 0x10) = uVar6;
  return lVar7;
}


