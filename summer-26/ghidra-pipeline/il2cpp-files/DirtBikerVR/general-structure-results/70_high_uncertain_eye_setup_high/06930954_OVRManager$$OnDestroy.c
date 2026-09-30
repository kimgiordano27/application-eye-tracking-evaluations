/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 06930954
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


void OVRManager__OnDestroy(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  FUN_05e42d5c();
  if (unaff_x21 != 0) {
    FUN_070a134c();
    if (*unaff_x20 != 0) {
      lVar4 = *(long *)(*unaff_x20 + 0x88);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
      if (uVar2 != 0) {
        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
        do {
          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_069309e0;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar2 != 0);
      }
      FUN_03ac43c4();
LAB_069309e0:
      FUN_05e42d5c(uVar1);
      if (lVar4 != 0) {
        FUN_070a129c(lVar4,uVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


