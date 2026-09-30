/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Ssse3$$maddubs_epi16
ENTRY_POINT: 0307d778
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


long Unity_Burst_Intrinsics_X86_Ssse3__maddubs_epi16
               (undefined8 param_1,undefined8 param_2,uint param_3,short param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint extraout_w1;
  long lVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  short asStack_f0 [76];
  long lStack_58;
  
  uVar3 = FUN_0307df54();
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
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
    if (*(long *)(lVar2 + 0x28) == lStack_58) {
      uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cc0da8);
                    /* WARNING: Subroutine does not return */
      FUN_01c5ca98(uVar5,uVar6);
    }
    goto Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
  }
  uVar14 = -uVar3;
  if (extraout_w1 != 10 || -1 < (int)uVar3) {
    uVar14 = uVar3;
  }
  uVar13 = uVar14;
  if ((param_5 & 0x80) != 0) {
    uVar13 = uVar14 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar13 = uVar14 & 0xff;
  }
  if (uVar13 == 0) {
    uVar14 = 1;
    asStack_f0[0] = 0x30;
  }
  else {
    lVar8 = 0;
    do {
      uVar14 = 0;
      if (extraout_w1 != 0) {
        uVar14 = uVar13 / extraout_w1;
      }
      uVar1 = uVar13 - uVar14 * extraout_w1;
      sVar11 = 0x57;
      if (uVar1 < 10) {
        sVar11 = 0x30;
      }
      asStack_f0[lVar8] = sVar11 + (short)uVar1;
      if (uVar13 < extraout_w1) {
        uVar14 = (int)lVar8 + 1;
        goto LAB_0307d894;
      }
      lVar8 = lVar8 + 1;
      uVar13 = uVar14;
    } while (lVar8 != 0x42);
    uVar14 = 0;
  }
LAB_0307d894:
  if ((extraout_w1 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_0307d944:
      if (*(int *)(*(long *)PTR_DAT_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if ((int)param_3 <= (int)uVar14) {
        param_3 = uVar14;
      }
      lVar8 = thunk_FUN_01c8d64c(param_3,0);
      if (lVar8 == 0) {
        if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
      }
      else {
        iVar4 = thunk_FUN_01c68178(0);
        psVar10 = (short *)(lVar8 + iVar4);
        iVar4 = *(int *)(lVar8 + 0x10) - uVar14;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar14) {
            uVar12 = (ulong)uVar14;
            psVar9 = psVar10;
            do {
              if (0x42 < uVar14) goto LAB_0307da30;
              uVar12 = uVar12 - 1;
              psVar10 = psVar9 + 1;
              *psVar9 = asStack_f0[uVar12 & 0xffffffff];
              psVar9 = psVar10;
            } while (uVar12 != 0);
          }
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              *psVar10 = param_4;
              psVar10 = psVar10 + 1;
            } while (iVar4 != 0);
          }
        }
        else {
          psVar9 = psVar10;
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              psVar10 = psVar9 + 1;
              *psVar9 = param_4;
              psVar9 = psVar10;
            } while (iVar4 != 0);
          }
          if (0 < (int)uVar14) {
            uVar12 = (ulong)uVar14;
            do {
              if (0x42 < uVar14) goto LAB_0307da30;
              uVar12 = uVar12 - 1;
              *psVar10 = asStack_f0[uVar12 & 0xffffffff];
              psVar10 = psVar10 + 1;
            } while (uVar12 != 0);
          }
        }
        if (*(long *)(lVar2 + 0x28) == lStack_58) {
          return lVar8;
        }
      }
      goto Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
    }
    if ((int)uVar3 < 0) {
      if (uVar14 < 0x42) {
        sVar11 = 0x2d;
LAB_0307d93c:
        asStack_f0[uVar14] = sVar11;
        uVar14 = uVar14 + 1;
        goto LAB_0307d944;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0307d944;
      if (uVar14 < 0x42) {
        sVar11 = 0x20;
        goto LAB_0307d93c;
      }
    }
    else if (uVar14 < 0x42) {
      sVar11 = 0x2b;
      goto LAB_0307d93c;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar14 < 0x42) {
      sVar11 = 0x30;
      goto LAB_0307d93c;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_0307d944;
    if (uVar14 < 0x42) {
      asStack_f0[uVar14] = 0x78;
      if (uVar14 != 0x41) {
        asStack_f0[(ulong)uVar14 + 1] = 0x30;
        uVar14 = uVar14 + 2;
        goto LAB_0307d944;
      }
    }
  }
LAB_0307da30:
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbdc();
  }
Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


