/*
FUNCTION_NAME: FUN_0307d77c
ENTRY_POINT: 0307d77c
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


long FUN_0307d77c(uint param_1,uint param_2,uint param_3,short param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  short *psVar8;
  short *psVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  short local_f0 [76];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_03ef3ea3 & 1) == 0) {
    FUN_01c5c92c(PTR_DAT_03cb5ea0);
    FUN_01c5c92c(PTR_DAT_03cb9fa0);
    FUN_01c5c92c(PTR_DAT_03cba898);
    DAT_03ef3ea3 = 1;
  }
  memset(local_f0,0,0x84);
  if (0x22 < param_2 - 2) {
    thunk_FUN_01cb9718(PTR_DAT_03cb63c8);
    uVar4 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(PTR_DAT_03cba840);
    uVar6 = thunk_FUN_01cb9718(PTR_DAT_03cc0d90);
    FUN_02f87094(uVar4,uVar5,uVar6,0);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      uVar5 = thunk_FUN_01cb9718(PTR_DAT_03cc0da8);
                    /* WARNING: Subroutine does not return */
      FUN_01c5ca98(uVar4,uVar5);
    }
    goto Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
  }
  uVar13 = -param_1;
  if (param_2 != 10 || -1 < (int)param_1) {
    uVar13 = param_1;
  }
  uVar12 = uVar13;
  if ((param_5 & 0x80) != 0) {
    uVar12 = uVar13 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar12 = uVar13 & 0xff;
  }
  if (uVar12 == 0) {
    uVar13 = 1;
    local_f0[0] = 0x30;
  }
  else {
    lVar7 = 0;
    do {
      uVar13 = 0;
      if (param_2 != 0) {
        uVar13 = uVar12 / param_2;
      }
      uVar1 = uVar12 - uVar13 * param_2;
      sVar10 = 0x57;
      if (uVar1 < 10) {
        sVar10 = 0x30;
      }
      local_f0[lVar7] = sVar10 + (short)uVar1;
      if (uVar12 < param_2) {
        uVar13 = (int)lVar7 + 1;
        goto LAB_0307d894;
      }
      lVar7 = lVar7 + 1;
      uVar12 = uVar13;
    } while (lVar7 != 0x42);
    uVar13 = 0;
  }
LAB_0307d894:
  if ((param_2 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (param_2 != 10) {
LAB_0307d944:
      if (*(int *)(*(long *)PTR_DAT_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if ((int)param_3 <= (int)uVar13) {
        param_3 = uVar13;
      }
      lVar7 = thunk_FUN_01c8d64c(param_3,0);
      if (lVar7 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
      }
      else {
        iVar3 = thunk_FUN_01c68178(0);
        psVar9 = (short *)(lVar7 + iVar3);
        iVar3 = *(int *)(lVar7 + 0x10) - uVar13;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            psVar8 = psVar9;
            do {
              if (0x42 < uVar13) goto LAB_0307da30;
              uVar11 = uVar11 - 1;
              psVar9 = psVar8 + 1;
              *psVar8 = local_f0[uVar11 & 0xffffffff];
              psVar8 = psVar9;
            } while (uVar11 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *psVar9 = param_4;
              psVar9 = psVar9 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          psVar8 = psVar9;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              psVar9 = psVar8 + 1;
              *psVar8 = param_4;
              psVar8 = psVar9;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            do {
              if (0x42 < uVar13) goto LAB_0307da30;
              uVar11 = uVar11 - 1;
              *psVar9 = local_f0[uVar11 & 0xffffffff];
              psVar9 = psVar9 + 1;
            } while (uVar11 != 0);
          }
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return lVar7;
        }
      }
      goto Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke;
    }
    if ((int)param_1 < 0) {
      if (uVar13 < 0x42) {
        sVar10 = 0x2d;
LAB_0307d93c:
        local_f0[uVar13] = sVar10;
        uVar13 = uVar13 + 1;
        goto LAB_0307d944;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0307d944;
      if (uVar13 < 0x42) {
        sVar10 = 0x20;
        goto LAB_0307d93c;
      }
    }
    else if (uVar13 < 0x42) {
      sVar10 = 0x2b;
      goto LAB_0307d93c;
    }
  }
  else if (param_2 == 8) {
    if (uVar13 < 0x42) {
      sVar10 = 0x30;
      goto LAB_0307d93c;
    }
  }
  else {
    if (param_2 != 0x10) goto LAB_0307d944;
    if (uVar13 < 0x42) {
      local_f0[uVar13] = 0x78;
      if (uVar13 != 0x41) {
        local_f0[(ulong)uVar13 + 1] = 0x30;
        uVar13 = uVar13 + 2;
        goto LAB_0307d944;
      }
    }
  }
LAB_0307da30:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbdc();
  }
Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_0000012A_PostfixBurstDelegate__BeginInvoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


