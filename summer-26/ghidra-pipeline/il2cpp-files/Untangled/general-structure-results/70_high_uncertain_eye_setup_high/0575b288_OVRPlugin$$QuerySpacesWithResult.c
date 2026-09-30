/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 0575b288
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__QuerySpacesWithResult(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  long lVar6;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    lVar1 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (lVar1 != 0) {
      lVar2 = thunk_FUN_02ef170c();
      if (lVar2 == 0) {
        uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5,0);
      }
      if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(undefined8 *)(lVar1 + 0x20) = unaff_x19;
      thunk_FUN_02f411dc();
      if ((lVar6 != 0) &&
         (plVar3 = (long *)(**(code **)(lVar6 + 0x18))
                                     (*(undefined8 *)(lVar6 + 0x40),0,lVar1,
                                      *(undefined8 *)(lVar6 + 0x28)), plVar3 != (long *)0x0)) {
        if (*(long *)(*plVar3 + 0x40) == *(long *)(*(long *)PTR_DAT_06d04020 + 0x40)) {
          pcVar4 = (char *)thunk_FUN_02ef195c();
          return *pcVar4 != '\0';
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f08440();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


