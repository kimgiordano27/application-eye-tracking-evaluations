/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Ssse3$$hadd_epi32
ENTRY_POINT: 0307d5e8
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


ulong Unity_Burst_Intrinsics_X86_Ssse3__hadd_epi32
                (undefined8 param_1,undefined8 param_2,uint param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint extraout_w1;
  uint in_w8;
  long lVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  ushort *puVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  uint uVar17;
  short asStack_f0 [76];
  long lStack_58;
  
  uVar4 = 0;
  puVar12 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
  lVar13 = (long)(int)unaff_w20 - (long)(int)in_w8;
  do {
    if (unaff_w20 <= in_w8) goto LAB_0307d730;
    if (9 < *puVar12 - 0x30) break;
    if (0xccccccc < (uint)uVar4) goto LAB_0307d64c;
    uVar4 = (ulong)((*puVar12 - 0x30) + (uint)uVar4 * 10);
    in_w8 = in_w8 + 1;
    lVar13 = lVar13 + -1;
    puVar12 = puVar12 + 1;
    *unaff_x19 = in_w8;
  } while (lVar13 != 0);
  if (0x80000000 < (uint)uVar4) {
LAB_0307d64c:
    FUN_0307df0c();
    uVar2 = 0x1fffffff;
    if (unaff_w21 != 8) {
      uVar2 = 0x7fffffff;
    }
    uVar17 = *unaff_x19;
    uVar15 = 0xfffffff;
    if (unaff_w21 != 0x10) {
      uVar15 = uVar2;
    }
    if (unaff_w21 == 10) {
      uVar15 = 0x19999999;
    }
    if ((int)uVar17 < (int)unaff_w20) {
      puVar12 = (ushort *)(unaff_x22 + (long)(int)uVar17 * 2);
      lVar13 = (long)(int)unaff_w20 - (long)(int)uVar17;
      uVar2 = 0;
      do {
        if (unaff_w20 <= uVar17) {
LAB_0307d730:
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        uVar1 = *puVar12;
        uVar16 = uVar1 - 0x30;
        if (9 < uVar16) {
          uVar16 = (uint)uVar1;
          if (uVar1 - 0x41 < 0x1a) {
            uVar16 = uVar16 - 0x37;
          }
          else {
            if (0x19 < uVar16 - 0x61) goto LAB_0307d718;
            uVar16 = uVar16 - 0x57;
          }
        }
        if (unaff_w21 <= (int)uVar16) {
LAB_0307d718:
          return (ulong)uVar2;
        }
        if (uVar15 < uVar2) {
          thunk_FUN_01cb9718(PTR_DAT_03cb63d0);
          uVar5 = thunk_FUN_01c8fc48();
          uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cba7d8);
          FUN_0306b1a8(uVar5,uVar6);
          uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cc0da0);
                    /* WARNING: Subroutine does not return */
          FUN_01c5ca98(uVar5,uVar6);
        }
        uVar16 = uVar16 + uVar2 * unaff_w21;
        uVar4 = (ulong)uVar16;
        if (uVar16 < uVar2) {
          uVar2 = FUN_0307df54();
          lVar13 = tpidr_el0;
          lStack_58 = *(long *)(lVar13 + 0x28);
          if ((DAT_03ef3ea3 & 1) == 0) {
            FUN_01c5c92c(PTR_DAT_03cb5ea0);
            FUN_01c5c92c(PTR_DAT_03cb9fa0);
            FUN_01c5c92c(PTR_DAT_03cba898);
            DAT_03ef3ea3 = 1;
          }
          memset(asStack_f0,0,0x84);
          if (0x22 < extraout_w1 - 2) {
            thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
            uVar5 = thunk_FUN_01c8fc48();
            uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cba840);
            uVar7 = thunk_FUN_01cb9718(PTR_DAT_03cc0d90);
            FUN_02f87094(uVar5,uVar6,uVar7,0);
            if (*(long *)(lVar13 + 0x28) == lStack_58) {
              uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cc0da8);
                    /* WARNING: Subroutine does not return */
              FUN_01c5ca98(uVar5,uVar6);
            }
            goto 
            Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke
            ;
          }
          uVar17 = -uVar2;
          if (extraout_w1 != 10 || -1 < (int)uVar2) {
            uVar17 = uVar2;
          }
          uVar15 = uVar17;
          if ((param_5 & 0x80) != 0) {
            uVar15 = uVar17 & 0xffff;
          }
          if ((param_5 & 0x40) != 0) {
            uVar15 = uVar17 & 0xff;
          }
          if (uVar15 == 0) {
            uVar17 = 1;
            asStack_f0[0] = 0x30;
            goto LAB_0307d894;
          }
          lVar8 = 0;
          goto LAB_0307d848;
        }
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + -1;
        puVar12 = puVar12 + 1;
        *unaff_x19 = uVar17;
        uVar2 = uVar16;
      } while (lVar13 != 0);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
  while (lVar8 = lVar8 + 1, uVar15 = uVar17, lVar8 != 0x42) {
LAB_0307d848:
    uVar17 = 0;
    if (extraout_w1 != 0) {
      uVar17 = uVar15 / extraout_w1;
    }
    uVar16 = uVar15 - uVar17 * extraout_w1;
    sVar11 = 0x57;
    if (uVar16 < 10) {
      sVar11 = 0x30;
    }
    asStack_f0[lVar8] = sVar11 + (short)uVar16;
    if (uVar15 < extraout_w1) {
      uVar17 = (int)lVar8 + 1;
      goto LAB_0307d894;
    }
  }
  uVar17 = 0;
LAB_0307d894:
  if ((extraout_w1 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_0307d944:
      if (*(int *)(*(long *)PTR_DAT_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if ((int)param_3 <= (int)uVar17) {
        param_3 = uVar17;
      }
      uVar4 = thunk_FUN_01c8d64c(param_3,0);
      if (uVar4 == 0) {
        if (*(long *)(lVar13 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
      }
      else {
        iVar3 = thunk_FUN_01c68178(0);
        psVar10 = (short *)(uVar4 + (long)iVar3);
        iVar3 = *(int *)(uVar4 + 0x10) - uVar17;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar17) {
            uVar14 = (ulong)uVar17;
            psVar9 = psVar10;
            do {
              if (0x42 < uVar17) goto LAB_0307da30;
              uVar14 = uVar14 - 1;
              psVar10 = psVar9 + 1;
              *psVar9 = asStack_f0[uVar14 & 0xffffffff];
              psVar9 = psVar10;
            } while (uVar14 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *psVar10 = param_4;
              psVar10 = psVar10 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          psVar9 = psVar10;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              psVar10 = psVar9 + 1;
              *psVar9 = param_4;
              psVar9 = psVar10;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar17) {
            uVar14 = (ulong)uVar17;
            do {
              if (0x42 < uVar17) goto LAB_0307da30;
              uVar14 = uVar14 - 1;
              *psVar10 = asStack_f0[uVar14 & 0xffffffff];
              psVar10 = psVar10 + 1;
            } while (uVar14 != 0);
          }
        }
        if (*(long *)(lVar13 + 0x28) == lStack_58) {
          return uVar4;
        }
      }
      goto Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
    }
    if ((int)uVar2 < 0) {
      if (uVar17 < 0x42) {
        sVar11 = 0x2d;
LAB_0307d93c:
        asStack_f0[uVar17] = sVar11;
        uVar17 = uVar17 + 1;
        goto LAB_0307d944;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0307d944;
      if (uVar17 < 0x42) {
        sVar11 = 0x20;
        goto LAB_0307d93c;
      }
    }
    else if (uVar17 < 0x42) {
      sVar11 = 0x2b;
      goto LAB_0307d93c;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar17 < 0x42) {
      sVar11 = 0x30;
      goto LAB_0307d93c;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_0307d944;
    if (uVar17 < 0x42) {
      asStack_f0[uVar17] = 0x78;
      if (uVar17 != 0x41) {
        asStack_f0[(ulong)uVar17 + 1] = 0x30;
        uVar17 = uVar17 + 2;
        goto LAB_0307d944;
      }
    }
  }
LAB_0307da30:
  if (*(long *)(lVar13 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbdc();
  }
Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


