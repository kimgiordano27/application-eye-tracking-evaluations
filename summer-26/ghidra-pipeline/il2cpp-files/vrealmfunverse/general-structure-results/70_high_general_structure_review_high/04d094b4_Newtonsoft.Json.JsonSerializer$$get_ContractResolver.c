/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ContractResolver
ENTRY_POINT: 04d094b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_ContractResolver(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint in_w8;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong unaff_x19;
  int unaff_w21;
  
  uVar7 = (uint)unaff_x19;
  if (in_w8 < (uVar7 & 0xffff)) {
    uVar1 = uVar7 & 0xffff;
    if (uVar1 == 0x2126) {
      unaff_x19 = 0x3c9;
      goto LAB_04d0963c;
    }
    if (uVar1 == 0x212a) {
      unaff_x19 = 0x6b;
      goto LAB_04d0963c;
    }
    if (uVar1 == 0x212b) {
      unaff_x19 = 0xe5;
      goto LAB_04d0963c;
    }
  }
  else {
    if (unaff_w21 - 0x3d2U < 3) {
      unaff_x19 = 0x3cb03cd03c5 >> ((ulong)((unaff_w21 - 0x3d2U) * 0x10) & 0x3f);
      goto LAB_04d0963c;
    }
    if ((uVar7 & 0xffff) == 0x3f4) {
      unaff_x19 = 0x3b8;
      goto LAB_04d0963c;
    }
    if ((uVar7 & 0xffff) == 0x1e9e) {
      unaff_x19 = 0xdf;
      goto LAB_04d0963c;
    }
  }
  uVar3 = FUN_04d09204();
  puVar2 = PTR_DAT_06330170;
  if ((uVar3 & 1) == 0) {
    if ((uVar7 & 0xffff) == 0x49) {
      unaff_x19 = 0x131;
      goto LAB_04d0963c;
    }
    if ((uVar7 & 0xffff) < 0x80) {
      if (0xffe5 < (uVar7 - 0x5b & 0xffff)) {
        uVar7 = uVar7 | 0x20;
      }
      unaff_x19 = (ulong)uVar7;
      goto LAB_04d0963c;
    }
  }
  if ((uVar7 - 0x557 & 0xffff) < 0xfb69) {
    if (0xffd9 < (uVar7 - 0x10c6 & 0xffff)) {
      lVar4 = *(long *)PTR_DAT_06330170;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_04d09784;
      lVar6 = -0x10a0;
      goto LAB_04d0950c;
    }
    if ((uVar7 - 0x1ffd & 0xffff) < 0xfe03) {
      if ((uVar7 - 0x2170 >> 4 & 0xfff) < 0xfff) {
        if ((uVar7 - 0x24d0 & 0xffff) < 0xffe6) {
          if (0xffd0 < (uVar7 - 0x2c2f & 0xffff)) {
            lVar4 = *(long *)PTR_DAT_06330170;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar4 = *(long *)puVar2;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
            if (lVar4 == 0) goto LAB_04d09784;
            iVar5 = -0x2c00;
            goto LAB_04d09624;
          }
          if ((uVar7 - 0x2ce3 & 0xffff) < 0xff7d) {
            if ((uVar7 + 0x5969 & 0xffff) < 0xffa9) {
              if ((uVar7 + 0x5874 & 0xffff) < 0xff96) {
                if ((uVar7 + 0xc5 & 0xffff) < 0xffe6) {
                  if ((uVar7 & 0xffff) == 0x2132) {
                    unaff_x19 = 0x214e;
                  }
                  else if ((uVar7 & 0xffff) == 0x2183) {
                    unaff_x19 = 0x2184;
                  }
                }
                else {
                  unaff_x19 = (ulong)(uVar7 + 0x20);
                }
                goto LAB_04d0963c;
              }
              lVar4 = *(long *)PTR_DAT_06330170;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar4 = *(long *)puVar2;
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x40);
              if (lVar4 == 0) goto LAB_04d09784;
              lVar6 = -0xa722;
            }
            else {
              lVar4 = *(long *)PTR_DAT_06330170;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar4 = *(long *)puVar2;
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
              if (lVar4 == 0) goto LAB_04d09784;
              lVar6 = -0xa640;
            }
          }
          else {
            lVar4 = *(long *)PTR_DAT_06330170;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar4 = *(long *)puVar2;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
            if (lVar4 == 0) goto LAB_04d09784;
            lVar6 = -0x2c60;
          }
        }
        else {
          lVar4 = *(long *)PTR_DAT_06330170;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar2;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
          if (lVar4 == 0) goto LAB_04d09784;
          lVar6 = -0x24b6;
        }
LAB_04d0950c:
        uVar7 = *(uint *)(lVar4 + 0x18);
        lVar6 = lVar6 + (unaff_x19 & 0xffff);
        goto LAB_04d09514;
      }
      lVar4 = *(long *)PTR_DAT_06330170;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (lVar4 == 0) goto LAB_04d09784;
      iVar5 = -0x2160;
    }
    else {
      lVar4 = *(long *)PTR_DAT_06330170;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_04d09784;
      iVar5 = -0x1e00;
    }
LAB_04d09624:
    if (*(uint *)(lVar4 + 0x18) <= (uint)(unaff_w21 + iVar5)) goto LAB_04d09788;
    lVar4 = lVar4 + (ulong)(uint)(unaff_w21 + iVar5) * 2;
  }
  else {
    lVar4 = *(long *)PTR_DAT_06330170;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 == 0) {
LAB_04d09784:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar7 = *(uint *)(lVar4 + 0x18);
    lVar6 = (unaff_x19 & 0xffff) - 0xc0;
LAB_04d09514:
    if (uVar7 <= (uint)lVar6) {
LAB_04d09788:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar4 = lVar4 + lVar6 * 2;
  }
  unaff_x19 = (ulong)*(ushort *)(lVar4 + 0x20);
LAB_04d0963c:
  return unaff_x19 & 0xffffffff;
}


