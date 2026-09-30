/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 0513e884
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__IsValidBone(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_067680d0;
  if (*(int *)(*(long *)PTR_DAT_067680d0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = FUN_0513b340();
  if (lVar3 != 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = FUN_0513b548(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),1);
    puVar1 = PTR_DAT_067677e0;
    if ((uVar5 & 1) != 0) {
      plVar10 = *(long **)(lVar3 + 0x38);
      if (plVar10 == (long *)0x0) {
        in_stack_00000008 = 0;
      }
      else {
        if (*plVar10 == *(long *)PTR_DAT_067677e0) {
          puVar7 = (undefined8 *)thunk_FUN_02d9d688(plVar10);
          uVar6 = *puVar7;
          uVar8 = puVar7[1];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar2 = FUN_0547686c(uVar6,uVar8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_04f8e414(0);
          if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
          }
          uVar2 = FUN_04f8936c(plVar10,uVar6,0);
        }
        in_stack_00000008 = 0;
        FUN_03dd54c4(&stack0x00000008,uVar2,*(undefined8 *)PTR_DAT_0676f698);
      }
      return in_stack_00000008;
    }
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  FUN_028f4b80();
  uVar6 = FUN_04f8e414(0);
  thunk_FUN_02dc61f4(PTR_DAT_067680d0);
  FUN_028f4b80();
  uVar8 = FUN_0513b454();
  uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781910);
  uVar6 = FUN_050f0ec0(uVar9,uVar6,uVar8,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar8 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar8,uVar6,0);
  uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781918);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar8,uVar6);
}


