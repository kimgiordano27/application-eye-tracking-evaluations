/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnError
ENTRY_POINT: 074af6ec
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool Newtonsoft_Json_Serialization_JsonContract__InvokeOnError(void)

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
  int *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  undefined4 *puVar12;
  ushort *unaff_x23;
  undefined4 uVar13;
  int iVar14;
  
  uVar3 = *unaff_x23;
  if (uVar3 < 0x59) {
    if (uVar3 < 0x45) {
      if (uVar3 != 0x42) {
        if (uVar3 != 0x44) {
LAB_074af75c:
          thunk_FUN_03f786f8(PTR_DAT_091240f0);
          uVar7 = thunk_FUN_03f4e68c();
          uVar8 = thunk_FUN_03f786f8(PTR_DAT_091331c8);
          FUN_0749d5b0(uVar7,uVar8,0);
          uVar8 = thunk_FUN_03f786f8(PTR_DAT_091331e8);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar7,uVar8);
        }
LAB_074af72c:
        uVar13 = 0;
        bVar5 = false;
        bVar4 = true;
        iVar14 = 0x24;
        bVar6 = true;
        goto LAB_074af81c;
      }
      goto LAB_074af7d0;
    }
    if (uVar3 == 0x4e) {
LAB_074af808:
      uVar13 = 0;
      bVar5 = false;
      bVar6 = false;
      bVar4 = true;
      iVar14 = 0x20;
      goto LAB_074af81c;
    }
    if (uVar3 == 0x50) {
LAB_074af7ec:
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      iVar14 = 0x26;
      uVar13 = 0x290028;
      goto LAB_074af81c;
    }
    if (uVar3 != 0x58) goto LAB_074af75c;
LAB_074af7bc:
    bVar6 = false;
    bVar5 = true;
    iVar14 = 0x44;
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
    iVar14 = 0x26;
  }
  bVar4 = false;
  uVar13 = 0x7d007b;
LAB_074af81c:
  if (unaff_w20 < iVar14) {
    iVar11 = 0;
  }
  else {
    puVar9 = (undefined4 *)FUN_04a8ef94();
    puVar12 = puVar9;
    if (!bVar4) {
      puVar12 = (undefined4 *)((long)puVar9 + 2);
      *(short *)puVar9 = (short)uVar13;
    }
    if (bVar5) {
      *puVar12 = 0x780030;
      FUN_074af514(puVar12 + 1,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_074af514(puVar12 + 3,*unaff_x21 >> 8);
      *(undefined2 *)(puVar12 + 6) = 0x78;
      puVar12[5] = 0x30002c;
      FUN_074af514((long)puVar12 + 0x1a,(int)(short)unaff_x21[1] >> 8);
      *(undefined4 *)((long)puVar12 + 0x22) = 0x30002c;
      *(undefined2 *)((long)puVar12 + 0x26) = 0x78;
      FUN_074af514(puVar12 + 10,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      puVar12[0xc] = 0x7b002c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
                (puVar12 + 0xd,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      uVar1 = *(undefined1 *)((long)unaff_x21 + 10);
      uVar2 = *(undefined1 *)((long)unaff_x21 + 0xb);
      *(undefined2 *)((long)puVar12 + 0x46) = 0x2c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(puVar12 + 0x12,uVar1,uVar2);
      iVar11 = unaff_x21[3];
      uVar1 = *(undefined1 *)((long)unaff_x21 + 0xd);
      *(undefined2 *)((long)puVar12 + 0x5a) = 0x2c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
                (puVar12 + 0x17,(char)iVar11,uVar1);
      uVar1 = *(undefined1 *)((long)unaff_x21 + 0xe);
      uVar2 = *(undefined1 *)((long)unaff_x21 + 0xf);
      *(undefined2 *)((long)puVar12 + 0x6e) = 0x2c;
      Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(puVar12 + 0x1c,uVar1,uVar2);
      puVar10 = puVar12 + 0x21;
      *(undefined2 *)((long)puVar12 + 0x82) = 0x7d;
    }
    else {
      FUN_074af514(puVar12,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_074af514(puVar12 + 2,*unaff_x21 >> 8);
      if (bVar6) {
        puVar9 = (undefined4 *)((long)puVar12 + 0x12);
        *(undefined2 *)(puVar12 + 4) = 0x2d;
      }
      else {
        puVar9 = puVar12 + 4;
      }
      FUN_074af514(puVar9,(int)(short)unaff_x21[1] >> 8);
      if (bVar6) {
        puVar12 = (undefined4 *)((long)puVar9 + 10);
        *(undefined2 *)(puVar9 + 2) = 0x2d;
      }
      else {
        puVar12 = puVar9 + 2;
      }
      FUN_074af514(puVar12,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      if (bVar6) {
        puVar9 = (undefined4 *)((long)puVar12 + 10);
        *(undefined2 *)(puVar12 + 2) = 0x2d;
      }
      else {
        puVar9 = puVar12 + 2;
      }
      FUN_074af514(puVar9,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      if (bVar6) {
        puVar10 = (undefined4 *)((long)puVar9 + 10);
        *(undefined2 *)(puVar9 + 2) = 0x2d;
      }
      else {
        puVar10 = puVar9 + 2;
      }
      FUN_074af514(puVar10,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      FUN_074af514(puVar10 + 2,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      FUN_074af514(puVar10 + 4,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar10 = puVar10 + 6;
    }
    iVar11 = iVar14;
    if (!bVar4) {
      *(short *)puVar10 = (short)((uint)uVar13 >> 0x10);
    }
  }
  *unaff_x19 = iVar11;
  return iVar14 <= unaff_w20;
}


