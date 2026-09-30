/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 05674658
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  uint uVar4;
  
  if (in_NG == in_OV) {
    lVar1 = FUN_03774f48();
    if (lVar1 == 0) {
LAB_05674718:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar2 = *(uint *)(lVar1 + 0x18);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) {
LAB_0567471c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar3 = *(long *)(unaff_x19 + 0xf0);
        if (lVar3 == 0) goto LAB_05674718;
        uVar2 = *(uint *)(lVar1 + (long)(int)uVar4 * 4 + 0x20);
        if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0567471c;
        for (lVar3 = lVar3 + (ulong)uVar2 * 0x18; uVar2 = *(uint *)(lVar3 + 0x30), -1 < (int)uVar2;
            lVar3 = lVar3 + (ulong)uVar2 * 0x18) {
          FUN_03c2e698();
          lVar3 = *(long *)(unaff_x19 + 0xf0);
          if (lVar3 == 0) goto LAB_05674718;
          if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0567471c;
        }
        uVar2 = *(uint *)(lVar1 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  FUN_03774f48();
  return;
}


