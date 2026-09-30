/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 07a395d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_2
*/


long OVRPlugin__IsWideMotionModeHandPosesEnabled(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092f04d8);
  *(undefined1 *)(unaff_x21 + 0x27f) = 1;
  if (unaff_x20 != 0) {
    lVar2 = FUN_050092a8();
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (plVar3 = (long *)FUN_07a38260(*(long *)(unaff_x19 + 0x20)), lVar2 != 0)) {
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        *(undefined8 *)(lVar2 + 0x20) = 0;
      }
      else {
        lVar4 = *(long *)PTR_DAT_092f04c0;
        bVar1 = *(byte *)(lVar4 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = plVar3;
          if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
            plVar5 = (long *)0x0;
          }
        }
        *(long **)(lVar2 + 0x20) = plVar5;
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
          plVar3 = (long *)0x0;
        }
      }
      thunk_FUN_040ec700(lVar2 + 0x20,plVar3);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


