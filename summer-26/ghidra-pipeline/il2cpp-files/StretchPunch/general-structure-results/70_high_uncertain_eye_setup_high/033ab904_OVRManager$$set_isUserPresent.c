/*
FUNCTION_NAME: OVRManager$$set_isUserPresent
ENTRY_POINT: 033ab904
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__set_isUserPresent(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar3;
  
  do {
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x23) {
LAB_033ab998:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar3 = *(long *)(unaff_x24 + unaff_x23 * 8);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (lVar3 != 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x23) goto LAB_033ab998;
      if (*(long *)(unaff_x24 + unaff_x23 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = FUN_033ab85c();
      if ((uVar2 & 1) != 0) break;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    unaff_x23 = unaff_x23 + 1;
                    /* try { // try from 033ab958 to 034ab963 has its CatchHandler @ 033abb7c */
    if ((int)uVar1 <= (int)unaff_x23) {
      do {
        unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x828))
                                      (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x830));
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_033ab97c;
        unaff_x21 = (**(code **)(*unaff_x20 + 0x848))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x850))
        ;
      } while ((unaff_x21 == 0) || (uVar1 = *(uint *)(unaff_x21 + 0x18), (int)uVar1 < 1));
      unaff_x23 = 0;
      unaff_x24 = unaff_x21 + 0x20;
    }
    if (uVar1 <= (uint)unaff_x23) goto LAB_033ab998;
    lVar3 = *(long *)(unaff_x24 + unaff_x23 * 8);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
  } while (lVar3 != unaff_x19);
LAB_033ab97c:
  return unaff_x20 != (long *)0x0;
}


