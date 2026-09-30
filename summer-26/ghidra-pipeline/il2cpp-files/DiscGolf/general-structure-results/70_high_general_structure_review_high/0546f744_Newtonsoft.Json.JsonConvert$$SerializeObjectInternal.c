/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 0546f744
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonConvert__SerializeObjectInternal(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong unaff_x19;
  int unaff_w21;
  
  uVar7 = (uint)unaff_x19;
  uVar6 = uVar7 & 0xffff;
  if (uVar6 < 0x1c6) {
    if (uVar6 == 0x130) {
      unaff_x19 = 0x69;
      goto LAB_0546f928;
    }
    if (uVar6 == 0x1c5) goto LAB_0546f834;
  }
  else if ((uVar6 - 0x1c8 < 0x2b) && ((1L << ((ulong)(uVar6 - 0x1c8) & 0x3f) & 0x40000000009U) != 0)
          ) {
LAB_0546f834:
    unaff_x19 = (ulong)(uVar7 + 1);
    goto LAB_0546f928;
  }
  uVar2 = FUN_0546f4f0();
  puVar1 = PTR_DAT_06a1f0a8;
  if ((uVar2 & 1) == 0) {
    if ((uVar7 & 0xffff) == 0x49) {
      unaff_x19 = 0x131;
      goto LAB_0546f928;
    }
    if ((uVar7 & 0xffff) < 0x80) {
      if (0xffe5 < (uVar7 - 0x5b & 0xffff)) {
        uVar7 = uVar7 | 0x20;
      }
      unaff_x19 = (ulong)uVar7;
      goto LAB_0546f928;
    }
  }
  if ((uVar7 - 0x557 & 0xffff) < 0xfb69) {
    if (0xffd9 < (uVar7 - 0x10c6 & 0xffff)) {
      lVar3 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0546fa70;
      lVar5 = -0x10a0;
      goto LAB_0546f7f8;
    }
    if ((uVar7 - 0x1ffd & 0xffff) < 0xfe03) {
      if ((uVar7 - 0x2170 >> 4 & 0xfff) < 0xfff) {
        if ((uVar7 - 0x24d0 & 0xffff) < 0xffe6) {
          if (0xffd0 < (uVar7 - 0x2c2f & 0xffff)) {
            lVar3 = *(long *)PTR_DAT_06a1f0a8;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar3 = *(long *)puVar1;
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
            if (lVar3 == 0) goto LAB_0546fa70;
            iVar4 = -0x2c00;
            goto LAB_0546f910;
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
                goto LAB_0546f928;
              }
              lVar3 = *(long *)PTR_DAT_06a1f0a8;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar3 = *(long *)puVar1;
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
              if (lVar3 == 0) goto LAB_0546fa70;
              lVar5 = -0xa722;
            }
            else {
              lVar3 = *(long *)PTR_DAT_06a1f0a8;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar3 = *(long *)puVar1;
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
              if (lVar3 == 0) goto LAB_0546fa70;
              lVar5 = -0xa640;
            }
          }
          else {
            lVar3 = *(long *)PTR_DAT_06a1f0a8;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar3 = *(long *)puVar1;
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
            if (lVar3 == 0) goto LAB_0546fa70;
            lVar5 = -0x2c60;
          }
        }
        else {
          lVar3 = *(long *)PTR_DAT_06a1f0a8;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar3 = *(long *)puVar1;
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
          if (lVar3 == 0) goto LAB_0546fa70;
          lVar5 = -0x24b6;
        }
LAB_0546f7f8:
        uVar6 = *(uint *)(lVar3 + 0x18);
        lVar5 = lVar5 + (unaff_x19 & 0xffff);
        goto LAB_0546f800;
      }
      lVar3 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
      if (lVar3 == 0) goto LAB_0546fa70;
      iVar4 = -0x2160;
    }
    else {
      lVar3 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_0546fa70;
      iVar4 = -0x1e00;
    }
LAB_0546f910:
    if (*(uint *)(lVar3 + 0x18) <= (uint)(unaff_w21 + iVar4)) {
LAB_0546fa74:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar3 = lVar3 + (ulong)(uint)(unaff_w21 + iVar4) * 2;
  }
  else {
    lVar3 = *(long *)PTR_DAT_06a1f0a8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) {
LAB_0546fa70:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = *(uint *)(lVar3 + 0x18);
    lVar5 = (unaff_x19 & 0xffff) - 0xc0;
LAB_0546f800:
    if (uVar6 <= (uint)lVar5) goto LAB_0546fa74;
    lVar3 = lVar3 + lVar5 * 2;
  }
  unaff_x19 = (ulong)*(ushort *)(lVar3 + 0x20);
LAB_0546f928:
  return unaff_x19 & 0xffffffff;
}


