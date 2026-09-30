/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ConstructorHandling
ENTRY_POINT: 04d09388
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializer__set_ConstructorHandling(void)

{
  undefined *puVar1;
  long lVar2;
  uint in_w8;
  uint in_w9;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  int unaff_w21;
  
  puVar1 = PTR_DAT_06330170;
  if (in_w9 <= (in_w8 & 0xffff)) {
    lVar2 = *(long *)PTR_DAT_06330170;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 == 0) goto LAB_04d09784;
    lVar4 = -0x10a0;
    goto LAB_04d0950c;
  }
  if ((unaff_w19 - 0x1ffd & 0xffff) < 0xfe03) {
    if ((unaff_w19 - 0x2170 >> 4 & 0xfff) < 0xfff) {
      if ((unaff_w19 - 0x24d0 & 0xffff) < 0xffe6) {
        if (0xffd0 < (unaff_w19 - 0x2c2f & 0xffff)) {
          lVar2 = *(long *)PTR_DAT_06330170;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
          if (lVar2 == 0) goto LAB_04d09784;
          iVar3 = -0x2c00;
          goto LAB_04d09624;
        }
        if ((unaff_w19 - 0x2ce3 & 0xffff) < 0xff7d) {
          if ((unaff_w19 + 0x5969 & 0xffff) < 0xffa9) {
            if ((unaff_w19 + 0x5874 & 0xffff) < 0xff96) {
              if (0xffe5 < (unaff_w19 + 0xc5 & 0xffff)) {
                return unaff_w19 + 0x20;
              }
              if ((unaff_w19 & 0xffff) != 0x2132) {
                if ((unaff_w19 & 0xffff) != 0x2183) {
                  return unaff_w19;
                }
                return 0x2184;
              }
              return 0x214e;
            }
            lVar2 = *(long *)PTR_DAT_06330170;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar2 = *(long *)puVar1;
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
            if (lVar2 == 0) {
LAB_04d09784:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar4 = -0xa722;
          }
          else {
            lVar2 = *(long *)PTR_DAT_06330170;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar2 = *(long *)puVar1;
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
            if (lVar2 == 0) goto LAB_04d09784;
            lVar4 = -0xa640;
          }
        }
        else {
          lVar2 = *(long *)PTR_DAT_06330170;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
          if (lVar2 == 0) goto LAB_04d09784;
          lVar4 = -0x2c60;
        }
      }
      else {
        lVar2 = *(long *)PTR_DAT_06330170;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
        if (lVar2 == 0) goto LAB_04d09784;
        lVar4 = -0x24b6;
      }
LAB_04d0950c:
      lVar4 = lVar4 + (ulong)(ushort)unaff_w19;
      if (*(uint *)(lVar2 + 0x18) <= (uint)lVar4) goto LAB_04d09788;
      lVar2 = lVar2 + lVar4 * 2;
      goto LAB_04d09638;
    }
    lVar2 = *(long *)PTR_DAT_06330170;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar2 == 0) goto LAB_04d09784;
    iVar3 = -0x2160;
  }
  else {
    lVar2 = *(long *)PTR_DAT_06330170;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 == 0) goto LAB_04d09784;
    iVar3 = -0x1e00;
  }
LAB_04d09624:
  if (*(uint *)(lVar2 + 0x18) <= (uint)(unaff_w21 + iVar3)) {
LAB_04d09788:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  lVar2 = lVar2 + (ulong)(uint)(unaff_w21 + iVar3) * 2;
LAB_04d09638:
  return (uint)*(ushort *)(lVar2 + 0x20);
}


