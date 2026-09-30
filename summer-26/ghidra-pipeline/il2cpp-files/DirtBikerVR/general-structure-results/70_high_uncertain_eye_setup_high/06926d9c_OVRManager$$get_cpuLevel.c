/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 06926d9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_cpuLevel(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9e200();
  puVar1 = PTR_DAT_084b58d0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4fb40(*(undefined8 *)puVar1,0);
  }
  lVar3 = FUN_0447aad0();
  plVar5 = (long *)(unaff_x19 + 0x30);
  *plVar5 = lVar3;
  thunk_FUN_03afed3c(plVar5,lVar3);
  puVar1 = PTR_DAT_084883a0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x50);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar3 != 0) {
      FUN_07cb2770(lVar3,uVar4,0);
      if (*unaff_x20 != 0) {
        lVar3 = *(long *)(*unaff_x20 + 0x48);
        uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_07cb26a0();
        if (lVar3 != 0) {
          FUN_07cb2770(lVar3,uVar4,0);
          if (*plVar5 != 0) {
            FUN_07c4e050(*plVar5,1,0);
            if (*(char *)(unaff_x19 + 0x28) == '\0') {
              return;
            }
            if (*plVar5 != 0) {
              FUN_07c4e400(*plVar5,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


