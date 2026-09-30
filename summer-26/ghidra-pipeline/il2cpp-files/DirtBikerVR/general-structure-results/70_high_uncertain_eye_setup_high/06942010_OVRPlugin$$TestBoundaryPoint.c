/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryPoint
ENTRY_POINT: 06942010
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__TestBoundaryPoint(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  
  if ((*(byte *)(unaff_x21 + 0xfd1) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(PTR_DAT_084b62e0);
    *(undefined1 *)(unaff_x21 + 0xfd1) = 1;
  }
  if (unaff_x20 == unaff_x19) {
    uVar3 = FUN_065c0764(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)PTR_DAT_084b62e0,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4adbc(uVar3,0);
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined4 *)(unaff_x20 + 0x68) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x60),0);
    return;
  }
  plVar4 = (long *)(unaff_x19 + 0x60);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined4 *)(lVar2 + 0x58) = 0;
    thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x50),0);
  }
  *plVar4 = unaff_x20;
  thunk_FUN_03afed3c(plVar4);
  if (*plVar4 == 0) {
    *(undefined4 *)(unaff_x19 + 0x68) = 0;
    return;
  }
  plVar4 = *(long **)(*plVar4 + 0x28);
  if (plVar4 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
    *(undefined4 *)(unaff_x19 + 0x68) = uVar1;
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      plVar4 = (long *)(*(long *)(unaff_x19 + 0x60) + 0x50);
      *plVar4 = unaff_x19;
      thunk_FUN_03afed3c(plVar4);
      plVar4 = *(long **)(unaff_x19 + 0x28);
      if (plVar4 != (long *)0x0) {
        lVar2 = *(long *)(unaff_x19 + 0x60);
        uVar1 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x58) = uVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


