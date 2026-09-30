/*
FUNCTION_NAME: OVRManager$$add_AudioOutChanged
ENTRY_POINT: 069239a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioOutChanged(long param_1)

{
  uint uVar1;
  long lVar2;
  int in_w9;
  uint in_w10;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (in_w9 + 1U < in_w10) {
    *(char *)(param_1 + (int)(in_w9 + 1U) + 0x20) = (char)((ulong)unaff_x20 >> 8);
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
LAB_06923ac8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar1 = *(int *)(unaff_x19 + 0x18) + 2;
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x10);
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 == 0) goto LAB_06923ac8;
                    /* try { // try from 069239f8 to 06a23b07 has its CatchHandler @ 069239f8
                       catch() { ... } // from try @ 069239f8 with catch @ 069239f8
                       catch() { ... } // from try @ 06923d8c with catch @ 069239f8
                       catch() { ... } // from try @ 06923ed8 with catch @ 069239f8
                       catch() { ... } // from try @ 06923fa0 with catch @ 069239f8
                       catch() { ... } // from try @ 06924020 with catch @ 069239f8 */
      uVar1 = *(int *)(unaff_x19 + 0x18) + 3;
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x18);
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_06923ac8;
        uVar1 = *(int *)(unaff_x19 + 0x18) + 4;
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x20);
          lVar2 = *(long *)(unaff_x19 + 0x10);
          if (lVar2 == 0) goto LAB_06923ac8;
          uVar1 = *(int *)(unaff_x19 + 0x18) + 5;
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x28);
            lVar2 = *(long *)(unaff_x19 + 0x10);
            if (lVar2 == 0) goto LAB_06923ac8;
            uVar1 = *(int *)(unaff_x19 + 0x18) + 6;
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x30);
              lVar2 = *(long *)(unaff_x19 + 0x10);
              if (lVar2 == 0) goto LAB_06923ac8;
              uVar1 = *(int *)(unaff_x19 + 0x18) + 7;
              if (uVar1 < *(uint *)(lVar2 + 0x18)) {
                *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x38);
                *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 8;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


