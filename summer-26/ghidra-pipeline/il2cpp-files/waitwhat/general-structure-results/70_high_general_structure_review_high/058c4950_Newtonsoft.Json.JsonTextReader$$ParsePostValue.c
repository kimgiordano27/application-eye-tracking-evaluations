/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 058c4950
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  bool in_CY;
  int iVar7;
  long lVar8;
  uint in_w8;
  undefined8 in_x9;
  undefined8 uVar9;
  undefined8 *in_x12;
  undefined8 *in_x14;
  long *unaff_x19;
  undefined8 uVar10;
  
  *(undefined8 *)(param_1 + 0x4d8) = in_x9;
  if (in_CY && !in_ZR) {
    uVar9 = *(undefined8 *)PTR_DAT_07102bd0;
    *(undefined8 *)(param_1 + 0x4e0) = 0x30304e66fb7;
    *(undefined8 *)(param_1 + 0x4e8) = uVar9;
    if (in_w8 != 0x4d) {
      uVar9 = *(undefined8 *)PTR_DAT_071034c8;
      *(undefined8 *)(param_1 + 0x4f0) = 0x30104e46fbd;
      *(undefined8 *)(param_1 + 0x4f8) = uVar9;
      if (0x4e < in_w8) {
        uVar9 = *(undefined8 *)PTR_DAT_07102c78;
        *(undefined8 *)(param_1 + 0x500) = 0x30304e796c6;
        *(undefined8 *)(param_1 + 0x508) = uVar9;
        if (in_w8 != 0x4f) {
          *(undefined8 *)(param_1 + 0x518) = *in_x12;
          *(undefined8 *)(param_1 + 0x510) = 0x10103a4c42c;
          if (0x50 < in_w8) {
            uVar9 = *(undefined8 *)PTR_DAT_071034e0;
            *(undefined8 *)(param_1 + 0x520) = 0x30103a4c42d;
            *(undefined8 *)(param_1 + 0x528) = uVar9;
            if (in_w8 != 0x51) {
              uVar9 = *in_x12;
              *(undefined8 *)(param_1 + 0x530) = 0x3a4c42e;
              *(undefined8 *)(param_1 + 0x538) = uVar9;
              if (0x52 < in_w8) {
                uVar9 = *(undefined8 *)PTR_DAT_071029a8;
                *(undefined8 *)(param_1 + 0x540) = 0x30303a4cadc;
                *(undefined8 *)(param_1 + 0x548) = uVar9;
                if (in_w8 != 0x53) {
                  uVar9 = *(undefined8 *)PTR_DAT_07103408;
                  *(undefined8 *)(param_1 + 0x550) = 0x10103b5caed;
                  *(undefined8 *)(param_1 + 0x558) = uVar9;
                  if (0x54 < in_w8) {
                    uVar9 = *(undefined8 *)PTR_DAT_07102880;
                    *(undefined8 *)(param_1 + 0x560) = 0x30303a8d698;
                    *(undefined8 *)(param_1 + 0x568) = uVar9;
                    if (in_w8 != 0x55) {
                      uVar9 = *(undefined8 *)PTR_DAT_07102df0;
                      *(undefined8 *)(param_1 + 0x570) = 0xdeaadeaa;
                      *(undefined8 *)(param_1 + 0x578) = uVar9;
                      if (0x56 < in_w8) {
                        uVar9 = *(undefined8 *)PTR_DAT_07102890;
                        *(undefined8 *)(param_1 + 0x580) = 0xdeabdeab;
                        *(undefined8 *)(param_1 + 0x588) = uVar9;
                        if (in_w8 != 0x57) {
                          uVar9 = *(undefined8 *)PTR_DAT_07103028;
                          *(undefined8 *)(param_1 + 0x590) = 0xdeacdeac;
                          *(undefined8 *)(param_1 + 0x598) = uVar9;
                          if (0x58 < in_w8) {
                            uVar9 = *(undefined8 *)PTR_DAT_07103148;
                            *(undefined8 *)(param_1 + 0x5a0) = 0xdeaddead;
                            *(undefined8 *)(param_1 + 0x5a8) = uVar9;
                            if (in_w8 != 0x59) {
                              uVar9 = *(undefined8 *)PTR_DAT_07102b90;
                              *(undefined8 *)(param_1 + 0x5b0) = 0xdeaedeae;
                              *(undefined8 *)(param_1 + 0x5b8) = uVar9;
                              if (0x5a < in_w8) {
                                uVar9 = *(undefined8 *)PTR_DAT_07102fe0;
                                *(undefined8 *)(param_1 + 0x5c0) = 0xdeafdeaf;
                                *(undefined8 *)(param_1 + 0x5c8) = uVar9;
                                if (in_w8 != 0x5b) {
                                  uVar9 = *(undefined8 *)PTR_DAT_07102a90;
                                  *(undefined8 *)(param_1 + 0x5d0) = 0xdeb0deb0;
                                  *(undefined8 *)(param_1 + 0x5d8) = uVar9;
                                  if (0x5c < in_w8) {
                                    uVar9 = *(undefined8 *)PTR_DAT_07103388;
                                    *(undefined8 *)(param_1 + 0x5e0) = 0xdeb1deb1;
                                    *(undefined8 *)(param_1 + 0x5e8) = uVar9;
                                    if (in_w8 != 0x5d) {
                                      uVar9 = *(undefined8 *)PTR_DAT_07102860;
                                      *(undefined8 *)(param_1 + 0x5f0) = 0xdeb2deb2;
                                      *(undefined8 *)(param_1 + 0x5f8) = uVar9;
                                      if (0x5e < in_w8) {
                                        uVar9 = *(undefined8 *)PTR_DAT_071031c8;
                                        *(undefined8 *)(param_1 + 0x600) = 0xdeb3deb3;
                                        *(undefined8 *)(param_1 + 0x608) = uVar9;
                                        if (in_w8 != 0x5f) {
                                          *(undefined8 *)(param_1 + 0x618) = *in_x14;
                                          *(undefined8 *)(param_1 + 0x610) = 0x10104b0fde8;
                                          if (0x60 < in_w8) {
                                            uVar9 = *(undefined8 *)PTR_DAT_070c2af0;
                                            *(undefined8 *)(param_1 + 0x620) = 0x30304b0fde9;
                                            *(undefined8 *)(param_1 + 0x628) = uVar9;
                                            if (in_w8 != 0x61) {
                                              *(undefined8 *)(param_1 + 0x638) = 0;
                                              *(undefined8 *)(param_1 + 0x630) = 0;
                                              puVar2 = PTR_DAT_070c2ef0;
                                              *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8) = param_1;
                                              iVar7 = FUN_058bf824();
                                              iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
                                              *(int *)(*(long *)(*unaff_x19 + 0xb8) + 0x10) =
                                                   iVar7 + -1;
                                              if (iVar1 == 0) {
                                                thunk_FUN_031e5338();
                                              }
                                              if (DAT_075458a9 == '\0') {
                                                FUN_03188a78(PTR_DAT_070c2ef0);
                                                DAT_075458a9 = '\x01';
                                              }
                                              puVar6 = PTR_DAT_071027d0;
                                              puVar5 = PTR_DAT_071027c8;
                                              puVar4 = PTR_DAT_071027c0;
                                              puVar3 = PTR_DAT_070feac8;
                                              lVar8 = *(long *)puVar2;
                                              if (*(int *)(lVar8 + 0xe4) == 0) {
                                                thunk_FUN_031e5338();
                                                lVar8 = *(long *)puVar2;
                                              }
                                              uVar10 = *(undefined8 *)
                                                        (*(long *)(lVar8 + 0xb8) + 0x18);
                                              uVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                              FUN_05240ec0(uVar9,uVar10,*(undefined8 *)puVar4);
                                              uVar10 = *(undefined8 *)puVar6;
                                              *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) =
                                                   uVar9;
                                              uVar9 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar10);
                                              FUN_05189a80(uVar9,*(undefined8 *)puVar5);
                                              *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x20) =
                                                   uVar9;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


