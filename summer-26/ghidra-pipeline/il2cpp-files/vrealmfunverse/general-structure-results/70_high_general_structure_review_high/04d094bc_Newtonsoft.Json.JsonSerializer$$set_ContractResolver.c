/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 04d094bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__set_ContractResolver(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong unaff_x19;
  int unaff_w21;
  
  if (unaff_w21 - 0x3d2U < 3) {
    unaff_x19 = 0x3cb03cd03c5 >> ((ulong)((unaff_w21 - 0x3d2U) * 0x10) & 0x3f);
    goto LAB_04d0963c;
  }
  uVar6 = (uint)unaff_x19;
  if ((uVar6 & 0xffff) == 0x3f4) {
    unaff_x19 = 0x3b8;
    goto LAB_04d0963c;
  }
  if ((uVar6 & 0xffff) == 0x1e9e) {
    unaff_x19 = 0xdf;
    goto LAB_04d0963c;
  }
  uVar2 = FUN_04d09204();
  puVar1 = PTR_DAT_06330170;
  if ((uVar2 & 1) == 0) {
    if ((uVar6 & 0xffff) == 0x49) {
      unaff_x19 = 0x131;
      goto LAB_04d0963c;
    }
    if ((uVar6 & 0xffff) < 0x80) {
      if (0xffe5 < (uVar6 - 0x5b & 0xffff)) {
        uVar6 = uVar6 | 0x20;
      }
      unaff_x19 = (ulong)uVar6;
      goto LAB_04d0963c;
    }
  }
  if ((uVar6 - 0x557 & 0xffff) < 0xfb69) {
    if (0xffd9 < (uVar6 - 0x10c6 & 0xffff)) {
      lVar3 = *(long *)PTR_DAT_06330170;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_04d09784;
      lVar5 = -0x10a0;
      goto LAB_04d0950c;
    }
    if ((uVar6 - 0x1ffd & 0xffff) < 0xfe03) {
      if ((uVar6 - 0x2170 >> 4 & 0xfff) < 0xfff) {
        if ((uVar6 - 0x24d0 & 0xffff) < 0xffe6) {
          if (0xffd0 < (uVar6 - 0x2c2f & 0xffff)) {
            lVar3 = *(long *)PTR_DAT_06330170;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
            if (lVar3 == 0) goto LAB_04d09784;
            iVar4 = -0x2c00;
            goto LAB_04d09624;
          }
          if ((uVar6 - 0x2ce3 & 0xffff) < 0xff7d) {
            if ((uVar6 + 0x5969 & 0xffff) < 0xffa9) {
              if ((uVar6 + 0x5874 & 0xffff) < 0xff96) {
                if ((uVar6 + 0xc5 & 0xffff) < 0xffe6) {
                  if ((uVar6 & 0xffff) == 0x2132) {
                    unaff_x19 = 0x214e;
                  }
                  else if ((uVar6 & 0xffff) == 0x2183) {
                    unaff_x19 = 0x2184;
                  }
                }
                else {
                  unaff_x19 = (ulong)(uVar6 + 0x20);
                }
                goto LAB_04d0963c;
              }
              lVar3 = *(long *)PTR_DAT_06330170;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar3 = *(long *)puVar1;
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
              if (lVar3 == 0) goto LAB_04d09784;
              lVar5 = -0xa722;
            }
            else {
              lVar3 = *(long *)PTR_DAT_06330170;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar3 = *(long *)puVar1;
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
              if (lVar3 == 0) goto LAB_04d09784;
              lVar5 = -0xa640;
            }
          }
          else {
            lVar3 = *(long *)PTR_DAT_06330170;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar3 = *(long *)puVar1;
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
            if (lVar3 == 0) goto LAB_04d09784;
            lVar5 = -0x2c60;
          }
        }
        else {
          lVar3 = *(long *)PTR_DAT_06330170;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *(long *)puVar1;
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
          if (lVar3 == 0) goto LAB_04d09784;
          lVar5 = -0x24b6;
        }
LAB_04d0950c:
        uVar6 = *(uint *)(lVar3 + 0x18);
        lVar5 = lVar5 + (unaff_x19 & 0xffff);
        goto LAB_04d09514;
      }
      lVar3 = *(long *)PTR_DAT_06330170;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
      if (lVar3 == 0) goto LAB_04d09784;
      iVar4 = -0x2160;
    }
    else {
      lVar3 = *(long *)PTR_DAT_06330170;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_04d09784;
      iVar4 = -0x1e00;
    }
LAB_04d09624:
    if (*(uint *)(lVar3 + 0x18) <= (uint)(unaff_w21 + iVar4)) goto LAB_04d09788;
    lVar3 = lVar3 + (ulong)(uint)(unaff_w21 + iVar4) * 2;
  }
  else {
    lVar3 = *(long *)PTR_DAT_06330170;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) {
LAB_04d09784:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar6 = *(uint *)(lVar3 + 0x18);
    lVar5 = (unaff_x19 & 0xffff) - 0xc0;
LAB_04d09514:
    if (uVar6 <= (uint)lVar5) {
LAB_04d09788:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = lVar3 + lVar5 * 2;
  }
  unaff_x19 = (ulong)*(ushort *)(lVar3 + 0x20);
LAB_04d0963c:
  return unaff_x19 & 0xffffffff;
}


