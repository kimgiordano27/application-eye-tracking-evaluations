/*
FUNCTION_NAME: FUN_0307d58c
ENTRY_POINT: 0307d58c
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


ulong FUN_0307d58c(int param_1,long param_2,uint param_3,uint *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint extraout_w1;
  uint uVar8;
  short sVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  short *psVar13;
  short *psVar14;
  short sVar15;
  ushort *puVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  short asStack_130 [76];
  long lStack_98;
  
  puVar10 = param_4;
  uVar11 = param_5;
  uVar8 = param_3;
  if ((DAT_03ef3ea7 & 1) == 0) {
    FUN_01c5c92c(PTR_DAT_03cb9c30);
    DAT_03ef3ea7 = 1;
  }
  sVar9 = (short)puVar10;
  if ((param_1 == 10) && ((param_5 & 1) == 0)) {
    uVar2 = *param_4;
    if ((int)param_3 <= (int)uVar2) {
      return 0;
    }
    uVar4 = 0;
    puVar16 = (ushort *)(param_2 + (long)(int)uVar2 * 2);
    lVar17 = (long)(int)param_3 - (long)(int)uVar2;
    do {
      if (param_3 <= uVar2) goto LAB_0307d730;
      if (9 < *puVar16 - 0x30) break;
      if (0xccccccc < (uint)uVar4) goto LAB_0307d64c;
      uVar4 = (ulong)((*puVar16 - 0x30) + (uint)uVar4 * 10);
      uVar2 = uVar2 + 1;
      lVar17 = lVar17 + -1;
      puVar16 = puVar16 + 1;
      *param_4 = uVar2;
    } while (lVar17 != 0);
    if ((uint)uVar4 < 0x80000001) {
      return uVar4;
    }
LAB_0307d64c:
    FUN_0307df0c();
  }
  uVar2 = 0x1fffffff;
  if (param_1 != 8) {
    uVar2 = 0x7fffffff;
  }
  uVar21 = *param_4;
  uVar19 = 0xfffffff;
  if (param_1 != 0x10) {
    uVar19 = uVar2;
  }
  if (param_1 == 10) {
    uVar19 = 0x19999999;
  }
  if ((int)param_3 <= (int)uVar21) {
    return 0;
  }
  puVar16 = (ushort *)(param_2 + (long)(int)uVar21 * 2);
  lVar17 = (long)(int)param_3 - (long)(int)uVar21;
  uVar2 = 0;
  do {
    if (param_3 <= uVar21) {
LAB_0307d730:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    uVar1 = *puVar16;
    uVar20 = uVar1 - 0x30;
    if (9 < uVar20) {
      uVar20 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar20 = uVar20 - 0x37;
      }
      else {
        if (0x19 < uVar20 - 0x61) goto LAB_0307d718;
        uVar20 = uVar20 - 0x57;
      }
    }
    if (param_1 <= (int)uVar20) {
LAB_0307d718:
      return (ulong)uVar2;
    }
    if (uVar19 < uVar2) {
      thunk_FUN_01cb9718(PTR_DAT_03cb63d0);
      uVar5 = thunk_FUN_01c8fc48();
      uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cba7d8);
      FUN_0306b1a8(uVar5,uVar6);
      uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cc0da0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5ca98(uVar5,uVar6);
    }
    uVar20 = uVar20 + uVar2 * param_1;
    if (uVar20 < uVar2) {
      uVar2 = FUN_0307df54();
      lVar17 = tpidr_el0;
      lStack_98 = *(long *)(lVar17 + 0x28);
      if ((DAT_03ef3ea3 & 1) == 0) {
        FUN_01c5c92c(PTR_DAT_03cb5ea0);
        FUN_01c5c92c(PTR_DAT_03cb9fa0);
        FUN_01c5c92c(PTR_DAT_03cba898);
        DAT_03ef3ea3 = 1;
      }
      memset(asStack_130,0,0x84);
      if (0x22 < extraout_w1 - 2) {
        thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
        uVar5 = thunk_FUN_01c8fc48();
        uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cba840);
        uVar7 = thunk_FUN_01cb9718(PTR_DAT_03cc0d90);
        FUN_02f87094(uVar5,uVar6,uVar7,0);
        if (*(long *)(lVar17 + 0x28) == lStack_98) {
          uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cc0da8);
                    /* WARNING: Subroutine does not return */
          FUN_01c5ca98(uVar5,uVar6);
        }
        goto 
        Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
      }
      uVar21 = -uVar2;
      if (extraout_w1 != 10 || -1 < (int)uVar2) {
        uVar21 = uVar2;
      }
      uVar19 = uVar21;
      if ((uVar11 & 0x80) != 0) {
        uVar19 = uVar21 & 0xffff;
      }
      if ((uVar11 & 0x40) != 0) {
        uVar19 = uVar21 & 0xff;
      }
      if (uVar19 != 0) {
        lVar12 = 0;
        break;
      }
      uVar21 = 1;
      asStack_130[0] = 0x30;
      goto LAB_0307d894;
    }
    uVar21 = uVar21 + 1;
    lVar17 = lVar17 + -1;
    puVar16 = puVar16 + 1;
    *param_4 = uVar21;
    uVar2 = uVar20;
    if (lVar17 == 0) {
      return (ulong)uVar20;
    }
  } while( true );
  while (lVar12 = lVar12 + 1, uVar19 = uVar21, lVar12 != 0x42) {
    uVar21 = 0;
    if (extraout_w1 != 0) {
      uVar21 = uVar19 / extraout_w1;
    }
    uVar20 = uVar19 - uVar21 * extraout_w1;
    sVar15 = 0x57;
    if (uVar20 < 10) {
      sVar15 = 0x30;
    }
    asStack_130[lVar12] = sVar15 + (short)uVar20;
    if (uVar19 < extraout_w1) {
      uVar21 = (int)lVar12 + 1;
      goto LAB_0307d894;
    }
  }
  uVar21 = 0;
LAB_0307d894:
  if ((extraout_w1 == 10) || ((uVar11 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_0307d944:
      if (*(int *)(*(long *)PTR_DAT_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if ((int)uVar8 <= (int)uVar21) {
        uVar8 = uVar21;
      }
      uVar4 = thunk_FUN_01c8d64c(uVar8,0);
      if (uVar4 == 0) {
        if (*(long *)(lVar17 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
      }
      else {
        iVar3 = thunk_FUN_01c68178(0);
        psVar14 = (short *)(uVar4 + (long)iVar3);
        iVar3 = *(int *)(uVar4 + 0x10) - uVar21;
        if ((uVar11 & 1) == 0) {
          if (0 < (int)uVar21) {
            uVar18 = (ulong)uVar21;
            psVar13 = psVar14;
            do {
              if (0x42 < uVar21) goto LAB_0307da30;
              uVar18 = uVar18 - 1;
              psVar14 = psVar13 + 1;
              *psVar13 = asStack_130[uVar18 & 0xffffffff];
              psVar13 = psVar14;
            } while (uVar18 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *psVar14 = sVar9;
              psVar14 = psVar14 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          psVar13 = psVar14;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              psVar14 = psVar13 + 1;
              *psVar13 = sVar9;
              psVar13 = psVar14;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar21) {
            uVar18 = (ulong)uVar21;
            do {
              if (0x42 < uVar21) goto LAB_0307da30;
              uVar18 = uVar18 - 1;
              *psVar14 = asStack_130[uVar18 & 0xffffffff];
              psVar14 = psVar14 + 1;
            } while (uVar18 != 0);
          }
        }
        if (*(long *)(lVar17 + 0x28) == lStack_98) {
          return uVar4;
        }
      }
      goto Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
    }
    if ((int)uVar2 < 0) {
      if (uVar21 < 0x42) {
        sVar15 = 0x2d;
LAB_0307d93c:
        asStack_130[uVar21] = sVar15;
        uVar21 = uVar21 + 1;
        goto LAB_0307d944;
      }
    }
    else if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) goto LAB_0307d944;
      if (uVar21 < 0x42) {
        sVar15 = 0x20;
        goto LAB_0307d93c;
      }
    }
    else if (uVar21 < 0x42) {
      sVar15 = 0x2b;
      goto LAB_0307d93c;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar21 < 0x42) {
      sVar15 = 0x30;
      goto LAB_0307d93c;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_0307d944;
    if (uVar21 < 0x42) {
      asStack_130[uVar21] = 0x78;
      if (uVar21 != 0x41) {
        asStack_130[(ulong)uVar21 + 1] = 0x30;
        uVar21 = uVar21 + 2;
        goto LAB_0307d944;
      }
    }
  }
LAB_0307da30:
  if (*(long *)(lVar17 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbdc();
  }
Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


