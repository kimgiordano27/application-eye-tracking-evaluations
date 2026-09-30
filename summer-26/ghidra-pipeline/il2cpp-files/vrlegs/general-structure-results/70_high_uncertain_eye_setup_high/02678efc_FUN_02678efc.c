/*
FUNCTION_NAME: FUN_02678efc
ENTRY_POINT: 02678efc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02678efc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_03cf3e18;
                    /* try { // try from 02678f10 to 02778f37 has its CatchHandler @ 026790fc */
  if ((DAT_0412429e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0870);
    FUN_01ab69ac(PTR_DAT_03cc9e20);
                    /* try { // try from 02678f40 to 02778f7f has its CatchHandler @ 02679104 */
    FUN_01ab69ac(PTR_DAT_03cc0330);
    FUN_01ab69ac(PTR_DAT_03cf3e20);
    FUN_01ab69ac(PTR_DAT_03cf3e18);
    DAT_0412429e = 1;
  }
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar6,0);
  puVar1 = PTR_DAT_03cc0330;
  if (lVar6 != 0) {
    plVar10 = (long *)(lVar6 + 0x10);
    *plVar10 = param_1;
                    /* try { // try from 02678f90 to 02778fb7 has its CatchHandler @ 026790f8 */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,param_1);
    *(undefined8 *)(lVar6 + 0x18) = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar6 + 0x18),param_2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (DAT_04123d83 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cc0330);
      DAT_04123d83 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar1;
    }
    plVar8 = (long *)FUN_01ab69c8(lVar7);
    puVar1 = PTR_DAT_03cc9e20;
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc9e20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04121c69 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cc9e20);
        DAT_04121c69 = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_026790f0;
      uVar3 = FUN_025ca734(lVar7,0);
      uVar4 = 0;
    }
    else {
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_026790f0;
      uVar3 = FUN_025ca734(*(long *)(lVar7 + 0x28),0);
      uVar4 = OVRPlugin__SetControllerLocalizedVibration(lVar7,0);
    }
    puVar2 = PTR_DAT_03cf3e20;
    puVar1 = PTR_DAT_03cc0870;
    if (*plVar10 != 0) {
      uVar5 = OVRPlugin__SetControllerLocalizedVibration(*plVar10,0);
      FUN_025bb1e4(uVar3,uVar4,uVar5,0);
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_026b1d64(uVar9,lVar6,*(undefined8 *)puVar2,0);
      return uVar9;
    }
  }
LAB_026790f0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


