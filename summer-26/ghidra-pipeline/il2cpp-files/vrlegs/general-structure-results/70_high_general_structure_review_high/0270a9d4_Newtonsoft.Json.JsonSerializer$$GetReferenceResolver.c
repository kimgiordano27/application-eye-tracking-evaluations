/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetReferenceResolver
ENTRY_POINT: 0270a9d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetReferenceResolver(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cf8098);
  FUN_01ab69ac(PTR_DAT_03cc2808);
                    /* try { // try from 0270a9f4 to 0280aa13 has its CatchHandler @ 0270b5a4 */
  FUN_01ab69ac(PTR_DAT_03cc2810);
  FUN_01ab69ac(PTR_DAT_03cc2818);
  FUN_01ab69ac(PTR_DAT_03cc2820);
  FUN_01ab69ac(PTR_DAT_03cc2838);
  FUN_01ab69ac(PTR_DAT_03cbfd20);
  FUN_01ab69ac(PTR_DAT_03cf80a0);
  FUN_01ab69ac(PTR_DAT_03cf80a8);
  FUN_01ab69ac(PTR_DAT_03cc4328);
  FUN_01ab69ac(PTR_DAT_03cf80b0);
  FUN_01ab69ac(PTR_DAT_03cc2870);
  FUN_01ab69ac(PTR_DAT_03cc2878);
  FUN_01ab69ac(PTR_DAT_03cf80b8);
  FUN_01ab69ac(PTR_DAT_03cc28a8);
  FUN_01ab69ac(PTR_DAT_03cc4f00);
  FUN_01ab69ac(PTR_DAT_03cc03b0);
  FUN_01ab69ac(PTR_DAT_03cc3930);
  FUN_01ab69ac(PTR_DAT_03cc28d0);
  FUN_01ab69ac(PTR_DAT_03cc28e0);
  *(undefined1 *)(unaff_x22 + 0x7e9) = 1;
  lVar12 = FUN_01ab6a94(*unaff_x21,1);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined4 *)(lVar12 + 0x20) = 3;
      *(long *)(unaff_x19 + 0x10) = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar12 = FUN_01ab6a94(*unaff_x21,1);
      if (lVar12 == 0) goto LAB_0270af20;
      if (*(int *)(lVar12 + 0x18) != 0) {
        *(undefined4 *)(lVar12 + 0x20) = 3;
        *(long *)(unaff_x19 + 0x18) = lVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar12 = FUN_01ab6a94(*unaff_x21,1);
        puVar11 = PTR_DAT_03cf80b8;
        puVar10 = PTR_DAT_03cf80b0;
        puVar9 = PTR_DAT_03cf80a8;
        puVar8 = PTR_DAT_03cf80a0;
        puVar7 = PTR_DAT_03cf8098;
        puVar6 = PTR_DAT_03cc4f00;
        puVar5 = PTR_DAT_03cc4328;
        puVar4 = PTR_DAT_03cc3930;
        puVar3 = PTR_DAT_03cc2810;
        puVar2 = PTR_DAT_03cbfd20;
        if (lVar12 == 0) goto LAB_0270af20;
        if (*(int *)(lVar12 + 0x18) != 0) {
          *(undefined4 *)(lVar12 + 0x20) = 3;
          *(long *)(unaff_x19 + 0x20) = lVar12;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)puVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)puVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)puVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)puVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)puVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)puVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)puVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)puVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)puVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)puVar10;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)puVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)puVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)puVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)puVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,10);
          if (lVar12 == 0) goto LAB_0270af20;
          if (*(int *)(lVar12 + 0x18) != 0) {
            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_03cc28e0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar12 + 0x20));
            if (1 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_03cc03b0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar12 + 0x28));
              if (2 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_03cc2818;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar12 + 0x30));
                if (3 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)PTR_DAT_03cc2808;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar12 + 0x38));
                  if (4 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_03cc2878;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar12 + 0x40));
                    if (5 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)PTR_DAT_03cc28d0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar12 + 0x48));
                      if (6 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_03cc2838;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((undefined8 *)(lVar12 + 0x50));
                        if (7 < *(uint *)(lVar12 + 0x18)) {
                          *(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)PTR_DAT_03cc2870;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((undefined8 *)(lVar12 + 0x58));
                          if (8 < *(uint *)(lVar12 + 0x18)) {
                            *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)PTR_DAT_03cc28a8;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      ((undefined8 *)(lVar12 + 0x60));
                            puVar2 = PTR_DAT_03cf7800;
                            if (9 < *(uint *)(lVar12 + 0x18)) {
                              *(undefined8 *)(lVar12 + 0x68) = *(undefined8 *)PTR_DAT_03cc2820;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                              *(long *)(unaff_x19 + 0xa0) = lVar12;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        ((long *)(unaff_x19 + 0xa0),lVar12);
                              uVar1 = DAT_00d37658;
                              *(undefined8 *)(unaff_x19 + 0xac) = 0x200000002;
                              *(undefined4 *)(unaff_x19 + 0xbc) = 1;
                              *(undefined8 *)(unaff_x19 + 200) = uVar1;
                              *(undefined2 *)(unaff_x19 + 0xd3) = 0x101;
                              FUN_027b3d9c();
                              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (DAT_04124739 == '\0') {
                                FUN_01ab69ac(PTR_DAT_03cf7800);
                                DAT_04124739 = '\x01';
                              }
                              lVar12 = *(long *)puVar2;
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar12 = *(long *)puVar2;
                              }
                              if (**(char **)(lVar12 + 0xb8) == '\0') {
                                if (in_stack_00000008 == 0) {
                                  return;
                                }
                                FUN_0270afb0(in_stack_00000008);
                                uVar13 = FUN_025be440(*(undefined8 *)(in_stack_00000008 + 0x58),0);
                                if ((uVar13 & 1) == 0) {
                                  return;
                                }
                              }
                              *(undefined1 *)(unaff_x19 + 0xd2) = 1;
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
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0270af20:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


