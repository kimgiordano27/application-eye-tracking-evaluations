/*
FUNCTION_NAME: thunk_FUN_074af62c
ENTRY_POINT: 074afa4c
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


bool thunk_FUN_074af62c(int *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                       ushort *param_5,int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 uVar14;
  int iVar15;
  
  if ((DAT_0968e3e6 & 1) == 0) {
    FUN_03f13384(PTR_DAT_09129180);
    FUN_03f13384(PTR_DAT_09120b00);
    FUN_03f13384(PTR_DAT_09129228);
    FUN_03f13384(PTR_DAT_0912a318);
    DAT_0968e3e6 = 1;
  }
  if (param_6 == 0) {
    lVar13 = *(long *)PTR_DAT_0912a318;
    if (DAT_096846f8 == '\0') {
      FUN_03f13384(PTR_DAT_0910b618);
      DAT_096846f8 = '\x01';
    }
    if (lVar13 == 0) goto LAB_074af75c;
    param_5 = (ushort *)FUN_07324190(lVar13,0);
    param_6 = *(int *)(lVar13 + 0x10);
  }
  if (param_6 != 1) {
LAB_074af75c:
    thunk_FUN_03f786f8(PTR_DAT_091240f0);
    uVar7 = thunk_FUN_03f4e68c();
    uVar8 = thunk_FUN_03f786f8(PTR_DAT_091331c8);
    FUN_0749d5b0(uVar7,uVar8,0);
    uVar8 = thunk_FUN_03f786f8(PTR_DAT_091331e8);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar7,uVar8);
  }
  uVar3 = *param_5;
  if (uVar3 < 0x59) {
    if (uVar3 < 0x45) {
      if (uVar3 != 0x42) {
        if (uVar3 != 0x44) goto LAB_074af75c;
LAB_074af72c:
        uVar14 = 0;
        bVar5 = false;
        bVar4 = true;
        iVar15 = 0x24;
        bVar6 = true;
        goto LAB_074af81c;
      }
      goto LAB_074af7d0;
    }
    if (uVar3 == 0x4e) {
LAB_074af808:
      uVar14 = 0;
      bVar5 = false;
      bVar6 = false;
      bVar4 = true;
      iVar15 = 0x20;
      goto LAB_074af81c;
    }
    if (uVar3 == 0x50) {
LAB_074af7ec:
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      iVar15 = 0x26;
      uVar14 = 0x290028;
      goto LAB_074af81c;
    }
    if (uVar3 != 0x58) goto LAB_074af75c;
LAB_074af7bc:
    bVar6 = false;
    bVar5 = true;
    iVar15 = 0x44;
  }
  else {
    if (100 < uVar3) {
      if (uVar3 == 0x6e) goto LAB_074af808;
      if (uVar3 == 0x70) goto LAB_074af7ec;
      if (uVar3 != 0x78) goto LAB_074af75c;
      goto LAB_074af7bc;
    }
    if (uVar3 != 0x62) {
      if (uVar3 != 100) goto LAB_074af75c;
      goto LAB_074af72c;
    }
LAB_074af7d0:
    bVar5 = false;
    bVar6 = true;
    iVar15 = 0x26;
  }
  bVar4 = false;
  uVar14 = 0x7d007b;
LAB_074af81c:
  if ((int)param_3 < iVar15) {
    iVar11 = 0;
  }
  else {
    puVar9 = (undefined4 *)FUN_04a8ef94(param_2,param_3,*(undefined8 *)PTR_DAT_09129180);
    puVar12 = puVar9;
    if (!bVar4) {
      puVar12 = (undefined4 *)((long)puVar9 + 2);
      *(short *)puVar9 = (short)uVar14;
    }
    if (bVar5) {
      *puVar12 = 0x780030;
      FUN_074af514(puVar12 + 1,*param_1 >> 0x18,*param_1 >> 0x10);
      FUN_074af514(puVar12 + 3,*param_1 >> 8);
      *(undefined2 *)(puVar12 + 6) = 0x78;
      puVar12[5] = 0x30002c;
      FUN_074af514((long)puVar12 + 0x1a,(int)(short)param_1[1] >> 8);
      *(undefined4 *)((long)puVar12 + 0x22) = 0x30002c;
      *(undefined2 *)((long)puVar12 + 0x26) = 0x78;
      FUN_074af514(puVar12 + 10,(int)*(short *)((long)param_1 + 6) >> 8);
      puVar12[0xc] = 0x7b002c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
                (puVar12 + 0xd,(char)param_1[2],*(undefined1 *)((long)param_1 + 9));
      uVar1 = *(undefined1 *)((long)param_1 + 10);
      uVar2 = *(undefined1 *)((long)param_1 + 0xb);
      *(undefined2 *)((long)puVar12 + 0x46) = 0x2c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(puVar12 + 0x12,uVar1,uVar2);
      iVar11 = param_1[3];
      uVar1 = *(undefined1 *)((long)param_1 + 0xd);
      *(undefined2 *)((long)puVar12 + 0x5a) = 0x2c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
                (puVar12 + 0x17,(char)iVar11,uVar1);
      uVar1 = *(undefined1 *)((long)param_1 + 0xe);
      uVar2 = *(undefined1 *)((long)param_1 + 0xf);
      *(undefined2 *)((long)puVar12 + 0x6e) = 0x2c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(puVar12 + 0x1c,uVar1,uVar2);
      puVar10 = puVar12 + 0x21;
      *(undefined2 *)((long)puVar12 + 0x82) = 0x7d;
    }
    else {
      FUN_074af514(puVar12,*param_1 >> 0x18,*param_1 >> 0x10);
      FUN_074af514(puVar12 + 2,*param_1 >> 8);
      if (bVar6) {
        puVar9 = (undefined4 *)((long)puVar12 + 0x12);
        *(undefined2 *)(puVar12 + 4) = 0x2d;
      }
      else {
        puVar9 = puVar12 + 4;
      }
      FUN_074af514(puVar9,(int)(short)param_1[1] >> 8);
      if (bVar6) {
        puVar12 = (undefined4 *)((long)puVar9 + 10);
        *(undefined2 *)(puVar9 + 2) = 0x2d;
      }
      else {
        puVar12 = puVar9 + 2;
      }
      FUN_074af514(puVar12,(int)*(short *)((long)param_1 + 6) >> 8);
      if (bVar6) {
        puVar9 = (undefined4 *)((long)puVar12 + 10);
        *(undefined2 *)(puVar12 + 2) = 0x2d;
      }
      else {
        puVar9 = puVar12 + 2;
      }
      FUN_074af514(puVar9,(char)param_1[2],*(undefined1 *)((long)param_1 + 9));
      if (bVar6) {
        puVar10 = (undefined4 *)((long)puVar9 + 10);
        *(undefined2 *)(puVar9 + 2) = 0x2d;
      }
      else {
        puVar10 = puVar9 + 2;
      }
      FUN_074af514(puVar10,*(undefined1 *)((long)param_1 + 10),*(undefined1 *)((long)param_1 + 0xb))
      ;
      FUN_074af514(puVar10 + 2,(char)param_1[3],*(undefined1 *)((long)param_1 + 0xd));
      FUN_074af514(puVar10 + 4,*(undefined1 *)((long)param_1 + 0xe),
                   *(undefined1 *)((long)param_1 + 0xf));
      puVar10 = puVar10 + 6;
    }
    iVar11 = iVar15;
    if (!bVar4) {
      *(short *)puVar10 = (short)((uint)uVar14 >> 0x10);
    }
  }
  *param_4 = iVar11;
  return iVar15 <= (int)param_3;
}


