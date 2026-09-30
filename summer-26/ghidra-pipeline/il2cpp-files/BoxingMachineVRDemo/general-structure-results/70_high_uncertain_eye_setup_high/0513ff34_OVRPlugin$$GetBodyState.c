/*
FUNCTION_NAME: OVRPlugin$$GetBodyState
ENTRY_POINT: 0513ff34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetBodyState(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((DAT_06b79d06 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0677d8b0);
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_067680d0);
    FUN_02d6084c(PTR_DAT_06776bb8);
    FUN_02d6084c(PTR_DAT_06762980);
    DAT_06b79d06 = 1;
  }
  puVar1 = PTR_DAT_067680d0;
  if (param_1 == 0) {
LAB_051400bc:
    return ZEXT816(0);
  }
  if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = FUN_0513b340(param_1);
  if (lVar2 != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar1;
    }
    uVar4 = FUN_0513b548(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30),1);
    if ((uVar4 & 1) != 0) {
      plVar8 = *(long **)(lVar2 + 0x38);
      if (plVar8 != (long *)0x0) {
        if (*plVar8 == *(long *)PTR_DAT_06762980) {
          thunk_FUN_02d9d688(plVar8);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_04f8e414(0);
          if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
          }
          uVar5 = FUN_04f8af30(plVar8,uVar5,0);
          if (*(int *)(*(long *)PTR_DAT_0677d8b0 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d8b0);
          }
          FUN_050da0a4(uVar5,0);
        }
        FUN_03dd4cf8();
      }
      goto LAB_051400bc;
    }
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  FUN_028f4b80();
  uVar5 = FUN_04f8e414(0);
  thunk_FUN_02dc61f4(PTR_DAT_067680d0);
  FUN_028f4b80();
  uVar6 = FUN_0513b454(param_1);
  uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781988);
  uVar5 = FUN_050f0ec0(uVar7,uVar5,uVar6,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar6 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar6,uVar5,0);
  uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781998);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar6,uVar5);
}


