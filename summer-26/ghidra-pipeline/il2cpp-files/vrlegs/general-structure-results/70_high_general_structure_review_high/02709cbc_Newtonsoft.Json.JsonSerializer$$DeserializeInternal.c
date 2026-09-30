/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 02709cbc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__DeserializeInternal(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  FUN_01ab69ac(PTR_DAT_03cc4180);
  FUN_01ab69ac(PTR_DAT_03cf8070);
  FUN_01ab69ac(PTR_DAT_03cf8078);
  *(undefined1 *)(unaff_x19 + 0x7e3) = 1;
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x21;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  thunk_FUN_01a4b338();
  if (lVar2 == 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    thunk_FUN_01a4b338();
    puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    *puVar3 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,0);
    lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    thunk_FUN_01a4b338();
    if (lVar2 == 0) {
      plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cf8018,5);
      puVar1 = PTR_DAT_03cf8020;
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf8020);
      FUN_02706d30(lVar2,5,0x7e3,5,1,0x7e2,1,0x1f2d);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_0270a08c:
        uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar2);
        lVar2 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
        FUN_02706d30(lVar2,4,0x7c5,1,8,0x7c4,1,0x1f);
        if ((lVar2 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0270a08c;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = lVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar2);
          lVar2 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
          FUN_02706d30(lVar2,3,0x786,0xc,0x19,0x785,1,0x40);
          if ((lVar2 != 0) &&
             (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_0270a08c;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = lVar2;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar2);
            lVar2 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_02706d30(lVar2,2,0x778,7,0x1e,0x777,1,0xf);
            if ((lVar2 != 0) &&
               (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_0270a08c;
            if (3 < *(uint *)(plVar4 + 3)) {
              plVar4[7] = lVar2;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar2);
              lVar2 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
              FUN_02706d30(lVar2,1,0x74c,1,1,0x74b,1,0x2d);
              if ((lVar2 != 0) &&
                 (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_0270a08c;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = lVar2;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 8,lVar2);
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                thunk_FUN_01a4b338();
                plVar6 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
                *plVar6 = (long)plVar4;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,plVar4);
                goto LAB_0270a050;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_0270a050:
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x21;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  thunk_FUN_01a4b338();
  return uVar7;
}


