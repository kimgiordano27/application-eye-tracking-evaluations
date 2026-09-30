/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Ssse3$$hsubs_epi16
ENTRY_POINT: 0307d6a0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


ulong Unity_Burst_Intrinsics_X86_Ssse3__hsubs_epi16
                (undefined8 param_1,undefined8 param_2,uint param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined1 in_CY;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
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
  uint in_w12;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  short asStack_f0 [76];
  long lStack_58;
  
  do {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    uVar1 = *in_x10;
    uVar16 = uVar1 - 0x30;
    uVar4 = in_w12;
    if (9 < uVar16) {
      uVar16 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar16 = uVar16 - 0x37;
      }
      else {
        if (0x19 < uVar16 - 0x61) goto LAB_0307d71c;
        uVar16 = uVar16 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar16) {
LAB_0307d71c:
      return (ulong)uVar4;
    }
    if (in_w9 < in_w12) {
      thunk_FUN_01cb9718(PTR_DAT_03cb63d0);
      uVar7 = thunk_FUN_01c8fc48();
      uVar8 = thunk_FUN_01cb9718(PTR_DAT_03cba7d8);
      FUN_0306b1a8(uVar7,uVar8);
      uVar8 = thunk_FUN_01cb9718(PTR_DAT_03cc0da0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5ca98(uVar7,uVar8);
    }
    uVar4 = uVar16 + in_w12 * unaff_w21;
    if (uVar4 < in_w12) {
      uVar4 = FUN_0307df54();
      lVar3 = tpidr_el0;
      lStack_58 = *(long *)(lVar3 + 0x28);
      if ((DAT_03ef3ea3 & 1) == 0) {
        FUN_01c5c92c(PTR_DAT_03cb5ea0);
        FUN_01c5c92c(PTR_DAT_03cb9fa0);
        FUN_01c5c92c(PTR_DAT_03cba898);
        DAT_03ef3ea3 = 1;
      }
      memset(asStack_f0,0,0x84);
      if (0x22 < extraout_w1 - 2) {
        thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
        uVar7 = thunk_FUN_01c8fc48();
        uVar8 = thunk_FUN_01cb9718(PTR_DAT_03cba840);
        uVar9 = thunk_FUN_01cb9718(PTR_DAT_03cc0d90);
        FUN_02f87094(uVar7,uVar8,uVar9,0);
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
          uVar8 = thunk_FUN_01cb9718(PTR_DAT_03cc0da8);
                    /* WARNING: Subroutine does not return */
          FUN_01c5ca98(uVar7,uVar8);
        }
        goto 
        Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
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
      if (uVar15 != 0) {
        lVar10 = 0;
        break;
      }
      uVar16 = 1;
      asStack_f0[0] = 0x30;
      goto LAB_0307d894;
    }
    in_w8 = in_w8 + 1;
    in_x11 = in_x11 + -1;
    in_x10 = in_x10 + 1;
    *unaff_x19 = in_w8;
    if (in_x11 == 0) goto LAB_0307d71c;
    in_CY = unaff_w20 <= in_w8;
    in_w12 = uVar4;
  } while( true );
  while (lVar10 = lVar10 + 1, uVar15 = uVar16, lVar10 != 0x42) {
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
      goto LAB_0307d894;
    }
  }
  uVar16 = 0;
LAB_0307d894:
  if ((extraout_w1 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_0307d944:
      if (*(int *)(*(long *)PTR_DAT_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if ((int)param_3 <= (int)uVar16) {
        param_3 = uVar16;
      }
      uVar6 = thunk_FUN_01c8d64c(param_3,0);
      if (uVar6 == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
      }
      else {
        iVar5 = thunk_FUN_01c68178(0);
        psVar12 = (short *)(uVar6 + (long)iVar5);
        iVar5 = *(int *)(uVar6 + 0x10) - uVar16;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar16) {
            uVar14 = (ulong)uVar16;
            psVar11 = psVar12;
            do {
              if (0x42 < uVar16) goto LAB_0307da30;
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
              if (0x42 < uVar16) goto LAB_0307da30;
              uVar14 = uVar14 - 1;
              *psVar12 = asStack_f0[uVar14 & 0xffffffff];
              psVar12 = psVar12 + 1;
            } while (uVar14 != 0);
          }
        }
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
          return uVar6;
        }
      }
      goto Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
    }
    if ((int)uVar4 < 0) {
      if (uVar16 < 0x42) {
        sVar13 = 0x2d;
LAB_0307d93c:
        asStack_f0[uVar16] = sVar13;
        uVar16 = uVar16 + 1;
        goto LAB_0307d944;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0307d944;
      if (uVar16 < 0x42) {
        sVar13 = 0x20;
        goto LAB_0307d93c;
      }
    }
    else if (uVar16 < 0x42) {
      sVar13 = 0x2b;
      goto LAB_0307d93c;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar16 < 0x42) {
      sVar13 = 0x30;
      goto LAB_0307d93c;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_0307d944;
    if (uVar16 < 0x42) {
      asStack_f0[uVar16] = 0x78;
      if (uVar16 != 0x41) {
        asStack_f0[(ulong)uVar16 + 1] = 0x30;
        uVar16 = uVar16 + 2;
        goto LAB_0307d944;
      }
    }
  }
LAB_0307da30:
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbdc();
  }
Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


