/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MetadataPropertyHandling
ENTRY_POINT: 04d093e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  long lVar3;
  uint unaff_w19;
  
  puVar1 = PTR_DAT_06330170;
  if ((unaff_w19 + in_w8 & 0xffff) < 0xff7d) {
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
      lVar3 = -0xa722;
    }
    else {
      lVar2 = *(long *)PTR_DAT_06330170;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
      if (lVar2 == 0) goto LAB_04d09784;
      lVar3 = -0xa640;
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
    lVar3 = -0x2c60;
  }
  lVar3 = lVar3 + (ulong)(ushort)unaff_w19;
  if ((uint)lVar3 < *(uint *)(lVar2 + 0x18)) {
    return (uint)*(ushort *)(lVar2 + lVar3 * 2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


