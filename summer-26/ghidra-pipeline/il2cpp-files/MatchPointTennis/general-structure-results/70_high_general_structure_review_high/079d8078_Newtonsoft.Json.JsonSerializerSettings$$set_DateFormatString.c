/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 079d8078
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *plVar7;
  int unaff_w21;
  long lVar8;
  
  puVar2 = PTR_DAT_09f22e40;
  puVar1 = PTR_DAT_09f20d20;
  if (unaff_w21 < param_1) {
    thunk_FUN_044adef4(PTR_DAT_09f25200);
    uVar4 = thunk_FUN_0448520c();
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f22268);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f29d88);
    FUN_0799a4bc(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f42df8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,uVar3);
  }
  plVar7 = (long *)(unaff_x19 + 0x10);
  if (*plVar7 != 0) {
    if (*(int *)(*plVar7 + 0x18) == unaff_w21) {
      return;
    }
    if (unaff_w21 < 1) {
      lVar8 = *(long *)PTR_DAT_09f22e40;
      lVar6 = *(long *)(lVar8 + 0x38);
      if (lVar6 == 0) {
        FUN_04482014(lVar8);
        lVar6 = *(long *)(lVar8 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      *plVar7 = **(long **)(lVar6 + 0xb8);
      thunk_FUN_044bb4b4(plVar7);
      lVar8 = *(long *)puVar2;
      lVar6 = *(long *)(lVar8 + 0x38);
      if (lVar6 == 0) {
        FUN_04482014(lVar8);
        lVar6 = *(long *)(lVar8 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      uVar4 = **(undefined8 **)(lVar6 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    }
    else {
      uVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,unaff_w21);
      uVar4 = FUN_04447c90(*(undefined8 *)puVar1,unaff_w21);
      if (0 < *(int *)(unaff_x19 + 0x20)) {
        FUN_07a612b4(*(undefined8 *)(unaff_x19 + 0x10),0,uVar3,0,*(int *)(unaff_x19 + 0x20),0);
        FUN_07a612b4(*(undefined8 *)(unaff_x19 + 0x18),0,uVar4,0,*(undefined4 *)(unaff_x19 + 0x20),0
                    );
      }
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      thunk_FUN_044bb4b4(plVar7,uVar3);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    }
    thunk_FUN_044bb4b4(unaff_x19 + 0x18,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


