/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 0513e69c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_w8;
  long *plVar10;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = FUN_0513b340();
  if (lVar3 != 0) {
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x21;
    }
    uVar5 = FUN_0513b548(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
    puVar2 = PTR_DAT_067677e0;
    puVar1 = PTR_DAT_06760758;
    if ((uVar5 & 1) != 0) {
      plVar10 = *(long **)(lVar3 + 0x38);
      if (plVar10 != (long *)0x0) {
        if (*plVar10 == *(long *)PTR_DAT_067677e0) {
          puVar7 = (undefined8 *)thunk_FUN_02d9d688(plVar10);
          uVar6 = *puVar7;
          uVar8 = puVar7[1];
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05476cfc(uVar6,uVar8,0);
          return;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_04f8e414(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar1);
      }
      FUN_04f8a7e0(plVar10,uVar6,0);
      return;
    }
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  FUN_028f4b80();
  uVar6 = FUN_04f8e414(0);
  thunk_FUN_02dc61f4(PTR_DAT_067680d0);
  FUN_028f4b80();
  uVar8 = FUN_0513b454();
  uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781838);
  uVar6 = FUN_050f0ec0(uVar9,uVar6,uVar8,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar8 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar8,uVar6,0);
  uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781908);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar8,uVar6);
}


