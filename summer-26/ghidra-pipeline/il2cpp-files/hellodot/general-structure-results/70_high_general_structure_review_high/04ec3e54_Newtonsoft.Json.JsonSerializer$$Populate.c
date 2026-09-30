/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 04ec3e54
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Populate(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iStack000000000000000c;
  
  iStack000000000000000c = 0;
  if ((char)unaff_x19[0xb] != '\0') {
    uVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
    if (((uVar3 & 1) != 0) && ((char)unaff_x19[8] == '\0')) {
      lVar7 = unaff_x19[7];
      lVar9 = unaff_x19[0xd];
      if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04ec37c0(lVar7,lVar9,0,&stack0x0000000c);
      if (iStack000000000000000c != 0) {
LAB_04ec3f50:
        uVar4 = FUN_04ec2c20();
        iVar8 = iStack000000000000000c;
        thunk_FUN_02c7737c(PTR_DAT_065f1670);
        FUN_028be084();
        uVar4 = FUN_04ec2c98(uVar4,iVar8);
        uVar5 = thunk_FUN_02c7737c(PTR_DAT_065f7e40);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar4,uVar5);
      }
    }
    puVar1 = PTR_DAT_065f1670;
    iVar8 = (int)unaff_x19[0xc];
    if (0 < iVar8) {
      iVar6 = 0;
      iVar10 = iVar8;
      while( true ) {
        lVar7 = unaff_x19[7];
        lVar9 = unaff_x19[5];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar2 = FUN_04ec5058(lVar7,lVar9,iVar6,iVar8,&stack0x0000000c);
        if (iStack000000000000000c != 0) goto LAB_04ec3f50;
        iVar10 = iVar10 - iVar2;
        if (iVar10 < 1) break;
        iVar8 = (int)unaff_x19[0xc];
        iVar6 = iVar2 + iVar6;
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0xb) = 0;
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = unaff_x19[0xd] + (long)*(int *)((long)unaff_x19 + 100);
  return;
}


