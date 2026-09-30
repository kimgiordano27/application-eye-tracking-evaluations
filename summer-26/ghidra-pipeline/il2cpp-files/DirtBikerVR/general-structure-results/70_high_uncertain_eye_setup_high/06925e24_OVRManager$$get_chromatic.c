/*
FUNCTION_NAME: OVRManager$$get_chromatic
ENTRY_POINT: 06925e24
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_chromatic(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0xec2) = in_w8;
  lVar2 = FUN_0447b05c();
  plVar5 = (long *)(unaff_x19 + 0x20);
  *plVar5 = lVar2;
  thunk_FUN_03afed3c(plVar5,lVar2);
  lVar2 = *plVar5;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_07c9e200(lVar2,0,0);
  puVar1 = PTR_DAT_084b58d0;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4fb40(*(undefined8 *)puVar1,0);
  }
  puVar1 = PTR_DAT_084883a0;
  if (*plVar5 != 0) {
    lVar2 = *(long *)(*plVar5 + 0x50);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar2 != 0) {
      FUN_07cb2770(lVar2,uVar4,0);
      if (*plVar5 != 0) {
        lVar2 = *(long *)(*plVar5 + 0x48);
        uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_07cb26a0();
        if (lVar2 != 0) {
          FUN_07cb2770(lVar2,uVar4,0);
          if (*plVar5 != 0) {
            uVar3 = FUN_07c986c8(*plVar5,0);
            if ((uVar3 & 1) != 0) {
              FUN_06925f6c();
              return;
            }
            FUN_06925f90();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


