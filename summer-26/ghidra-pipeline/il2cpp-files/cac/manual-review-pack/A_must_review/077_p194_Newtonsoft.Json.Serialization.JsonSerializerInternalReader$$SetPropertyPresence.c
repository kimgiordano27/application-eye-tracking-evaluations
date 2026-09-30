/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 074bdeb8
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  uint uVar6;
  short *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined2 *puVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long unaff_x23;
  long unaff_x24;
  uint uVar20;
  int unaff_w26;
  long unaff_x27;
  uint uVar21;
  int iStack0000000000000014;
  
  FUN_03f13384();
  *(undefined1 *)(unaff_x21 + 0x498) = 1;
  uVar21 = *(uint *)(unaff_x20 + 4);
  psVar7 = (short *)FUN_074c4780();
  puVar4 = PTR_DAT_09129228;
  if ((int)uVar21 < 1) {
    if (DAT_0968d807 == '\0') {
      FUN_03f13384(PTR_DAT_09129228);
      DAT_0968d807 = '\x01';
    }
    uVar20 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar20 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar20) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar20 + 1;
      *(undefined2 *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar20 * 2) = 0x30;
    }
    else {
      FUN_07346f30();
    }
  }
  else if (unaff_x24 == 0) {
    iVar17 = uVar21 + 1;
    cVar11 = DAT_0968d807;
    do {
      sVar2 = *psVar7;
      sVar3 = 0x30;
      if (sVar2 != 0) {
        psVar7 = psVar7 + 1;
        sVar3 = sVar2;
      }
      if (cVar11 == '\0') {
        FUN_03f13384(puVar4);
        cVar11 = '\x01';
        DAT_0968d807 = '\x01';
      }
      uVar21 = *(uint *)(unaff_x19 + 0x18);
      if ((int)uVar21 < (int)*(uint *)(unaff_x19 + 0x10)) {
        if (*(uint *)(unaff_x19 + 0x10) <= uVar21) goto LAB_074be39c;
        *(uint *)(unaff_x19 + 0x18) = uVar21 + 1;
        *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar21 * 2) = sVar3;
      }
      else {
        FUN_07346f30();
        cVar11 = DAT_0968d807;
      }
      iVar17 = iVar17 + -1;
    } while (1 < iVar17);
    uVar21 = 0;
  }
  else {
    uVar20 = uVar21;
    if (*(long *)(unaff_x24 + 0x18) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint)*(long *)(unaff_x24 + 0x18);
      if (uVar12 == 0) goto LAB_074be39c;
      uVar18 = *(uint *)(unaff_x24 + 0x20);
      uVar6 = 0;
      uVar15 = uVar18;
      uVar14 = uVar18;
      while (((int)uVar14 < (int)uVar21 && (uVar15 != 0))) {
        if (unaff_x23 == 0) goto LAB_074be3a0;
        if ((int)uVar6 < (int)(uVar12 - 1)) {
          uVar6 = uVar6 + 1;
        }
        if (uVar12 <= uVar6) goto LAB_074be39c;
        uVar15 = *(uint *)(unaff_x24 + (long)(int)uVar6 * 4 + 0x20);
        uVar20 = *(int *)(unaff_x23 + 0x10) + uVar20;
        uVar14 = uVar15 + uVar14;
        if ((int)(uVar14 | uVar20) < 0) {
          thunk_FUN_03f786f8(PTR_DAT_0910bbd0);
          uVar8 = thunk_FUN_03f4e68c();
          FUN_0741aff8(uVar8,0);
          uVar9 = thunk_FUN_03f786f8(PTR_DAT_09133390);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar8,uVar9);
        }
      }
      uVar12 = 0;
      if (uVar14 != 0) {
        uVar12 = uVar18;
      }
    }
    iStack0000000000000014 = unaff_w26;
    uVar6 = FUN_07326b0c(psVar7,0);
    uVar14 = uVar21;
    if ((int)uVar6 <= (int)uVar21) {
      uVar14 = uVar6;
    }
    if (DAT_0968e4c1 == '\0') {
      FUN_03f13384(PTR_DAT_091286b8);
      FUN_03f13384(PTR_DAT_09129228);
      DAT_0968e4c1 = '\x01';
    }
    uVar6 = *(uint *)(unaff_x19 + 0x10);
    uVar18 = *(uint *)(unaff_x19 + 0x18);
    if ((int)(uVar6 - uVar20) < (int)uVar18) {
      FUN_07347190();
      uVar6 = *(uint *)(unaff_x19 + 0x10);
    }
    puVar4 = PTR_DAT_091286b8;
    *(uint *)(unaff_x19 + 0x18) = uVar18 + uVar20;
    if ((uVar6 < uVar18) || (uVar6 - uVar18 < uVar20)) {
                    /* WARNING: Subroutine does not return */
      FUN_074d6efc(0);
    }
    lVar19 = *(long *)(unaff_x19 + 8);
    if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f4b260();
    }
    lVar10 = FUN_04a8ef94(lVar19 + (long)(int)uVar18 * 2,uVar20,*(undefined8 *)PTR_DAT_09129180);
    lVar19 = 0;
    uVar6 = 0;
    puVar13 = (undefined2 *)(lVar10 + (ulong)uVar20 * 2 + -2);
    uVar20 = uVar21;
    do {
      uVar18 = uVar20 - 1;
      if ((int)uVar14 < (int)uVar20) {
        uVar5 = 0x30;
      }
      else {
        uVar5 = *(undefined2 *)((long)psVar7 + (ulong)(uVar18 * 2));
      }
      puVar16 = puVar13 + -1;
      *puVar13 = uVar5;
      puVar13 = puVar16;
      if (((0 < (int)uVar12) && (uVar6 = uVar6 + 1, uVar18 != 0)) && (uVar6 == uVar12)) {
        if (unaff_x23 == 0) goto LAB_074be3a0;
        iVar17 = *(int *)(unaff_x23 + 0x10) + -1;
        if (-1 < iVar17) {
          do {
            uVar5 = FUN_073213d0();
            iVar17 = iVar17 + -1;
            puVar16 = puVar13 + -1;
            *puVar13 = uVar5;
            puVar13 = puVar16;
          } while (iVar17 != -1);
        }
        if ((int)lVar19 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
          lVar19 = (long)(int)lVar19 + 1;
          if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar19) goto LAB_074be39c;
          uVar12 = *(uint *)(unaff_x24 + lVar19 * 4 + 0x20);
        }
        uVar6 = 0;
        puVar13 = puVar16;
      }
      bVar1 = 1 < (int)uVar20;
      uVar20 = uVar18;
    } while (bVar1);
    psVar7 = psVar7 + (int)uVar14;
    unaff_w26 = iStack0000000000000014;
  }
  if (unaff_w26 < 1) {
    return;
  }
  if (DAT_0968e4c0 == '\0') {
    FUN_03f13384(PTR_DAT_09129228);
    DAT_0968e4c0 = '\x01';
  }
  if (unaff_x27 == 0) {
LAB_074be3a0:
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(int *)(unaff_x27 + 0x10) == 1) {
    uVar20 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar20 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar20) {
LAB_074be39c:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar19 = *(long *)(unaff_x19 + 8);
      uVar5 = FUN_073213d0(unaff_x27,0,0);
      *(undefined2 *)(lVar19 + (long)(int)uVar20 * 2) = uVar5;
      *(uint *)(unaff_x19 + 0x18) = uVar20 + 1;
      goto joined_r0x074be2a8;
    }
  }
  FUN_0734705c();
joined_r0x074be2a8:
  if ((int)uVar21 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    iVar17 = unaff_w26;
    if ((int)-uVar21 < unaff_w26) {
      iVar17 = -uVar21;
    }
    FUN_073473f4();
    unaff_w26 = unaff_w26 - iVar17;
    if (unaff_w26 < 1) {
      return;
    }
  }
  puVar4 = PTR_DAT_09129228;
  iVar17 = unaff_w26 + 1;
  cVar11 = DAT_0968d807;
  do {
    sVar2 = *psVar7;
    sVar3 = 0x30;
    if (sVar2 != 0) {
      psVar7 = psVar7 + 1;
      sVar3 = sVar2;
    }
    if (cVar11 == '\0') {
      FUN_03f13384(puVar4);
      cVar11 = '\x01';
      DAT_0968d807 = '\x01';
    }
    uVar21 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar21 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar21) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar21 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar21 * 2) = sVar3;
    }
    else {
      FUN_07346f30();
      cVar11 = DAT_0968d807;
    }
    iVar17 = iVar17 + -1;
    if (iVar17 < 2) {
      return;
    }
  } while( true );
}


