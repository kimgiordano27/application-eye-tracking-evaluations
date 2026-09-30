/*
FUNCTION_NAME: OVRPlugin$$GetTimeInSeconds
ENTRY_POINT: 01d85610
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetTimeInSeconds(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_023592e0;
  puVar1 = PTR_DAT_0234bc58;
  if ((DAT_0247d7fe & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_023592e0);
    FUN_00fdc2e4(PTR_DAT_023592e8);
    FUN_00fdc2e4(PTR_DAT_0234bc58);
    DAT_0247d7fe = 1;
  }
  uVar5 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar5 = FUN_01d5e86c(uVar5,0);
  lVar3 = (**(code **)(*param_1 + 0x208))(param_1,uVar5,1,*(undefined8 *)(*param_1 + 0x210));
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x18) == 0) {
      lVar3 = 0;
    }
    else {
      if ((int)*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar4 = *(long **)(lVar3 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_01d856f0;
      if (*plVar4 != *(long *)PTR_DAT_023592e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0();
      }
      lVar3 = plVar4[2];
    }
    return lVar3;
  }
LAB_01d856f0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


