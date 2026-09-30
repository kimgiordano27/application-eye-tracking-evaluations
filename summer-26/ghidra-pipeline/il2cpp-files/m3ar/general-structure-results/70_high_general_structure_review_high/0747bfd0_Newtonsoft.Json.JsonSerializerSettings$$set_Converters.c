/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Converters
ENTRY_POINT: 0747bfd0
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Converters(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  short unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  ushort uVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  int iStack000000000000000c;
  
  do {
    if (param_1 == 0xb) {
LAB_0747c060:
      uVar1 = FUN_07363804();
      if (0x7f < uVar1) {
Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling:
        iStack000000000000000c = unaff_w19 + unaff_w21;
        uVar3 = thunk_FUN_0406db0c(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000000c);
        uVar4 = thunk_FUN_04097b88(PTR_DAT_08fa1230);
        uVar3 = FUN_0735fe18(uVar4,uVar3,0);
        thunk_FUN_04097b88(PTR_DAT_08f66298);
        uVar4 = thunk_FUN_0406deb8();
        FUN_0744a62c(uVar4,uVar3,0);
        uVar3 = thunk_FUN_04097b88(PTR_DAT_08fa1238);
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar4,uVar3);
      }
    }
    else {
      if (param_1 == 0xe) {
        sVar2 = FUN_07363804();
        if (sVar2 == 0) goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
        goto LAB_0747c060;
      }
      if (param_1 - 0x10U < 2)
      goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
      uVar1 = FUN_07363804();
      uVar5 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >> 0x30)) <
                                           (ushort)((ulong)unaff_d9 >> 0x30)),
                                  CONCAT24(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >>
                                                                             0x20)) <
                                                    (ushort)((ulong)unaff_d9 >> 0x20)),
                                           CONCAT22(-(ushort)((ushort)(uVar1 + (short)((ulong)
                                                  unaff_d8 >> 0x10)) <
                                                  (ushort)((ulong)unaff_d9 >> 0x10)),
                                                  -(ushort)((ushort)(uVar1 + (short)unaff_d8) <
                                                           (ushort)unaff_d9)))),2);
      if (((uVar5 & 1) != 0) || ((ushort)(uVar1 + unaff_w23) < 6))
      goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
      if (unaff_w24 < uVar1) {
        if ((unaff_w25 + (uint)uVar1 < 0x1b) &&
           ((unaff_w26 << (ulong)(unaff_w25 + (uint)uVar1 & 0x1f) & unaff_w27) != 0))
        goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
      }
      else if ((uVar1 - 0x340 < 2) || (uVar1 == unaff_w24))
      goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
    }
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) {
      return;
    }
    if (*(int *)(*(long *)(unaff_x22 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    param_1 = FUN_07451744();
  } while( true );
}


