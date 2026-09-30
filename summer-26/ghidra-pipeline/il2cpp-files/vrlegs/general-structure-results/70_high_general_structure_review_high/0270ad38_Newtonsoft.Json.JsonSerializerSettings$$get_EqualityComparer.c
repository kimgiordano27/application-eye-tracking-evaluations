/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_EqualityComparer
ENTRY_POINT: 0270ad38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_EqualityComparer(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x22 + 0x38));
  if (4 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)PTR_DAT_03cc2878;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x21 + 0x40));
    if (5 < *(uint *)(unaff_x21 + 0x18)) {
      *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)PTR_DAT_03cc28d0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x21 + 0x48));
      if (6 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)PTR_DAT_03cc2838;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x21 + 0x50));
        if (7 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined8 *)(unaff_x21 + 0x58) = *(undefined8 *)PTR_DAT_03cc2870;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(unaff_x21 + 0x58));
          if (8 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined8 *)(unaff_x21 + 0x60) = *(undefined8 *)PTR_DAT_03cc28a8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(unaff_x21 + 0x60));
            puVar2 = PTR_DAT_03cf7800;
            if (9 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined8 *)(unaff_x21 + 0x68) = *(undefined8 *)PTR_DAT_03cc2820;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              *(long *)(unaff_x19 + 0xa0) = unaff_x21;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
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
              lVar3 = *(long *)puVar2;
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar3 = *(long *)puVar2;
              }
              if (**(char **)(lVar3 + 0xb8) == '\0') {
                if (in_stack_00000008 == 0) {
                  return;
                }
                FUN_0270afb0(in_stack_00000008);
                uVar4 = FUN_025be440(*(undefined8 *)(in_stack_00000008 + 0x58),0);
                if ((uVar4 & 1) == 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


