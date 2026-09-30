/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 0697193c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(void)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x24;
  long *plVar10;
  long unaff_x26;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 0697193c to 06a7193f has its CatchHandler @ 0697195c */
                    /* try { // try from 06971940 to 06a7195f has its CatchHandler @ 0697133c */
  if (*unaff_x20 != 0) {
    plVar10 = *(long **)(*unaff_x20 + 0x28);
                    /* catch() { ... } // from try @ 0697193c with catch @ 0697195c */
    plVar3 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
                    /* try { // try from 06971960 to 06a71967 has its CatchHandler @ 06971a0c */
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 06971968 to 06a71987 has its CatchHandler @ 0697133c */
                    /* catch() { ... } // from try @ 06971680 with catch @ 0697196c */
      if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40();
      }
      puVar4 = (undefined4 *)thunk_FUN_03ac7604();
                    /* try { // try from 06971988 to 06a7198b has its CatchHandler @ 069719a8 */
                    /* try { // try from 0697198c to 06a719ab has its CatchHandler @ 0697133c */
      in_stack_00000008._4_4_ = *puVar4;
      uVar5 = FUN_067638d0((long)&stack0x00000008 + 4,*(undefined8 *)PTR_DAT_0849ccf8,0);
      if (plVar10 != (long *)0x0) {
                    /* catch() { ... } // from try @ 06971988 with catch @ 069719a8 */
                    /* try { // try from 069719ac to 06a719b3 has its CatchHandler @ 06971a0c */
                    /* try { // try from 069719b4 to 06a719d3 has its CatchHandler @ 0697133c */
        (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x5f0));
        lVar7 = *unaff_x20;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(unaff_x24 + 0x18);
          *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(unaff_x24 + 0x20);
          puVar2 = PTR_DAT_084883a0;
          if (*(long *)(lVar7 + 0x30) != 0) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x30) + 0x100);
            uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
            FUN_07cb26a0();
            if (lVar7 != 0) {
              FUN_07cb2770(lVar7,uVar5,0);
              if ((*unaff_x20 != 0) && (lVar7 = *(long *)(*unaff_x20 + 0x38), lVar7 != 0)) {
                lVar7 = *(long *)(lVar7 + 0x100);
                uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
                FUN_07cb26a0();
                if (lVar7 != 0) {
                  FUN_07cb2770(lVar7,uVar5,0);
                  lVar7 = *(long *)(unaff_x19 + 0x20);
                  if (lVar7 != 0) {
                    lVar8 = *(long *)(lVar7 + 0x10);
                    lVar6 = *unaff_x20;
                    lVar9 = *(long *)PTR_DAT_084b72c0;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar3 = lVar6;
                        thunk_FUN_03afed3c(plVar3);
                      }
                      else {
                        FUN_04de85b0(lVar7,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      return;
                    }
                  }
                }
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


