/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 07184d80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (long param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  
  lVar4 = tpidr_el0;
  lStack0000000000000018 = *(long *)(lVar4 + 0x28);
  if ((DAT_09843003 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_09843003 = 1;
  }
  puVar7 = (ushort *)FUN_07186be4(param_1,0);
  iVar15 = *(int *)(param_1 + 4);
  uVar6 = FUN_07186bc8(param_1,0);
  uVar12 = (uint)*puVar7;
  if (*puVar7 == 0) {
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar12 = -iVar15;
    if (DAT_09843017 == '\0') {
      FUN_03d2d2b0(PTR_DAT_09212ad0);
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_09843017 = '\x01';
    }
    if (0x1b < (int)uVar12) {
      uVar12 = 0x1c;
    }
    uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
LAB_07184ed0:
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
LAB_07184edc:
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_071d67cc(&stack0x00000008,uVar9,uVar10,uVar11,uVar6 & 1,uVar12,0);
    uVar8 = 1;
    param_2[1] = in_stack_00000010;
    *param_2 = in_stack_00000008;
  }
  else {
    if (iVar15 < 0x1e) {
      uVar9 = 0;
      iVar2 = iVar15;
      if (-0x1d < iVar15) {
        iVar2 = -0x1c;
      }
      do {
        iVar14 = iVar15;
        iVar16 = iVar2;
        if (iVar14 < -0x1b) goto LAB_07184efc;
        uVar11 = uVar12 - 0x30;
        puVar7 = puVar7 + 1;
        uVar12 = (uint)*puVar7;
        uVar9 = (ulong)uVar11 + uVar9 * 10;
        iVar15 = iVar14 + -1;
        iVar16 = iVar15;
        if (0x1999999999999998 < uVar9) goto LAB_07184efc;
      } while (*puVar7 != 0);
      iVar16 = 0;
      if (iVar14 < 1) {
        iVar16 = iVar15;
      }
      do {
        if (iVar15 < 1) {
          uVar12 = 0;
          goto LAB_07184efc;
        }
        uVar9 = uVar9 * 10;
        iVar15 = iVar15 + -1;
      } while (uVar9 < 0x1999999999999999);
      uVar12 = 0;
      iVar16 = iVar15;
LAB_07184efc:
      uVar11 = 0;
      while (((0 < iVar16 || ((uVar12 != 0 && (-0x1c < iVar16)))) &&
             ((uVar11 < 0x19999999 ||
              ((uVar11 == 0x19999999 &&
               ((uVar9 < 0x9999999999999999 || ((uVar9 == 0x9999999999999999 && (uVar12 < 0x36))))))
              ))))) {
        uVar10 = (uVar9 & 0xffffffff) * 4 + (uVar9 & 0xffffffff);
        lVar13 = (uVar9 >> 0x20) * 10 + (uVar10 >> 0x1f);
        uVar9 = (uVar10 & 0x7fffffff) << 1 | lVar13 << 0x20;
        uVar11 = (int)((ulong)lVar13 >> 0x20) + uVar11 * 10;
        if (uVar12 != 0) {
          uVar3 = uVar12 - 0x30;
          puVar7 = puVar7 + 1;
          uVar12 = (uint)*puVar7;
          bVar5 = CARRY8(uVar9,(ulong)uVar3);
          uVar9 = uVar9 + uVar3;
          if (bVar5) {
            uVar11 = uVar11 + 1;
          }
        }
        iVar16 = iVar16 + -1;
      }
      if (0x34 < uVar12) {
        if ((uVar12 == 0x35) && ((uVar9 & 1) == 0)) {
          lVar13 = 2;
          do {
            psVar1 = (short *)((long)puVar7 + lVar13);
            iVar15 = (int)lVar13;
            if (iVar15 == 0x2a) break;
            lVar13 = lVar13 + 2;
          } while (*psVar1 == 0x30);
          if ((iVar15 == 0x2a) || (*psVar1 == 0)) goto LAB_07185004;
        }
        bVar5 = uVar9 == 0xffffffffffffffff;
        uVar9 = uVar9 + 1;
        if (bVar5) {
          bVar5 = uVar11 == 0xffffffff;
          uVar11 = uVar11 + 1;
          if (bVar5) {
            iVar16 = iVar16 + 1;
            uVar9 = 0x999999999999999a;
            uVar11 = 0x19999999;
          }
          else {
            uVar9 = 0;
          }
        }
      }
LAB_07185004:
      if (iVar16 < 1) {
        if (iVar16 < -0x1c) {
          uVar12 = 0x1c;
          goto LAB_07184ed0;
        }
        uVar10 = uVar9 >> 0x20;
        uVar12 = -iVar16;
        goto LAB_07184edc;
      }
    }
    uVar8 = 0;
  }
  if (*(long *)(lVar4 + 0x28) != lStack0000000000000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


