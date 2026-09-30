/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DefaultValueHandling
ENTRY_POINT: 0747bf60
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling
               (undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ushort uVar8;
  int iStack000000000000000c;
  
  puVar1 = PTR_DAT_08f65618;
  uVar6 = DAT_01a34540;
  uVar5 = DAT_01a341a8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar7 = 0;
    do {
      if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      iVar4 = FUN_07451744(param_2,iVar7,0);
      if (iVar4 == 0xb) {
LAB_0747c060:
        uVar2 = FUN_07363804(param_2,iVar7,0);
        if (0x7f < uVar2) {
Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling:
          iStack000000000000000c = param_3 + iVar7;
          uVar5 = thunk_FUN_0406db0c(*(undefined8 *)(puVar1 + 0x48),&stack0x0000000c);
          uVar6 = thunk_FUN_04097b88(PTR_DAT_08fa1230);
          uVar5 = FUN_0735fe18(uVar6,uVar5,0);
          thunk_FUN_04097b88(PTR_DAT_08f66298);
          uVar6 = thunk_FUN_0406deb8();
          FUN_0744a62c(uVar6,uVar5,0);
          uVar5 = thunk_FUN_04097b88(PTR_DAT_08fa1238);
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar6,uVar5);
        }
      }
      else {
        if (iVar4 == 0xe) {
          sVar3 = FUN_07363804(param_2,iVar7,0);
          if (sVar3 == 0) goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
          goto LAB_0747c060;
        }
        if (iVar4 - 0x10U < 2)
        goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
        uVar2 = FUN_07363804(param_2,iVar7,0);
        uVar8 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(uVar2 + (short)((ulong)uVar5 >> 0x30)) <
                                             (ushort)((ulong)uVar6 >> 0x30)),
                                    CONCAT24(-(ushort)((ushort)(uVar2 + (short)((ulong)uVar5 >> 0x20
                                                                               )) <
                                                      (ushort)((ulong)uVar6 >> 0x20)),
                                             CONCAT22(-(ushort)((ushort)(uVar2 + (short)((ulong)
                                                  uVar5 >> 0x10)) < (ushort)((ulong)uVar6 >> 0x10)),
                                                  -(ushort)((ushort)(uVar2 + (short)uVar5) <
                                                           (ushort)uVar6)))),2);
        if (((uVar8 & 1) != 0) || ((ushort)(uVar2 + 0xdf96) < 6))
        goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
        if (uVar2 < 0x200f) {
          if ((uVar2 - 0x340 < 2) || (uVar2 == 0x200e))
          goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
        }
        else if ((uVar2 - 0x200f < 0x1b) &&
                ((1 << (ulong)(uVar2 - 0x200f & 0x1f) & 0x6000001U) != 0))
        goto Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_2 + 0x10));
  }
  return;
}


