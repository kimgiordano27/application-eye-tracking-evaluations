/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 053257fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  char *pcVar5;
  long unaff_x24;
  long *plVar6;
  undefined4 uStack0000000000000004;
  undefined4 uStack000000000000001c;
  
  plVar6 = *(long **)(unaff_x24 + 0xf20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(int *)(*plVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_060f245c(uVar4,0,0);
  puVar1 = PTR_DAT_067cb0c8;
  if ((uVar2 & 1) == 0) {
    pcVar5 = (char *)(unaff_x20 + 0x24);
    if (*pcVar5 != '\0') {
      FUN_03e1b9ac(pcVar5,*(undefined8 *)PTR_DAT_067cb0c8);
      lVar3 = *plVar6;
      uVar4 = *(undefined8 *)(unaff_x21 + 0x20);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar3);
      }
      uVar2 = FUN_060f078c(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x21 + 0x20);
        FUN_03e1b9ac(pcVar5,*(undefined8 *)puVar1);
        if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x18), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uStack000000000000001c = 0;
        uStack0000000000000004 = 0;
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      }
      lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_067ca768 + 0xb8) + 8);
      if (lVar3 != 0) {
        uStack000000000000001c = 0;
        uStack0000000000000004 = 0;
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      }
    }
  }
  return;
}


