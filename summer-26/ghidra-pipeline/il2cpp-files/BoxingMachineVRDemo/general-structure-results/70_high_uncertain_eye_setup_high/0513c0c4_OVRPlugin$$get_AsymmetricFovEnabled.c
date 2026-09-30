/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 0513c0c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_AsymmetricFovEnabled(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_06b79ce8 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_067657d0);
    FUN_02d6084c(PTR_DAT_067680d0);
    FUN_02d6084c(PTR_DAT_0677dca0);
    DAT_06b79ce8 = 1;
  }
  puVar2 = PTR_DAT_067680d0;
  if (param_2 == 0) {
LAB_0513c220:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = FUN_0513b340(param_2);
  if (lVar3 != 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar2;
    }
    uVar5 = FUN_0513b548(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x48),1);
    puVar2 = PTR_DAT_067657d0;
    if ((uVar5 & 1) != 0) {
      plVar10 = *(long **)(lVar3 + 0x38);
      if (plVar10 != (long *)0x0) {
        if (*plVar10 == *(long *)PTR_DAT_067657d0) {
          pauVar7 = (undefined1 (*) [16])thunk_FUN_02d9d688(plVar10);
          puVar2 = PTR_DAT_0677dca0;
          auVar11 = *pauVar7;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar6 = *(undefined8 *)puVar2;
        }
        else {
          plVar1 = plVar10;
          if (*plVar10 != *(long *)(PTR_DAT_0675e258 + 0x90)) {
            plVar1 = (long *)0x0;
          }
          if (plVar1 == (long *)0x0) {
            if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_04f8e414(0);
            if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
            }
            FUN_04f8acb8(plVar10,uVar6,0);
            FUN_04feb438();
            puVar2 = PTR_DAT_0677dca0;
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            FUN_03dca88c(param_1,0,0,*(undefined8 *)puVar2);
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_04f8e414(0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar2);
          }
          auVar11 = FUN_04feccb8(plVar1,uVar6,0);
          puVar2 = PTR_DAT_0677dca0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar6 = *(undefined8 *)puVar2;
          *param_1 = 0;
        }
        FUN_03dca88c(param_1,auVar11._0_8_,auVar11._8_8_,uVar6);
        return;
      }
      goto LAB_0513c220;
    }
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  FUN_028f4b80();
  uVar6 = FUN_04f8e414(0);
  thunk_FUN_02dc61f4(PTR_DAT_067680d0);
  FUN_028f4b80();
  uVar8 = FUN_0513b454(param_2);
  uVar9 = thunk_FUN_02dc61f4(PTR_DAT_067817f8);
  uVar6 = FUN_050f0ec0(uVar9,uVar6,uVar8,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar8 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar8,uVar6,0);
  uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781830);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar8,uVar6);
}


