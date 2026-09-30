/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 04f9d824
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Serialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 in_w8;
  long unaff_x19;
  long *plVar7;
  ulong unaff_x21;
  
  *(undefined4 *)(unaff_x19 + 0x14) = in_w8;
  lVar4 = FUN_04f6d468();
  thunk_FUN_02d6f164();
  plVar7 = (long *)(unaff_x19 + 0x30);
  *plVar7 = lVar4;
  thunk_FUN_02dd37b4(plVar7,lVar4);
  if ((unaff_x21 & 1) == 0) {
    lVar4 = *plVar7;
    thunk_FUN_02d6f164();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar5 = (long *)FUN_04f6d874(lVar4,0);
    thunk_FUN_02d6f164();
    if (plVar5 == (long *)0x0) {
      *plVar7 = 0;
    }
    else {
      lVar4 = *(long *)PTR_DAT_06776148;
      if (*plVar5 != lVar4) {
LAB_04f9d898:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar5);
      }
      *plVar7 = (long)plVar5;
      if (*plVar5 != lVar4) goto LAB_04f9d898;
    }
    thunk_FUN_02dd37b4(plVar7,plVar5);
  }
  puVar3 = PTR_DAT_067782e0;
  puVar2 = PTR_DAT_067782d8;
  puVar1 = PTR_DAT_06777428;
  uVar6 = FUN_04f6eb84(0);
  thunk_FUN_02d6f164();
  *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x40),uVar6);
  *(undefined8 *)(unaff_x19 + 0x48) = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  thunk_FUN_02dd37b4();
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x58),uVar6);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x50),uVar6);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)puVar3;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)puVar1;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)puVar3;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x70));
  *(undefined4 *)(unaff_x19 + 0x24) = 0x101;
  return;
}


