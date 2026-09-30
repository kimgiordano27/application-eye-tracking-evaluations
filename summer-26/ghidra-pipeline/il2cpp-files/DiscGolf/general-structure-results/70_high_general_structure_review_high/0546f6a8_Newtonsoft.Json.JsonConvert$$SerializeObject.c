/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0546f6a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  long lVar3;
  uint unaff_w19;
  int unaff_w21;
  
  puVar1 = PTR_DAT_06a1f0a8;
  if ((unaff_w19 + in_w8 & 0xffff) < 0xffe6) {
    if (0xffd0 < (unaff_w19 - 0x2c2f & 0xffff)) {
      lVar2 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
      if (lVar2 == 0) goto LAB_0546fa70;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w21 - 0x2c00U) goto LAB_0546fa74;
      lVar2 = lVar2 + (ulong)(unaff_w21 - 0x2c00U) * 2;
      goto LAB_0546f924;
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
        lVar2 = *(long *)PTR_DAT_06a1f0a8;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
        if (lVar2 == 0) {
LAB_0546fa70:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar3 = -0xa722;
      }
      else {
        lVar2 = *(long *)PTR_DAT_06a1f0a8;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
        if (lVar2 == 0) goto LAB_0546fa70;
        lVar3 = -0xa640;
      }
    }
    else {
      lVar2 = *(long *)PTR_DAT_06a1f0a8;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
      if (lVar2 == 0) goto LAB_0546fa70;
      lVar3 = -0x2c60;
    }
  }
  else {
    lVar2 = *(long *)PTR_DAT_06a1f0a8;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar2 == 0) goto LAB_0546fa70;
    lVar3 = -0x24b6;
  }
  lVar3 = lVar3 + (ulong)(ushort)unaff_w19;
  if (*(uint *)(lVar2 + 0x18) <= (uint)lVar3) {
LAB_0546fa74:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  lVar2 = lVar2 + lVar3 * 2;
LAB_0546f924:
  return (uint)*(ushort *)(lVar2 + 0x20);
}


