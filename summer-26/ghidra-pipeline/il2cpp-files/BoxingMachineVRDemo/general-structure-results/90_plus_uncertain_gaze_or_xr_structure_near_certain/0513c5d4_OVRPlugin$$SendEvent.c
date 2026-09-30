/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 0513c5d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16] OVRPlugin__SendEvent(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067677e0);
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_067680d0);
    FUN_02d6084c(PTR_DAT_0677dc00);
    *(undefined1 *)(unaff_x20 + 0xcea) = 1;
  }
  puVar1 = PTR_DAT_067680d0;
  if (unaff_x19 == 0) {
LAB_0513c738:
    return ZEXT816(0);
  }
  if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = FUN_0513b340();
  if (lVar2 != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar1;
    }
    uVar4 = FUN_0513b548(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),1);
    puVar1 = PTR_DAT_067677e0;
    if ((uVar4 & 1) != 0) {
      plVar9 = *(long **)(lVar2 + 0x38);
      if (plVar9 != (long *)0x0) {
        if (*plVar9 == *(long *)PTR_DAT_067677e0) {
          puVar6 = (undefined8 *)thunk_FUN_02d9d688(plVar9);
          uVar5 = *puVar6;
          uVar7 = puVar6[1];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05476ae4(uVar5,uVar7,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_04f8e414(0);
          if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
          }
          FUN_04f8a60c(plVar9,uVar5,0);
        }
        FUN_03dcb204();
      }
      goto LAB_0513c738;
    }
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  FUN_028f4b80();
  uVar5 = FUN_04f8e414(0);
  thunk_FUN_02dc61f4(PTR_DAT_067680d0);
  FUN_028f4b80();
  uVar7 = FUN_0513b454();
  uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781848);
  uVar5 = FUN_050f0ec0(uVar8,uVar5,uVar7,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar7 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar7,uVar5,0);
  uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781850);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar7,uVar5);
}


