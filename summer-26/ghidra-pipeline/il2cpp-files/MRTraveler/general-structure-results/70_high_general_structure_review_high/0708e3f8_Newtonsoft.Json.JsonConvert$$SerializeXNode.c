/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 0708e3f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xb38));
  FUN_03c8f898(PTR_DAT_08e69920);
  FUN_03c8f898(PTR_DAT_08e92eb8);
  *(undefined1 *)(unaff_x20 + 0xd97) = 1;
  in_stack_00000008 = 0;
  if (unaff_x19 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar10 = thunk_FUN_03cf5234();
    uVar9 = thunk_FUN_03ce5214(PTR_DAT_08e82950);
    FUN_0705a2f8(uVar10,uVar9,0);
    goto LAB_0708ea3c;
  }
  lVar7 = FUN_06f78bac();
  puVar2 = PTR_DAT_08e69920;
  if (lVar7 == 0) goto Newtonsoft_Json_JsonConverterAttribute__get_ConverterType;
  if (*(int *)(lVar7 + 0x10) == 0) {
    uVar9 = thunk_FUN_03ce5214(PTR_DAT_08ea25f8);
    uVar9 = FUN_06f5678c(uVar9,0);
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar10 = thunk_FUN_03cf5234();
    FUN_07064ba8(uVar10,uVar9,0);
    uVar9 = thunk_FUN_03ce5214(PTR_DAT_08ea2600);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar10,uVar9);
  }
  uVar4 = FUN_06f6fafc();
  if (*(int *)(unaff_x19 + 0x10) < 2) {
LAB_0708e578:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar8 = FUN_0708d2d0();
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *(long *)puVar2;
      }
      if ((*(short *)(*(long *)(lVar7 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x19 + 0x10))) {
        uVar5 = FUN_06f6fafc();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)puVar2);
        }
        uVar8 = FUN_0708eaa8(uVar5);
        if ((uVar8 & 1) != 0) {
          uVar5 = FUN_06f6fafc();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)puVar2);
          }
          uVar8 = FUN_0708eaa8(uVar5);
          if ((uVar8 & 1) == 0) {
            lVar7 = FUN_07053ad0(0);
            if (lVar7 == 0) goto Newtonsoft_Json_JsonConverterAttribute__get_ConverterType;
            sVar3 = FUN_06f6fafc(lVar7,1,0);
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar11);
              lVar11 = *(long *)puVar2;
            }
            if (*(short *)(*(long *)(lVar11 + 0xb8) + 0x18) == sVar3) {
              FUN_06f764fc(lVar7,0,2,0);
              unaff_x19 = FUN_06f683f8();
            }
            else {
              iVar6 = FUN_06f7b728(lVar7,*(undefined8 *)PTR_DAT_08e92eb8,0,
                                   *(undefined4 *)(lVar7 + 0x10),0);
              uVar5 = FUN_06f79078(lVar7,0x5c,iVar6 + 1,0);
              unaff_x19 = FUN_06f764fc(lVar7,0,uVar5,0);
            }
          }
        }
      }
      goto LAB_0708e824;
    }
    uVar8 = FUN_07149618(0);
    if ((uVar8 & 1) == 0) {
      do {
        iVar6 = FUN_06f79078();
        if (iVar6 == -1) {
          iVar6 = -1;
          break;
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == *(int *)(unaff_x19 + 0x10)) break;
        sVar3 = FUN_06f6fafc();
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar7);
          lVar7 = *(long *)puVar2;
        }
        if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) == sVar3) break;
        sVar3 = FUN_06f6fafc();
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar7);
          lVar7 = *(long *)puVar2;
        }
      } while (*(short *)(*(long *)(lVar7 + 0xb8) + 8) != sVar3);
      bVar1 = 0 < iVar6;
    }
    else {
      bVar1 = true;
    }
    lVar7 = FUN_07053ad0(0);
    if (lVar7 == 0) goto Newtonsoft_Json_JsonConverterAttribute__get_ConverterType;
    sVar3 = FUN_06f6fafc(lVar7,*(int *)(lVar7 + 0x10) + -1,0);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar11);
      lVar11 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar11 + 0xb8) + 10) == sVar3) {
      unaff_x19 = FUN_06f683f8(lVar7);
    }
    else {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar11);
      }
      if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar9 = FUN_07059e90(*(long *)(*(long *)puVar2 + 0xb8) + 10,0);
      unaff_x19 = FUN_06f7465c(lVar7,uVar9);
    }
    if (bVar1) goto LAB_0708e824;
  }
  else {
    uVar5 = FUN_06f6fafc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar2);
    }
    uVar8 = FUN_0708eaa8(uVar5);
    if ((uVar8 & 1) == 0) goto LAB_0708e578;
    uVar5 = FUN_06f6fafc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar2);
    }
    uVar8 = FUN_0708eaa8(uVar5);
    if ((uVar8 & 1) == 0) goto LAB_0708e578;
    if (*(int *)(unaff_x19 + 0x10) == 2) {
LAB_0708ea0c:
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar10 = thunk_FUN_03cf5234();
      uVar9 = thunk_FUN_03ce5214(PTR_DAT_08ea2608);
      FUN_07064ba8(uVar10,uVar9,0);
LAB_0708ea3c:
      uVar9 = thunk_FUN_03ce5214(PTR_DAT_08ea2600);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,uVar9);
    }
    FUN_06f6fafc();
    iVar6 = FUN_06f79078();
    if (iVar6 < 0) goto LAB_0708ea0c;
    sVar3 = FUN_06f6fafc();
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar7);
      lVar7 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar3) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar7);
      }
      unaff_x19 = FUN_06f76694();
    }
LAB_0708e824:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    unaff_x19 = FUN_0708eb34(unaff_x19);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar8 = FUN_0708eaa8(uVar4);
  if ((uVar8 & 1) != 0) {
    if (unaff_x19 == 0) {
Newtonsoft_Json_JsonConverterAttribute__get_ConverterType:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    sVar3 = FUN_06f6fafc(unaff_x19,*(int *)(unaff_x19 + 0x10) + -1,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar7);
      lVar7 = *(long *)puVar2;
    }
    if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar3) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar7);
      }
      if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar9 = FUN_07059e90(*(long *)(*(long *)puVar2 + 0xb8) + 10,0);
      unaff_x19 = FUN_06f683f8(unaff_x19,uVar9,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08e9bb38 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar8 = thunk_FUN_03c8f538(unaff_x19,&stack0x00000008,0);
  if ((uVar8 & 1) == 0) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}


