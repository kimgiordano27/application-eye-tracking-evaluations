/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 05009de0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  short *psVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x24;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_06777060;
  if (0x50 < in_w8) {
    switch(in_w8) {
    case 99:
      goto switchD_05009e08_caseD_43;
    default:
      goto switchD_05009e08_caseD_44;
    case 0x65:
      goto switchD_05009e08_caseD_45;
    case 0x66:
      goto switchD_05009e08_caseD_46;
    case 0x67:
      goto switchD_05009e08_caseD_47;
    case 0x6e:
      goto switchD_05009e08_caseD_4e;
    case 0x70:
      goto switchD_05009e08_caseD_50;
    }
  }
  switch(in_w8) {
  case 0x43:
switchD_05009e08_caseD_43:
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500edf0();
      FUN_0500eeec();
      return;
    }
    break;
  default:
switchD_05009e08_caseD_44:
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar6 = thunk_FUN_02d9d534();
    uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067763b0);
    FUN_04fefd84(uVar6,uVar7,0);
    uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677a8c0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,uVar7);
  case 0x45:
switchD_05009e08_caseD_45:
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0500edf0();
    uVar5 = FUN_05015978();
    if ((uVar5 & 1) == 0) {
LAB_0500a124:
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500f8d8();
      return;
    }
    if (unaff_x19 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (DAT_06b79233 == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        DAT_06b79233 = '\x01';
      }
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x10) == 1) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
            if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
LAB_0500a318:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            lVar9 = *(long *)(unaff_x21 + 8);
            uVar3 = FUN_04e87a5c(lVar8,0,0);
            *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar3;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            goto LAB_0500a124;
          }
        }
        FUN_04ea5974();
        goto LAB_0500a124;
      }
    }
    break;
  case 0x46:
switchD_05009e08_caseD_46:
    if ((unaff_w22 < 0) && (unaff_x19 == 0)) break;
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0500edf0();
    uVar5 = FUN_05015978();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == 0) break;
LAB_0500a174:
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500f154();
      return;
    }
    if (unaff_x19 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (DAT_06b79233 == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        DAT_06b79233 = '\x01';
      }
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (uVar1 < *(uint *)(unaff_x21 + 0x10)) {
            lVar9 = *(long *)(unaff_x21 + 8);
            uVar3 = FUN_04e87a5c(lVar8,0,0);
            *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar3;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            goto LAB_0500a174;
          }
          goto LAB_0500a318;
        }
      }
      FUN_04ea5974();
      goto LAB_0500a174;
    }
    break;
  case 0x47:
switchD_05009e08_caseD_47:
    if (((unaff_w22 < 1) && (unaff_w22 == -1)) && ((unaff_x24 & 1) != 0)) {
      psVar4 = (short *)FUN_05015994();
      if (*psVar4 == 0) {
        FUN_05015988();
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500edf0();
    }
    uVar5 = FUN_05015978();
    if ((uVar5 & 1) == 0) {
LAB_0500a280:
      if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500fb30();
      return;
    }
    if (unaff_x19 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (DAT_06b79233 == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        DAT_06b79233 = '\x01';
      }
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (uVar1 < *(uint *)(unaff_x21 + 0x10)) {
            lVar9 = *(long *)(unaff_x21 + 8);
            uVar3 = FUN_04e87a5c(lVar8,0,0);
            *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar3;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            goto LAB_0500a280;
          }
          goto LAB_0500a318;
        }
      }
      FUN_04ea5974();
      goto LAB_0500a280;
    }
    break;
  case 0x4e:
switchD_05009e08_caseD_4e:
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500edf0();
      FUN_0500f684();
      return;
    }
    break;
  case 0x50:
switchD_05009e08_caseD_50:
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      *(int *)(unaff_x20 + 4) = *(int *)(unaff_x20 + 4) + 2;
      if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500edf0();
      FUN_0500fee8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


