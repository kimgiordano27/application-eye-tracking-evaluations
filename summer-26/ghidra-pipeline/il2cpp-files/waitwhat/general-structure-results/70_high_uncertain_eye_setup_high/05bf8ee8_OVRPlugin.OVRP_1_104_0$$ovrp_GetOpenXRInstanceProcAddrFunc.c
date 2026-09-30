/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 05bf8ee8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetOpenXRInstanceProcAddrFunc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0xb8) = param_1;
  uVar3 = FUN_03188b1c(*unaff_x21,0);
  if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
    lVar4 = FUN_03188b1c(*unaff_x21,1);
    if (lVar4 == 0) goto LAB_05bf97d8;
    if (*(int *)(lVar4 + 0x18) != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      *(undefined4 *)(lVar4 + 0x20) = 0x16;
      if (0x15 < uVar1) {
        *(long *)(unaff_x19 + 200) = lVar4;
        lVar4 = FUN_03188b1c(*unaff_x21,1);
        if (lVar4 == 0) goto LAB_05bf97d8;
        if (*(int *)(lVar4 + 0x18) != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          *(undefined4 *)(lVar4 + 0x20) = 0x17;
          if (0x16 < uVar1) {
            *(long *)(unaff_x19 + 0xd0) = lVar4;
            lVar4 = FUN_03188b1c(*unaff_x21,1);
            if (lVar4 == 0) goto LAB_05bf97d8;
            if (*(int *)(lVar4 + 0x18) != 0) {
              uVar1 = *(uint *)(unaff_x19 + 0x18);
              *(undefined4 *)(lVar4 + 0x20) = 0x18;
              if (0x17 < uVar1) {
                *(long *)(unaff_x19 + 0xd8) = lVar4;
                lVar4 = FUN_03188b1c(*unaff_x21,1);
                if (lVar4 == 0) goto LAB_05bf97d8;
                if (*(int *)(lVar4 + 0x18) != 0) {
                  uVar1 = *(uint *)(unaff_x19 + 0x18);
                  *(undefined4 *)(lVar4 + 0x20) = 0x19;
                  if (0x18 < uVar1) {
                    *(long *)(unaff_x19 + 0xe0) = lVar4;
                    uVar3 = FUN_03188b1c(*unaff_x21,0);
                    if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
                      puVar2 = PTR_DAT_07116f88;
                      uVar3 = *(undefined8 *)PTR_DAT_07116f90;
                      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
                      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (uVar3);
                      FUN_0428426c(lVar4,*(undefined8 *)puVar2);
                      puVar2 = PTR_DAT_07116f80;
                      if (lVar4 != 0) {
                        lVar5 = *(long *)(lVar4 + 0x10);
                        lVar6 = *(long *)PTR_DAT_07116f80;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar5 != 0) {
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 6;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,6,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 7;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,7,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 8;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,8,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 9;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,9,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0xb,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0xc,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0xd,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0xe,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x11,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x13,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x15,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x16,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x17,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,0x18,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,2,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          }
                          else {
                            FUN_04284aa0(lVar4,3,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar2;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 == 0) goto LAB_05bf97d8;
                          }
                          puVar2 = PTR_DAT_07116fb0;
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
                          }
                          else {
                            FUN_04284aa0(lVar4,4,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                          }
                          uVar3 = *unaff_x21;
                          *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = lVar4;
                          uVar3 = FUN_03188b1c(uVar3,5);
                          FUN_0585c08c(uVar3,*(undefined8 *)puVar2,0);
                          *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar3;
                          return;
                        }
                      }
LAB_05bf97d8:
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
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
  FUN_03188ce0();
}


