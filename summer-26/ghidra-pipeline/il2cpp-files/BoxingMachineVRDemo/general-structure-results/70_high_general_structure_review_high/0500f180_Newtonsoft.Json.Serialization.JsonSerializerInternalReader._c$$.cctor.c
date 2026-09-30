/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 0500f180
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor
               (ulong param_1,long param_2,long param_3,undefined8 param_4,int param_5,
               undefined8 param_6,long param_7)

{
  short sVar1;
  undefined *puVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long unaff_x21;
  short *psVar15;
  long lVar16;
  long lVar17;
  long unaff_x23;
  uint uVar18;
  uint uVar19;
  long unaff_x28;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e6d8);
    FUN_02d6084c(PTR_DAT_067712e0);
    *(undefined1 *)(unaff_x21 + 0x20b) = 1;
  }
  uVar19 = *(uint *)(param_3 + 4);
  psVar6 = (short *)FUN_05015994(param_3,0);
  puVar2 = PTR_DAT_067714a8;
  if ((int)uVar19 < 1) {
    if (DAT_06b78666 == '\0') {
      FUN_02d6084c(PTR_DAT_067714a8);
      DAT_06b78666 = '\x01';
    }
    uVar18 = *(uint *)(param_2 + 0x18);
    if ((int)uVar18 < (int)*(uint *)(param_2 + 0x10)) {
      if (*(uint *)(param_2 + 0x10) <= uVar18) goto LAB_0500f67c;
      *(undefined2 *)(*(long *)(param_2 + 8) + (long)(int)uVar18 * 2) = 0x30;
      *(uint *)(param_2 + 0x18) = uVar18 + 1;
    }
    else {
      FUN_04ea5848(param_2,0x30,0);
    }
  }
  else if (param_7 == 0) {
    iVar14 = uVar19 + 1;
    do {
      sVar3 = *psVar6;
      sVar1 = 0x30;
      if (sVar3 != 0) {
        psVar6 = psVar6 + 1;
        sVar1 = sVar3;
      }
      if (DAT_06b78666 == '\0') {
        FUN_02d6084c(puVar2);
        DAT_06b78666 = '\x01';
      }
      uVar19 = *(uint *)(param_2 + 0x18);
      if ((int)uVar19 < (int)*(uint *)(param_2 + 0x10)) {
        if (*(uint *)(param_2 + 0x10) <= uVar19) goto LAB_0500f67c;
        *(short *)(*(long *)(param_2 + 8) + (long)(int)uVar19 * 2) = sVar1;
        *(uint *)(param_2 + 0x18) = uVar19 + 1;
      }
      else {
        FUN_04ea5848(param_2,sVar1,0);
      }
      iVar14 = iVar14 + -1;
    } while (1 < iVar14);
    uVar19 = 0;
  }
  else {
    uVar18 = uVar19;
    if (*(long *)(param_7 + 0x18) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)*(long *)(param_7 + 0x18);
      if (uVar9 == 0) goto LAB_0500f67c;
      uVar10 = *(uint *)(param_7 + 0x20);
      uVar5 = 0;
      uVar13 = uVar10;
      uVar12 = uVar10;
      while ((int)uVar12 < (int)uVar19) {
        if (uVar9 <= uVar5) goto LAB_0500f67c;
        if (uVar13 == 0) break;
        if (unaff_x23 == 0) goto LAB_0500f680;
        if ((int)uVar5 < (int)(uVar9 - 1)) {
          uVar5 = uVar5 + 1;
        }
        if (uVar9 <= uVar5) goto LAB_0500f67c;
        uVar13 = *(uint *)(param_7 + (long)(int)uVar5 * 4 + 0x20);
        uVar18 = *(int *)(unaff_x23 + 0x10) + uVar18;
        uVar12 = uVar13 + uVar12;
        if ((int)(uVar12 | uVar18) < 0) {
          thunk_FUN_02dc61f4(PTR_DAT_06764080);
          uVar7 = thunk_FUN_02d9d534();
          FUN_04f7eee0(uVar7,0);
          uVar8 = thunk_FUN_02dc61f4(PTR_DAT_0677a8d0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar7,uVar8);
        }
      }
      uVar9 = 0;
      if (uVar12 != 0) {
        uVar9 = uVar10;
      }
    }
    uVar5 = FUN_04e8d1a8(psVar6,0);
    uVar12 = uVar19;
    if ((int)uVar5 <= (int)uVar19) {
      uVar12 = uVar5;
    }
    if (DAT_06b79234 == '\0') {
      FUN_02d6084c(PTR_DAT_067707f8);
      FUN_02d6084c(PTR_DAT_067714a8);
      DAT_06b79234 = '\x01';
    }
    uVar5 = *(uint *)(param_2 + 0x10);
    uVar10 = *(uint *)(param_2 + 0x18);
    if ((int)(uVar5 - uVar18) < (int)uVar10) {
      FUN_04ea5aa4(param_2,uVar18,0);
      uVar5 = *(uint *)(param_2 + 0x10);
    }
    *(uint *)(param_2 + 0x18) = uVar10 + uVar18;
    lVar16 = *(long *)PTR_DAT_067707f8;
    if ((uVar5 < uVar10) || (uVar5 - uVar10 < uVar18)) {
      FUN_05027268(0);
    }
    lVar17 = *(long *)(param_2 + 8);
    if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    lVar16 = FUN_034850a8(lVar17 + (long)(int)uVar10 * 2,(ulong)uVar18,
                          *(undefined8 *)PTR_DAT_067712e0);
    uVar5 = uVar19 - 1;
    if (-1 < (int)uVar5) {
      lVar17 = 0;
      uVar10 = 0;
      psVar11 = (short *)(lVar16 + (ulong)uVar18 * 2 + -2);
      do {
        psVar15 = psVar11 + -1;
        if ((int)uVar5 < (int)uVar12) {
          sVar3 = psVar6[uVar5];
        }
        else {
          sVar3 = 0x30;
        }
        *psVar11 = sVar3;
        psVar11 = psVar15;
        if (((0 < (int)uVar9) && (uVar10 = uVar10 + 1, uVar5 != 0)) && (uVar10 == uVar9)) {
          if (unaff_x23 == 0) goto LAB_0500f680;
          iVar14 = *(int *)(unaff_x23 + 0x10);
          if (-1 < iVar14 + -1) {
            do {
              iVar14 = iVar14 + -1;
              sVar3 = FUN_04e87a5c();
              psVar15 = psVar11 + -1;
              *psVar11 = sVar3;
              psVar11 = psVar15;
            } while (0 < iVar14);
          }
          if ((int)lVar17 < (int)(*(uint *)(param_7 + 0x18) - 1)) {
            lVar17 = (long)(int)lVar17 + 1;
            if (*(uint *)(param_7 + 0x18) <= (uint)lVar17) goto LAB_0500f67c;
            uVar9 = *(uint *)(param_7 + lVar17 * 4 + 0x20);
          }
          uVar10 = 0;
          psVar11 = psVar15;
        }
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
    psVar6 = psVar6 + (int)uVar12;
  }
  if (param_5 < 1) {
    return;
  }
  if (DAT_06b79233 == '\0') {
    FUN_02d6084c(PTR_DAT_067714a8);
    DAT_06b79233 = '\x01';
  }
  if (unaff_x28 == 0) {
LAB_0500f680:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(unaff_x28 + 0x10) == 1) {
    uVar18 = *(uint *)(param_2 + 0x18);
    if ((int)uVar18 < (int)*(uint *)(param_2 + 0x10)) {
      if (*(uint *)(param_2 + 0x10) <= uVar18) {
LAB_0500f67c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar16 = *(long *)(param_2 + 8);
      uVar4 = FUN_04e87a5c(unaff_x28,0,0);
      *(undefined2 *)(lVar16 + (long)(int)uVar18 * 2) = uVar4;
      *(uint *)(param_2 + 0x18) = uVar18 + 1;
      goto joined_r0x0500f58c;
    }
  }
  FUN_04ea5974(param_2,unaff_x28,0);
joined_r0x0500f58c:
  if ((int)uVar19 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    iVar14 = param_5;
    if ((int)-uVar19 <= param_5) {
      iVar14 = -uVar19;
    }
    FUN_04ea5ce8(param_2,0x30,iVar14,0);
    param_5 = param_5 - iVar14;
    if (param_5 < 1) {
      return;
    }
  }
  puVar2 = PTR_DAT_067714a8;
  param_5 = param_5 + 1;
  do {
    sVar3 = *psVar6;
    sVar1 = 0x30;
    if (sVar3 != 0) {
      psVar6 = psVar6 + 1;
      sVar1 = sVar3;
    }
    if (DAT_06b78666 == '\0') {
      FUN_02d6084c(puVar2);
      DAT_06b78666 = '\x01';
    }
    uVar19 = *(uint *)(param_2 + 0x18);
    if ((int)uVar19 < (int)*(uint *)(param_2 + 0x10)) {
      if (*(uint *)(param_2 + 0x10) <= uVar19) goto LAB_0500f67c;
      *(short *)(*(long *)(param_2 + 8) + (long)(int)uVar19 * 2) = sVar1;
      *(uint *)(param_2 + 0x18) = uVar19 + 1;
    }
    else {
      FUN_04ea5848(param_2,sVar1,0);
    }
    param_5 = param_5 + -1;
    if (param_5 < 2) {
      return;
    }
  } while( true );
}


