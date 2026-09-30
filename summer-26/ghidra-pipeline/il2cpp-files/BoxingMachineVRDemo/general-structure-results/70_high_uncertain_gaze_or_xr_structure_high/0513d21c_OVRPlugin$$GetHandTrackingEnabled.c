/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 0513d21c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  
  uVar3 = FUN_0513b548();
  puVar2 = PTR_DAT_067677e0;
  puVar1 = PTR_DAT_06760758;
  if ((uVar3 & 1) == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar4 = FUN_04f8e414(0);
    thunk_FUN_02dc61f4(PTR_DAT_067680d0);
    FUN_028f4b80();
    uVar6 = FUN_0513b454();
    uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067818a0);
    uVar4 = FUN_050f0ec0(uVar7,uVar4,uVar6,0);
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar6 = thunk_FUN_02d9d534();
    FUN_04f7d8e0(uVar6,uVar4,0);
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067818a8);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,uVar4);
  }
  plVar8 = *(long **)(unaff_x20 + 0x38);
  if (plVar8 != (long *)0x0) {
    if (*plVar8 == *(long *)PTR_DAT_067677e0) {
      puVar5 = (undefined8 *)thunk_FUN_02d9d688(plVar8);
      uVar4 = *puVar5;
      uVar6 = puVar5[1];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05476554(uVar4,uVar6,0);
      return;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_04f8e414(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  FUN_04f87ea0(plVar8,uVar4,0);
  return;
}


