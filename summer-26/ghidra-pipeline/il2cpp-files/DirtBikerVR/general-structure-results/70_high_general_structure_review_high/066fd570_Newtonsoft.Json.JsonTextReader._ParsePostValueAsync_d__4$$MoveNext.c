/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 066fd570
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066fd950) */

void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char in_NG;
  char in_OV;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  long lVar16;
  long unaff_x19;
  int unaff_w21;
  uint uVar17;
  long unaff_x26;
  ulong uVar18;
  undefined8 in_stack_00000008;
  
  if (in_NG == in_OV) {
    if (*(char *)(unaff_x26 + 0xb7) == '\0') {
      FUN_03a8a718(PTR_DAT_08493e18);
      *(undefined1 *)(unaff_x26 + 0xb7) = 1;
    }
    uVar9 = FUN_065cab58();
    puVar2 = PTR_DAT_08493de0;
    uVar15 = *(undefined4 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_08493de0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08493de0);
    }
    uVar7 = FUN_066fda9c(uVar9,uVar15);
    unaff_w21 = unaff_w21 - (uVar7 & 1);
    if (unaff_w21 == 2) {
      sVar6 = FUN_065c7d98();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar2);
      }
      if (sVar6 == 0x2f) {
        thunk_FUN_03af1434(PTR_DAT_084a8248);
        uVar9 = FUN_065adf54();
        thunk_FUN_03af1434(PTR_DAT_0849a8c0);
        uVar14 = thunk_FUN_03ac74bc();
        FUN_066fdb2c(uVar14,uVar9);
        uVar9 = thunk_FUN_03af1434(PTR_DAT_084a8250);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar14,uVar9);
      }
      unaff_w21 = 2;
    }
  }
  if (*(char *)(unaff_x26 + 0xb7) == '\0') {
    FUN_03a8a718(PTR_DAT_08493e18);
    *(undefined1 *)(unaff_x26 + 0xb7) = 1;
  }
  uVar9 = FUN_065cab58();
  in_stack_00000008 = 0;
  uVar10 = FUN_066fd3c4(uVar9,*(undefined4 *)(unaff_x19 + 0x10),0x4000,&stack0x00000008);
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a8240);
  FUN_05862328(lVar11,*(undefined8 *)PTR_DAT_084a8230);
  if (*(char *)(unaff_x26 + 0xb7) == '\0') {
    FUN_03a8a718(PTR_DAT_08493e18);
    *(undefined1 *)(unaff_x26 + 0xb7) = 1;
  }
  uVar9 = FUN_065cab58();
  puVar2 = PTR_DAT_08493de0;
  uVar15 = *(undefined4 *)(unaff_x19 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_08493de0 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_08493de0);
  }
  uVar7 = FUN_066fdb50(uVar9,uVar15);
  puVar4 = PTR_DAT_084a8228;
  puVar3 = PTR_DAT_08493e18;
  if (((int)uVar7 < unaff_w21) && (uVar1 = unaff_w21 - 1, uVar7 <= uVar1)) {
    do {
      lVar12 = FUN_065cfabc();
      if (*(char *)(unaff_x26 + 0xb7) == '\0') {
        FUN_03a8a718(puVar3);
        *(undefined1 *)(unaff_x26 + 0xb7) = 1;
        if (lVar12 != 0) goto LAB_066fd728;
LAB_066fd74c:
        uVar9 = 0;
        uVar15 = 0;
      }
      else {
        if (lVar12 == 0) goto LAB_066fd74c;
LAB_066fd728:
        uVar9 = FUN_065cab58(lVar12,0);
        uVar15 = *(undefined4 *)(lVar12 + 0x10);
      }
      in_stack_00000008 = 0;
      bVar5 = FUN_066fd3c4(uVar9,uVar15,0x4000,&stack0x00000008);
      uVar17 = uVar1;
      if ((bVar5 & 1) == 0) {
        if (lVar11 == 0) goto LAB_066fda08;
        FUN_05862a18(lVar11,lVar12,*(undefined8 *)puVar4);
      }
      for (; (int)uVar7 < (int)uVar1; uVar1 = uVar1 - 1) {
        sVar6 = FUN_065c7d98();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        uVar17 = uVar1;
        if (sVar6 == 0x2f) break;
        uVar17 = uVar7;
      }
      uVar1 = uVar17 - 1;
    } while (((int)uVar7 <= (int)uVar1 & (bVar5 ^ 1)) != 0);
  }
  else {
    bVar5 = 0;
  }
  puVar3 = PTR_DAT_084a8220;
  puVar2 = PTR_DAT_08493df0;
  if (lVar11 == 0) {
LAB_066fda08:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((*(int *)(lVar11 + 0x18) == 0 & (bVar5 ^ 1)) == 0) {
    if (*(int *)(lVar11 + 0x18) < 1) {
      return;
    }
    uVar18 = 0;
    uVar10 = 0;
    do {
      lVar12 = FUN_0586291c(lVar11,*(undefined8 *)puVar3);
      lVar16 = *(long *)puVar2;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar16);
      }
      iVar8 = FUN_065ae81c(lVar12,0x1ff,0);
      if ((iVar8 < 0) && ((int)uVar10 == 0)) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_065aded0(0);
        if ((int)uVar10 == 0x10014) {
          if (*(char *)(unaff_x26 + 0xb7) == '\0') {
            FUN_03a8a718(PTR_DAT_08493e18);
            *(undefined1 *)(unaff_x26 + 0xb7) = 1;
            if (lVar12 != 0) goto LAB_066fd8a4;
LAB_066fd8d8:
            uVar9 = 0;
            uVar15 = 0;
          }
          else {
            if (lVar12 == 0) goto LAB_066fd8d8;
LAB_066fd8a4:
            uVar9 = FUN_065cab58(lVar12,0);
            uVar15 = *(undefined4 *)(lVar12 + 0x10);
          }
          uVar13 = FUN_066fdbcc(uVar9,uVar15);
          if ((uVar13 & 1) == 0) {
            if (*(char *)(unaff_x26 + 0xb7) == '\0') {
              FUN_03a8a718(PTR_DAT_08493e18);
              *(undefined1 *)(unaff_x26 + 0xb7) = 1;
              if (lVar12 != 0) goto LAB_066fd8fc;
LAB_066fd928:
              uVar9 = 0;
              uVar15 = 0;
            }
            else {
              if (lVar12 == 0) goto LAB_066fd928;
LAB_066fd8fc:
              uVar9 = FUN_065cab58(lVar12,0);
              uVar15 = *(undefined4 *)(lVar12 + 0x10);
            }
            FUN_066fd3c4(uVar9,uVar15,0x4000);
            uVar10 = 0;
          }
          else {
            uVar18 = uVar10 >> 0x20;
            uVar10 = 0x10014;
            unaff_x19 = lVar12;
          }
        }
        else {
          uVar18 = uVar10 >> 0x20;
        }
      }
    } while (0 < *(int *)(lVar11 + 0x18));
    if (-1 < iVar8) {
      return;
    }
    if ((int)uVar10 == 0) {
      return;
    }
    uVar10 = uVar10 & 0xffffffff | uVar18 << 0x20;
    goto LAB_066fda70;
  }
  lVar11 = FUN_0670f508();
  if (*(char *)(unaff_x26 + 0xb7) == '\0') {
    FUN_03a8a718(PTR_DAT_08493e18);
    *(undefined1 *)(unaff_x26 + 0xb7) = 1;
    if (lVar11 != 0) goto LAB_066fd9a0;
LAB_066fd9cc:
    uVar9 = 0;
    uVar15 = 0;
  }
  else {
    if (lVar11 == 0) goto LAB_066fd9cc;
LAB_066fd9a0:
    uVar9 = FUN_065cab58(lVar11,0);
    uVar15 = *(undefined4 *)(lVar11 + 0x10);
  }
  in_stack_00000008 = 0;
  uVar10 = FUN_066fd3c4(uVar9,uVar15,0x4000,&stack0x00000008);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar10 = FUN_065aecb4(0x1002d,0);
LAB_066fda70:
  uVar9 = FUN_065ad964(uVar10,unaff_x19,1,0);
  uVar14 = thunk_FUN_03af1434(PTR_DAT_084a8250);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar9,uVar14);
}


