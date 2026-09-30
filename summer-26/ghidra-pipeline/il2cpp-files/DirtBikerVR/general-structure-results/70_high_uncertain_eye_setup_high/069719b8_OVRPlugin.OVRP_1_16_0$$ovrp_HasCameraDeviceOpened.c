/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_HasCameraDeviceOpened
ENTRY_POINT: 069719b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_HasCameraDeviceOpened(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  code *in_x9;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x24;
  
                    /* catch() { ... } // from try @ 06971568 with catch @ 069719b8 */
  (*in_x9)();
  lVar5 = *unaff_x20;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(unaff_x24 + 0x18);
                    /* try { // try from 069719d4 to 06a719d7 has its CatchHandler @ 069719f8 */
    *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(unaff_x24 + 0x20);
    puVar2 = PTR_DAT_084883a0;
                    /* try { // try from 069719d8 to 06a719fb has its CatchHandler @ 0697133c */
    if (*(long *)(lVar5 + 0x30) != 0) {
      lVar5 = *(long *)(*(long *)(lVar5 + 0x30) + 0x100);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
                    /* catch() { ... } // from try @ 069719d4 with catch @ 069719f8 */
                    /* try { // try from 069719fc to 06a71a03 has its CatchHandler @ 06971a0c */
                    /* try { // try from 06971a04 to 06a71a0f has its CatchHandler @ 0697133c */
      FUN_07cb26a0();
                    /* catch() { ... } // from try @ 06971960 with catch @ 06971a0c
                       catch() { ... } // from try @ 069719ac with catch @ 06971a0c
                       catch() { ... } // from try @ 069719fc with catch @ 06971a0c */
      if (lVar5 != 0) {
        FUN_07cb2770(lVar5,uVar3,0);
        if ((*unaff_x20 != 0) && (lVar5 = *(long *)(*unaff_x20 + 0x38), lVar5 != 0)) {
          lVar5 = *(long *)(lVar5 + 0x100);
          uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
          FUN_07cb26a0();
          if (lVar5 != 0) {
            FUN_07cb2770(lVar5,uVar3,0);
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x10);
              lVar4 = *unaff_x20;
              lVar8 = *(long *)PTR_DAT_084b72c0;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar7 = lVar4;
                  thunk_FUN_03afed3c(plVar7);
                }
                else {
                  FUN_04de85b0(lVar5,lVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


