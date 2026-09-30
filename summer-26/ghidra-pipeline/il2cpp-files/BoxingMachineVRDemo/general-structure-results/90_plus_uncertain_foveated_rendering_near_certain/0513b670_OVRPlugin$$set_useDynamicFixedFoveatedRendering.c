/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 0513b670
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = FUN_0513b340();
  if (lVar4 != 0) {
    lVar5 = *unaff_x21;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *unaff_x21;
    }
    uVar6 = FUN_0513b548(lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
    puVar2 = PTR_DAT_067677e0;
    puVar1 = PTR_DAT_06760758;
    if ((uVar6 & 1) != 0) {
      plVar11 = *(long **)(lVar4 + 0x38);
      if (plVar11 != (long *)0x0) {
        if (*plVar11 == *(long *)PTR_DAT_067677e0) {
          puVar8 = (undefined8 *)thunk_FUN_02d9d688(plVar11);
          uVar7 = *puVar8;
          uVar9 = puVar8[1];
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar3 = FUN_054765e4(uVar7,uVar9,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar4);
          }
          FUN_04f87140(uVar3,0);
          return;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_04f8e414(0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar4);
      }
      FUN_04f87018(plVar11,uVar7,0);
      return;
    }
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  FUN_028f4b80();
  uVar7 = FUN_04f8e414(0);
  thunk_FUN_02dc61f4(PTR_DAT_067680d0);
  FUN_028f4b80();
  uVar9 = FUN_0513b454();
  uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067817e8);
  uVar7 = FUN_050f0ec0(uVar10,uVar7,uVar9,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar9 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar9,uVar7,0);
  uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067817f0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar9,uVar7);
}


