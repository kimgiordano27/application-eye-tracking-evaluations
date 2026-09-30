/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 04f2baf4
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f2bd88) */
/* WARNING: Removing unreachable block (ram,0x04f2bd38) */
/* WARNING: Removing unreachable block (ram,0x04f2bd60) */
/* WARNING: Removing unreachable block (ram,0x04f2bdb0) */

bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  undefined4 *puVar3;
  int unaff_w23;
  ulong unaff_x24;
  undefined4 unaff_w25;
  int unaff_w26;
  
  if (unaff_w20 < unaff_w26) {
    iVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_034754b0();
    puVar3 = puVar1;
    if ((unaff_x24 & 1) == 0) {
      puVar3 = (undefined4 *)((long)puVar1 + 2);
      *(short *)puVar1 = (short)unaff_w25;
    }
    if (unaff_w23 == 0) {
      FUN_04f2b8cc(puVar3,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_04f2b8cc(puVar3 + 2,*unaff_x21 >> 8);
      *(undefined2 *)(puVar3 + 4) = 0x2d;
      FUN_04f2b8cc((long)puVar3 + 0x12,(int)(short)unaff_x21[1] >> 8);
      *(undefined2 *)((long)puVar3 + 0x1a) = 0x2d;
      FUN_04f2b8cc(puVar3 + 7,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      *(undefined2 *)(puVar3 + 9) = 0x2d;
      FUN_04f2b8cc((long)puVar3 + 0x26,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      *(undefined2 *)((long)puVar3 + 0x2e) = 0x2d;
      FUN_04f2b8cc(puVar3 + 0xc,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      FUN_04f2b8cc(puVar3 + 0xe,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      FUN_04f2b8cc(puVar3 + 0x10,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar1 = puVar3 + 0x12;
    }
    else {
      *puVar3 = 0x780030;
      FUN_04f2b8cc(puVar3 + 1,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_04f2b8cc(puVar3 + 3,*unaff_x21 >> 8);
      puVar3[5] = 0x30002c;
      *(undefined2 *)(puVar3 + 6) = 0x78;
      FUN_04f2b8cc((long)puVar3 + 0x1a,(int)(short)unaff_x21[1] >> 8);
      *(undefined4 *)((long)puVar3 + 0x22) = 0x30002c;
      *(undefined2 *)((long)puVar3 + 0x26) = 0x78;
      FUN_04f2b8cc(puVar3 + 10,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      puVar3[0xc] = 0x7b002c;
      FUN_04f2b948(puVar3 + 0xd,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      *(undefined2 *)((long)puVar3 + 0x46) = 0x2c;
      FUN_04f2b948(puVar3 + 0x12,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      *(undefined2 *)((long)puVar3 + 0x5a) = 0x2c;
      FUN_04f2b948(puVar3 + 0x17,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      *(undefined2 *)((long)puVar3 + 0x6e) = 0x2c;
      FUN_04f2b948(puVar3 + 0x1c,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar1 = puVar3 + 0x21;
      *(undefined2 *)((long)puVar3 + 0x82) = 0x7d;
    }
    iVar2 = unaff_w26;
    if ((unaff_x24 & 1) == 0) {
      *(short *)puVar1 = (short)((uint)unaff_w25 >> 0x10);
    }
  }
  *unaff_x19 = iVar2;
  return unaff_w26 <= unaff_w20;
}


