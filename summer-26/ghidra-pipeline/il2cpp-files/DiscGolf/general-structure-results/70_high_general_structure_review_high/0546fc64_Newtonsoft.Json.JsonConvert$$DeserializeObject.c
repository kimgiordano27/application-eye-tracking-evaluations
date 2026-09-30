/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0546fc64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong unaff_x19;
  int unaff_w21;
  
  puVar1 = PTR_DAT_06a1f0b8;
  if (!in_CY || in_ZR) {
    lVar2 = *(long *)PTR_DAT_06a1f0b8;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 == 0) {
LAB_054700bc:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = *(uint *)(lVar2 + 0x18);
    lVar3 = (unaff_x19 & 0xffff) - 0xe0;
LAB_0546ff78:
    if (uVar4 <= (uint)lVar3) {
LAB_054700c0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar2 = lVar2 + lVar3 * 2;
  }
  else {
    uVar4 = (uint)unaff_x19;
    if (0xfe0c < (uVar4 - 0x1ff4 & 0xffff)) {
      lVar2 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_054700bc;
      lVar3 = -0x1e01;
LAB_0546ff70:
      uVar4 = *(uint *)(lVar2 + 0x18);
      lVar3 = lVar3 + (unaff_x19 & 0xffff);
      goto LAB_0546ff78;
    }
    if (0xffea < (uVar4 - 0x2185 & 0xffff)) {
      lVar2 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_054700bc;
      lVar3 = -0x2170;
      goto LAB_0546ff70;
    }
    if (0xffe5 < (uVar4 - 0x24ea & 0xffff)) {
      lVar2 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
      if (lVar2 == 0) goto LAB_054700bc;
      lVar3 = -0x24d0;
      goto LAB_0546ff70;
    }
    if (0xff4b < (uVar4 - 0x2ce4 & 0xffff)) {
      lVar2 = *(long *)PTR_DAT_06a1f0b8;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
      if (lVar2 == 0) goto LAB_054700bc;
      lVar3 = -0x2c30;
      goto LAB_0546ff70;
    }
    if ((uVar4 - 0x2d26 & 0xffff) < 0xffda) {
      if ((uVar4 + 0x5968 & 0xffff) < 0xffa9) {
        if ((uVar4 + 0x5873 & 0xffff) < 0xff96) {
          if ((uVar4 + 0xa5 & 0xffff) < 0xffe6) {
            uVar4 = uVar4 & 0xffff;
            if (uVar4 == 0x1d79) {
              unaff_x19 = 0xa77d;
            }
            else if (uVar4 == 0x1d7d) {
              unaff_x19 = 0x2c63;
            }
            else if (uVar4 == 0x214e) {
              unaff_x19 = 0x2132;
            }
          }
          else {
            unaff_x19 = (ulong)(uVar4 - 0x20);
          }
          goto LAB_0546ff88;
        }
        lVar2 = *(long *)PTR_DAT_06a1f0b8;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
        if (lVar2 == 0) goto LAB_054700bc;
        lVar3 = -0xa723;
      }
      else {
        lVar2 = *(long *)PTR_DAT_06a1f0b8;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
        if (lVar2 == 0) goto LAB_054700bc;
        lVar3 = -0xa641;
      }
      goto LAB_0546ff70;
    }
    lVar2 = *(long *)PTR_DAT_06a1f0b8;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar2 == 0) goto LAB_054700bc;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w21 - 0x2d00U) goto LAB_054700c0;
    lVar2 = lVar2 + (ulong)(unaff_w21 - 0x2d00U) * 2;
  }
  unaff_x19 = (ulong)*(ushort *)(lVar2 + 0x20);
LAB_0546ff88:
  return unaff_x19 & 0xffffffff;
}


