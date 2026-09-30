/*
FUNCTION_NAME: OVRManager$$get_profile
ENTRY_POINT: 05117850
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_profile(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 3000));
  FUN_02d6084c(PTR_DAT_067809c0);
  FUN_02d6084c(PTR_DAT_06768cc0);
  FUN_02d6084c(PTR_DAT_067809c8);
  FUN_02d6084c(PTR_DAT_067680e0);
  FUN_02d6084c(PTR_DAT_067809b8);
  FUN_02d6084c(PTR_DAT_067809a8);
  *(undefined1 *)(unaff_x21 + 0xba4) = 1;
  puVar1 = PTR_DAT_067809a8;
  if (unaff_x20 == 0) {
    lVar6 = *(long *)(unaff_x19 + 0x18);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_04f8e414(0);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067809d8);
      uVar2 = FUN_050f0ec0(uVar8,uVar2,uVar7,0);
      thunk_FUN_02dc61f4(PTR_DAT_0677d960);
      uVar8 = thunk_FUN_02d9d534();
      FUN_050931fc(uVar8,uVar2,0);
      uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06780948);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar8,uVar2);
    }
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
  }
  else {
    lVar6 = *(long *)PTR_DAT_067809a8;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067809c8);
      FUN_04d62ba4(uVar2,uVar8,*(undefined8 *)PTR_DAT_067809b8,0);
      puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    uVar2 = FUN_033ad7e8();
    uVar2 = FUN_033b5b9c(uVar2,*(undefined8 *)PTR_DAT_06768cc0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(0,uVar2);
    }
    uVar2 = FUN_05020f78(*(long *)(unaff_x19 + 0x10),uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_06766bb8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f3a4e4(uVar2,0,0);
    if ((uVar4 & 1) == 0) {
      lVar6 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_04f8e414(0);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067809d0);
      uVar2 = FUN_050f0ec0(uVar8,uVar2,uVar7,0);
      thunk_FUN_02dc61f4(PTR_DAT_0677d960);
      uVar8 = thunk_FUN_02d9d534();
      FUN_050931fc(uVar8,uVar2,0);
      uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06780948);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar8,uVar2);
    }
    if (*(int *)(*(long *)PTR_DAT_067680e0 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar5 = (long *)FUN_05117140();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = (**(code **)(*plVar5 + 0x188))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 400));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
  }
  return;
}


