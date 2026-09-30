/*
FUNCTION_NAME: FUN_026790fc
ENTRY_POINT: 026790fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_026790fc(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
                    /* catch() { ... } // from try @ 02678f10 with catch @ 026790fc
                       catch() { ... } // from try @ 02679064 with catch @ 026790fc
                       catch() { ... } // from try @ 02679088 with catch @ 026790fc */
                    /* catch() { ... } // from try @ 02678ff8 with catch @ 02679100
                       catch() { ... } // from try @ 02679078 with catch @ 02679100 */
                    /* catch() { ... } // from try @ 02678f40 with catch @ 02679104
                       catch() { ... } // from try @ 02679068 with catch @ 02679104
                       catch() { ... } // from try @ 02679094 with catch @ 02679104 */
                    /* catch() { ... } // from try @ 02678edc with catch @ 02679108
                       catch() { ... } // from try @ 0267905c with catch @ 02679108
                       catch() { ... } // from try @ 0267907c with catch @ 02679108 */
  if ((DAT_0412429f & 1) == 0) {
                    /* catch() { ... } // from try @ 02678e4c with catch @ 02679114 */
                    /* catch() { ... } // from try @ 02678dc8 with catch @ 02679118 */
    FUN_01ab69ac(PTR_DAT_03cc9e20);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    DAT_0412429f = 1;
  }
  uVar5 = FUN_025bb184(0);
  puVar1 = PTR_DAT_03cc0330;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (DAT_04123d83 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cc0330);
      DAT_04123d83 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar1;
    }
    plVar7 = (long *)FUN_01ab69c8(lVar6);
    puVar1 = PTR_DAT_03cc9e20;
    lVar6 = *plVar7;
    if (lVar6 == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc9e20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04121c69 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cc9e20);
        DAT_04121c69 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_0267926c;
      uVar2 = FUN_025ca734(lVar6,0);
      uVar3 = 0;
    }
    else {
      if (*(long *)(lVar6 + 0x28) == 0) goto LAB_0267926c;
      uVar2 = FUN_025ca734(*(long *)(lVar6 + 0x28),0);
      uVar3 = OVRPlugin__SetControllerLocalizedVibration(lVar6,0);
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0267926c;
    uVar4 = OVRPlugin__SetControllerLocalizedVibration(*(long *)(param_1 + 0x10),0);
    FUN_025bb2ec(uVar2,uVar3,uVar4,0);
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02679268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    return;
  }
LAB_0267926c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


