/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetMultimodalHandsControllersSupported
ENTRY_POINT: 01fa10f0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_86_0__ovrp_SetMultimodalHandsControllersSupported(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  uint unaff_w21;
  long lVar8;
  uint uVar9;
  undefined4 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  uStack000000000000000c = 0;
  uStack0000000000000008 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar5 = thunk_FUN_0124bba8();
    FUN_01e7e374(uVar5,0);
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027c2010);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,uVar6);
  }
  if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f9e230(unaff_w21,&stack0x00000018,&stack0x0000000c,&stack0x00000008);
  lVar3 = FUN_01f9fabc();
  if (lVar3 == 0) {
LAB_01fa11e4:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if ((int)uVar1 < 1) {
    lVar7 = 0;
  }
  else {
    uVar9 = 0;
    lVar7 = 0;
    do {
      if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      lVar8 = *(long *)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01fa11e4;
      uVar1 = thunk_FUN_01ef0118(lVar8,0);
      uVar2 = thunk_FUN_01ef0118(lVar8,0);
      if (((uVar1 & (unaff_w21 ^ 2)) == uVar2) &&
         (uVar4 = FUN_01ee38fc(lVar7,0,0), lVar7 = lVar8, (uVar4 & 1) != 0)) {
        uVar5 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
        thunk_FUN_01279b34(PTR_DAT_027bc458);
        uVar6 = thunk_FUN_0124bba8();
        FUN_01ee31d4(uVar6,uVar5,0);
        uVar5 = thunk_FUN_01279b34(PTR_DAT_027c2010);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar6,uVar5);
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  return lVar7;
}


