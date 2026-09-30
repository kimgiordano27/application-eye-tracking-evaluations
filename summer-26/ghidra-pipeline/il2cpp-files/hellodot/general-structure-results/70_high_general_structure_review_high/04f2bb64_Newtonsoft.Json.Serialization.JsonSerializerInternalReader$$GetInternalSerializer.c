/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 04f2bb64
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  int in_w8;
  undefined2 *puVar6;
  int iVar7;
  int *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  undefined2 *puVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (in_w8 == 0x70) {
    bVar1 = false;
    bVar2 = true;
    iVar10 = 0x26;
    uVar9 = 0x290028;
  }
  else {
    if (in_w8 != 0x78) {
      thunk_FUN_02c7737c(PTR_DAT_065c96e8);
      uVar3 = thunk_FUN_02cea894();
      uVar4 = thunk_FUN_02c7737c(PTR_DAT_065faec0);
      FUN_04f19d60(uVar3,uVar4,0);
      uVar4 = thunk_FUN_02c7737c(PTR_DAT_065faee0);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar3,uVar4);
    }
    bVar2 = false;
    bVar1 = true;
    iVar10 = 0x44;
    uVar9 = 0x7d007b;
  }
  if (unaff_w20 < iVar10) {
    iVar7 = 0;
  }
  else {
    puVar5 = (undefined2 *)FUN_034754b0();
    *puVar5 = (short)uVar9;
    if (bVar1) {
      *(undefined4 *)(puVar5 + 1) = 0x780030;
      FUN_04f2b8cc(puVar5 + 3,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_04f2b8cc(puVar5 + 7,*unaff_x21 >> 8);
      *(undefined4 *)(puVar5 + 0xb) = 0x30002c;
      puVar5[0xd] = 0x78;
      FUN_04f2b8cc(puVar5 + 0xe,(int)(short)unaff_x21[1] >> 8);
      *(undefined4 *)(puVar5 + 0x12) = 0x30002c;
      puVar5[0x14] = 0x78;
      FUN_04f2b8cc(puVar5 + 0x15,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      *(undefined4 *)(puVar5 + 0x19) = 0x7b002c;
      FUN_04f2b948(puVar5 + 0x1b,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      puVar5[0x24] = 0x2c;
      FUN_04f2b948(puVar5 + 0x25,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      puVar5[0x2e] = 0x2c;
      FUN_04f2b948(puVar5 + 0x2f,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      puVar5[0x38] = 0x2c;
      FUN_04f2b948(puVar5 + 0x39,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar6 = puVar5 + 0x43;
      puVar5[0x42] = 0x7d;
    }
    else {
      FUN_04f2b8cc(puVar5 + 1,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_04f2b8cc(puVar5 + 5,*unaff_x21 >> 8);
      if (bVar2) {
        puVar8 = puVar5 + 10;
        puVar5[9] = 0x2d;
      }
      else {
        puVar8 = puVar5 + 9;
      }
      FUN_04f2b8cc(puVar8,(int)(short)unaff_x21[1] >> 8);
      if (bVar2) {
        puVar5 = puVar8 + 5;
        puVar8[4] = 0x2d;
      }
      else {
        puVar5 = puVar8 + 4;
      }
      FUN_04f2b8cc(puVar5,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      if (bVar2) {
        puVar8 = puVar5 + 5;
        puVar5[4] = 0x2d;
      }
      else {
        puVar8 = puVar5 + 4;
      }
      FUN_04f2b8cc(puVar8,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      if (bVar2) {
        puVar6 = puVar8 + 5;
        puVar8[4] = 0x2d;
      }
      else {
        puVar6 = puVar8 + 4;
      }
      FUN_04f2b8cc(puVar6,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      FUN_04f2b8cc(puVar6 + 4,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      FUN_04f2b8cc(puVar6 + 8,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar6 = puVar6 + 0xc;
    }
    *puVar6 = (short)((uint)uVar9 >> 0x10);
    iVar7 = iVar10;
  }
  *unaff_x19 = iVar7;
  return iVar10 <= unaff_w20;
}


