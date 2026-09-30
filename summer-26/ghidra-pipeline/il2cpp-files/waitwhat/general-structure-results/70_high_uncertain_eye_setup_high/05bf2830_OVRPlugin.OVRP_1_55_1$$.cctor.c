/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$.cctor
ENTRY_POINT: 05bf2830
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_1___cctor(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint in_w8;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  if (0x14 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0xc0) = param_1;
    uVar3 = FUN_03188b1c(*unaff_x21,0);
    if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 200) = uVar3;
      uVar3 = FUN_03188b1c(*unaff_x21,0);
      if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
        uVar3 = FUN_03188b1c(*unaff_x21,0);
        if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0xd8) = uVar3;
          puVar2 = PTR_DAT_07115700;
          uVar3 = *(undefined8 *)PTR_DAT_071156a8;
          *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
          lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (uVar3);
          FUN_0428426c(lVar4,*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_07116d88;
          if (lVar4 != 0) {
            lVar5 = *(long *)(lVar4 + 0x10);
            lVar6 = *(long *)PTR_DAT_07116d88;
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
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 7;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,7,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 8;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,8,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 9;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,9,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 10;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,10,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0xb,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0xc,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0xd,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0xe,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0xf,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0x10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0x11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,0x12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,2,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,3,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              }
              else {
                FUN_04284aa0(lVar4,4,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 == 0) goto LAB_05bf2fbc;
              }
              puVar2 = PTR_DAT_07116da8;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
              }
              else {
                FUN_04284aa0(lVar4,5,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              uVar3 = *unaff_x21;
              *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = lVar4;
              uVar3 = FUN_03188b1c(uVar3,5);
              FUN_0585c08c(uVar3,*(undefined8 *)puVar2,0);
              *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar3;
              return;
            }
          }
LAB_05bf2fbc:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


