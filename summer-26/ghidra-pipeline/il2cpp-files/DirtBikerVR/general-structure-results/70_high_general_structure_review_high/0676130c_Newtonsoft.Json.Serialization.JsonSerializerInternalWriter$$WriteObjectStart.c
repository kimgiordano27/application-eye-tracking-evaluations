/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 0676130c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart
                (ulong param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined1 in_ZR;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint extraout_w1;
  uint in_w8;
  long lVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  uint in_w9;
  ushort *in_x10;
  ulong uVar14;
  uint uVar15;
  long in_x11;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  short asStack_f0 [76];
  long lStack_58;
  
  while( true ) {
    uVar4 = (uint)param_1;
    *unaff_x19 = in_w8;
    if ((bool)in_ZR) {
      return param_1;
    }
    if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar1 = *in_x10;
    uVar16 = uVar1 - 0x30;
    if (9 < uVar16) {
      uVar16 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar16 = uVar16 - 0x37;
      }
      else {
        if (0x19 < uVar16 - 0x61) {
          return param_1 & 0xffffffff;
        }
        uVar16 = uVar16 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar16) {
      return param_1 & 0xffffffff;
    }
    if (in_w9 < uVar4) {
      thunk_FUN_03af1434(PTR_DAT_08489850);
      uVar6 = thunk_FUN_03ac74bc();
      uVar8 = thunk_FUN_03af1434(PTR_DAT_084a5c88);
      FUN_06760338(uVar6,uVar8);
      uVar8 = thunk_FUN_03af1434(PTR_DAT_084a9d78);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar6,uVar8);
    }
    uVar16 = uVar16 + uVar4 * unaff_w21;
    param_1 = (ulong)uVar16;
    if (uVar16 < uVar4) break;
    in_w8 = in_w8 + 1;
    in_x11 = in_x11 + -1;
    in_ZR = in_x11 == 0;
    in_x10 = in_x10 + 1;
  }
  uVar4 = FUN_06761b70();
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  if ((DAT_0897bb67 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486c60);
    FUN_03a8a718(PTR_DAT_0849fc10);
    FUN_03a8a718(PTR_DAT_0849fcb0);
    DAT_0897bb67 = 1;
  }
  memset(asStack_f0,0,0x84);
  if (0x22 < extraout_w1 - 2) {
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar6 = thunk_FUN_03ac74bc();
    uVar8 = thunk_FUN_03af1434(PTR_DAT_084a5ce0);
    uVar9 = thunk_FUN_03af1434(PTR_DAT_0849eec0);
    FUN_066af718(uVar6,uVar8,uVar9,0);
    if (*(long *)(lVar3 + 0x28) == lStack_58) {
      uVar8 = thunk_FUN_03af1434(PTR_DAT_084a9d80);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar6,uVar8);
    }
    goto LAB_067616d8;
  }
  uVar16 = -uVar4;
  if (extraout_w1 != 10 || -1 < (int)uVar4) {
    uVar16 = uVar4;
  }
  uVar15 = uVar16;
  if ((param_5 & 0x80) != 0) {
    uVar15 = uVar16 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar15 = uVar16 & 0xff;
  }
  if (uVar15 == 0) {
    uVar16 = 1;
    asStack_f0[0] = 0x30;
  }
  else {
    lVar10 = 0;
    do {
      uVar16 = 0;
      if (extraout_w1 != 0) {
        uVar16 = uVar15 / extraout_w1;
      }
      uVar2 = uVar15 - uVar16 * extraout_w1;
      sVar13 = 0x57;
      if (uVar2 < 10) {
        sVar13 = 0x30;
      }
      asStack_f0[lVar10] = sVar13 + (short)uVar2;
      if (uVar15 < extraout_w1) {
        uVar16 = (int)lVar10 + 1;
        goto LAB_067614a0;
      }
      lVar10 = lVar10 + 1;
      uVar15 = uVar16;
    } while (lVar10 != 0x42);
    uVar16 = 0;
  }
LAB_067614a0:
  if ((extraout_w1 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_06761550:
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_06751c44(param_3 & 0xffffffff,uVar16,0);
      uVar7 = thunk_FUN_03ac4ebc(uVar6,0);
      if (uVar7 == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      else {
        iVar5 = thunk_FUN_03a964ec(0);
        psVar12 = (short *)(uVar7 + (long)iVar5);
        iVar5 = *(int *)(uVar7 + 0x10) - uVar16;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar16) {
            uVar14 = (ulong)uVar16;
            psVar11 = psVar12;
            do {
              if (0x42 < uVar16) goto LAB_06761644;
              uVar14 = uVar14 - 1;
              psVar12 = psVar11 + 1;
              *psVar11 = asStack_f0[uVar14 & 0xffffffff];
              psVar11 = psVar12;
            } while (uVar14 != 0);
          }
          if (0 < iVar5) {
            do {
              iVar5 = iVar5 + -1;
              *psVar12 = param_4;
              psVar12 = psVar12 + 1;
            } while (iVar5 != 0);
          }
        }
        else {
          psVar11 = psVar12;
          if (0 < iVar5) {
            do {
              iVar5 = iVar5 + -1;
              psVar12 = psVar11 + 1;
              *psVar11 = param_4;
              psVar11 = psVar12;
            } while (iVar5 != 0);
          }
          if (0 < (int)uVar16) {
            uVar14 = (ulong)uVar16;
            do {
              if (0x42 < uVar16) goto LAB_06761644;
              uVar14 = uVar14 - 1;
              *psVar12 = asStack_f0[uVar14 & 0xffffffff];
              psVar12 = psVar12 + 1;
            } while (uVar14 != 0);
          }
        }
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
          return uVar7;
        }
      }
      goto LAB_067616d8;
    }
    if ((int)uVar4 < 0) {
      if (uVar16 < 0x42) {
        sVar13 = 0x2d;
LAB_06761548:
        asStack_f0[uVar16] = sVar13;
        uVar16 = uVar16 + 1;
        goto LAB_06761550;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_06761550;
      if (uVar16 < 0x42) {
        sVar13 = 0x20;
        goto LAB_06761548;
      }
    }
    else if (uVar16 < 0x42) {
      sVar13 = 0x2b;
      goto LAB_06761548;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar16 < 0x42) {
      sVar13 = 0x30;
      goto LAB_06761548;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_06761550;
    if (uVar16 < 0x42) {
      asStack_f0[uVar16] = 0x78;
      if (uVar16 != 0x41) {
        asStack_f0[(ulong)uVar16 + 1] = 0x30;
        uVar16 = uVar16 + 2;
        goto LAB_06761550;
      }
    }
  }
LAB_06761644:
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_067616d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


