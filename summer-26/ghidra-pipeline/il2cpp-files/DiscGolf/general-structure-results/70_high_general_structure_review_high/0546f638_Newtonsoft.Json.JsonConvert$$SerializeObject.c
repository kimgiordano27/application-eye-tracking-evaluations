/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0546f638
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 in_w8;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xaba) = in_w8;
  if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_0546fa70;
  uVar3 = FUN_0536c9cc(*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x58),0);
  uVar8 = (uint)unaff_x19;
  uVar7 = uVar8 & 0xffff;
  if ((uVar3 & 1) == 0) {
    if (uVar7 < 499) {
      uVar1 = uVar8 & 0xffff;
      if (uVar1 < 0x1c6) {
        if (uVar1 == 0x130) {
          unaff_x19 = 0x69;
          goto LAB_0546f928;
        }
        if (uVar1 == 0x1c5) goto LAB_0546f834;
      }
      else if ((uVar1 - 0x1c8 < 0x2b) &&
              ((1L << ((ulong)(uVar1 - 0x1c8) & 0x3f) & 0x40000000009U) != 0)) {
LAB_0546f834:
        unaff_x19 = (ulong)(uVar8 + 1);
        goto LAB_0546f928;
      }
    }
    else if ((uVar8 & 0xffff) < 0x1e9f) {
      if (uVar7 - 0x3d2 < 3) {
        unaff_x19 = 0x3cb03cd03c5 >> ((ulong)((uVar7 - 0x3d2) * 0x10) & 0x3f);
        goto LAB_0546f928;
      }
      if ((uVar8 & 0xffff) == 0x3f4) {
        unaff_x19 = 0x3b8;
        goto LAB_0546f928;
      }
      if ((uVar8 & 0xffff) == 0x1e9e) {
        unaff_x19 = 0xdf;
        goto LAB_0546f928;
      }
    }
    else {
      uVar1 = uVar8 & 0xffff;
      if (uVar1 == 0x2126) {
        unaff_x19 = 0x3c9;
        goto LAB_0546f928;
      }
      if (uVar1 == 0x212a) {
        unaff_x19 = 0x6b;
        goto LAB_0546f928;
      }
      if (uVar1 == 0x212b) {
        unaff_x19 = 0xe5;
        goto LAB_0546f928;
      }
    }
    uVar3 = FUN_0546f4f0();
    if ((uVar3 & 1) == 0) {
      if ((uVar8 & 0xffff) == 0x49) {
        unaff_x19 = 0x131;
        goto LAB_0546f928;
      }
      if ((uVar8 & 0xffff) < 0x80) {
        if (0xffe5 < (uVar8 - 0x5b & 0xffff)) {
          uVar8 = uVar8 | 0x20;
        }
        unaff_x19 = (ulong)uVar8;
        goto LAB_0546f928;
      }
    }
  }
  puVar2 = PTR_DAT_06a1f0a8;
  if ((uVar8 - 0x557 & 0xffff) < 0xfb69) {
    if (0xffd9 < (uVar8 - 0x10c6 & 0xffff)) {
      lVar4 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_0546fa70;
      lVar6 = -0x10a0;
      goto LAB_0546f7f8;
    }
    if ((uVar8 - 0x1ffd & 0xffff) < 0xfe03) {
      if ((uVar8 - 0x2170 >> 4 & 0xfff) < 0xfff) {
        if ((uVar8 - 0x24d0 & 0xffff) < 0xffe6) {
          if (0xffd0 < (uVar8 - 0x2c2f & 0xffff)) {
            lVar4 = *(long *)PTR_DAT_06a1f0a8;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar4 = *(long *)puVar2;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
            if (lVar4 == 0) goto LAB_0546fa70;
            iVar5 = -0x2c00;
            goto LAB_0546f910;
          }
          if ((uVar8 - 0x2ce3 & 0xffff) < 0xff7d) {
            if ((uVar8 + 0x5969 & 0xffff) < 0xffa9) {
              if ((uVar8 + 0x5874 & 0xffff) < 0xff96) {
                if ((uVar8 + 0xc5 & 0xffff) < 0xffe6) {
                  if ((uVar8 & 0xffff) == 0x2132) {
                    unaff_x19 = 0x214e;
                  }
                  else if ((uVar8 & 0xffff) == 0x2183) {
                    unaff_x19 = 0x2184;
                  }
                }
                else {
                  unaff_x19 = (ulong)(uVar8 + 0x20);
                }
                goto LAB_0546f928;
              }
              lVar4 = *(long *)PTR_DAT_06a1f0a8;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar4 = *(long *)puVar2;
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x40);
              if (lVar4 == 0) goto LAB_0546fa70;
              lVar6 = -0xa722;
            }
            else {
              lVar4 = *(long *)PTR_DAT_06a1f0a8;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar4 = *(long *)puVar2;
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
              if (lVar4 == 0) goto LAB_0546fa70;
              lVar6 = -0xa640;
            }
          }
          else {
            lVar4 = *(long *)PTR_DAT_06a1f0a8;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar4 = *(long *)puVar2;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
            if (lVar4 == 0) goto LAB_0546fa70;
            lVar6 = -0x2c60;
          }
        }
        else {
          lVar4 = *(long *)PTR_DAT_06a1f0a8;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar4 = *(long *)puVar2;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
          if (lVar4 == 0) goto LAB_0546fa70;
          lVar6 = -0x24b6;
        }
LAB_0546f7f8:
        uVar7 = *(uint *)(lVar4 + 0x18);
        lVar6 = lVar6 + (unaff_x19 & 0xffff);
        goto LAB_0546f800;
      }
      lVar4 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (lVar4 == 0) goto LAB_0546fa70;
      iVar5 = -0x2160;
    }
    else {
      lVar4 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_0546fa70;
      iVar5 = -0x1e00;
    }
LAB_0546f910:
    if (*(uint *)(lVar4 + 0x18) <= uVar7 + iVar5) {
LAB_0546fa74:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar4 = lVar4 + (ulong)(uVar7 + iVar5) * 2;
  }
  else {
    lVar4 = *(long *)PTR_DAT_06a1f0a8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 == 0) {
LAB_0546fa70:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = *(uint *)(lVar4 + 0x18);
    lVar6 = (unaff_x19 & 0xffff) - 0xc0;
LAB_0546f800:
    if (uVar7 <= (uint)lVar6) goto LAB_0546fa74;
    lVar4 = lVar4 + lVar6 * 2;
  }
  unaff_x19 = (ulong)*(ushort *)(lVar4 + 0x20);
LAB_0546f928:
  return unaff_x19 & 0xffffffff;
}


