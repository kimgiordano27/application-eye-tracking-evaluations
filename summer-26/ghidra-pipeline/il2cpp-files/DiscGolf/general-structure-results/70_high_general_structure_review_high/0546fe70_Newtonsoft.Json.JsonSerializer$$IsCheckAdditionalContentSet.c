/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 0546fe70
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


ulong Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong unaff_x19;
  int unaff_w21;
  
  uVar5 = (uint)unaff_x19;
  if (unaff_w21 < 0x3d2) {
    if (unaff_w21 == 0x3d0) {
      unaff_x19 = 0x392;
      goto LAB_0546ff88;
    }
    if (unaff_w21 == 0x3d1) {
      unaff_x19 = 0x398;
      goto LAB_0546ff88;
    }
LAB_0546ffdc:
    if ((uVar5 & 0xffff) == 0x3f0) {
      unaff_x19 = 0x39a;
      goto LAB_0546ff88;
    }
  }
  else if (2 < unaff_w21 - 0x3d2U) {
    if (unaff_w21 == 0x3d5) {
      unaff_x19 = 0x3a6;
      goto LAB_0546ff88;
    }
    if (unaff_w21 == 0x3d6) {
      unaff_x19 = 0x3a0;
      goto LAB_0546ff88;
    }
    goto LAB_0546ffdc;
  }
  uVar2 = FUN_0546f4f0();
  puVar1 = PTR_DAT_06a1f0b8;
  if ((uVar2 & 1) == 0) {
    if ((uVar5 & 0xffff) == 0x69) {
      unaff_x19 = 0x130;
      goto LAB_0546ff88;
    }
    if ((uVar5 & 0xffff) < 0x80) {
      if (0xffe5 < (uVar5 - 0x7b & 0xffff)) {
        uVar5 = uVar5 & 0x5f;
      }
      unaff_x19 = (ulong)uVar5;
      goto LAB_0546ff88;
    }
  }
  if ((uVar5 - 0x587 & 0xffff) < 0xfb59) {
    if (0xfe0c < (uVar5 - 0x1ff4 & 0xffff)) {
      lVar3 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_054700bc;
      lVar4 = -0x1e01;
LAB_0546ff70:
      uVar5 = *(uint *)(lVar3 + 0x18);
      lVar4 = lVar4 + (unaff_x19 & 0xffff);
      goto LAB_0546ff78;
    }
    if (0xffea < (uVar5 - 0x2185 & 0xffff)) {
      lVar3 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_054700bc;
      lVar4 = -0x2170;
      goto LAB_0546ff70;
    }
    if (0xffe5 < (uVar5 - 0x24ea & 0xffff)) {
      lVar3 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
      if (lVar3 == 0) goto LAB_054700bc;
      lVar4 = -0x24d0;
      goto LAB_0546ff70;
    }
    if (0xff4b < (uVar5 - 0x2ce4 & 0xffff)) {
      lVar3 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
      if (lVar3 == 0) goto LAB_054700bc;
      lVar4 = -0x2c30;
      goto LAB_0546ff70;
    }
    if ((uVar5 - 0x2d26 & 0xffff) < 0xffda) {
      if ((uVar5 + 0x5968 & 0xffff) < 0xffa9) {
        if ((uVar5 + 0x5873 & 0xffff) < 0xff96) {
          if ((uVar5 + 0xa5 & 0xffff) < 0xffe6) {
            uVar5 = uVar5 & 0xffff;
            if (uVar5 == 0x1d79) {
              unaff_x19 = 0xa77d;
            }
            else if (uVar5 == 0x1d7d) {
              unaff_x19 = 0x2c63;
            }
            else if (uVar5 == 0x214e) {
              unaff_x19 = 0x2132;
            }
          }
          else {
            unaff_x19 = (ulong)(uVar5 - 0x20);
          }
          goto LAB_0546ff88;
        }
        lVar3 = *(long *)PTR_DAT_06a1f0b8;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar3 = *(long *)puVar1;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
        if (lVar3 == 0) goto LAB_054700bc;
        lVar4 = -0xa723;
      }
      else {
        lVar3 = *(long *)PTR_DAT_06a1f0b8;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar3 = *(long *)puVar1;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
        if (lVar3 == 0) goto LAB_054700bc;
        lVar4 = -0xa641;
      }
      goto LAB_0546ff70;
    }
    lVar3 = *(long *)PTR_DAT_06a1f0b8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 == 0) goto LAB_054700bc;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21 - 0x2d00U) goto LAB_054700c0;
    lVar3 = lVar3 + (ulong)(unaff_w21 - 0x2d00U) * 2;
  }
  else {
    lVar3 = *(long *)PTR_DAT_06a1f0b8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) {
LAB_054700bc:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = *(uint *)(lVar3 + 0x18);
    lVar4 = (unaff_x19 & 0xffff) - 0xe0;
LAB_0546ff78:
    if (uVar5 <= (uint)lVar4) {
LAB_054700c0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar3 = lVar3 + lVar4 * 2;
  }
  unaff_x19 = (ulong)*(ushort *)(lVar3 + 0x20);
LAB_0546ff88:
  return unaff_x19 & 0xffffffff;
}


